/*
    @File: fn_getRank.sqf
    @Author: Jack "Scarso" Farhall
    @Description: Returns an array with the rank title and icon...
*/
#include "..\..\script_macros.hpp"

private _return = ["", ""];

if (!params [["_player", objNull, [objNull]]] || isNull _player) exitWith {_return;};

_return = call {
	if((side _player) isEqualTo independent) exitWith {
		switch (_player getVariable ["rank", 0]) do {
			case 2: {["First Aider", INSIGNIA("nhs\fa.paa")]};
			case 3: {["Paramedic", INSIGNIA("nhs\nurse.paa")]};
			case 4: {["Doctor", INSIGNIA("nhs\seniornurse.paa")]};
			case 5: {["General Practitioner", INSIGNIA("nhs\consultant.paa")]};
			case 6: {["Surgeon", INSIGNIA("nhs\gp.paa")]};
			case 7: {["Consultant", INSIGNIA("nhs\cm.paa")]};
			case 8: {["Chief Medical Officer", INSIGNIA("nhs\md.paa")]};
			default {["Student", INSIGNIA("nhs\paramedic.paa")]};
		};
	};

	if (isCID(_player)) then {
		switch (_player getVariable ["rank", 0]) do {
			case 5: {["Detective Sergeant", INSIGNIA("police\SGT.paa"),"DS"]};
			case 6: {["Detective Inspector", INSIGNIA("police\INS.paa"),"DI"]};
			case 7: {["Detective Chief Inspector", INSIGNIA("police\CI.paa"),"DCI"]};
			case 9: {["Detective Superintendent", INSIGNIA("police\SI.paa"),"DSI"]};
			case 11: {["Assistant Commissioner", INSIGNIA("police\AC.paa"),"AC"]};
			case 12: {["Deputy Commissioner", INSIGNIA("police\DCOM.paa"),"DC"]};
			case 13: {["Commissioner", INSIGNIA("police\COM.paa"),"COM"]};
			default {["Detective Senior Constable", INSIGNIA("police\SPC.paa"),"DSC"]};
		};
	} else {
		switch (_player getVariable ["rank", 0]) do {
			case 2: {["Probationary Police Constable", INSIGNIA("police\PC.paa"),"PPC"]};
			case 3: {["Police Constable", INSIGNIA("police\PC.paa"),"PC"]};
			case 4: {["Senior Police Constable", INSIGNIA("police\SPC.paa"),"SPC"]};
			case 5: {["Sergeant", INSIGNIA("police\SGT.paa"),"SGT"]};
			case 6: {["Inspector", INSIGNIA("police\INS.paa"),"INS"]};
			case 7: {["Chief Inspector", INSIGNIA("police\CI.paa"),"CI"]};
			case 8: {["Commander", INSIGNIA("police\CMDR.paa"),"CMDR"]};
			case 9: {["Superintendent", INSIGNIA("police\SI.paa"),"SI"]};
			case 10: {["Chief Superintendent", INSIGNIA("police\CSI.paa"),"CSI"]};
			case 11: {["Assistant Commissioner", INSIGNIA("police\AC.paa"),"AC"]};
			case 12: {["Deputy Commissioner", INSIGNIA("police\DCOM.paa"),"DC"]};
			case 13: {["Commissioner", INSIGNIA("police\COM.paa"),"COM"]};
			default {["Police Community Support Officer", INSIGNIA("police\PCSO.paa"),"PCSO"]};
		};
	};
};

_return;