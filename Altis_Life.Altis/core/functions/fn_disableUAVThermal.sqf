/*
	File : fn_disableUAVThermal.sqf

	Creator : Nirawin
*/

private _pos = getPosATL player;

sleep 2;

{
	_x disableTIEquipment true;	
} foreach nearestObjects[_pos,["B_UAV_01_F"],10];