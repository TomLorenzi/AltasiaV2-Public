/*
    Author: Jean-Baptiste for The Programmer Forum

    Description: Save insure status to the database
*/
params [
    ["_vid",-1,[0]],
    ["_pid","",[""]],
    ["_vehicle",objNull,[objNull]],
    ["_unit",-1,[0]]
];

if (_vid isEqualTo -1 || {_pid isEqualTo ""} || {isNull _vehicle}) exitWith {};

_query = format ["SELECT id, insure FROM vehicles WHERE id='%1' AND pid='%2'",_vid,_pid];
_queryResult = [_query,2] call DB_fnc_asyncCall;

if (_queryResult isEqualType "") exitWith {};

_insureStatus = (_queryResult select 1);
_vehicle setVariable ["vehicle_insure_status",_insureStatus,true];

if (_insureStatus isEqualTo 1) then {
    [1,"Votre véhicule est disponible et est assuré !"] remoteExecCall ["life_fnc_broadcast",_unit];
} else {
    [1,"Votre véhicule est disponible mais n'est pas assuré !"] remoteExecCall ["life_fnc_broadcast",_unit];
};