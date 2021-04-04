#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

if (!isNull _source && {_source != _unit}) then {
    if (side _source isEqualTo west) then {
        if (currentWeapon _source in ["hgun_P07_snds_F"] && _projectile in ["B_9x21_Ball"]) then {
            if (alive _unit) then {
                if (playerSide isEqualTo civilian && {!life_istazed}) then {
                    private _distance = 35;
                    if (_unit distance _source < _distance) then {
                        if !(isNull objectParent _unit) then {
                            if (typeOf (vehicle _unit) isEqualTo "B_Quadbike_01_F") then {
                                _unit action ["Eject",vehicle _unit];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };
                _damage = if (_part isEqualTo "") then {
                    damage _unit;
                } else { 
                    _unit getHit _part;
                };
            };
        };
    };
};

if (vehicle _unit == _unit) then {  
    if ( _source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Boat" ) then {  
        diag_log "_Source is Vehicle, Not a player driving a vehicle"
    } else {  
        _isVehicle = vehicle _source;  
        if (_isVehicle isKindOf "Air" OR _isVehicle isKindOf "Car" OR _isVehicle isKindOf "Boat") then {  
            _damage = 0.001;  
            [[player,"amovppnemstpsraswrfldnon"],"life_fnc_animSync",true,false] spawn life_fnc_MP;  
        };  
    };  
};  

[] spawn life_fnc_hudUpdate;
_damage;
