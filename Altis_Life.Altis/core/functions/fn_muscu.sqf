#include "..\..\script_macros.hpp"
/*
    File: fn_muscu.sqf
    Author: Pazu
    Description: Muscle ton corps, rend toi plus fort
*/

if (CASH < 25000) exitWith {hint "Vous n'avez pas 25000"};

CASH = CASH - 25000;
[] spawn {
    life_cardio_effect = time;
    titleText ["Après avoir pris du cardio, vous pouvez courir 60 minutes ! (sauf si vous mourrez)", "PLAIN"];
    player enableFatigue false;
    waitUntil {!alive player || ((time - life_cardio_effect) > (60 * 60))};
    player enableFatigue true;
};