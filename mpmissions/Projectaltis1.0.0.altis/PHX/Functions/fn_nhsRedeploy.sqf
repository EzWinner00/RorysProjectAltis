// fn_nhsRedeploy.sqf


if !(playerSide isEqualTo independent) exitWith {
    ["You are not allowed to use this redeploy system."] call BIS_fnc_showNotification;
};

// Get spawn data for medics from config
private _spawns = [independent] call life_fnc_spawnPointCfg;


missionNamespace setVariable ["PHX_NHS_SpawnList", _spawns];
createDialog "life_spawn_selection";

//spawnselection.hpp
private _ctrl = (findDisplay 38500) displayCtrl 38510;
{
    _ctrl lbAdd (_x select 1); // Display name
} forEach _spawns;

_ctrl lbSetCurSel 0;
