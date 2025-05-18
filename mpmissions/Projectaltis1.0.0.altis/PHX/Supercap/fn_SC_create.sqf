/*
*   @File: fn_RCZ_create.sqf
*   @Author: Jay
*	credit: Sig its absically his popup cartel scripts modified
*   Description: Creates a zone in a randomized position from
*   the array in the cartel config.
*/

#include "..\..\script_macros.hpp"
#define CFG missionConfigFile >> "CfgSupercap" >> "Altis" >> "SuperCaps"

params [
	["_selection", 0, [0]]
];

if (!isServer || hasInterface) exitWith {};

private _position = getArray (CFG >> "locations");
private _radius = getNumber (CFG >> "radius");
private _redzoneRadius = getNumber (CFG >> "redzoneRadius");
private _scLocation = _position select _selection;

private _obj = "Land_HelipadEmpty_F" createVehicle _scLocation;

// -- Yellow zone
private _scZoneMarker = createMarker ["PHX_scMarker", _scLocation];
_scZoneMarker setMarkerShape "ELLIPSE";
_scZoneMarker setMarkerBrush "FDIAGONAL";
_scZoneMarker setMarkerSize [_radius, _radius];
_scZoneMarker setMarkerColor "ColorYellow";

// -- Objective marker
private _scMarkerText = createMarker ["PHX_scText", _scLocation];
_scMarkerText setMarkerType "mil_marker";
_scMarkerText setMarkerColor "ColorYellow";
_scMarkerText setMarkerText "Supercap";

private _scRedZone = createMarker [format ["Redzone_Supercap_zone"], _scLocation];
		_scRedZone setMarkerShape "Ellipse";
		_scRedZone setMarkerColor "ColorPink";
		_scRedZone setMarkerSize [_redzoneRadius, _redzoneRadius];
		_scRedZone setMarkerBrush "FDIAGONAL";

_obj setVariable ["PHX_scZoneMarkers", [_scZoneMarker, _scMarkerText, _scRedZone], true];
missionNameSpace setVariable ["PHX_mainZoneObj", _obj, true];

_obj
