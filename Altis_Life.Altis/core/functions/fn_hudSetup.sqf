#include "..\..\script_macros.hpp"
/*
    File: fn_hudSetup.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Setups the hud for the player?
*/
disableSerialization;

cutRsc ["playerHUD", "PLAIN", 2, false];
[] call life_fnc_hudUpdate;

[] spawn
{
    private ["_dam","_fat"];
    for "_i" from 0 to 1 step 0 do {
        _dam = damage player;
        _fat = getFatigue player;
        waitUntil {!((damage player) isEqualTo _dam) || !((getFatigue player) isEqualTo _fat)};
        [] call life_fnc_hudUpdate;
    };
};
