#include "\life_server\script_macros.hpp"
_exit = false;
if(count _this >= 3) then {
	if(_this select 1 isEqualTo "seized") exitWith {
		[1,"Airdrop saisie par la gendarmerie !"] remoteExec ["life_fnc_broadcast",RCLIENT];
		deleteVehicle (_this select 2);
		life_airdrop = false;
		_exit = true;
	};
};

if(_exit) exitWith {};
if(life_airdrop) exitWith {hint "AirDrop déjà en cours"};

life_airdrop = true;

_drops = [[23079.8,7298.72,0],[20081.1,6734.58,0],[19349.9,9672.64,0],[16494.1,10020.5,0],[16741.2,20459,0],[11727.8,22921.2,0],[9734.74,22311.5,0],[8851.68,23445.2,0],
[2303.9,22184.4,0],[4856.28,21900.9,0],[13774.9,6393.3,0],[9177.32,8516.57,0],[9574.57,9242.59,0],[9713.34,8700.49,0],[12904,9808.03,0],[9901.01,9834.66,0],[7177.86,11010.6,0],
[6577.78,11184,0],[6156.76,10360.7,0],[9962.53,19352.7,0],[12825.5,19668.8,0],[16595.6,19007.8,0],[20596.9,20075.5,0],[2681.23,11522.6,0],[4163.43,11796.3,0],[7003.38,11642.1,0],
[5306.32,11509.3,0],[6488.21,12241.6,0],[10080.2,11321.7,0],[13336.2,13366.8,0],[11682.4,18737.9,0],[10447.3,17299.9,0],[10290.8,19118.3,0],[22783.9,13786.8,0],[24035.9,15357.1,0],
[26052.9,19718.4,0],[26472,20520.8,0],[26598.7,20758.1,0],[27025.8,21501.3,0],[26705.2,21234.2,0],[27786.8,22257,0],[23372.3,24174.8,0],[21609.4,21286.9,0],[17821.1,18137.9,0],
[20117.4,20036.5,0],[28307.2,25768.8,0],[26910.1,24302,0],[18301.7,15556.5,0],[3003.57,18511.4,0],[4230.53,15054.6,0],[18813.6,16627.6,0],[21348.4,16378.2,0],[12493.9,12744.9,0],
[27633.7,24592.8,0],[22633,16821.1,0],[12495.6,15195.3,0],[11132.7,14562.4,0],[10237,14849.5,0],[9595.06,15124,0],[7865.8,14613.7,0],[12613.4,16392,0],[12834.4,16735.4,0]];

_rollSix = [["LMG_Mk200_F","200Rnd_65x39_cased_Box"],["LMG_Mk200_F","200Rnd_65x39_cased_Box"],["MMG_02_black_F","130Rnd_338_Mag"],["LMG_Zafir_F","150Rnd_762x54_Box"],["srifle_DMR_03_F","20Rnd_762x51_Mag"],["srifle_DMR_03_F","20Rnd_762x51_Mag"],["optic_LRPS_tna_F","NONE"],["muzzle_snds_58_blk_F","NONE"]];
_rollFourFirst = ["MiniGrenade","optic_LRPS","muzzle_snds_L","HandGrenade","muzzle_snds_L","optic_LRPS","MiniGrenade","muzzle_snds_L"];
_rollFourSecond = ["U_B_FullGhillie_ard","U_O_CombatUniform_ocamo","U_O_CombatUniform_ocamo","U_O_CombatUniform_ocamo","U_I_HeliPilotCoveralls","V_PlateCarrierSpec_blk","U_C_Driver_1_yellow"];
_rollChance25 = [["MMG_02_camo_F","130Rnd_338_Mag"],["NONE","130Rnd_338_Mag"]];
_rollChance10 = [["srifle_GM6_ghex_F","5Rnd_127x108_APDS_Mag"],["srifle_GM6_ghex_F","5Rnd_127x108_Mag"]];
_rollChance1 = ["H_PilotHelmetFighter_I_E","optic_LRPS_tna_F","H_PilotHelmetFighter_I_E"];

_time = serverTime;
_location = selectRandom _drops;
_marker = createMarker["airdrop",_location];
_marker setMarkerShape "ELLIPSE";
_marker setMarkerBrush "DiagGrid";
_marker setMarkerColor "colorRed";
_marker setMarkerSize[500,500];
_markerText = createMarker["text",[(_location select 0)-10,(_location select 1)]];
_markerText setMarkerType "hd_warning";
_markerText setMarkerColor "colorRed";
_markerText setMarkerText "ZONE DE LARGAGE";

[1,"ALERTE AIRDROP : Arrivée dans 5 minutes !"] remoteExec ["life_fnc_broadcast",RCLIENT];
uiSleep 240;
[1,"ALERTE AIRDROP : Arrivée dans 1 minute!"] remoteExec ["life_fnc_broadcast",RCLIENT];

_wind = [wind select 0, wind select 1];
setWind [0, 0, true];
uiSleep 60;

_markerText setMarkerText "AIRDROP LACHÉ";
[1,"ALERTE AIRDROP : Laché !"] remoteExec ["life_fnc_broadcast",RCLIENT];

_chute = "B_Parachute_02_F" createVehicle _location;
_chute setPosATL [getPosATL _chute select 0,getPosATL _chute select 1,1000];
_airdrop = "B_CargoNet_01_ammo_F" createVehicle (getPosATL _chute);
_airdrop enableRopeAttach false;
_chute disableCollisionWith _airdrop;
_chute allowDamage false;
_airdrop allowDamage false;
_airdrop attachTo [_chute,[0,0,0]];
[_airdrop] remoteExec ["TON_fnc_airdropClient", west, _airdrop];
clearWeaponCargoGlobal _airdrop;
clearItemCargoGlobal _airdrop;
clearMagazineCargoGlobal _airdrop;

for "_i" from 1 to 3 do {
	_rand = selectRandom _rollSix;
	if !(_rand select 1 isEqualTo "NONE") then {
		_airdrop addWeaponCargoGlobal[_rand select 0,1];
		_airdrop addMagazineCargoGlobal[_rand select 1,2];
	} else {
		_airdrop addItemCargoGlobal[_rand select 0,1];
	};
	if(_i <= 4) then {
		_rand = selectRandom _rollFourFirst;
		_airdrop addItemCargoGlobal[_rand,1];
		_rand = selectRandom _rollFourSecond;
		_airdrop addItemCargoGlobal[_rand,1];
	};
};

if(floor(random 4) == 2) then {
	_rand = selectRandom _rollChance25;
	if(_rand select 0 isEqualTo "NONE") then {
		_airdrop addMagazineCargoGlobal[_rand select 1,2];
	} else {
		_airdrop addWeaponCargoGlobal[_rand select 0,1];
		_airdrop addMagazineCargoGlobal[_rand select 1,1];
	};
};

if(floor(random 10) == 5) then {
	_rand = selectRandom _rollChance10;
	_airdrop addWeaponCargoGlobal[_rand select 0,1];
	_airdrop addMagazineCargoGlobal[_rand select 1,4];
};

if(floor(random 100) == 69) then {
	_rand = selectRandom _rollChance1;
	if(_rand isEqualTo "srifle_DMR_02_camo_F") then {
		_airdrop addWeaponCargoGlobal[_rand,1];
	} else {
		_airdrop addItemCargoGlobal[_rand,1];
	};
};

waitUntil {getPosATL _airdrop select 2 < 4 || getPosASL _airdrop select 2 < 0};
uiSleep 3;
if(underwater _airdrop) then {
	_airdrop setPosATL _location;
} else {
	_airdrop setPosATL[getPosATL _airdrop select 0,getPosATL _airdrop select 1,(getPosATL _airdrop select 1)+1];
};
_smoke = "SmokeShellPurple" createVehicle (getPosATL _airdrop);
_smoke attachTo [_airdrop,[0,0,0.7]];
setWind _wind;
uiSleep 0.1;
if(getPosATL _airdrop select 2 > 5) then {
	_airdrop setPosATL[getPosATL _airdrop select 0,getPosATL _airdrop select 1,1];
};
uiSleep 0.1;
_finalPos = getPosATL _airdrop;
_finalPos set[2,(_finalPos select 2)-(getPos _airdrop select 2)];
waitUntil{((count(ItemCargo _airdrop))+(count(WeaponCargo _airdrop))+(count(MagazineCargo _airdrop))) == 0 || (serverTime - _time) >= 1500 || !(life_airdrop)};
if((serverTime - _time) < 1500 && life_airdrop) then {
	[1,"ALERTE AIRDROP : L'airdrop à été récupéré !"] remoteExec ["life_fnc_broadcast",RCLIENT];
};
deleteVehicle _airdrop;
deleteVehicle _chute;
deleteVehicle _smoke;
deleteMarker _marker;
deleteMarker _markerText;

if(life_airdrop) then {
	life_airdrop = false;
};
