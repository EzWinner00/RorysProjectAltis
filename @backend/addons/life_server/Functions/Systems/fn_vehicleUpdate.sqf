#include "\life_server\script_macros.hpp"
/*
    File: fn_vehicleUpdate.sqf
    Author: NiiRoZz
    Patched: EzWinner

    Description:
    Tells the database to update this vehicle's data (inventory, trunk, color, upgrades).
*/

params [
    ["_vehicle", objNull, [objNull]],
    ["_mode", 1, [0]]
];

if (isNull _vehicle) exitWith {};

private _dbInfo = _vehicle getVariable ["dbInfo", []];
if (_dbInfo isEqualTo [] || {count _dbInfo < 3}) exitWith {};
_dbInfo params ["_uid", "_plate", "_id"];

private _query = "";

switch (_mode) do {
    // Save gear
    case 1: {
        private _vehItems = getItemCargo _vehicle;
        private _vehMags = getMagazineCargo _vehicle;
        private _vehWeapons = getWeaponCargo _vehicle;
        private _vehBackpacks = getBackpackCargo _vehicle;
        private _cargo = [_vehItems, _vehMags, _vehWeapons, _vehBackpacks];

        if ((count (_vehItems select 0) + count (_vehMags select 0) + count (_vehWeapons select 0) + count (_vehBackpacks select 0)) isEqualTo 0) then {
            _cargo = [];
        };

        _cargo = [_cargo] call DB_fnc_mresArray;
        _query = format [
            "UPDATE phxcars SET gear='%2' WHERE id='%1'",
            [_id] call DB_fnc_numberSafe, _cargo
        ];
    };

    // Save trunk
    case 2: {
        private _trunkData = _vehicle getVariable ["Trunk", [[], 0]];
        private _itemList = _trunkData select 0;
        private _items = [];
        private _totalWeight = 0;

        {
            if (getNumber(missionConfigFile >> "CfgItems" >> (_x select 0) >> "save") isEqualTo 1) then {
                _items pushBack [_x select 0, _x select 1];
                _totalWeight = _totalWeight + ((ITEM_WEIGHT(_x select 0)) * (_x select 1));
            };
        } forEach (_itemList select { isClass (missionConfigFile >> "CfgItems" >> (_x select 0)) });

        _trunkData = [_items, _totalWeight];
        _trunkData = [_trunkData] call DB_fnc_mresArray;

        _query = format [
            "UPDATE phxcars SET inventory='%2' WHERE id='%1'",
            [_id] call DB_fnc_numberSafe, _trunkData
        ];
    };

    // Save paint (color or RGB)
    case 3: {
        private _color = param [2, -1, [0, []]];
        if (_color isEqualTo -1) exitWith {};

        if (_color isEqualType []) then {
            _query = format [
                "UPDATE phxcars SET RGB='%3' WHERE pid='%1' AND id='%2'",
                _uid, [_id] call DB_fnc_numberSafe, [_color] call DB_fnc_mresArray
            ];
        } else {
            _query = format [
                "UPDATE phxcars SET color='%3', RGB='""[]""' WHERE pid='%1' AND id='%2'",
                _uid, [_id] call DB_fnc_numberSafe, _color
            ];
        };
    };

    // Save upgrades
    case 4: {
        private _upgrades = _vehicle getVariable ["vehicle_upgrades", [0,0,0,0,[]]];
        _query = format [
            "UPDATE phxcars SET upgrades='%3' WHERE pid='%1' AND id='%2'",
            _uid, [_id] call DB_fnc_numberSafe, [_upgrades] call DB_fnc_mresArray
        ];
    };
};

if (_query != "") then {
    [_query, 1] call DB_fnc_asyncCall;
};
