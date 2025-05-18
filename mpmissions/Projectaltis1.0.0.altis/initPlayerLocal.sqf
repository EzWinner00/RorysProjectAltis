#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/

diag_log "=== [CLIENT INIT] initPlayerLocal.sqf started ===";

// This is a headless client.
if (!hasInterface && !isServer) exitWith {
    diag_log ">>> Detected Headless Client, calling fn_initHeadless";
    [] call compile preprocessFileLineNumbers "\life_server\headless\fn_initHeadless.sqf";
    diag_log ">>> Headless Client init complete.";
};

diag_log ">>> Client confirmed. Proceeding with initialization.";

CONST(BIS_fnc_endMission,BIS_fnc_endMission);

// Optional: SpyGlass is disabled
// if (LIFE_SETTINGS(getNumber,"spyGlass_toggle") isEqualTo 1) then {[] execVM "SpyGlass\fn_initSpy.sqf";};

enableRadio false;
enableSentences false;
enableEnvironment [true, true];
disableRemoteSensors true;
enableCamShake false;

[true] call PHX_fnc_initBacking;
("RscBacking" call PHXUI_fnc_getLayer) displaySetEventHandler ["keyDown","_this call life_fnc_displayHandler"];

["RscTitleLoading"] call PHXUI_fnc_createLayer;

diag_log ">>> Calling fn_Initialization.sqf...";
[] execVM "PHX\Initialization\fn_Initialization.sqf";
diag_log "=== [CLIENT INIT] initPlayerLocal.sqf dispatched fn_Initialization.sqf ===";
