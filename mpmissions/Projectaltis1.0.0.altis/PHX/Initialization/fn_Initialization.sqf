/*
    File: fn_Initialization.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master client initialization file
*/
#include "..\..\script_macros.hpp"
scopename "LIFE_INIT";

diag_log "[PHX INIT] >> Stage 0: Script started";

waitUntil { !(isNull player) && { !((getPlayerUID player) isEqualTo "") } };
diag_log "[PHX INIT] >> Stage 1: Player and UID validated";

player switchMove "HubSpectator_stand";
diag_log "[PHX INIT] >> Stage 2: Player animation applied";

private _startTime = diag_tickTime;

["Initialization", "Started"] call PHX(logIt);
diag_log "[PHX INIT] >> Stage 3: Logging started";

profileNamespace setVariable ["GUI_BCG_RGB_R", 0.09];
profileNamespace setVariable ["GUI_BCG_RGB_G", 0.09];
profileNamespace setVariable ["GUI_BCG_RGB_B", 0.09];
profileNamespace setVariable ["GUI_BCG_RGB_A", 1];
saveProfileNamespace;
diag_log "[PHX INIT] >> Stage 4: Profile GUI colors set";

[] call compile preprocessFileLineNumbers "core\clientValidator.sqf";
diag_log "[PHX INIT] >> Stage 5: clientValidator compiled";

[] call compile preprocessFileLineNumbers "core\configuration.sqf";
diag_log "[PHX INIT] >> Stage 6: configuration compiled";

{
    if (_x getVariable ["isInvisibile", false]) then {
        [_x, true] call PHX(changeVisibility);
    };
    [_x, true] call PHX(playerSkins);
} forEach allPlayers;
diag_log "[PHX INIT] >> Stage 7: Admin visibility and player skins applied";

["Setting up Eventhandlers...", 0.3] call PHX(setLoadingStage);
[] call PHX(setupEVH);
diag_log "[PHX INIT] >> Stage 8: Event Handlers set";

["Setting up user actions...", 0.4] call PHX(setLoadingStage);
[] call PHX(setupActions);
diag_log "[PHX INIT] >> Stage 9: User Actions set";

["Waiting for the server to be ready...", 0.5] call PHX(setLoadingStage);

waitUntil {!isNil "life_server_isReady"};
diag_log "[PHX INIT] >> Stage 10: life_server_isReady is defined";

waitUntil {!isNil "HC_Active" && {!isNil "life_server_extDB_notLoaded"}};
diag_log format ["[PHX INIT] >> Stage 11: extDB flags known. extDB failed: %1", life_server_extDB_notLoaded];

if (life_server_extDB_notLoaded) exitWith {
    ["extDB failed to load. Please contact the Management Team.", 1] call PHX(setLoadingStage);
};

waitUntil {life_server_isReady};
diag_log "[PHX INIT] >> Stage 12: Server ready confirmed";

["Setting up map...", 0.6] call PHX(setLoadingStage);
[] call PHX_fnc_atmMarkers;
diag_log "[PHX INIT] >> Stage 13: ATM markers loaded";

private _query = [] spawn PHX_fnc_queryPlayerInfo;
diag_log "[PHX INIT] >> Stage 14: Query player info started";
waitUntil { scriptDone _query };
diag_log "[PHX INIT] >> Stage 15: Query player info finished";

if (isNil "PHX_Data_Complete" || { !PHX_Data_Complete }) exitWith {
    diag_log "[PHX INIT] >> ERROR: PHX_Data_Complete is nil or false.";
};

["Finishing client setup procedure...", 0.8] call PHX(setLoadingStage);

waitUntil {!(isNull (findDisplay 46))};
diag_log "[PHX INIT] >> Stage 16: Display 46 found";

{
    _x displayAddEventHandler ["KeyDown", {
        _this call {
            params ["","_key","_shift"];
            if (_key isEqualTo 74 && {_shift}) exitWith {
                if !(userInputDisabled) then {
                    disableUserInput true;
                    if (userInputDisabled) then {
                        disableUserInput false;
                    };
                };
                true
            };
        };
    }];
} forEach allDisplays;

["Loading side inits...", 0.9] call PHX(setLoadingStage);
switch (playerSide) do {
    case west: {call PHX(initPolice)};
    case civilian: {call PHX(initCivilian)};
    case independent: {call PHX(initMedic)};
    case east: {call PHX(initHAVOC)};
};
diag_log "[PHX INIT] >> Stage 17: Side-specific initialization completed";

life_paycheck = [] call PHX_fnc_getPaycheck;

if (FETCH_CONST(life_adminlevel) > 0) then {
    [player, "staff"] remoteExecCall ["PHXSRV_fnc_handleChat", RSERV];
};

player setVariable ["restrained",sideUnknown,true];
player setVariable ["Escorting",false,true];
player setVariable ["playerSurrender",false,true];
player setVariable ["isTazed", false, true];
player setVariable ["isKnockedOut", false, true];
player setVariable ["isSpeaking", false, true];
player setVariable ["hideName", false, true];
player setVariable ["nameColour", PHX_NameColour, true];
player setVariable ["iconSel", PHX_iconSel, true];
player setVariable ["titleSel", PHX_Title, true];

[] execFSM "core\fsm\client.fsm";

waitUntil {!(isNull (findDisplay 46))};

(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
(findDisplay 46) displayAddEventHandler ["KeyUp", "private _handled = false; if ((_this select 1) isEqualTo 57 && { PHX_canRespawn }) then { PHX_bleedFaster = false; _handled = true; }; _handled"];

[player,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC", RSERV];
0 cutText ["","BLACK IN"];

LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player setVariable ["realname", (format["%1%2", ([] call PHX(getPrefix)), profileName]),true];

if (["Belle Delphine", profileName] call life_fnc_inString) then {
    ["fangirl"] spawn PHX(unlockAchievement);
};

life_fnc_moveIn = compileFinal "
    life_disable_getIn = false;
    player moveInCargo (_this select 0);
    life_disable_getOut = true;
";

[] spawn life_fnc_survival;

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil {(!isNull (findDisplay 49)) && {(!isNull (findDisplay 602))}};
        (findDisplay 49) closeDisplay 2;
        (findDisplay 602) closeDisplay 2;
    };
};

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil { sleep 0.5; [(position player)] call PHX_fnc_isRedZone };
        [] spawn PHX(enteranceText);
        [] call PHX(combatZone);
        sleep 3;
        waitUntil { sleep 0.5; !([(position player)] call PHX_fnc_isRedZone) };
        ["<t align='center'>You've left a <t color='#cc0001'>Combat Zone</t></t>"] spawn PHX(enteranceText);
        [] call PHX(combatZone);
        sleep 3;
    };
};

addMissionEventHandler ["EachFrame", {
    private _isSpeaking = !isNull findDisplay 55;
    if !(player getVariable ["isSpeaking", false] isEqualTo _isSpeaking) then {
        player setVariable ["isSpeaking", _isSpeaking, true];
    };
}];

if (LIFE_SETTINGS(getNumber,"player_fatigue") isEqualTo 0) then {
    player enableFatigue false;
    player setCustomAimCoef 0.4;
};

if (LIFE_SETTINGS(getNumber,"pump_service") isEqualTo 1) then {
    [] execVM "PHX\Initialization\Setup\fn_setupStationService.sqf";
};

[getPlayerUID player,player getVariable ["realname",name player]] remoteExecCall (["fnc_wantedProfUpdate","life"] call SOCK_fnc_getRemoteDestination);

PHX_saveGear = true;

if (LIFE_SETTINGS(getNumber,"enableSnow") isEqualTo 1) then {
    [] spawn PHX_fnc_snow;
};

["Initialization", "Ended", format["Time: %1s", (diag_tickTime - _startTime)]] call PHX(logIt);
diag_log format ["[PHX INIT] >> Stage 18: Completed. Total time: %1s", diag_tickTime - _startTime];

["RscTitleLoading"] call PHXUI_fnc_destroyLayer;

if (playerSide in [east, civilian] && { life_is_arrested_police || life_is_arrested_havoc }) then {
    player switchMove "";
    life_firstSpawn = false;
    life_is_arrested = false;
    [player, life_jail_time, west] spawn life_fnc_jail;
} else {
    [] call PHX_fnc_mainMenu;
};
