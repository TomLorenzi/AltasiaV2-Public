#include "\life_server\script_macros.hpp"
/*
    File: fn_gangCash.sqf
    Author: Fuel RebornRoleplay.com

    Description:
    checks the gang areas, then rewards the gang if they own them
*/

 /*
	#########################
 	#	  	 Zone 1			#
 	#########################
 */

//gets the flag locations
_area = [19254.564,13114.038,1.58] nearestObject "Flag_Red_F";

//gets the gang names of the flag owners
_owner = _area getVariable ["gangOwner",grpNull];

//get the gang funds
_gFund = _owner getVariable ["gang_bank",0];

//set the new gang funds
_owner setVariable ["gang_bank",round(_gFund+((count playableUnits)*2000)),true];

//push gang funds to DB
[1,_owner] call TON_fnc_updateGang;
 
 /*
	#########################
 	#		 Zone 2			#
 	#########################
 */

//gets the flag locations
_area2 = [12829.627,19671.082,0] nearestObject "Flag_Red_F";

//gets the gang names of the flag owners
_owner = _area2 getVariable ["gangOwner",grpNull];

//get the gang funds
_gFund = _owner getVariable ["gang_bank",0];

//set the new gang funds
_owner setVariable ["gang_bank",round(_gFund+((count playableUnits)*2000)),true];

//push gang funds to DB
[1,_owner] call TON_fnc_updateGang;

 /*
	#########################
 	#	   	  Zone 3		#
 	#########################
 */

//gets the flag locations
_area3 = [21436.46,16369.020,0] nearestObject "Flag_Red_F";

//gets the gang names of the flag owners
_owner = _area3 getVariable ["gangOwner",grpNull];

//get the gang funds
_gFund = _owner getVariable ["gang_bank",0];

//set the new gang funds
_owner setVariable ["gang_bank",round(_gFund+((count playableUnits)*2000)),true];

//push gang funds to DB
[1,_owner] call TON_fnc_updateGang;

//time between scripts
Sleep 900;

[] spawn TON_fnc_gangCash;