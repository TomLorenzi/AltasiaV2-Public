/*
    Author: Maxence for The Programmer Forum

    Description: Save insure status to the database
*/
params [
    ["_vid",-1,[0]],
    ["_pid","",[""]]
];

if ((_vid isEqualTo -1) OR (_pid isEqualTo "")) exitWith {};

_query = format ["UPDATE vehicles SET insure='1' WHERE pid='%1' AND id='%2'",_pid,_vid];
[_query,1] call DB_fnc_asyncCall;