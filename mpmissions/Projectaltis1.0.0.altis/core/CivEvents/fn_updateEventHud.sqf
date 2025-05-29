  // --- civ v civ events ---  \\
 //         MADE EZ             \\
// === fn_UpdateEventHudCLIENT===\\


disableSerialization;
params [["_leaderboard", [], [[]]]];

diag_log format ["[CIV EVENT][HUD] Raw leaderboard param: %1 | Type: %2", _leaderboard, typeName _leaderboard];
if (_leaderboard isEqualTo [] || {!(_leaderboard isEqualType [] || {count _leaderboard == 0})}) exitWith {
    diag_log "[CIV EVENT][HUD] Invalid or empty leaderboard. HUD update skipped.";
};

private _disp = uiNamespace getVariable ["CivEventDisplay", displayNull];
if (isNull _disp) exitWith {
    diag_log "[CIV EVENT][HUD] Display not found. Cannot update leaderboard.";
};

private _ctrlIdcs = [4901, 4903, 4904];
                    //#1   #2     #3
{
    private _ctrl = _disp displayCtrl (_ctrlIdcs select _forEachIndex);
    if (!isNull _ctrl) then {
        private _value = _x select 1;
        private _formatted = switch (player getVariable ["PHX_CivEventType", ""]) do {
            case "fastestSpeed": { format ["%1 km/h", round _value] };
            case "longestJump";
            case "distanceRan": { format ["%1 m", round _value] };
            case "biggestHit": { format ["%1 dmg", round (_value * 100)] };
            default { str (round _value) };
        };
                                          // ^ Sets the score output
        _ctrl ctrlSetText format ["#%1: %2 - %3", _forEachIndex + 1, _x select 0, _formatted];
    };
} forEach _leaderboard;

diag_log format ["[CIV EVENT][HUD] Leaderboard updated successfully: %1", _leaderboard];
