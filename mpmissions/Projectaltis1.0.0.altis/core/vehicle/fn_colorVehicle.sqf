#include "..\..\script_macros.hpp"
/*
    File: fn_colorVehicle.sqf
    Author: Bryan "Tonic" Boardwine
    Patched by Scarso Lewis

    Description:
    Reskins the vehicle using texture index or RGB.
*/

params [
    ["_vehicle", objNull, [objNull]],
    ["_index", -1, [0]],
    ["_RGB", false, [true, []]]
];

private _className = typeOf _vehicle;
if (isNull _vehicle || {!alive _vehicle}) exitWith {};

// Early fallback to RGB if provided
if (_RGB isEqualType [] && { count _RGB >= 3 }) exitWith {
    private _r = _RGB select 0;
    private _g = _RGB select 1;
    private _b = _RGB select 2;
    private _a = if ((count _RGB) > 3) then { _RGB select 3 } else { 1 };

    _vehicle setObjectTextureGlobal [0, format ["#(argb,8,8,3)color(%1,%2,%3,%4)", _r, _g, _b, _a]];
    _vehicle setVariable ["Life_VEH_color", -1, true];
    _vehicle setVariable ["Vehicle_RGB", [_r, _g, _b, _a], true];

    diag_log format ["[colorVehicle] Applied RGB to %1: (%2,%3,%4,%5)", _className, _r, _g, _b, _a];
};

// Use fallback class if not defined
if (!isClass (missionConfigFile >> "LifeCfgVehicles" >> _className)) then {
    diag_log format ["[colorVehicle] Class %1 not defined in LifeCfgVehicles. Using 'Default'.", _className];
    _className = "Default";
};

private _textures = M_CONFIG(getArray, "LifeCfgVehicles", _className, "textures");
if (_textures isEqualTo []) exitWith {
    diag_log format ["[colorVehicle] No textures defined for %1", _className];
};

// Validate texture index
if (_index < 0 || _index >= count _textures) exitWith {
    diag_log format ["[colorVehicle] Invalid texture index %1 for %2. Max: %3", _index, _className, count _textures - 1];
};

// Apply texture
private _textureSet = _textures select _index;
private _paths = _textureSet param [2, []];

{
    _vehicle setObjectTextureGlobal [_forEachIndex, _x];
} forEach _paths;

// Store texture index for later saving
_vehicle setVariable ["Life_VEH_color", _index, true];
_vehicle setVariable ["Vehicle_RGB", nil, true];

diag_log format ["[colorVehicle] Applied texture index %1 (%2) to %3", _index, _textureSet select 0, _className];
