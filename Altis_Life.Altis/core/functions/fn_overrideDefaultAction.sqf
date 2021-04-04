/*
	File: fn_overrideDefaultAction.sqf

	Creator : Nirawin
*/
private ["_object","_caller","_index","_actionName","_actionText"];

_object = _this select 0;
_caller = _this select 1;
_index = _this select 2;
_actionName = _this select 3;
_actionText = _this select 4;


if (_actionName == 'Assemble') exitWith {
    [] spawn life_fnc_disableUAVThermal; 
    false
};

false