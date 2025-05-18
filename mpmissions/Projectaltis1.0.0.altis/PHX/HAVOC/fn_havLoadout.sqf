/*
	@File: fn_havLoadout.sqf

	@Author: Jack "Scarso" Farhall

	@Description: Loads default gear for the HAVOC faction...
*/
#include "..\..\script_macros.hpp"

call life_fnc_stripDownPlayer;

player forceAddUniform "U_IG_Guerilla2_1";
player addBackpack "B_Carryall_cbr";
player linkItem "ItemGPS";
player linkItem "ItemMap";
player linkItem "ItemRadio";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

if (HAS_PERK("mindfulPlanner")) then {
    player addGoggles "G_Tactical_Clear";
	player addWeapon "Rangefinder";
} else {
	player addWeapon "Binocular";
};

[] call PHX(playerSkins);
[] call life_fnc_saveGear;
