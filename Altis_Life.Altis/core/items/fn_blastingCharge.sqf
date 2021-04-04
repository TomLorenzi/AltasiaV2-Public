#include "..\..\script_macros.hpp"
/*
    File: fn_blastingCharge.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Blasting charge is used for the federal reserve vault and nothing  more.. Yet.
*/
private ["_vault","_handle"];
_vault = param [0,ObjNull,[ObjNull]];

if (isNull _vault) exitWith {}; //Bad object
if (typeOf _vault != "Land_CargoBox_V1_F") exitWith {hint localize "STR_ISTR_Blast_VaultOnly"};
if (_vault getVariable ["chargeplaced",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyPlaced"};
if (_vault getVariable ["safe_open",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyOpen"};
if (west countSide playableUnits < (LIFE_SETTINGS(getNumber,"minimum_cops"))) exitWith {
     hint format [localize "STR_Civ_NotEnoughCops",(LIFE_SETTINGS(getNumber,"minimum_cops"))];
};
if !((bank_obj getVariable ["locked",objNull]) isEqualTo objNull) exitWith {hint "Une autre banque est déjà en cours !"};

private _vaultHouse = [[["Altis", "Land_Research_house_V1_F"], ["Tanoa", "Land_Medevac_house_V1_F"]]] call TON_fnc_terrainSort;
private _altisArray = [16019.5,16952.9,0];
private _tanoaArray = [11074.2,11501.5,0.00137329];
private _pos = [[["Altis", _altisArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;

//[[1,2],format["ATTENTION !%1 est attaqu%2 par %3",_vault_name,_beschrelle,_gang_name],false,[]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
//if ((nearestObject [_pos,_vaultHouse]) getVariable ["locked",true]) exitWith {hint localize "STR_ISTR_Blast_Exploit"};
if (!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {}; //Error?

_vault setVariable ["chargeplaced",true,true];
bank_obj setVariable ["locked",_vault,true];

private["_vault_name","_beschrelle","_gang_name"];

switch (_vault) do {
	case fed_bank: {_vault_name = "La réserve fédérale"; _beschrelle = "ée";};
	case fed_bank_1: {_vault_name = "Hotel"; _beschrelle = "é";};
	case fed_bank_2: {_vault_name = "La Casse Automobile"; _beschrelle = "ée";};
	case fed_bank_3: {_vault_name = "Le Laboratoire Désaffecté"; _beschrelle = "é";};
	case fed_bank_4: {_vault_name = "La cité Engloutie"; _beschrelle = "ée";};
};

_gang_name = (group player) getVariable "gang_name";

if (isNil {group player getVariable "gang_name"}) then {_gang_name = "quelqu'un";};

[[0,1],format["ATTENTION !%1 est attaqu%2 par %3",_vault_name,_beschrelle,_gang_name],false,[]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
hint localize "STR_ISTR_Blast_KeepOff";

[_vault] remoteExec ["life_fnc_demoChargeTimer",[west,player]];
[_vault] remoteExec ["TON_fnc_handleBlastingCharge",2];
