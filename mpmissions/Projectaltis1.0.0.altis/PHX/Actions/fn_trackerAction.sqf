/*
    File: fn_trackerAction.sqf
    Author: Zyn
    Description: Allows players to track their vehicle
*/
#include "..\..\script_macros.hpp"
_this params [
    ["_vehicle", objNull, [objNull]],
	["_add", true, [false]]
];

private _modeVars = [
	["attach", "Attaching", "gpstracker"],
	["remove", "Removing", "gpstracker_remover"]
] select (_add);

if (life_action_inUse || {isNull _curTarget} || {player distance _vehicle > 5} || {!(_curTarget isKindOf "LandVehicle")}) exitWith {};
if (call PHX_fnc_isSafeZone) exitWith {[format["You can't %1 a GPS Tracker in a greenzone!", _modeVars select 0], "red"] call PHX_fnc_notify};

life_action_inUse = true;

if !(
	[
		format["%2 tracker to %1", (FETCH_CONFIG2(getText,"CfgVehicles",(typeOf _vehicle),"displayName")), _modeVars select 1],
		120,
		[
			"player distance (_this select 0) < 5", 
			[_vehicle], true, 
			"[""You must remain within 5m of the vehicle at all times"",""red""] call PHX_fnc_notify;"
		]
	] call PHX(handleProgress)
) exitWith { life_action_inUse = false };

[false,(_modeVars select 2),1] call life_fnc_handleInv;
life_action_inUse = false;

if (_add) then {
	["GPS Tracker added to the vehicle, it will update every 30 seconds...", "green"] call PHX_fnc_notify;
	[_vehicle] spawn PHX_fnc_tracker;
} else {
	["You have removed the GPS Tracker from this vehicle...", "green"] call PHX_fnc_notify;
	_vehicle setVariable ["removeTracker", true, true];
};