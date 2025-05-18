/*
 *  @File: fn_ownsHideout.sqf
 *  @Author: Zyn
 *
 *  Description:
 *  Sees if the gang owns the hideout
*/
#include "..\..\script_macros.hpp"
_this params [
    ["_object", "", [""]]
];

_object = call compile _object;

private _group = (_object getVariable ["gangID",0]) call PHX_fnc_groupByID;
private _allies = (_group getVariable ["gang_allies", []]) apply {_x # 1};

(_group isEqualTo grpPlayer || { (player getVariable ["gang_uid", -1]) in _allies })