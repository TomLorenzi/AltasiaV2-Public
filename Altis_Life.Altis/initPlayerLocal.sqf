#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
};

CONST(BIS_fnc_endMission,BIS_fnc_endMission);

[] execVM "core\init.sqf";

{_x setMarkerAlphaLocal 0} forEach [
    "copyright_1",
    "copyright_2"
];

[] execVM "briefing.sqf";
[] execVM "scripts\monitor.sqf";
enableEnvironment [true, false];