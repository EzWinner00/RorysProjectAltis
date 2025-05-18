/*
	@File: fn_onReived.sqf
  
	@Author: Jack "Scarso" Farhall
  
	@Description: Called when a medic has revived me...
*/
#include "..\..\script_macros.hpp"
if !(params [["_medic", objNull, [objNull]]]) exitWith {};

if !(_medic getVariable ["isAdmin", false]) then {
	[format ["%1 has revived you and a fee of £%2 was taken from your bank account for their services",
		_medic getVariable ["realname", name _medic],
		[12500] call life_fnc_numberText                                        
	],"cyan"] call PHX_fnc_notify;

	[12500, 1, 1, "Revival Fee"] call PHX_fnc_handleMoney;

	// Notify the server...
	[0, format ["%1 was revived by %2", 
		player getVariable ["realname", name player], 
		_medic getVariable ["realname", name _medic]
	]] remoteExecCall ["life_fnc_broadcast", RCLIENT];

	// ✅ Webhook with hardcoded £12,500 fee
	[player, format [
		"%1 (%2) was revived by %3 for a fee of £12,500. Bank Balance: %4 On Hand Balance: %5",
		profileName,
		getPlayerUID player,
		_medic getVariable ["realname", name _medic],
		[BANK] call life_fnc_numberText,
		[CASH] call life_fnc_numberText
	], "https://rcon.phoenixrp.co.uk/api/v1/log/money"] remoteExecCall (["fnc_sendHook", "PHXSRV"] call SOCK_fnc_getRemoteDestination);
} else {
	NOTIFY("You've been revived by an admin","green");
};

[player, format [
	"%1 (%2) was revived by %3",
	profileName,
	getPlayerUID player,
	_medic getVariable ["realname", name _medic]
], "https://rcon.phoenixrp.co.uk/api/v1/log/medic"] remoteExecCall (["fnc_sendHook", "PHXSRV"] call SOCK_fnc_getRemoteDestination);

// Unset Incapacitated Variables...
player setUnconscious false;
unsetKiller(player);
unsetDowned(player);

player playMoveNow "amovppnemstpsraswrfldnon"; // Get out of the incapacitated animation...

["RscIncapacitated"] call PHXUI_fnc_destroyLayer; // Remove Incap UI...
{ppEffectDestroy _x} forEach PHX_effects; // Remove Effects...
player switchCamera "EXTERNAL"; // Switch camera view back

PHX_canRespawn = false;
life_action_inUse = false;
PHX_saveGear = true;

// Show the HUD again...
PHX_hideHUD = false;
[] call PHX_fnc_hudUpdate;

[] call PHX(playerSkins);
[] call SOCK_fnc_updateRequest;
