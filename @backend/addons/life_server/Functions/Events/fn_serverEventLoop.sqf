  // --- civ v civ events ---  \\
 //         MADE EZ             \\
// === fn_serverEventLoop.sqf ===\\
diag_log "[CIV EVENT] Event loop initiated.";
if (!isServer) exitWith {};

PHX_CivEventActive = true;
missionNamespace setVariable ["PHX_CivEventLeaderboard", [], true];
diag_log "[CIV EVENT][INIT] Leaderboard cleared.";

private _events = ["fastestSpeed", "distanceRan", "longestJump", "biggestHit"];
while {true} do {
    private _event = selectRandom _events;
    private _duration = 300;                               //EventDuration.
    private _endTime = time + _duration;

    missionNamespace setVariable ["PHX_CivEventLeader", ["", 0, ""], true];

    diag_log format ["[CIV EVENT] Starting event: %1", _event];
    {
        if (side _x isEqualTo civilian) then {
            [_event, _endTime] remoteExecCall ["life_fnc_startCivEvent", _x];
            diag_log format ["[CIV EVENT] Sent event start to %1", name _x];
        };
    } forEach allPlayers;

    sleep _duration;
    [] call life_fnc_endCivEvent;

    private _cooldown = 10 + random 35;                 //Time + Randomizer
    diag_log format ["[CIV EVENT] Waiting %1 seconds before next event...", _cooldown];
    sleep _cooldown;
};
