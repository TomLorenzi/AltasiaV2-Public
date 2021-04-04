#include "..\..\script_macros.hpp"
/*
    Author: Jean- Baptiste for The Programmer Forum

    Description : gas station robbery
*/
params [
    ["_shop",ObjNull],
    ["_robber",ObjNull],
    ["_action",-1]
];

/*========Configuration=========*/
_number_cop = 2; //Nombre de policier minimum afin de pourvoir braquer
_add_interpol = true; //Ajoute ou non le crime dans l'interpol
_marker_create = true; //Active ou non la création d'un marker
_money_fix = 75000; //Argent fixe perçu
_blocked_time = 300; // Temps avant le prochain braquage
_money_random = 20000; //Argent aléatoire perçu en plus de l'argent fixe
_time = 280; //Temps pour braquer en secondes
_temps_atm = 5; //Temps avant que le braqueur puisse déposer son argent dans l'ATM (en minutes)
/*=============================*/

if (side _robber != civilian) exitWith {hint "Tu dois etre un civil !"};
if ((west countSide playableUnits) < _number_cop) exitWith {hint "Il n'y a pas assez de Gendarmes !"};
if (_robber distance _shop > 5) exitWith {hint "Tu dois etre à 5m !"};
if (vehicle player != _robber) exitWith {hint "Tu dois d'abord sortir de ton véhicule !"};
if !(alive _robber) exitWith {};
if (currentWeapon _robber isEqualTo "") exitWith {hint "Tu as besoin d'une arme pour braquer !"};
if (_shop getVariable ["robbery_progress",false]) exitWith {hint "Il y a déjà un braquage en cours"};

_exit = false;
_money = _money_fix + round (random _money_random);
_title = _shop actionParams _action;
_shop removeAction _action;
_shop setVariable ["robbery_progress",true,true];

_fn_create_Marker = {
    _marker = createMarker [format ["marker_var_%1",_action], _shop];
    _marker setMarkerColor "ColorRed";
    _marker setMarkerText "ATTENTION: BRAQUAGE EN COURS !";
    _marker setMarkerType "mil_warning";
};

if ((random 100) >= 50) then {
    [1,"ALERTE BRAQUAGE : Une alarme silencieuse vient d’être déclenchée dans une station service !"] remoteExec ["life_fnc_broadcast",west];
    [] call _fn_create_Marker;
};

disableSerialization;

"progressBar" cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText "Braquage en cours restez proche ! (50m) (1%)...";
_progress progressSetPosition 0.01;
_cP = 0.01;

if (_marker_create) then {
    [] call _fn_create_Marker;
};

for "_i" from 0 to 1 step 0 do {
    uiSleep (_time / 100);

    _cP = _cP + 0.01;
    _progress progressSetPosition _cP;
    _pgText ctrlSetText format ["Braquage en cours rester proche ! (5m)  (%1%2)...",round (_cP * 100), "%"];

    if (_cP >= 1) exitWith {};
    if (_robber distance _shop > 50) exitWith {_exit = true};
    if (!alive _robber) exitWith {_exit = true};
    if (_robber getVariable "restrained") exitWith {_exit = true};
    if (life_istazed) exitWith {_exit = true};                                  
};

if (_exit) exitWith {
    "progressBar" cutText ["","PLAIN"];
    hint "Le magasin a été fermé et la gendarmerie a été prévenu !";
    [1,format["Une personne vient d'essayer de voler une station service !",_robber,name _robber, _shop]] remoteExec ["life_fnc_broadcast",west];

    playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", _robber];
    deleteMarker format ["marker_var_%1",_action];
    _shop setVariable ["robbery_progress",false,true];

    if (_add_interpol) then {
        [getPlayerUID _robber, _robber getVariable ["realname", name _robber], "211"] remoteExecCall ["life_fnc_wantedAdd", RSERV];
    };
};

"progressBar" cutText ["","PLAIN"];
titleText[format["Vous avez volé %1, maintenant fuyez avant que le gendarmerie arrive !",[_money] call life_fnc_numberText], "PLAIN"];
playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", _robber];
[1, format["News : Une Station Essence vient d’être cambriolé de %1 €",[_money] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast", west];

if (_add_interpol) then {
    [getPlayerUID _robber, _robber getVariable ["realname",name _robber], "211"] remoteExecCall ["life_fnc_wantedAdd", RSERV];
};

life_cash = life_cash + _money;
call SOCK_fnc_updatePartial;
deleteMarker format ["marker_var_%1",_action];
_shop setVariable ["robbery_progress",false,true];

[_shop,_title,_blocked_time] spawn {
    sleep (_this select 2);
    (_this select 0) addAction [((_this select 1) select 0),life_fnc_robSystem];
};

sleep (_temps_atm * 60);
life_use_atm = true;