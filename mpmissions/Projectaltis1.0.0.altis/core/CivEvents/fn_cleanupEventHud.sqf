  // --- civ v civ events ---  \\
 //         MADE EZ             \\
// === fn_cleanupHUD CLIENT  ====\\
//
//
//

diag_log "[CIV EVENT][CLIENT] Running cleanup HUD.";

// Correctly cut the display (removes display layer entirely)
cutRsc ["", "PLAIN"];

private _disp = uiNamespace getVariable ["CivEventDisplay", displayNull];
if (!isNull _disp) then {
    diag_log "[CIV EVENT][CLIENT] Found and closing CivEventDisplay.";
    _disp closeDisplay 2;
    uiNamespace setVariable ["CivEventDisplay", nil];
} else {
    diag_log "[CIV EVENT][CLIENT] No CivEventDisplay found.";
};
