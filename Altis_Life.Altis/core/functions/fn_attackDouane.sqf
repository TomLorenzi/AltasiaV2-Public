#include "..\..\script_macros.hpp"
/*
    File: fn_AttackDouane.sqf
    Author: Nirawin
    Description: tell the world, when custom is under attack!
*/
params [
    ["_douanecomp",objNull,[objNull]]
];

if ((!alive player) || life_istazed || life_isknocked) exitWith {};
if (!(playerSide in [west,civilian])) exitWith {};
if (_douanecomp getVariable "inAttack") exitWith {hint "La douane est deja en attaque!";};
if (count units group player < 3) exitWith {hint "Il faut aux minimums 3 membres du gang connecté, pour capturer la douane!";};
if ((_douanecomp getVariable "next_try") > time) exitWith {
	_timeleft = (_douanecomp getVariable "next_try") - time;
	_timeleft = round(_timeleft);
	hint format ["Vous ne pouvez pas attaquer la douane pour le moment, veuillez réessayer dans %1 Minutes!",[_timeleft,"MM"] call BIS_fnc_secondsToString];
};

private _msg = if (playerside isEqualTo west) then {
    "La Police fait face à une attaque de douane, Si vous êtes armé ne vous approchez pas de ce périmètre sous peine de perdre votre vie !"
} else {
    "Attaque de douane en cours, Si vous êtes armé ne vous approchez pas de ce périmètre sous peine de perdre votre vie !"
};

[1,_msg] remoteExecCall ["life_fnc_broadCast",RCLIENT];

createMarker ["markdouane", position _douanecomp];
"markdouane" setMarkerColor "ColorRed";
"markdouane" setMarkerText "!ATTENTION! Attaque de douane en cours !ATTENTION!";
"markdouane" setMarkerType "mil_warning";

_douanecomp setVariable ["inAttack", true, true];