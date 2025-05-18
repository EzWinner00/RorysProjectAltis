/*
*   @File: fn_RCZ_init.sqf
*   @Author: Jay
*	credit: Sig its absically his popup cartel scripts modified
*
*   Description: Initalises random spawn cartels (RCZ = Random Cartel Zones)
*/

#include "..\..\script_macros.hpp"
#define CFG missionConfigFile >> "CfgSupercap" >> "Altis" >> "SuperCaps"
if (!isServer || hasInterface) exitWith {};


_this spawn {
  // -- Define all the times based on if debugmode is enabled or not
  private _sleepTime = getNumber (CFG >> "spawnInterval");
  private _deleteTimer = getNumber (CFG >> "deleteTimer");
  private _minUnits = 15;
  private _notifyTime = 5 * 60;
  private _capArray = [0,1,2,3,4,5,6,7,8];

  private _numberOfCaps = 0;

  for "_i" from 0 to 1 step 0 do {

    // -- First sleep for the time it takes to spawn,
    // -- and then wait until there are enough players on for the zone to spawn
    sleep _sleepTime;
    waitUntil {count(allPlayers) >= _minUnits};
    if !(PHX_superCapsActive) exitWith {PHX_supercap_Spawned = false;};
    PHX_supercap_Spawned = true;

    // -- Notify five and ten minutes before spawning
    [3, "<t color='#ff0000' size='1.2px'>Supercap<br/></t><t color='#ffffff' size='1px'>A supercap is spawning! The location will be marked on your map in 5 minutes."] remoteExecCall ["life_fnc_broadcast", RCLIENT];
    sleep _notifyTime;

    // -- Handle the zone and call the capture loop,
    // -- is spawned so that it can be terminated whenever the zone is captured
    _numberOfCaps = _numberOfCaps + 1; // incriment the ammount of caps chosen
    _selectedCap = selectRandom _capArray; // select a random number from 1-6 each representing 1 of 6 capture points
    _capArray deleteAt (_capArray find _selectedCap); // decduct all selected caps from the cap array
    
    private _obj = [_selectedCap] call PHX_fnc_SC_create;
    [_obj] remoteExecCall ["PHX_fnc_SC_client", RCLIENT, true];
    [3, format ["<t color='#ff0000' size='1.2px'>Supercap<br/></t><t color='#ffffff' size='1px'>The Supercap has spawned! The location has been marked on your map."]] remoteExecCall ["life_fnc_broadcast", RCLIENT];

    private _handle = [_obj, _deleteTimer] spawn {

      params ["_obj", "_time"];

      // -- Spawn the capture loop, and then sleep the delete time. If the zone is captured,
      // -- this handle will be terminated and the delete function will be ran
      _obj setVariable ["PHX_scCapHandle", _obj spawn PHX_fnc_SC_captureLoop];
      sleep _time;

      // -- Finally make sure no units are in the zone
      waitUntil {(count ([(_obj getVariable ["PHX_scZoneMarkers", []] param [0, "", [""]]), independent, false, "_x call PHX_fnc_hasGroup"] call PHX(unitsInSupercap))) isEqualTo 0};

    };

    _obj setVariable ["PHX_scSpawnHandle", _handle];
    // -- Using waituntil and spawn so that the handle can be terminated when
    // -- the zone is captured
    waitUntil {scriptDone _handle};
    [_obj] call PHX_fnc_SC_delete;

    // -- Notify everyone that the zone has despawned / captured
    private _message = ["Nobody captured the Supercap", "The Supercap has been captured!!!"] select (_obj getVariable ["PHX_scZoneCaptured", false]);
    [3, format ["<t color='#ff0000' size='1.2px'>Supercap<br/></t><t color='#ffffff' size='1px'>%1</t>", _message]] remoteExecCall ["life_fnc_broadcast", RCLIENT];

    // -- Terminate the capture loop if the zone timed out
    private _capHandle = _obj getVariable ["PHX_scCapHandle", scriptNull];
    if (!isNull _capHandle) then {
      terminate _capHandle
    };
    
    if (_numberOfCaps == 6) then {
      [_thisScript] spawn {
        terminate (_this # 0);
        PHX_supercap_Spawned = false;
      };
      sleep 2;
    };  
  };

};