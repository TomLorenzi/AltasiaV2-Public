#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName"];

switch (playerSide) do {
    case civilian: {
        if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
            player setObjectTextureGlobal [0, "textures\clothes\civ\altasia.jpg"];
        };
        if ((FETCH_CONST(life_donorlevel)) >= 1) then {
            if (uniform player isEqualTo "U_O_CombatUniform_oucamo") then {
                player setObjectTextureGlobal [0, "textures\clothes\civ\csatakts0.jpg"];
                player setObjectTextureGlobal [1, "textures\clothes\civ\csatakts1.jpg"];
            };
            if (uniform player isEqualTo "U_B_Wetsuit") then {
                player setObjectTextureGlobal [0, "textures\clothes\civ\wetsuit\wetsuitElec.jpg"];
            };
        };
        if (license_civ_cama) then {
            if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
                player setObjectTextureGlobal [0, "textures\cama\tenuecombat1.jpg"];
            };
            if (uniform player isEqualTo "U_I_pilotCoveralls") then {
                player setObjectTextureGlobal [0, "textures\cama\tenuepilote1.jpg"];
            };
            if ((backpack player) isEqualTo "B_ViperHarness_blk_F") then {
                (unitbackpack player) setObjectTextureGlobal [0, "textures\cama\viper1.jpg"];
            };
        };
    };

    case west: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\clothes\cop\rangeGn.jpg"];
        };
        if (uniform player isEqualTo "U_B_CTRG_1") then {
            player setObjectTextureGlobal [0, "textures\clothes\cop\U_B_CTRG_1.jpg"];
        };
        if (uniform player isEqualTo "U_B_T_Soldier_F") then {
            player setObjectTextureGlobal [0, "textures\clothes\cop\U_B_GEN_Soldier_F.jpg"];
        };
        if (uniform player isEqualTo "U_B_GEN_Commander_F") then {
            player setObjectTextureGlobal [0, "textures\clothes\cop\PulloverUniform.jpg"];
        };
        if (uniform player isEqualTo "U_B_CTRG_3") then {
            player setObjectTextureGlobal [0, "textures\clothes\cop\tenuegign.jpg"];
        };
        if ((backpack player) isEqualTo "B_TacticalPack_blk") then {
			(unitbackpack player) setObjectTextureGlobal [0, "textures\clothes\cop\sacgn.jpg"];
		};
        if ((backpack player) isEqualTo "B_AssaultPack_blk") then {
			(unitbackpack player) setObjectTextureGlobal [0, "textures\clothes\cop\backgign.jpg"];
		};
        if ((backpack player) isEqualTo "B_Kitbag_mcamo") then {
			(unitbackpack player) setObjectTextureGlobal [0, "textures\clothes\cop\grosgn.jpg"];
		};
    };

    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\clothes\med\tshirt.jpg"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest") then {
            player setObjectTextureGlobal [0, "textures\clothes\med\vestmedic.jpg"];
        };
        if(backpack player isEqualTo "B_Kitbag_mcamo") then {
            unitBackpack player setObjectTextureGlobal [0, "textures\clothes\med\sac.jpg"];
		} else {
            unitBackpack player setObjectTextureGlobal [0, ""];
        };
    };
};
