/*
*   @File: fn_RCZ_captureLoop.sqf
*   @Author: Jay
*   credit: Sig its basically his popup cartel scripts modified
*   Description: Monitors the random cartel zone and checks for players in the zone,
*   and then handles the progress / capturing of the zone
*
*   Arguments
*     0 <TYPE: OBJECT> - Zone (empty helipad) that is being monitored
*
*   Return: Nothing
*/

#include "..\..\script_macros.hpp"
#define CFG missionConfigFile >> "CfgSupercap" >> "Altis" >> "SuperCaps"

if (!params [["_obj", objNull, [objNull]]]) exitWith {};

private _waitTime = (getNumber (CFG >> ["below70CapTime", "captureTimeInSeconds"] select (ONLINE(civilian) >= 70))) / 100;
(_obj getVariable ["PHX_scZoneMarkers", []]) params ["_scZoneMarker", "_scMarkerText"];

["init", _obj] call PHX_fnc_SC_ui;

for "_i" from 0 to 1 step 0 do {
    uiSleep _waitTime;
    private _progress = _obj getVariable ["PHX_scProgress", 0];

    private _domGroup = (([_scZoneMarker, independent, false, "_x call PHX_fnc_hasGroup"] call PHX(unitsInSupercap)) apply {group _x}) param [0, grpNull, [grpNull]];

    if (!isNull _domGroup) then {
        if (count ([_scZoneMarker, _domGroup, false, "_x call PHX_fnc_hasGroup"] call PHX(unitsInSupercap)) isEqualTo 0) then {
            switch true do {
                case (_progress >= 1): {
                    _scMarkerText setMarkerText format ["Supercap - %1", switch (side _domGroup) do {
                        case west: { "Neutralized APC" };
                        case east: { "Neutralized CSAT" };
                        default { "Captured" };
                    }];
                    _obj setVariable ["PHX_scZoneCaptured", true, true];

                    private _units = [_scZoneMarker, _domGroup, true] call PHX(unitsInSupercap);

                    private _payOut = getArray (CFG >> "payOutRange");
                    _payOut = [_payOut # 0, (_payOut # 0) + ((_payOut # 0) * .2), _payOut # 1];
                    if (ONLINE(civilian) < 40) then {
                        private _below40 = getNumber (CFG >> "below40MaxPay");
                        _payOut set [1, (_payOut # 1) min _below40];
                        _payOut set [2, _below40];
                    };
                    _payOut = round random _payOut;

                    private _reciever = selectRandom _units;
                    if (side _reciever isEqualTo civilian) then {
                        {
                            [_payOut] remoteExecCall ["PHX_fnc_SC_capturedClient", _x];
                        } forEach _units;
                    };

                    [2, "You have successfully captured the Supercap!"] remoteExecCall ["life_fnc_broadcast", _units];

                    ["unLoad", _obj] call PHX_fnc_SC_ui;

                    [_thisScript, _obj] spawn {
                        terminate (_this # 0);
                        sleep 10;
                        private _handle = (_this # 1) getVariable ["PHX_scSpawnHandle", scriptNull];
                        if (!isNull _handle) then {
                            terminate _handle;
                        };
                    };
                };

                default {
                    _obj setVariable ["PHX_scProgress", _progress + 0.01, true];
                    _scMarkerText setMarkerText format ["Supercap (%1%2)", round(_progress * 100), "%"];
                };
            };
        };
    };
};
