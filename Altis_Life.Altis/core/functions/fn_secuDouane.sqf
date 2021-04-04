#include "..\..\script_macros.hpp"
/*
    File: fn_AttackDouane.sqf
    Author: DreaM
    Description: tell the world, when custom is under attack!
*/
params [
    ["_douanecomp",objNull,[objNull]]
];

if ((!alive player) || life_istazed || life_isknocked) exitWith {};
if (!(playerSide in [west,civilian])) exitWith {};
if (isNil {_douanecomp getVariable "inAttack"}) exitWith {hint "Veuillez d'abord lancer l'attaque de douane.";};
if ((_douanecomp getVariable "next_try") > time) exitWith {};


private _future = time + 1200;
private _msg = if (playerside isEqualTo west) then {
    "La Police à sécurisé la douane, vous pouvez à nouveau circuler dans la douane !"
} else {
    "Attaque de douane terminée, vous pouvez à nouveau circuler dans la douane !"
};

[1,_msg] remoteExecCall ["life_fnc_broadCast",RCLIENT];

deleteMarker "markdouane";

_douanecomp setVariable ["next_try",_future,true];
_douanecomp setVariable ["inAttack", false, true];