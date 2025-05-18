/*
    File: fn_hideSign.sqf
    Author: Paddy "Fraggy" McCarthy

    Description:
    Hides APC operations shop signs.
*/

params [
    ["_status", false]
];

{
    if (_status) then {
        _x hideObjectGlobal false;
    } else {
        _x hideObjectGlobal true;
    };
} foreach [apc_operation_1, apc_operation_2, apc_operation_3, apc_operation_4, apc_operation_5, apc_operation_6, apc_operation_7];
