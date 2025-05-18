/*
    @File: fn_revive.sqf
    @Author: Jack "Scarso" Farhall
    @Description: Called when a medic starts to revive someone...
*/

#include "..\..\script_macros.hpp"

if (isNil "_unit") then {
    _unit = player; // For solo testing only
    _unit setVariable ["realname", name _unit];
    _unit setVariable ["Revive", true];
};

if !(params [["_unit", objNull, [objNull]]]) exitWith {};
if (isNull _unit) exitWith {};
if !(isDowned(_unit)) exitWith { NOTIFY("You can only revive injured players","red") };
if (player distance _unit > 5) exitWith { NOTIFY("You are not close enough to the injured player","red") };
if (_unit getVariable ["Dragging", false]) exitWith { NOTIFY("The player is currently being dragged","red") };
if (dialog) then { closeDialog 0 };

life_interrupted = false;
life_action_inUse = true;
_unit setVariable ["Reviving", player, true];

private _level = PROF_LVL("Prof_Reviving");

// Setup our progress bar.
if !(
    [
        format ["Reviving %1...", _unit getVariable ["realname", name _unit]],
        30,
        [
            "player distance (_this select 0) < 5", 
            [_unit], true, 
            "[""You must remain within 5 of the target"",""red""] call PHX_fnc_notify;"
        ],
        ([0.01, (0.01 + (_level / 5000))] select (_level > 0))
    ] call PHX(handleProgress)
) exitWith {
    life_action_inUse = false;
    _unit setVariable ["Reviving", nil, true];
};

life_action_inUse = false;
_unit setVariable ["Reviving", nil, true];

["Prof_Reviving", 1, 100] call PHX(increaseProfession);

// Payout...
if (playerSide isEqualTo independent) then {
    private _revivePay = 12500;

    // Notify medic
    [
        format [
            "You have revived %1 and received £%2 for your services.",
            _unit getVariable ["realname", name _unit],
            [_revivePay] call life_fnc_numberText
        ],
        "green"
    ] call PHX_fnc_notify;

    // Add money to bank
    [_revivePay, 0, 1, "Revival Fee"] call PHX(handleMoney);
};

// XP reward (safe, single call)
private _xp = [200, 100] select !(HAS_PERK("governmentBonusNHS"));
[_xp, "Revived a person"] spawn PHX_fnc_handleXP;

// Notify the revived player
[player] remoteExecCall ["PHX_fnc_onRevived", _unit];
