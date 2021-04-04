/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

life_actions = [];

switch (playerSide) do {

    //Civilian
    case civilian: {
        //Capture zone
        life_actions = life_actions + [player addAction["<t color='#FF0000'>Capturer la zone</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorTarget) == "Flag_Red_F") ']];

        //Show passport
        life_actions = life_actions + [player addAction["<t color='#00FF00'>Présenter son passeport</t>",life_fnc_civShowLicense,"",1,false,true,"",' vehicle player == player && playerSide == civilian && !isNull cursorTarget && player distance cursorTarget <= 10 && cursorTarget isKindOf "Man" ']];

        //Drop fishing net
        life_actions pushBack (player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']);

        //Rob person
        life_actions pushBack (player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']);
    };
    
    //Cops
    case west: { 
        //Capture zone
        life_actions = life_actions + [player addAction["<t color='#FF0000'>Capturer la zone</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorTarget) == "Flag_Red_F") ']];

        //Show passport
        life_actions = life_actions + [player addAction["<t color='#1F80C9'>Présenter son insigne</t>",life_fnc_copShowLicense,"",1,false,true,"",' vehicle player == player && playerSide == west && !isNull cursorTarget && player distance cursorTarget <= 10 && cursorTarget isKindOf "Man" ']];

        life_actions = life_actions + [player addAction["Saisir l'équipement",life_fnc_seizeWeapon,cursorTarget,0,false,false,"",'count(nearestObjects [player,["weaponholder"],3])>0']];
    };
    
    //EMS
    case independent: { };

};
