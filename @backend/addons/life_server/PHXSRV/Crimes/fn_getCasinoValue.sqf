/*
	@File: fn_getCasinoValue.sqf
	@Author: Jack "Scarso" Farhall
	@Description: Setup the Casino Vault...
*/
private _value = round((((count playableUnits) / 3)) + (time / 60)); // The round shouldn't be needed but just in case...
private _barWeight = getNumber (missionConfigFile >> "CfgItems" >> "moneybag" >> "weight");

casino_box setVariable ["Trunk", [[["moneybag", _value]], (_barWeight * _value)], true];