#include "..\..\script_macros.hpp"
/*
    File: fn_safeInventory.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Fills up the safes inventory.
	
	Pour les switch les items au niveau des banques il faut rajouter en dessous du premier private > _vault = param [0,ObjNull,[ObjNull]];
*/
private ["_safe","_tInv","_pInv","_safeInfo","_str","_shrt","_icon","_vault"];
_vault = param [0,ObjNull,[ObjNull]];
_safe = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _safe) exitWith {closeDialog 0;};
disableSerialization;

_tInv = (findDisplay 3500) displayCtrl 3502;
lbClear _tInv;

_safeInfo = _safe getVariable ["safe",-1];
if (_safeInfo < 1) exitWith {closeDialog 0; hint localize "STR_Civ_VaultEmpty";};

switch (_vault) do {
	case fed_bank: {
		_str = M_CONFIG(getText,"VirtualItems","goldbar","displayName");
		_shrt = M_CONFIG(getText,"VirtualItems","goldbar","variable");
		_tInv lbAdd format ["[%1] - %2",_safeInfo,(localize _str)];
		_tInv lbSetData [(lbSize _tInv)-1,_shrt];
		_icon = M_CONFIG(getText,"VirtualItems","goldbar","icon");
		if (!(_icon isEqualTo "")) then {
			_tInv lbSetPicture [(lbSize _tInv)-1,_icon];
		};
	};
	case fed_bank_1: {
		_str = M_CONFIG(getText,"VirtualItems","goldbar","displayName");
		_shrt = M_CONFIG(getText,"VirtualItems","goldbar","variable");
		_tInv lbAdd format ["[%1] - %2",_safeInfo,(localize _str)];
		_tInv lbSetData [(lbSize _tInv)-1,_shrt];
		_icon = M_CONFIG(getText,"VirtualItems","goldbar","icon");
		if (!(_icon isEqualTo "")) then {
			_tInv lbSetPicture [(lbSize _tInv)-1,_icon];
		};
	};
	case fed_bank_2: {
		_str = M_CONFIG(getText,"VirtualItems","piecesde","displayName");
		_shrt = M_CONFIG(getText,"VirtualItems","piecesde","variable");
		_tInv lbAdd format ["[%1] - %2",_safeInfo,(localize _str)];
		_tInv lbSetData [(lbSize _tInv)-1,_shrt];
		_icon = M_CONFIG(getText,"VirtualItems","piecesde","icon");
		if (!(_icon isEqualTo "")) then {
			_tInv lbSetPicture [(lbSize _tInv)-1,_icon];
		};
	};
	case fed_bank_3: {
		_str = M_CONFIG(getText,"VirtualItems","produitsC","displayName");
		_shrt = M_CONFIG(getText,"VirtualItems","produitsC","variable");
		_tInv lbAdd format ["[%1] - %2",_safeInfo,(localize _str)];
		_tInv lbSetData [(lbSize _tInv)-1,_shrt];
		_icon = M_CONFIG(getText,"VirtualItems","produitsC","icon");
		if (!(_icon isEqualTo "")) then {
			_tInv lbSetPicture [(lbSize _tInv)-1,_icon];
		};
	};
	case fed_bank_4: {
		_str = M_CONFIG(getText,"VirtualItems","reliques","displayName");
		_shrt = M_CONFIG(getText,"VirtualItems","reliques","variable");
		_tInv lbAdd format ["[%1] - %2",_safeInfo,(localize _str)];
		_tInv lbSetData [(lbSize _tInv)-1,_shrt];
		_icon = M_CONFIG(getText,"VirtualItems","reliques","icon");
		if (!(_icon isEqualTo "")) then {
			_tInv lbSetPicture [(lbSize _tInv)-1,_icon];
		};
	};
};

