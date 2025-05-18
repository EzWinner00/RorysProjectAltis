/*
    File: fn_chopShopSell.sqf
    Author: Bryan "Tonic" Boardwine
    Patched 

    Description:
    Sells a vehicle, removing it from the world and database if persistent.
*/

#include "\life_server\script_macros.hpp"

params [
    ["_vehicle", objNull, [objNull]],
    ["_price", 500, [0]]
];

if (isNull _vehicle) exitWith {
    life_action_inUse = false;
    remoteExecutedOwner publicVariableClient "life_action_inUse";
};

private _displayName = FETCH_CONFIG2(getText, "CfgVehicles", typeOf _vehicle, "displayName");

// If the vehicle is persistent, mark it as dead
private _dbInfo = _vehicle getVariable ["dbInfo", []];
if !(_dbInfo isEqualTo [] || {count _dbInfo < 3}) then {
    _dbInfo params ["_uid", "_plate", "_id"];
    private _query = format [
        "UPDATE phxcars SET alive='0', dead='1' WHERE id='%1'",
        [_id] call DB_fnc_numberSafe
    ];
    [_query, 1] call DB_fnc_asyncCall;
};

// Delete vehicle and notify
deleteVehicle _vehicle;

life_action_inUse = false;
remoteExecutedOwner publicVariableClient "life_action_inUse";

[2, "You have sold a %1 for £%2.", true, [_displayName, [_price] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast", remoteExecutedOwner];
[50, "Chopped a vehicle"] remoteExecCall ["PHX_fnc_handleXP", remoteExecutedOwner];
