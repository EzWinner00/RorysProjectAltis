// === fn_updateCivStat.sqf ===
/*
    @Description: Handles incoming stat updates and syncs leaderboard + HUD
*/

params [
    ["_value", 0, [0]],
    ["_unit", objNull, [objNull]],
    ["_forcedUID", ""],
    ["_forcedName", ""]
];

private _uid = if (_forcedUID != "") then {_forcedUID} else {getPlayerUID _unit};
private _name = if (_forcedName != "") then {_forcedName} else {name _unit};

if (_uid isEqualTo "") exitWith {
    diag_log "[CIV EVENT][ERROR] UID is empty. Stat update ignored.";
};

private _leaderboard = missionNamespace getVariable ["PHX_CivEventLeaderboard", []];

// Remove any existing entry for this UID
_leaderboard = _leaderboard select { (_x select 2) != _uid };

// Add new entry
_leaderboard pushBack [_name, _value, _uid];

// Sort by stat descending (FIXED)
_leaderboard = [_leaderboard, [], { _x select 1 }, "DESC"] call BIS_fnc_sortBy;

// Keep only top 3
if ((count _leaderboard) > 3) then { _leaderboard resize 3; };

// Validation
if (!(_leaderboard isEqualType [])) exitWith {
    diag_log "[CIV EVENT][ERROR] Invalid leaderboard structure. Skipping HUD sync.";
};

missionNamespace setVariable ["PHX_CivEventLeaderboard", _leaderboard, true];
diag_log format ["[CIV EVENT][UPDATE] Leaderboard now: %1", _leaderboard];

// Broadcast HUD updates
{
    if (side _x isEqualTo civilian) then {
        [_leaderboard] remoteExecCall ["life_fnc_updateEventHud", _x];
        diag_log format ["[CIV EVENT] HUD update sent to %1 (%2)", name _x, getPlayerUID _x];
    };
} forEach allPlayers;
