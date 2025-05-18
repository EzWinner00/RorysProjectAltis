#include "\life_server\script_macros.hpp"
/*
    File: fn_vehicleCreate.sqf
    Author: Bryan "Tonic" Boardwine
    Patched: Scarso Lewis

    Description:
    Creates a vehicle entry in phxcars and assigns it to the vehicle if successful.
*/

params [
    ["_uid", "", [""]],
    ["_side", sideUnknown, [west]],
    ["_vehicle", objNull, [objNull, ""]],
    ["_color", -1, [0]],
    ["_active", 1, [0]],
    ["_scrambler", false, [false]],
    ["_plate", -1, [""]],
    ["_unit", objNull, [objNull]]
];

[
    _uid, _side, _vehicle, _color, _active, _scrambler, _plate, _unit
] spawn {
    params [
        ["_uid", "", [""]],
        ["_side", sideUnknown, [west]],
        ["_vehicle", objNull, [objNull, ""]],
        ["_color", -1, [0]],
        ["_active", 1, [0]],
        ["_scrambler", false, [false]],
        ["_plate", -1, [""]],
        ["_unit", objNull, [objNull]]
    ];

    if (_uid isEqualTo "" || {_side isEqualTo sideUnknown}) exitWith {
        diag_log "[fn_vehicleCreate] ERROR: Missing or invalid UID/side.";
    };

    private _veh = _vehicle;
    private _upgrades = _veh getVariable ["vehicle_upgrades", [0,0,0,0,[]]];

    // Convert vehicle to string if object
    if !(_vehicle isEqualType "") then {
        _vehicle = typeOf _vehicle;
    };

    // Convert side
    _side = switch (_side) do {
        case west: {"cop"};
        case civilian: {"civ"};
        case independent: {"med"};
        case east: {"hav"};
        default {"error"};
    };
    if (_side isEqualTo "error") exitWith {
        diag_log format ["[fn_vehicleCreate] ERROR: Invalid side conversion for UID %1", _uid];
    };

    // Detect type
    private _type = switch (true) do {
        case (_vehicle isKindOf "Car"): {"Car"};
        case (_vehicle isKindOf "Air"): {"Air"};
        case (_vehicle isKindOf "Ship"): {"Ship"};
        default {"Unknown"};
    };

    // Generate plate if needed
    if (_plate isEqualTo -1) then {
        _plate = str(round(random 1000000));
    };

    // Escape values
    private _inventoryEsc = [[[], 0]] call DB_fnc_mresArray;
    private _gearEsc = [[]] call DB_fnc_mresArray;
    private _damageEsc = [[]] call DB_fnc_mresArray;
    private _upgradesEsc = [_upgrades] call DB_fnc_mresArray;

    // Insert vehicle into database
    private _insertQuery = format [
        "INSERT INTO phxcars (side, classname, type, pid, alive, active, inventory, color, plate, gear, damage, upgrades) VALUES ('%1', '%2', '%3', '%4', '1', '%5', '%6', '%7', '%8', '%9', '%10', '%11')",
        _side, _vehicle, _type, _uid, _active, _inventoryEsc, _color, _plate, _gearEsc, _damageEsc, _upgradesEsc
    ];
    [_insertQuery, 1] call DB_fnc_asyncCall;

    sleep 0.3;

    // Retrieve inserted vehicle ID
    private _lookupQuery = format [
        "SELECT id FROM phxcars WHERE pid='%1' AND classname='%2' AND plate='%3' ORDER BY insert_time DESC LIMIT 1",
        _uid, _vehicle, _plate
    ];
    private _lookupResult = [_lookupQuery, 2] call DB_fnc_asyncCall;

    private _insertID = if (_lookupResult isEqualType [] && {count _lookupResult > 0 && (_lookupResult select 0) isEqualType 0}) then {
        _lookupResult select 0
    } else {
        diag_log format ["[fn_vehicleCreate] ERROR: Could not retrieve insert ID for vehicle %1 (Plate: %2, UID: %3)", _vehicle, _plate, _uid];
        -1
    };

    // Final assignment to vehicle object
    if (_insertID > 0 && {_veh isKindOf "AllVehicles"}) then {
        _veh setVariable ["Scrambler", _scrambler, true];
        _veh setVariable ["dbInfo", [_uid, _plate, _insertID], true];
        _veh setVariable ["life_garage_store", true, true];

        if (!isNull _unit) then {
            [_veh] remoteExecCall ["life_fnc_addVehicle2Chain", _unit];
        };

        diag_log format ["[fn_vehicleCreate] Inserted vehicle ID: %1 | Type: %2 | Owner UID: %3", _insertID, _vehicle, _uid];
    };
};
