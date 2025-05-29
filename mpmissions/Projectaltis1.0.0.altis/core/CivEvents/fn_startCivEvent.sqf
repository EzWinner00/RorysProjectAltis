  // --- civ v civ events ---  \\
 //         MADE EZ             \\
// === fn_startCivEvent CLIENT===\\

params ["_event", "_endTime"];

player setVariable ["PHX_CivEventType", _event];
player setVariable ["PHX_CivEventStat", 0];

"RscCivEventDisplay" cutRsc ["RscCivEventDisplay", "PLAIN"];

private _disp = uiNamespace getVariable ["CivEventDisplay", displayNull];
if (!isNull _disp) then {
    private _titleCtrl = _disp displayCtrl 4905;     
    if (!isNull _titleCtrl) then {
        private _instruction = switch (_event) do {
            case "fastestSpeed": { " Hit the fastest speed in a Land vehicle!" };
            case "distanceRan": { " Run the furthest distance to win!" };
            case "longestJump": { " Make the longest jump in a land vehicle!" };
            case "biggestHit": { " Take the Most Damage without dying!" };
            default { " Civilian Event In Progress" };                //Leaderboard Text ^Descriptions
        };

        [_titleCtrl, _instruction, _event] spawn {
            private _ctrl = _this select 0;
            private _instruction = _this select 1;
            private _event = _this select 2;
            private _defaultText = "Civilian Event In Progress";
            private _toggle = true;

            while {player getVariable ["PHX_CivEventType", ""] == _event} do {
                private _text = if (_toggle) then { _instruction } else { _defaultText };
                _ctrl ctrlSetText _text;
                _toggle = !_toggle;
                sleep 15;    //HUD text toggle speed.
            };
            _ctrl ctrlSetText _defaultText;
        };
    };
};

[_endTime] spawn {
    private _ctrl = ((uiNamespace getVariable ["CivEventDisplay", displayNull]) displayCtrl 4902);
    while {!isNull _ctrl && {time < _this select 0}} do {
        private _remaining = round ((_this select 0) - time);
        _ctrl ctrlSetText format [" Time Left: %1s", _remaining max 0];
        sleep 1;
    };
};

switch (_event) do {
    case "fastestSpeed": {
        [] spawn {
            while {player getVariable ["PHX_CivEventType", ""] == "fastestSpeed"} do {
                if (vehicle player != player && {driver (vehicle player) == player}) then {
                    private _spd = round speed (vehicle player);
                    if (_spd > (player getVariable ["PHX_CivEventStat", 0])) then {
                        player setVariable ["PHX_CivEventStat", _spd];
                        [_spd, objNull, getPlayerUID player, name player] remoteExecCall ["life_fnc_updateCivStat", 2];
                    };
                };
                sleep 1;
            };
        };
    };

    case "distanceRan": {                      //To Be removed when more are made. 
        [] spawn {
            private _last = getPosATL player;
            private _total = 0;
            while {player getVariable ["PHX_CivEventType", ""] == "distanceRan"} do {
                if (vehicle player == player) then {
                    private _cur = getPosATL player;
                    private _d = _last distance _cur;
                    if (_d > 0.5 && _d < 15 && {alive player}) then {
                        _total = _total + _d;
                        _last = _cur;
                        player setVariable ["PHX_CivEventStat", _total];
                        [_total, objNull, getPlayerUID player, name player] remoteExecCall ["life_fnc_updateCivStat", 2];
                    };
                };
                sleep 1;
            };
        };
    };

    case "longestJump": {
        [] spawn {
            private _jumpStartPos = [0, 0, 0];
            private _inAir = false;

            while {player getVariable ["PHX_CivEventType", ""] == "longestJump"} do {
                if (vehicle player != player && {driver (vehicle player) == player}) then {
                    private _veh = vehicle player;

                    if (!isTouchingGround _veh && !_inAir) then {
                        _jumpStartPos = getPosATL _veh;
                        _inAir = true;
                    };

                    if (_inAir && {isTouchingGround _veh}) then {
                        private _endPos = getPosATL _veh;
                        private _distance = _jumpStartPos distance2D _endPos;

                        if (_distance > (player getVariable ["PHX_CivEventStat", 0])) then {
                            player setVariable ["PHX_CivEventStat", _distance];
                            [_distance, objNull, getPlayerUID player, name player] remoteExecCall ["life_fnc_updateCivStat", 2];
                        };

                        _inAir = false;
                    };
                } else {
                    _inAir = false; // reset if no longer driving
                };

                sleep 0.2;
            };
        };
    };

    case "biggestHit": {
        [] spawn {
            waitUntil { !isNull player && alive player };

            private _eh = player addEventHandler ["HandleDamage", {
                params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex"];
                private _prev = _unit getVariable ["PHX_CivEventStat", 0];

                if ((alive _unit) && {_damage > _prev}) then {
                    _unit setVariable ["PHX_CivEventStat", _damage];
                    [_damage, objNull, getPlayerUID _unit, name _unit] remoteExecCall ["life_fnc_updateCivStat", 2];
                };

                _damage
            }];

            waitUntil { player getVariable ["PHX_CivEventType", ""] != "biggestHit" };
            player removeEventHandler ["HandleDamage", _eh];
        };
    };
};
