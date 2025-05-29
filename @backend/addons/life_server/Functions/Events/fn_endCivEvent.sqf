  // --- civ v civ events --- \\
 //         MADE EZ            \\
// === fn_endCivEvent.sqf ===   \\
diag_log "[CIV EVENT][DEBUG] fn_endCivEvent called.";

private _leaderboard = missionNamespace getVariable ["PHX_CivEventLeaderboard", []];
diag_log format ["[CIV EVENT][END] Final leaderboard: %1", _leaderboard];

{
    _x setVariable ["PHX_CivEventType", ""];
    _x setVariable ["PHX_CivEventStat", 0];
} forEach allPlayers;

if (count _leaderboard > 0) then {
    private _entry = _leaderboard select 0;
    private _name = if (count _entry > 0) then { _entry select 0 } else { "Unknown" };
    private _value = if (count _entry > 1) then { _entry select 1 } else { 0 };
    private _uid = if (count _entry > 2) then { _entry select 2 } else { "" };

    diag_log format ["[CIV EVENT][DEBUG] Evaluating 1st place payout: Name=%1 | Value=%2 | UID=%3", _name, _value, _uid];

    private _target = objNull;
    {
        if (getPlayerUID _x isEqualTo _uid) exitWith { _target = _x };
    } forEach allPlayers;

    private _amount = 175000;     // Event Payout

    if (!isNull _target) then {
        [_amount, 0, 1, "Civilian Event - 1st Place"] remoteExecCall ["PHX_fnc_handleMoney", _target];
        [format ["🏁 1st Place: %1 wins £%2!", _name, [_amount] call life_fnc_numberText], "cyan"] remoteExecCall ["PHX_fnc_notify", -2];
    } else {
    };
};

// Clear leaderboard + broadcast HUD cleanup
missionNamespace setVariable ["PHX_CivEventLeaderboard", nil, true];
missionNamespace setVariable ["PHX_CivEventLeader", nil, true];

[" Civilian Event has ended!"] remoteExecCall ["PHX_fnc_notify", -2];

[] remoteExecCall ["life_fnc_cleanupEventHud", -2];

diag_log "[CIV EVENT] Cleanup complete.";
