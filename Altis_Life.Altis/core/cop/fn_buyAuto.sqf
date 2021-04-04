#include "..\..\script_macros.hpp"
/*

Script : Achat d'un equipement complet
Auteur : Paaazu

*/
private ["_stuff","_prixequipementmki", "_prixequipementzafir", "_lunettemki", "_giletmki", "_backpackmki", "_weaponmki", "_munitionsmki", "_lunettezaza", "_giletzaza", "_backpackzaza", "_weaponzaza", "_munitionszaza"];

// RECUPERATION
_stuff = _this select 0;

// CONFIGURATION

//PRIX
_prixequipementmki = 100000; // Prix Equipement MK-I
_prixequipementzaza = 300000; // Prix Equipement Zafir

//STUFF MK-I

_lunettemki = "G_Balaclava_TI_blk_F";
_giletmki = "V_PlateCarrier2_blk";
_backpackmki = "B_Kitbag_mcamo";
_weaponmki = "srifle_DMR_03_F";
_munitionsmki = "20Rnd_762x51_Mag";

//STUFF ZAZA

_lunettezaza = "G_Balaclava_TI_blk_F";
_giletzaza = "V_PlateCarrier2_blk";
_backpackzaza = "B_Kitbag_mcamo";
_weaponzaza = "LMG_Zafir_F";
_munitionszaza = "150Rnd_762x54_Box";

if (_stuff isEqualTo "mki") then {

	if (side player != west) exitWith {hint "Vous n'êtes pas Gendarme petit grugeur !"}; // Verif Side
	if (BANK < _prixequipementmki) exitwith {hint "Vous n'avez pas assez d'argent (100 000e)"}; // Verif Thune

	// Retrait de l'argent
	BANK = BANK - _prixequipementmki;

	// Mise à nue
	player removeWeapon (primaryWeapon player);
	{player removeMagazine _x;} forEach (magazines player);
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeGoggles player;
	removeHeadGear player;

	// Mise du Stuff
	player addWeapon _weaponmki;
	player addVest _giletmki;
	player addBackpack _backpackmki;
	player addGoggles _lunettemki;

	// In the Sac
	for "_i" from 1 to 3 do {player addItemToVest _munitionsmki;};
	for "_i" from 1 to 2 do {player addItemToBackpack "SmokeShell";};
	for "_i" from 1 to 5 do {player addItemToVest "FirstAidKit";};


	// Items Inutiles
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "ItemRadio";

};

if (_stuff isEqualTo "zaza") then {

	// Stupides Verifs
	if (side player != west) exitWith {hint "Vous n'êtes pas Gendarme petit grugeur !"}; // Verif Side
	if (BANK < _prixequipementzaza) exitwith {hint "Vous n'avez pas assez d'argent (300 000e)"}; // Verif Thune

	// Retrait de l'argent
	BANK = BANK - _prixequipementzaza;

	// Mise à nue
	player removeWeapon (primaryWeapon player);
	{player removeMagazine _x;} forEach (magazines player);
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeGoggles player;
	removeHeadGear player;

	// Mise du Stuff
	player addWeapon _weaponzaza;
	player addVest _giletzaza;
	player addBackpack _backpackzaza;
	player addGoggles _lunettezaza;

	// In the Sac
	for "_i" from 1 to 3 do {player addItemToVest _munitionszaza;};
	for "_i" from 1 to 2 do {player addItemToBackpack "SmokeShell";};
	for "_i" from 1 to 5 do {player addItemToVest "FirstAidKit";};


	// Items Inutiles
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "ItemRadio";

};