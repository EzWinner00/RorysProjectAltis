/*
*   @File: fn_RCZ_delete.sqf
*   @Author: Jay
*	credit: Sig its absically his popup cartel scripts modified
*   Description: Deletes a random cartel zone
*/

#include "..\..\script_macros.hpp"

if (!params [["_obj", objNull, [objNull]]]) exitWith {};

// -- Since this is remote executed to all clients, the server will delete the zone
// -- and the ui handle will be terminated on client side
if (isServer) then {

  // -- Delete all the markers that are attached to the zone
  {
    deleteMarker _x;
  } forEach (_obj getVariable ["PHX_scZoneMarkers", []]);

  // -- Delete the object itself
  deleteVehicle _obj;

  [_obj] remoteExecCall ["PHX_fnc_SC_delete", RCLIENT];

} else {

  // -- Terminate the ui handle
  if (!isNull PHX_scClientEntryHandle) then {
    terminate PHX_scClientEntryHandle
  };
  ["unLoad", _obj] call PHX_fnc_SC_ui

}
