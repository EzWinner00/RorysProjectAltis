#include "\life_server\script_macros.hpp"
/*
    File: fn_spawnVehicle.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Spawns a vehicle from the garage with full data restoration, ensuring correct marker position handling and DB compliance.
*/

params [
    ["_vid", -1, [0]],
    ["_pid", "", [""]],
    ["_sp", "", ["", []]],
    ["_unit", objNull, [objNull]],
    ["_price", 0, [0]],
    ["_spawntext", "", [""]],
    ["_perks", [false, false], []],
    ["_garageSpawn", false, [false]]
];
_perks params [["_scrambler", false], ["_refueler", false], ["_repaired", false]];

private _side = side _unit;
private _name = name _unit;

if (_vid isEqualTo -1 || {_pid isEqualTo ""}) exitWith {};
if (_vid in serv_sv_use) exitWith {};
serv_sv_use pushBack _vid;
private _servIndex = serv_sv_use find _vid;

private _query = format [
    "SELECT id, side, classname, type, pid, alive, active, plate, color, inventory, gear, fuel, damage, blacklist, RGB, ammo, upgrades FROM phxcars WHERE id='%1' AND pid='%2'",
    _vid, _pid
];
private _tickTime = diag_tickTime;
private _vInfo = [_query, 2] call DB_fnc_asyncCall;

if (EXTDB_SETTING(getNumber,"DebugMode") isEqualTo 1) then {
    diag_log "------------- Client Query Request -------------";
    diag_log format ["QUERY: %1", _query];
    diag_log format ["Time to complete: %1", diag_tickTime - _tickTime];
    diag_log format ["Result: %1", _vInfo];
    diag_log "------------------------------------------------";
};

if (_vInfo isEqualType "") exitWith {};
if (isNil "_vInfo" || {_vInfo isEqualTo []}) exitWith { serv_sv_use deleteAt _servIndex; };

if ((_vInfo select 5) isEqualTo 0) exitWith {
    serv_sv_use deleteAt _servIndex;
    [format["%1 was classified as a destroyed vehicle and was sent to the scrap yard.", _vInfo select 2], "red"] remoteExecCall ["PHX_fnc_notify", _unit];
};
if ((_vInfo select 6) isEqualTo 1) exitWith {
    serv_sv_use deleteAt _servIndex;
    [format["%1 is already active somewhere in the world and cannot be spawned.", _vInfo select 2], "red"] remoteExecCall ["PHX_fnc_notify", _unit];
};

private _found = false;
private _dir = 0;
private _pos = [];

if (!_garageSpawn) then {
    {
        _pos = getMarkerPos _x;
        _dir = markerDir _x;
        if ((nearestObjects [_pos, ["Car","Air","Ship"], 10]) isEqualTo []) exitWith { _sp = _pos; _found = true };
    } forEach _sp;
} else {
    _pos = _sp select 0;
    _dir = _sp select 1;
    if ((nearestObjects [_pos, ["Car","Air","Ship"], 10]) isEqualTo []) exitWith { _sp = _pos; _found = true };
};

if (!_found) exitWith {
    serv_sv_use deleteAt _servIndex;
    [_price,_unit] remoteExecCall ["life_fnc_garageRefund", _unit];
    ["There is already a vehicle on the spawn point. You have been refunded.", "red"] remoteExecCall ["PHX_fnc_notify", _unit];
};

private _updateQuery = format ["UPDATE phxcars SET active='1', damage='""[]""' WHERE id='%1'", [_vid] call DB_fnc_numberSafe];
[_updateQuery,1] call DB_fnc_asyncCall;

private _trunk = [(_vInfo select 9)] call DB_fnc_mresToArray;
private _gear = [(_vInfo select 10)] call DB_fnc_mresToArray;
private _fuel = _vInfo select 11;
private _damage = [call compile (_vInfo select 12)] call DB_fnc_mresToArray;
private _blacklist = (_vInfo select 13) isEqualTo 1;
private _rgb = [(_vInfo select 14)] call DB_fnc_mresToArray;
private _ammo = _vInfo select 15;
private _rawUpgrades = _vInfo select 16;
private _upgrades = if (_rawUpgrades isEqualType "") then {
    _rawUpgrades call DB_fnc_mresToArray
} else {
    _rawUpgrades
};

private _vehicle = createVehicle [(_vInfo select 2), _pos, [], 0, "NONE"];
_vehicle allowDamage false;
_vehicle setDir _dir;
_vehicle setPos _pos;
_vehicle setVectorUp (surfaceNormal _pos);
_vehicle allowDamage true;
_vehicle lock 2;

_vehicle setVariable ["life_garage_store", true, true];

[_vehicle] remoteExecCall ["life_fnc_addVehicle2Chain", _unit];
[_pid, _side, _vehicle, 1] call TON_fnc_keyManagement;

_vehicle setVariable ["vehicle_info_owners", [[_pid,_name]], true];
_vehicle setVariable ["dbInfo", [(_vInfo select 4), (_vInfo select 7), (_vInfo select 0)], true];
//rented if not a civilian-owned personal vehicle (police/NHS/HAV)
if (!(_vInfo select 1 isEqualTo "civ")) then {
    _vehicle setVariable ["rented", true, true];
    [] remoteExecCall ["PHX_fnc_addRental", _unit];

    private _prefix = switch (_vInfo select 1) do {
        case "cop": { "APC -" };
        case "med": { "NHS -" };
        case "hav": { "HAV -" };
        default { "ALTIS -" };
    };
    private _randDigits = str (100 + floor (random 900));
    private _rentalPlate = format ["%1 %2", _prefix, _randDigits];
    _vehicle setPlateNumber _rentalPlate;
} else {
    _vehicle setPlateNumber (_vInfo select 7);
};

_vehicle setPlateNumber (_vInfo select 7);
_vehicle setVariable ["Scrambler", _scrambler, true];

if (_rgb isEqualType "") then { _rgb = parseSimpleArray _rgb };
[_vehicle, (_vInfo select 8), _rgb] remoteExecCall ["life_fnc_colorVehicle", _unit];
_vehicle setVariable ["Life_VEH_color", (_vInfo select 8), true];

diag_log format [
    "[fn_spawnVehicle] Applied texture index: %1 | RGB: %2 | Vehicle: %3 | Plate: %4",
    (_vInfo select 8),
    _rgb,
    typeOf _vehicle,
    (_vInfo select 7)
];

private _class = typeOf _vehicle;
private _textures = M_CONFIG(getArray, "LifeCfgVehicles", _class, "textures");

if (_textures isEqualType [] && (_vInfo select 8) < count _textures) then {
    private _textureData = _textures select (_vInfo select 8);
    diag_log format [
        "[fn_spawnVehicle] Texture set name: %1 | Side: %2 | Paths: %3",
        _textureData select 0,
        _textureData select 1,
        _textureData select 2
    ];
};




if (!isNil "_upgrades") then {
    _vehicle setVariable ["vehicle_upgrades", _upgrades, true];
    private _trank = if (_upgrades isEqualType [] && { count _upgrades > 1 }) then { _upgrades select 1 } else { 0 };
    switch _trank do {
        case 30: { [_vehicle, "trunk", 5] call PHX_fnc_handleVehicleUpgrade };
        case 60: { [_vehicle, "trunk", 10] call PHX_fnc_handleVehicleUpgrade };
        case 90: { [_vehicle, "trunk", 15] call PHX_fnc_handleVehicleUpgrade };
    };
} else {
    _vehicle setVariable ["vehicle_upgrades", [0,0,0,0,[]], true];
    [_vehicle, 4] remoteExecCall ["TON_fnc_vehicleUpdate", RSERV];
};

if (LIFE_SETTINGS(getNumber, "save_vehicle_virtualItems") isEqualTo 1) then {
    _vehicle setVariable ["Trunk", _trunk, true];
    if (_blacklist) then {
        private _refPoint = if (_sp isEqualType "") then { getMarkerPos _sp } else { _sp };
        private _distance = 100000;
        private _location = "";

        { private _loc = nearestLocation [_refPoint, _x];
          private _d = _refPoint distance _loc;
          if (_d < _distance) then {
              _location = text _loc;
              _distance = _d;
          };
        } count ["NameCityCapital", "NameCity", "NameVillage"];

        [1, "%2 got back a blacklisted vehicle near %1.", true, [_location, _name]] remoteExecCall ["life_fnc_broadcast", west];
        ["UPDATE phxcars SET blacklist='0' WHERE id='%1'", [_vid] call DB_fnc_numberSafe] call DB_fnc_asyncCall;
    };
} else {
    _vehicle setVariable ["Trunk", [[],0], true];
};

if (LIFE_SETTINGS(getNumber, "save_vehicle_fuel") isEqualTo 1) then {
    _vehicle setFuel _fuel;
} else {
    _vehicle setFuel 1;
};

if (typeOf _vehicle in (getArray (missionConfigFile >> "CfgSettings" >> "rearmableVehicles"))) then {
    _vehicle setVehicleAmmo _ammo;
};
if (_refueler) then { _vehicle setFuel 1 };

if (LIFE_SETTINGS(getNumber, "save_vehicle_inventory") isEqualTo 1 && count _gear > 0) then {
    {
        if (_x isEqualType [] && {count _x isEqualTo 2}) then {
            _vehicle addItemCargoGlobal [_x select 0, _x select 1];
        };
    } forEach (_gear select 0);

    {
        if (_x isEqualType [] && {count _x isEqualTo 2}) then {
            _vehicle addMagazineCargoGlobal [_x select 0, _x select 1];
        };
    } forEach (_gear select 1);

    {
        if (_x isEqualType [] && {count _x isEqualTo 2}) then {
            _vehicle addWeaponCargoGlobal [_x select 0, _x select 1];
        };
    } forEach (_gear select 2);

    {
        if (_x isEqualType [] && {count _x isEqualTo 2}) then {
            _vehicle addBackpackCargoGlobal [_x select 0, _x select 1];
        };
    } forEach (_gear select 3);
};


if (LIFE_SETTINGS(getNumber, "save_vehicle_damage") isEqualTo 1 && !_repaired && count _damage > 0) then {
    private _parts = getAllHitPointsDamage _vehicle select 0;
    for "_i" from 0 to (count _damage - 1) do {
        _vehicle setHitPointDamage [_parts select _i, _damage select _i];
    };
};

// Animations
if ((_vInfo select 1) isEqualTo "cop" && (_vInfo select 2) in ["C_Offroad_01_F","B_MRAP_01_F","C_SUV_01_F","C_Hatchback_01_sport_F","B_Heli_Light_01_F","B_Heli_Transport_01_F"]) then {
    [_vehicle, "cop_offroad", true] remoteExecCall ["life_fnc_vehicleAnimate", _unit];
};
if ((_vInfo select 1) isEqualTo "med" && (_vInfo select 2) isEqualTo "C_Offroad_01_F") then {
    [_vehicle, "med_offroad", true] remoteExecCall ["life_fnc_vehicleAnimate", _unit];
};

// Toolkit + role assignment
switch (_side) do {
    case west: { _vehicle addItemCargoGlobal ["Toolkit", 1]; _vehicle setVariable ["isAPC", true, true]; };
    case civilian: {
        _vehicle addItemCargoGlobal ["Toolkit", 1];
        private _vehUpgrades = _vehicle getVariable ["vehicle_upgrades", [0,0,0,0,[]]];
        if (_vehUpgrades isEqualType [] && { count _vehUpgrades > 4 && {"Tracker" in (_vehUpgrades select 4)} }) then {
            [_vehicle] remoteExec ["PHX_fnc_tracker", _unit];
        };
    };
    case independent: { _vehicle addItemCargoGlobal ["Toolkit", 1]; _vehicle setVariable ["isNHS", true, true]; };
    case east: { _vehicle addItemCargoGlobal ["Toolkit", 1]; _vehicle setVariable ["isHAV", true, true]; };
};

// --- Ensure vehicle is drivable and fuel is at least 20% ---
private _minFuel = 0.2;
if (fuel _vehicle < _minFuel) then {
    _vehicle setFuel _minFuel;
};

private _hitPoints = getAllHitPointsDamage _vehicle select 0;
private _damages = getAllHitPointsDamage _vehicle select 2;


private _threshold = 0.7;
private _isImmobilized = ({ _x > _threshold } count _damages) > 0;



// --- Ensure vehicle is drivable and fuel is at least 20% ---
private _minFuel = 0.2;
if (fuel _vehicle < _minFuel) then {
    _vehicle setFuel _minFuel;
};
private _repairPricePerHit = 1333;
private _hitPoints = getAllHitPointsDamage _vehicle select 0;
private _damages = getAllHitPointsDamage _vehicle select 2;
private _damagedHitpoints = [];

for "_i" from 0 to (count _damages - 1) do {
    if (_damages select _i > 0) then {
        _damagedHitpoints pushBack _i;
    };
};

if ((count _damagedHitpoints) > 0) then {
    {
        _vehicle setHitPointDamage [_hitPoints select _x, 0];
    } forEach _damagedHitpoints;

    diag_log format [
        "[fn_spawnVehicle] Vehicle %1 had %2 damaged hitpoints. Fully repaired. Charging player.",
        typeOf _vehicle,
        count _damagedHitpoints
    ];

    private _repairCost = count _damagedHitpoints * _repairPricePerHit;
    private _vName = getText(configFile >> "CfgVehicles" >> typeOf _vehicle >> "displayName");

    private _paid = [
        _repairCost,
        1, // subtract
        1, // bank
        format["Auto-repair of %1", _vName]
    ] call PHX_fnc_handleMoney;

    private _msg = if (_paid) then {
        format["You have been charged $%1 for fully repairing your %2.", [_repairCost] call life_fnc_numberText, _vName];
    } else {
        format["Your %1 was damaged but you lacked the $%1 required for full repair.", _vName, [_repairCost] call life_fnc_numberText];
    };

    [_msg, "red", "Garage Repair"] remoteExecCall ["PHX_fnc_notify", _unit];
};




[_spawntext, "green"] remoteExec ["PHX_fnc_notify", _unit];
serv_sv_use deleteAt _servIndex;
