/*
*   @File: fn_SC_ui.sqf
*   @Author: Jay
*   credit: Sig its basically his popup cartel scripts modified
*   Description: Handles the user interface for the player in the zone (Mainly progressbar)
*
*   Arguments
*     0 <TYPE: STRING> - Mode that determines what to do with the ui
*     1 <TYPE: OBJECT> - Zone (empty helipad)
*
*   Return: Nothing
*/
#define __layer "RscCapture"

if (!params [["_mode", "", [""]], ["_obj", objNull, [objNull]]]) exitWith {};

switch _mode do {
  case "init": {

    // Prevent stacked HUDs
    private _prev = uiNamespace getVariable ["PHX_scBarHandle", scriptNull];
    if (!isNull _prev) then { terminate _prev; };

    uiNamespace setVariable ["PHX_scBarHandle", [_obj] spawn {
      params ["_obj"];
      (_obj getVariable ["PHX_scZoneMarkers", []]) params [["_scZoneMarker", "", [""]], ["_scMarkerText", "", [""]]];

      (__layer call BIS_fnc_RscLayer) cutRsc [__layer, "PLAIN", 0];

      private _ui = uiNamespace getVariable [__layer, displayNull];

      private _bar = _ui displayCtrl 50001;
      private _text = _ui displayCtrl 50002;
      private _subText = _ui displayCtrl 50003;

      for "_i" from 0 to 1 step 0 do {

        if (!alive player) exitWith { ["unLoad", _obj] call PHX_fnc_SC_ui; };

        private _restrained = player getVariable ["restrained", false];
        if (_restrained isEqualType true && { _restrained }) exitWith {
          ["unLoad", _obj] call PHX_fnc_SC_ui;
        };

        if (player getVariable ["isDowned", false]) exitWith {
          ["unLoad", _obj] call PHX_fnc_SC_ui;
        };

        if (!([player] call PHX_fnc_inZone isEqualType 0)) exitWith {
          ["unLoad", _obj] call PHX_fnc_SC_ui;
        };

        // UI safety rebuild
        if (isNull _ui) then {
          _ui = uiNamespace getVariable [__layer, displayNull];
          _bar = _ui displayCtrl 50001;
          _text = _ui displayCtrl 50002;
          _subText = _ui displayCtrl 50003;
        };

        private _progress = _obj getVariable ["zProgress", 0];
        private _zone = _obj getVariable ["zCFG", ""];
        private _zoneName = getText (missionConfigFile >> "CfgCartel" >> worldName >> "Cartels" >> _zone >> "displayName");

        private _reason = switch true do {
          case (player getVariable ["isAdmin", false]): { "Get out of admin gear" };
          case (player getVariable ["SupportOnDuty", false]): { "Get out of support gear" };
          case (!isNull objectParent player): { "Leave the vehicle" };
          case !([player] call PHX_fnc_hasGroup): { "You need a gang to capture" };
          case (currentWeapon player isEqualTo "" || { (currentWeapon player) in ["Rangefinder", "Binocular"] }): { "Equip a weapon" };
          case (_obj getVariable ["PHX_scZoneCaptured", false]): { "Zone already captured" };
          case (count ([_scZoneMarker, group player, false, "_x call PHX_fnc_hasGroup && {!(playerSide isEqualTo independent)}"] call PHX_fnc_unitsInSupercap) > 0): {
            format ["%1 is contested", _zoneName]
          };
          default { format ["Capturing %1", _zoneName] };
        };

        _text ctrlSetText format ["%2%3", _reason, round ((_progress min 1) * 100), "%"];
        _subText ctrlSetText format ["%1", _reason];
        _bar progressSetPosition (_progress min 1);

        uiSleep 0.1;
      };
    }];
  };

  case "unLoad": {
    private _handle = uiNamespace getVariable ["PHX_scBarHandle", scriptNull];
    if (!isNull _handle) then {
      terminate _handle;
    };
    __layer cutFadeOut 0;
  };
};