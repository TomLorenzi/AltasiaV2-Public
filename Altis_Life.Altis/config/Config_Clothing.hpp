/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_blue", "", 100, "" },
            { "U_C_Poloshirt_burgundy", "", 100, "" },
            { "U_C_Poloshirt_redwhite", "", 100, "" },
            { "U_C_Poloshirt_tricolour", "", 100, "" },
            { "U_C_Man_casual_1_F","", 100, "" },
            { "U_C_Man_casual_2_F","", 100, "" },
            { "U_C_Man_casual_3_F","", 100, "" },
            { "U_C_Man_casual_4_F","", 100, "" },
            { "U_C_Man_casual_5_F","", 100, "" },
            { "U_C_Man_casual_6_F","", 100, "" },
            { "U_C_Uniform_Farmer_01_F","", 100, "" },
            { "U_C_E_LooterJacket_01_F","", 100, "" },
            { "U_C_Uniform_Scientist_01_F","", 100, "" },
            { "U_C_Uniform_Scientist_01_formal_F","", 100, "" },
            { "U_C_Uniform_Scientist_02_F","", 100, "" },
            { "U_C_Uniform_Scientist_02_formal_F","", 100, "" },
            { "U_I_L_Uniform_01_tshirt_skull_F", "", 100, "" },
            { "U_I_L_Uniform_01_tshirt_black_F", "", 100, "" },
            { "U_I_L_Uniform_01_tshirt_sport_F", "", 100, "" },
            { "U_C_man_sport_1_F","", 100, "" },
            { "U_C_IDAP_Man_Jeans_F", "", 100, "" },
            { "U_C_IDAP_Man_Cargo_F", "", 100, "" },
            { "U_C_IDAP_Man_Casual_F", "", 100, "" },
            { "U_C_IDAP_Man_Shorts_F", "", 100, "" },
            { "U_C_IDAP_Man_Tee_F", "", 100, "" },
            { "U_C_Mechanic_01_F", "", 100, "" },
            { "U_C_man_sport_2_F","", 100, "" },
            { "U_C_man_sport_3_F","", 100, "" },
            { "U_IG_Guerilla2_1", "", 100, "" },
            { "U_IG_Guerilla2_2", "", 100, "" },
            { "U_IG_Guerilla2_3", "", 100, "" },
            { "U_IG_Guerilla3_1", "", 100, "" },
            { "U_I_G_resistanceLeader_F", "", 100, "" },
            { "U_C_HunterBody_grn", "", 100, "" },
            { "U_Rangemaster", "", 100, "" },
            { "U_OrestesBody", "", 100, "" },
            { "U_NikosBody", "", 100, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 100, "" },
            { "H_Bandanna_surfer", "", 100, "" },
            { "H_Bandanna_khk", "", 100, "" },
            { "H_Cap_blu", "", 100, "" },
            { "H_Cap_grn", "", 100, "" },
            { "H_Cap_grn_BI", "", 100, "" },
            { "H_Cap_oli", "", 100, "" },
            { "H_Cap_red", "", 100, "" },
            { "H_Cap_tan", "", 100, "" },
            { "H_Hat_Safari_sand_F", "", 100, "" },
            { "H_Hat_Safari_olive_F", "", 100, "" },
            { "H_Hat_Tinfoil_F", "", 100, "" },
            { "H_WirelessEarPiece_F", "", 100, "" },
            { "H_Helmet_Skate", "", 100, "" },
            { "H_Bandanna_gry", "", 100, "" },
            { "H_Bandanna_sgg", "", 100, "" },
            { "H_Bandanna_cbr", "", 100, "" },
            { "H_StrawHat", "", 100, "" },
            { "H_Hat_tan", "", 100, "" },
            { "H_Hat_brown", "", 100, "" },
            { "H_Hat_grey", "", 100, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 100, "" },
            { "H_Hat_blue", "", 100, "" },
            { "H_Hat_checker", "", 100, "" },
            { "H_Booniehat_tan", "", 100, "" },
            { "H_Booniehat_grn", "", 100, "" },
            { "H_Booniehat_tan", "", 100, "" },
            { "H_EarProtectors_white_F", "", 100, "" },
            { "H_EarProtectors_yellow_F", "", 100, "" },
            { "H_EarProtectors_black_F", "", 100, "" },
            { "H_EarProtectors_red_F", "", 100, "" },
            { "H_EarProtectors_orange", "", 100, "" },
            { "H_Construction_earprot_white_F", "", 100, "" },
            { "H_Construction_earprot_red_F", "", 100, "" },
            { "H_Construction_earprot_black_F", "", 100, "" },
            { "H_Construction_earprot_yellow_F", "", 100, "" },
            { "H_PASGT_neckprot_bleu_press_F", "", 100, "" },
            { "H_Helmet_Skate", "", 100, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 100, "" },
            { "G_Shades_Blue", "", 100, "" },
            { "G_Shades_Green", "", 100, "" },
            { "G_Shades_Red", "", 100, "" },
            { "G_Sport_Blackred", "", 100, "" },
            { "G_Sport_BlackWhite", "", 100, "" },
            { "G_Sport_Blackyellow", "", 100, "" },
            { "G_Sport_Checkered", "", 100, "" },
            { "G_Sport_Greenblack", "", 100, "" },
            { "G_Sport_Red", "", 100, "" },
            { "G_Lowprofile", "", 100, "" },
            { "G_Squares", "", 100, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 100, "" },
            { "G_Lady_Mirror", "", 100, "" },
            { "G_Lady_Dark", "", 100, "" },
            { "G_Lady_Blue", "", 100, "" },
            { "G_EyeProtectors_F", "", 100, "" },
            { "G_Respirator_white_F", "", 100, "" },
            { "G_Respirator_blue_F", "", 100, "" },
            { "G_Respirator_yellow_F", "", 100, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Press_F", "", 100, "" },
            { "V_Safety_blue_F", "", 100, "" },
            { "V_Safety_yellow_F", "", 100, "" },
            { "V_Safety_orange", "", 10000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" },
            { "B_Bergen_mcamo_F", "", 12000, "" },
            { "B_Bergen_dgtl_F", "", 12000, "" },
            { "B_Bergen_hex_F", "", 12000, "" },
            { "B_Bergen_tna_F", "", 12000, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", "Uniforme Recrue", 0, "" },
            { "U_B_CTRG_1", "Uniforme Gendarme", 0, "call life_coplevel >= 2" },
            { "U_B_GEN_Soldier_F", "Uniforme Haut-Gradé", 0, "call life_coplevel >= 5" },
            { "U_B_GEN_Commander_F", "Tenue opération", 0, "call life_coplevel >= 2" },
            { "U_B_CTRG_3", "Tenue GIGN", 0, "call life_coplevel >= 4" },
            { "U_O_Wetsuit", "Plongée", 0, "call life_coplevel >= 1" },
            { "U_B_Wetsuit", "Plongée", 0, "call life_coplevel >= 1" },
            { "U_B_survival_uniform", "", 0, "call life_coplevel >= 5 || license_cop_GIGN" },
            { "U_O_FullGhillie_ard", "", 0, "license_cop_TE" },//guillie te
            { "U_O_T_FullGhillie_tna_F", "", 0, "license_cop_TE" },//guillie te
            { "U_B_T_FullGhillie_tna_F", "", 0, "license_cop_TE" },//guillie te
            { "U_O_FullGhillie_lsh", "", 0, "license_cop_TE" },//guillie te
            { "U_O_FullGhillie_sard", "", 0, "license_cop_TE" },//guillie te
            { "U_O_T_Sniper_F", "", 0, "license_cop_TE"},//guillie te
            { "U_B_T_Sniper_F", "", 0, "license_cop_TE" },//guillie te
            { "U_I_GhillieSuit", "", 0, "license_cop_TE" },//guillie te
            { "U_O_GhillieSuit", "", 0, "license_cop_TE" },//guillie te
            { "U_Competitor", "Uniforme civil", 0, "call life_coplevel >= 5" },
            { "U_Competitor", "Uniforme civil", 0, "call life_coplevel >= 6 || license_cop_GIGN" },
            { "U_B_PilotCoveralls", "", 0, "license_cop_UIA" },//tenue uia
            { "U_O_PilotCoveralls", "", 0, "license_cop_UIA" },//tenue uia
            { "U_C_Poor_1", "Uniforme civil", 0, "call life_coplevel >= 5" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 0, "" },
            { "H_HelmetB_black", "Casque d'opération", 0, "" },
            { "H_HelmetSpecB_blk", "Casque", 0, "call life_coplevel >= 3" },
            { "H_Watchcap_blk", "Bonnet", 0, "call life_coplevel >= 4" },
            { "H_Beret_blk", "", 0, "call life_coplevel >= 4" },
            { "H_Cap_headphones", "", 0, "" },
            { "H_Beret_Colonel", "Beret Capitaine", 0, "call life_coplevel >= 6" },
            { "H_Beret_02", "Beret Major", 0, "call life_coplevel >= 6" },
            { "H_Beret_blk_POLICE", "", 0, "call life_coplevel >= 7" },
            { "H_MilCap_blue", "", 0, "call life_coplevel >= 1" },
            { "H_MilCap_gen_F", "", 0, "call life_coplevel >= 2" },
            { "H_Cap_blk", "", 0, "call life_coplevel >= 3" },
            { "H_Beret_EAF_01_F", "", 0, "call life_coplevel >= 5" },
            { "H_Beret_gen_F", "", 0, "call life_coplevel >= 7" },
            { "H_Hat_Safari_sand_F", "", 0, "call life_coplevel >= 7" },
            { "H_PilotHelmetFighter_B", "", 0, "license_cop_UIA" },//casque uia
            { "H_CrewHelmetHeli_B", "", 0, "license_cop_UIA" },//casque uia
            { "H_Tank_black_F", "", 0, "license_cop_UIA" },//casque uia
            { "H_PilotHelmetHeli_B", "", 0, "license_cop_UIA" },//casque uia
            { "H_Booniehat_khk_hs", "Chapeau Général", 0, "call life_coplevel >= 7" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_AirPurifyingRespirator_02_black_F", "", 0, "" },
            { "G_Shades_Black", "", 0, "" },
            { "G_Shades_Blue", "", 0, "" },
            { "G_Sport_Blackred", "", 0, "" },
            { "G_Sport_Checkered", "", 0, "" },
            { "G_Sport_Blackyellow", "", 0, "" },
            { "G_Sport_BlackWhite", "", 0, "" },
            { "G_Squares", "", 0, "" },
            { "G_Aviator", "", 0, "" },
            { "G_Tactical_Clear", "", 0, "" },
            { "G_Tactical_Black", "", 0, "" },
            { "G_Lady_Mirror", "", 0, "" },
            { "G_Lady_Dark", "", 0, "" },
            { "G_Lady_Blue", "", 0, "" },
            { "G_Lowprofile", "", 0, "" },
            { "G_Combat", "", 0, "" },
            { "G_Balaclava_blk", "", 0, "" },
            { "G_Balaclava_lowprofile", "", 0, "" },
            { "G_Balaclava_TI_blk_F", "", 0, "" },
            { "G_Balaclava_TI_G_blk_F", "", 0, "" },
            { "G_Balaclava_TI_G_tna_F", "", 0, "" },
            { "G_Blindfold_01_black_F", "", 0, "" },
            { "G_Diving", "Plongée", 0, "" },
            { "G_RegulatorMask_F", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
            { "V_PlateCarrier1_blk", "", 1000, "call life_coplevel >= 1" },
            { "V_PlateCarrier2_blk", "", 5000, "call life_coplevel >= 2" },
            { "V_Chestrig_blk", "", 2000, "call life_coplevel >= 2" },
            { "V_RebreatherB", "", 2000, "call life_coplevel >= 1" },
            { "V_PlateCarrierSpec_blk", "", 50000, "license_cop_GIGN || call life_coplevel >= 7" }, //onlygign(p5)
            { "V_Safety_Orange_F", "TIG", 1250, "call life_coplevel >= 1" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_TacticalPack_blk", "Sac Gendarmerie", 100, "" },
            { "B_Kitbag_mcamo", "Gros sac Gendarmerie", 100, "" },
            { "B_AssaultPack_blk", "Sac GIGN", 100, "" },
            { "B_AssaultPack_Kerry", "", 100, "" },
            { "B_Parachute", "Parachute",100, "" },
            { "B_UAV_01_backpack_F", "Drone",100, "call life_coplevel >= 5" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class ura_clothing {
        title = "Tenues anti radioactive";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_CBRN_Suit_01_White_F", "", 20000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_RegulatorMask_F", "", 1000, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Plain_crystal_F", "", 15000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_dive {
        title = "Habits de plongée medic";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", "Uniforme recrue", 1000, "" },
            { "U_B_CombatUniform_mcam_vest", "Uniforme medic", 2000, "call life_mediclevel >= 2" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" },
            { "H_Cap_marshal", "", 10, "" },
            { "H_Beret_Colonel", "", 10, "call life_mediclevel >= 5" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" },
            { "G_Respirator_Yellow_F", "", 1250, "" },
            { "G_Squares", "", 10, "" },
            { "G_Diving", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "V_Safety_yellow_F", "", 200, "" },
            { "V_DeckCrew_red_F", "", 200, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Carryall_khk", "Sac invisible", 1000, "" }
        };
    };

    class bandit {
        title = "Tenues bandit";
        conditions = "license_civ_bandit";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_B_T_Soldier_F", "", 50000, "" },
            { "U_I_C_Soldier_Bandit_1_F", "", 10000, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 10000, "" },
            { "U_I_C_Soldier_Bandit_3_F", "", 10000, "" },
            { "U_I_C_Soldier_Bandit_4_F", "", 10000, "" },
            { "U_I_C_Soldier_Bandit_5_F", "", 10000, "" },
            { "U_I_C_Soldier_Camo_F", "", 10000, "" },
            { "U_B_CBRN_Suit_01_Wdl_F", "", 15340, "" },
            { "U_B_CBRN_Suit_01_MTP_F", "", 15340, "" },
            { "U_B_CBRN_Suit_01_Tropic_F", "", 15340, "" },
            { "U_B_CBRN_Suit_01_Wdl_F", "", 15340, "" },
            { "U_I_HeliPilotCoveralls", "", 15340, "" },
            { "U_B_HeliPilotCoveralls", "", 15340, "" },
            { "U_O_T_Soldier_F", "", 15340, "" },
            { "U_BG_leader", "", 15340, "" },
            { "U_I_E_Uniform_01_F", "", 15340, "" },
            { "U_I_E_Uniform_01_tanktop_F", "", 15340, "" },
            { "U_I_E_CombatUniform_mcam_wdl_f", "", 15340, "" },
            { "U_I_E_CombatUniform_tshirt_mcam_wdL_f", "", 15340, "" },
            { "U_I_E_Uniform_01_shorteleveF", "", 15340, "" },
            { "U_I_E_Uniform_01_officer_F", "", 15340, "" },
            { "U_I_E_Uniform_01_sweater_F", "", 15340, "" },
            { "U_IG_Guerilla1_1", "", 15340, "" },
            { "U_BG_Guerilla1_2_F", "", 15340, "" },
            { "U_I_C_Soldier_Para_3_F", "", 15340, "" },
            { "U_I_C_Soldier_Para_4_F", "", 15340, "" },
            { "U_I_C_Soldier_Para_5_F", "", 15340, "" },
            { "U_I_C_Soldier_Para_1_F", "", 15340, "" },
            { "U_I_C_Soldier_Para_2_F", "", 15340, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_Beret_blk", "", 2500, "" },
            { "H_Watchcap_blk", "", 2500, "" },
            { "H_HelmetSpecO_ocamo", "", 2500, "" },
            { "H_HelmetSpecO_blk", "", 2500, "" },
            { "H_HelmetCrew_B", "", 2500, "" },
            { "H_HelmetCrew_O", "", 2500, "" },
            { "H_HelmetCrew_I", "", 2500, "" },
            { "H_PilotHelmetHeli_B", "", 2500, "" },
            { "H_Tank_black_F", "", 2500, "" },
            { "H_HelmetB_camo", "", 2500, "" },
            { "H_HelmetB_desert", "", 2500, "" },
            { "H_HelmetB_plain_wdl", "", 2500, "" },
            { "H_HelmetB_grass", "", 2500, "" },
            { "H_HelmetB_tna_F", "", 2500, "" },
            { "H_HelmetHBK_chops_F", "", 2500, "" },
            { "H_Hat_Tinfoil_F", "", 2500, "" },
            { "H_Shemag_khk", "", 2500, "" },
            { "H_Shemag_tan", "", 2500, "" },
            { "H_Shemag_olive", "", 2500, "" },
            { "H_HeadBandage_bloody_F", "", 2500, "" },
            { "H_HeadBandage_stained_F", "", 2500, "" },
            { "H_HeadBandage_clean_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" },
            { "G_AirPurifyingRespirator_02_olive_F", "", 2500, "" },
            { "G_AirPurifyingRespirator_02_sand_F", "", 2500, "" },
            { "G_Blindfold_01_white_F", "", 2500, "" },
            { "G_Blindfold_01_black_F", "", 2500, "" },
            { "G_Balaclava_Tl_G_blk_F", "", 2500, "" },
            { "G_Balaclava_Tl_tna_F", "", 2500, "" },
            { "G_Balaclava_Tl_G_tna_F", "", 2500, "" },
            { "G_RegulatorMask_F", "", 2500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 10000, "" },
            { "V_TacChestrig_grn_F", "", 10000, "" }, //Apex DLC
            { "V_HarnessO_brn", "", 10000, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacVest_brn", "", 12500, "" },
            { "V_TacVest_oli", "", 12500, "" },
            { "V_TacVest_blk", "", 12500, "" },
            { "V_TacVest_camo", "", 12500, "" },
            { "V_TacVestIR_blk", "", 12500, "" },
            { "V_TacVestCamo_khk", "", 12500, "" },
            { "V_PlateCarrier1_tna_F", "", 15000, "" },
            { "V_PlateCarrier1_rgr_noflag_F", "", 15000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_I_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 10000, "" }, //Apex DLC
            { "U_B_FullGhillie_lsh", "", 50000, "" },
            { "U_B_FullGhillie_sard", "", 50000, "" },
            { "U_B_FullGhillie_ard", "", 50000, "" },
            { "U_B_CBRN_Suit_01_Wdl_F", "", 15340, "" },
            { "U_B_CBRN_Suit_01_MTP_F", "", 15340, "" },
            { "U_B_CBRN_Suit_01_Tropic_F", "", 15340, "" },
            { "U_B_CBRN_Suit_01_Wdl_F", "", 15340, "" },
            { "U_I_HeliPilotCoveralls", "", 15340, "" },
            { "U_B_HeliPilotCoveralls", "", 15340, "" },
            { "U_O_T_Soldier_F", "", 15340, "" },
            { "U_O_CombatUniform_ocamo", "", 15340, "" },
            { "U_O_CombatUniform_oucamo", "", 15340, "" },
            { "U_B_CombatUniform_mcam", "", 15340, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 15340, "" },
            { "U_I_CombatUniform", "", 15340, "" },
            { "U_I_CombatUniform_shortsleeve", "", 15340, "" },
            { "U_I_CombatUniform_tshirt", "", 15340, "" },
            { "U_BG_leader", "", 15340, "" },
            { "U_I_E_Uniform_01_F", "", 15340, "" },
            { "U_I_E_Uniform_01_tanktop_F", "", 15340, "" },
            { "U_I_E_CombatUniform_mcam_wdl_f", "", 15340, "" },
            { "U_I_E_CombatUniform_tshirt_mcam_wdL_f", "", 15340, "" },
            { "U_I_E_Uniform_01_shorteleveF", "", 15340, "" },
            { "U_I_E_Uniform_01_officer_F", "", 15340, "" },
            { "U_I_E_Uniform_01_sweater_F", "", 15340, "" },
            { "U_IG_Guerilla1_1", "", 15340, "" },
            { "U_BG_Guerilla1_2_F", "", 15340, "" },
            { "U_I_C_Soldier_Para_3_F", "", 15340, "" },
            { "U_I_C_Soldier_Para_4_F", "", 15340, "" },
            { "U_I_C_Soldier_Para_5_F", "", 15340, "" },
            { "U_I_C_Soldier_Para_1_F", "", 15340, "" },
            { "U_I_C_Soldier_Para_2_F", "", 15340, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_Cap_blk", "", 100, "" },
            { "H_Cap_blk_CMMG", "", 100, "" },
            { "H_Cap_oli", "", 100, "" },
            { "H_Cap_tan", "", 100, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_Beret_blk", "", 2500, "" },
            { "H_Watchcap_blk", "", 2500, "" },
            { "H_HelmetSpecO_ocamo", "", 2500, "" },
            { "H_HelmetSpecO_blk", "", 2500, "" },
            { "H_HelmetCrew_B", "", 2500, "" },
            { "H_HelmetCrew_O", "", 2500, "" },
            { "H_HelmetCrew_I", "", 2500, "" },
            { "H_PilotHelmetHeli_B", "", 2500, "" },
            { "H_Tank_black_F", "", 2500, "" },
            { "H_HelmetB_camo", "", 2500, "" },
            { "H_HelmetB_desert", "", 2500, "" },
            { "H_HelmetB_plain_wdl", "", 2500, "" },
            { "H_HelmetB_grass", "", 2500, "" },
            { "H_HelmetB_tna_F", "", 2500, "" },
            { "H_HelmetSpecB_paint2", "", 2500, "" },
            { "H_HelmetSpecB_paint1", "", 2500, "" },
            { "H_HelmetHBK_chops_F", "", 2500, "" },
            { "H_Hat_Tinfoil_F", "", 2500, "" },
            { "H_Shemag_khk", "", 2500, "" },
            { "H_Shemag_tan", "", 2500, "" },
            { "H_Shemag_olive", "", 2500, "" },
            { "H_HeadBandage_bloody_F", "", 2500, "" },
            { "H_HeadBandage_stained_F", "", 2500, "" },
            { "H_HeadBandage_clean_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" },
            { "G_AirPurifyingRespirator_02_black_F", "", 2500, "" },
            { "G_AirPurifyingRespirator_02_olive_F", "", 2500, "" },
            { "G_AirPurifyingRespirator_02_sand_F", "", 2500, "" },
            { "G_Blindfold_01_white_F", "", 2500, "" },
            { "G_Blindfold_01_black_F", "", 2500, "" },
            { "G_Balaclava_Tl_G_blk_F", "", 2500, "" },
            { "G_Balaclava_Tl_tna_F", "", 2500, "" },
            { "G_Balaclava_Tl_G_tna_F", "", 2500, "" },
            { "G_RegulatorMask_F", "", 2500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 10000, "" },
            { "V_TacChestrig_grn_F", "", 10000, "" }, //Apex DLC
            { "V_HarnessO_brn", "", 10000, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacVest_brn", "", 12500, "" },
            { "V_TacVest_oli", "", 12500, "" },
            { "V_TacVest_blk", "", 12500, "" },
            { "V_TacVest_camo", "", 12500, "" },
            { "V_TacVestIR_blk", "", 12500, "" },
            { "V_TacVestCamo_khk", "", 12500, "" },
            { "V_PlateCarrier1_tna_F", "", 15000, "" },
            { "V_PlateCarrier1_rgr_noflag_F", "", 15000, "" },
            { "V_PlateCarrier2_tna_F", "", 30000, "" },
            { "V_PlateCarrier2_rgr_noflag_F", "", 30000, "" },
            { "V_PlateCarrierL_CTRG", "", 30000, "" },
            { "V_PlateCarrierH_CTRG", "", 30000, "" },
            { "V_PlateCarrier2_rgr", "", 30000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Bergen_mcamo_F", "", 12000, "" },
            { "B_Bergen_dgtl_F", "", 12000, "" },
            { "B_Bergen_hex_F", "", 12000, "" },
            { "B_Bergen_tna_F", "", 12000, "" }
        };
    };

    class cama {
        title = "STR_Shops_C_Cama";
        conditions = "license_civ_cama";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_CombatUniform_mcam", "Tenue de Combat", 10000, "" },
            { "U_I_pilotCoveralls", "Tenue de Pilote", 10000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_gry", "", 650, "" },
            { "H_Cap_blk", "", 100, "" },
            { "H_Cap_blk_CMMG", "", 100, "" },
            { "H_Beret_blk", "", 2500, "" },
            { "H_Watchcap_blk", "", 2500, "" },
            { "H_HelmetSpecO_blk", "", 2500, "" },
            { "H_PilotHelmetHeli_B", "", 2500, "" },
            { "H_HelmetB_light_black", "", 2500, "" },
            { "H_CrewHelmetHeli_B", "", 2500, "" },
            { "H_HelmetB_black", "", 2500, "" },
            { "H_HelmetB_plain_blk", "", 2500, "" },
            { "H_HelmetSpecB_blk", "", 2500, "" },
            { "H_TurbanO_blk", "", 2500, "" },
            { "H_EarProtectors_black_F", "", 500, "" },
            { "H_EarProtectors_yellow_F", "", 500, "" },
            { "H_Tank_black_F", "", 2500, "" },
            { "H_PASGT_basic_black_F", "", 2500, "" },
            { "H_Hat_Safari_sand_F", "", 2500, "" },
            { "H_StrawHat", "", 2500, "" },
            { "H_Hat_Tinfoil_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_AirPurifyingRespirator_02_black_F", "", 20, "" },
            { "G_Balaclava_blk", "", 20, "" },
            { "G_Bandanna_aviator", "", 25, "" },
            { "G_Bandanna_blk", "", 25, "" },
            { "G_Bandanna_beast", "", 25, "" },
            { "G_Bandanna_shades", "", 25, "" },
            { "G_Bandanna_sport", "", 25, "" },
            { "G_Blindfold_01_black_F", "", 25, "" },
            { "G_Balaclava_TI_blk_F", "", 25, "" },
            { "G_Balaclava_TI_G_blk_F", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Shades_Blue", "", 25, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Shades_Red", "", 25, "" },
            { "G_Shades_Green", "", 25, "" },
            { "G_Squares_Tinted", "", 25, "" },
            { "G_Tactical_Black", "", 25, "" },
            { "G_Lowprofile", "", 25, "" },
            { "G_Aviator", "", 25, "" },
            { "G_Combat", "", 25, "" },
            { "G_Spectacles_Tinted", "", 25, "" },
            { "G_WirelessEarpiece_F", "", 25, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_TacVestIR_blk", "", 7500, "" },
            { "V_PlateCarrier1_blk", "", 15000, "" },
            { "V_PlateCarrier2_blk", "", 20000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_ViperHarness_blk_F", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_TacticalPack_blk", "", 2000, "" },
            { "B_FieldPack_blk", "", 5000, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};