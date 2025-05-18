/*
    @Author: Paddy "Fraggy" McCarthy
    @Description: Enables operation shop for APC
*/

private _hidden = isObjectHidden apc_operation_1;

if (_hidden) then {
    [true] remoteExecCall (["fnc_hideSign","TON"] call SOCK_fnc_getRemoteDestination);
} else {
    [false] remoteExecCall (["fnc_hideSign","TON"] call SOCK_fnc_getRemoteDestination);
};
