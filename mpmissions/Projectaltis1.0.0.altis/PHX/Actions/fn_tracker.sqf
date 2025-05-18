/*
    File: fn_tracker.sqf
    Author: Zyn
    Description: Allows players to track their vehicle
*/
#include "..\..\script_macros.hpp"
_this params [
    ["_vehicle", objNull, [objNull]]
];

if !(isNil { _vehicle getVariable "removeTracker" }) then {
	_vehicle setVariable ["removeTracker", nil, true];
};

_markerName = format ["%1_gpstracker", _vehicle];
_marker = createMarkerLocal [_markerName, visiblePosition _vehicle];
_marker setMarkerColorLocal "ColorGrey";
_marker setMarkerTypeLocal "mil_triangle";
_marker setMarkerTextLocal (FETCH_CONFIG2(getText,"CfgVehicles",(typeOf _vehicle),"displayName"));
_marker setMarkerDirLocal (getDir _vehicle);
_marker setMarkerPosLocal getPos _vehicle;

PHX_Trackers pushBack _markerName;

for "_i" from 0 to 1 step 0 do {
	if (getMarkerColor _markerName isEqualTo "") exitWith { PHX_Trackers deleteAt (PHX_Trackers find _markerName) };
	if (!(alive _vehicle) || { !(isNil { _vehicle getVariable "removeTracker" }) }) exitWith {
		_vehicle setVariable ["removeTracker", nil, true];
		deleteMarkerLocal _markerName;
		PHX_Trackers deleteAt (PHX_Trackers find _markerName);
	};

	_marker setMarkerPosLocal getPos _vehicle;
	_marker setMarkerDirLocal (getDir _vehicle);
	sleep 30;
};