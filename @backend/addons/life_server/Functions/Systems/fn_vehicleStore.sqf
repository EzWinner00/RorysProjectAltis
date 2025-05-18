#include "\life_server\script_macros.hpp"
/*
    File: fn_vehicleStore.sqf
    Author: Bryan "Tonic" Boardwine
    Patched

    Description:
    Stores the vehicle in the 'Garage'
*/

params [
    ["_vehicle", objNull, [objNull]],
    ["_impound", false, [true]],
    ["_unit", objNull, [objNull]],
    ["_storetext", "", [""]]
];

if (isNull _vehicle || isNull _unit) exitWith {
    {
        missionNamespace setVariable [_x, false];
        [_x] remoteExecCall ["publicVariableClient", remoteExecutedOwner];
    } forEach ["life_impound_inuse", "life_garage_store"];
};

if (!_impound && {_vehicle getVariable ["rented", false]}) exitWith {
    deleteVehicle _vehicle;
    [] remoteExecCall ["PHX_fnc_removeRental", remoteExecutedOwner];
    ["Rental vehicle has been returned.", "green"] remoteExecCall ["PHX_fnc_notify", remoteExecutedOwner];

    missionNamespace setVariable ["life_garage_store", false];
    ["life_garage_store"] remoteExecCall ["publicVariableClient", remoteExecutedOwner];
};

private _vInfo = _vehicle getVariable ["dbInfo", []];

if (_vInfo isEqualTo [] || {count _vInfo < 3}) exitWith {
    if (_impound) then {
        missionNamespace setVariable ["life_impound_inuse", false];
        ["life_impound_inuse"] remoteExecCall ["publicVariableClient", remoteExecutedOwner];
        deleteVehicle _vehicle;
    };

    ["That vehicle is a rental and cannot be stored in your garage.", "red"] remoteExecCall ["PHX_fnc_notify", remoteExecutedOwner];

    missionNamespace setVariable ["life_garage_store", false];
    ["life_garage_store"] remoteExecCall ["publicVariableClient", remoteExecutedOwner];
};

_vInfo params ["_uid", "_plate", "_id"];

// Validate owner
if (!_impound && {_uid != getPlayerUID _unit}) exitWith {
    ["That vehicle doesn't belong to you and cannot be stored.", "red"] remoteExecCall ["PHX_fnc_notify", remoteExecutedOwner];
    missionNamespace setVariable ["life_garage_store", false];
    ["life_garage_store"] remoteExecCall ["publicVariableClient", remoteExecutedOwner];
};

// Check garage storage flag
if (!_impound && {!(_vehicle getVariable ["life_garage_store", false])}) exitWith {
    ["This vehicle cannot be stored here.", "red"] remoteExecCall ["PHX_fnc_notify", remoteExecutedOwner];
    missionNamespace setVariable ["life_garage_store", false];
    ["life_garage_store"] remoteExecCall ["publicVariableClient", remoteExecutedOwner];
};

// --- Save data collection ---

// Damage
private _damage = if (LIFE_SETTINGS(getNumber, "save_vehicle_damage") isEqualTo 1) then {
    getAllHitPointsDamage _vehicle select 2
} else {
    []
};
_damage = [_damage] call DB_fnc_mresArray;

// Fuel / Ammo
private _fuel = if (LIFE_SETTINGS(getNumber,"save_vehicle_fuel") isEqualTo 1) then { fuel _vehicle } else { 1 };
private _ammo = if (typeOf _vehicle in getArray(missionConfigFile >> "CfgSettings" >> "rearmableVehicles")) then {
    [_vehicle] call PHX_fnc_getVehicleAmmo
} else { 0 };

// Trunk items
private _trunk = [[],0];
if (LIFE_SETTINGS(getNumber,"save_vehicle_virtualItems") isEqualTo 1) then {
    private _items = [];
    private _weight = 0;
    private _totalweight = 0;

    {
        if ((getNumber(missionConfigFile >> "CfgItems" >> (_x select 0) >> "save")) isEqualTo 1) then {
            _items pushBack [_x select 0, _x select 1];
            _weight = (ITEM_WEIGHT(_x select 0)) * (_x select 1);
            _totalweight = _totalweight + _weight;
        };
    } forEach ((_vehicle getVariable ["Trunk", [[],0]]) select 0);

    _trunk = [_items, _totalweight];
};
_trunk = [_trunk] call DB_fnc_mresArray;

// Physical cargo
private _cargo = [];
if (LIFE_SETTINGS(getNumber, "save_vehicle_inventory") isEqualTo 1) then {
    private _vehItems = getItemCargo _vehicle;
    private _vehMags = getMagazineCargo _vehicle;
    private _vehWeapons = getWeaponCargo _vehicle;
    private _vehBackpacks = getBackpackCargo _vehicle;

    private _items = [];
    if ((_vehItems isEqualType []) && { count _vehItems > 1 }) then {
        {
            private _classname = _vehItems select 0 select _forEachIndex;
            if (_classname isEqualType "" && { _classname != "" && _x > 0 }) then {
                _items pushBack [_classname, _x];
            };
        } forEach (_vehItems select 1);
    };

    private _mags = [];
    if ((_vehMags isEqualType []) && { count _vehMags > 1 }) then {
        {
            private _classname = _vehMags select 0 select _forEachIndex;
            if (_classname isEqualType "" && { _classname != "" && _x > 0 }) then {
                _mags pushBack [_classname, _x];
            };
        } forEach (_vehMags select 1);
    };

    private _weapons = [];
    if ((_vehWeapons isEqualType []) && { count _vehWeapons > 1 }) then {
        {
            private _classname = _vehWeapons select 0 select _forEachIndex;
            if (_classname isEqualType "" && { _classname != "" && _x > 0 }) then {
                _weapons pushBack [_classname, _x];
            };
        } forEach (_vehWeapons select 1);
    };

    private _backpacks = [];
    if ((_vehBackpacks isEqualType []) && { count _vehBackpacks > 1 }) then {
        {
            private _classname = _vehBackpacks select 0 select _forEachIndex;
            if (_classname isEqualType "" && { _classname != "" && _x > 0 }) then {
                _backpacks pushBack [_classname, _x];
            };
        } forEach (_vehBackpacks select 1);
    };

    _cargo = [_items, _mags, _weapons, _backpacks];
};

_cargo = [_cargo] call DB_fnc_mresArray;

// Texture / RGB Saving
private _rgb = "[]";

if (!isNil { _vehicle getVariable "RGB" }) then {
    private _val = _vehicle getVariable ["RGB", []];

    if ((count _val) >= 3) then {
        if ((count _val) < 4) then { _val pushBack 1 }; // Ensure alpha
        _rgb = [_val] call DB_fnc_mresArray;
    };
};

// Vehicle Upgrades
private _upgrades = "[]";
if (!isNil { _vehicle getVariable "vehicle_upgrades" }) then {
    _upgrades = [(_vehicle getVariable ["vehicle_upgrades", [0,0,0,0,[]]])] call DB_fnc_mresArray;
};

// Texture index from vehicle var
private _textureIndex = -1;
if (!isNil { _vehicle getVariable "Life_VEH_color" }) then {
    _textureIndex = _vehicle getVariable ["Life_VEH_color", -1];
};

// Build Query
private _query = format [
    "UPDATE phxcars SET active='0', inventory='%2', gear='%3', fuel='%4', damage='%5', ammo='%6', RGB='%7', upgrades='%8', color='%9' WHERE id='%1'",
    [_id] call DB_fnc_numberSafe,
    _trunk, _cargo, _fuel, _damage, _ammo, _rgb, _upgrades, _textureIndex
];

[_query, 1] call DB_fnc_asyncCall;

// Delete vehicle
if (!isNull _vehicle) then {
    deleteVehicle _vehicle;
};

// Finalize
if (_impound) then {
    missionNamespace setVariable ["life_impound_inuse", false];
    ["life_impound_inuse"] remoteExecCall ["publicVariableClient", remoteExecutedOwner];
} else {
    missionNamespace setVariable ["life_garage_store", false];
    ["life_garage_store"] remoteExecCall ["publicVariableClient", remoteExecutedOwner];
    ["Your vehicle has been stored", "green"] remoteExec ["PHX_fnc_notify", remoteExecutedOwner];
};
