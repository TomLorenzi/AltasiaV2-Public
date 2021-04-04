#include "..\..\script_macros.hpp"
/*
    File: fn_gangWithdraw.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Withdraws money from the gang bank.
*/
private ["_value","_gangowner"];
_value = parseNumber(ctrlText 2702);
_gFund = GANG_FUNDS;
_gangowner = (group player getVariable "gang_owner");
group player setVariable ["gbank_in_use_by",player,true];

//Series of stupid checks
if (isNil {(group player) getVariable "gang_name"}) exitWith {hint localize "STR_ATM_NotInGang"}; // Checks if player isn't in a gang
if (_value > 999999) exitWith {hint localize "STR_ATM_WithdrawMax";};
if (_value < 0) exitWith {};
if (!([str(_value)] call TON_fnc_isnumber)) exitWith {hint localize "STR_ATM_notnumeric"};
if (_value > _gFund) exitWith {hint localize "STR_ATM_NotEnoughFundsG"};
if (_val < 100 && _gFund > 20000000) exitWith {hint localize "STR_ATM_WithdrawMin"}; //Temp fix for something.
if ((group player getVariable ["gbank_in_use_by",player]) != player) exitWith {hint localize "STR_ATM_WithdrawInUseG"}; //Check if it's in use.
if (_gangowner != getPlayerUID player) exitWith {hint "Seul le chef du groupe peut effectuer un retrait."}; //check if the player is the gang owner
if ((time - life_action_delay) < 1) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

_gFund = _gFund - _value;
CASH = CASH + _value;
group player setVariable ["gang_bank",_gFund,true];

if (life_HC_isActive) then {
    [1,group player] remoteExec ["HC_fnc_updateGang",HC_Life]; //Update the database.
} else {
    [1,group player] remoteExec ["TON_fnc_updateGang",RSERV]; //Update the database.
};

hint format [localize "STR_ATM_WithdrawSuccessG",[_value] call life_fnc_numberText];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;

if (LIFE_SETTINGS(getNumber,"player_moneyLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
        money_log = format [localize "STR_DL_ML_withdrewGang_BEF",_value,[_gFund] call life_fnc_numberText,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    } else {
        money_log = format [localize "STR_DL_ML_withdrewGang",profileName,(getPlayerUID player),_value,[_gFund] call life_fnc_numberText,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    };
    publicVariableServer "money_log";
};
