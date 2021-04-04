class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_Offroad_01_Covered_F", "" },
            { "C_Tractor_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_transport_F", ""},
            { "C_Offroad_02_unarmed_F", "" },
            { "C_Van_02_vehicle_F", ""}
        };
    };

    class dhub {
        side = "civ";
        conditions = "license_civ_diamondHub";
        vehicles[] = {
            { "O_Truck_03_repair_F", ""}
        };
    };

    class oxyscrap {
        side = "civ";
        conditions = "license_civ_OxyScrap";
        vehicles[] = {
            { "B_Truck_01_Repair_F", ""}
        };
    };

    class sideshop {
        side = "civ";
        conditions = "license_civ_ordi";
        vehicles[] = {
            { "O_Truck_03_repair_F", ""},
            { "B_Truck_01_Repair_F", ""},
            { "C_Hatchback_01_sport_F", ""}
        };
    };

    class cama_car {
        side = "civ";
        conditions = "license_civ_cama";
        vehicles[] = {
            { "C_Hatchback_01_sport_F", ""},
            { "C_SUV_01_F", ""},
            { "O_T_LSV_02_unarmed_F", ""},
            { "I_MRAP_03_F", ""}
        };
    };

    class cama_air {
        side = "civ";
        conditions = "license_civ_cama";
        vehicles[] = {
            { "B_Heli_Light_01_F", ""},
            { "I_Heli_light_03_F", ""}
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Van_01_box_F", "" },
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
            { "B_Truck_01_ammo_F", "" },
            { "O_Truck_03_ammo_F", "" },
            { "C_Van_01_fuel_F", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "C_Plane_Civil_01_F", "" },
            { "C_Plane_Civil_01_racing_F", "" },
            { "I_Heli_Transport_02_F", "" }
        };
    };

    class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "C_Scooter_Transport_01_F", "" } //Apex DLC
        };
    };

    class bandit_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "B_G_Offroad_01_armed_F", "" },
            { "O_T_LSV_02_unarmed_F", "" } //Apex DLC
        };
    };

    class bandit_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_stripped_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_G_Offroad_01_armed_F", "" },
            { "I_MRAP_03_F", "" },
            { "O_T_LSV_02_unarmed_F", "" } //Apex DLC
        };
    };

    class reb_air {
        side = "civ";
        conditions = "license_civ_rebel";
        vehicles[] = {
            { "B_Heli_Light_01_stripped_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "I_Heli_light_03_unarmed_F", ""},
            { "I_Heli_light_03_F", ""},
            { "B_Heli_Transport_03_unarmed_F", ""},
            { "O_Heli_Transport_04_F", ""},
            { "O_Heli_Transport_04_bench_F", ""}
        };
    }

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Van_02_medevac_F", "" },
            { "B_MRAP_01_F", "call life_mediclevel >= 2" },
            { "C_Hatchback_01_sport_F", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "I_Heli_light_03_unarmed_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Offroad_02_unarmed_F", "" },
            { "B_T_LSV_01_unarmed_F", "call life_coplevel >= 2" },
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 3" },
            { "B_GEN_Van_02_transport_F", "call life_coplevel >= 2"},
            { "B_MRAP_01_F", "call life_coplevel >= 2" },
            { "I_MRAP_03_F", "call life_coplevel >= 4 || license_cop_GIGN" },
            { "O_Truck_03_ammo_F", "call life_coplevel >= 4" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "I_Heli_light_03_unarmed_F", "call life_coplevel >= 3" },
            { "I_Heli_light_03_F", "call life_coplevel >= 4" },
            { "B_Heli_Transport_03_unarmed_F", "call life_coplevel >= 4" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 5" },
            { "O_Heli_Light_02_unarmed_F", "call life_coplevel >= 5" },
            { "B_T_VTOL_01_vehicle_F", "call life_coplevel >= 4" },
            { "B_T_VTOL_01_infantry_F", "call life_coplevel >= 4" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class C_Van_02_medevac_F {
        vItemSpace = 100;
        conditions = "";
        price = 200000;
        textures[] = {
            { "Pompier", "med", {
                "textures\veh\ground\camionnette\Van.jpg"
            }, "" }
        };
    };

    class B_T_VTOL_01_infantry_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\veh\air\blackfish\bf0.jpg",
                "textures\veh\air\blackfish\bf1.jpg",
                "textures\veh\air\blackfish\bf2.jpg",
                "textures\veh\air\blackfish\bf3.jpg"
            }, "" }
        };
    };

    class B_T_VTOL_01_vehicle_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\veh\air\blackfish\bf0.jpg",
                "textures\veh\air\blackfish\bf1.jpg",
                "textures\veh\air\blackfish\bf2.jpg",
                "textures\veh\air\blackfish\bf3.jpg"
            }, "" }
        };
    }

    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 500;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" },
            { "Pompier", "med", {
                "textures\veh\ground\offroad\offroad_pompier.jpg"
            }, "" },
            { "Gendarmerie", "cop", {
                "textures\veh\ground\mb4\mb4Gen.jpg"
            }, "" }
        };
    };

    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 460;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 800000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    class C_Plane_Civil_01_racing_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 50;
        conditions = "";
        price = 200000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" },
            { "Camarilla", "civ", {
                "textures\cama\qillin1.jpg"
            }, "license_civ_cama" }
        };
    };

    class C_Van_01_fuel_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {};
    };

    class O_Heli_Transport_04_F {
        vItemSpace = 200;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 3300000;
        textures[] = {};
    };

    class B_T_LSV_01_unarmed_F {
        vItemSpace = 50;
        conditions = "";
        price = 90000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\veh\ground\prowler\Prowler0_police.jpg",
                "textures\veh\ground\prowler\Prowler1_police.jpg",
                "textures\veh\ground\prowler\Prowler2_police.jpg"
            }, "" }
        };
    };

    class O_Heli_Transport_04_bench_F {
        vItemSpace = 75;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 2400000;
        textures[] = {};
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 200;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 2500000;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\veh\air\ghost\ghostAv.jpg",
                "textures\veh\air\ghost\ghostArr.jpg"
            }, "" }
        };
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "textures\veh\air\ghost\ghostAv.jpg",
                "textures\veh\air\ghost\ghostArr.jpg"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 600;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 1250000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 1000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 1200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 3100000;
        textures[] = {
            { "HEMTT", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 400;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1500000;
        textures[] = {
            { "Gris numérique", "reb", {
                "textures\veh\ground\ifrit\ifrit_grey_front.paa",
                "textures\veh\ground\ifrit\ifrit_grey_back.jpg"
            }, "" },
            { "Lion numérique", "reb", {
                "textures\veh\ground\ifrit\ifrit_lion_front.paa",
                "textures\veh\ground\ifrit\ifrit_lion_back.paa"
            }, "" },
            { "Rouge numérique", "reb", {
                "textures\veh\ground\ifrit\ifrit_red_front.paa",
                "textures\veh\ground\ifrit\ifrit_red_back.jpg"
            }, "" }
         };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Gendarmerie", "cop", {
                "textures\veh\ground\offroad\gen_offroad.jpg"
            }, "" },
            { "Pompier", "med", {
                "textures\veh\ground\offroad\offroad_pompier.jpg"
            }, "" }
        };
    };

    class C_Offroad_01_Covered_F {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Gendarmerie", "cop", {
                "textures\veh\ground\offroad\gen_offroad.jpg"
            }, "" },
            { "Medic", "med", {
                "textures\veh\ground\offroad\offroad_pompier.jpg"
            }, "" }
        };
    };

    class C_Tractor_01_F {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 25000;
        textures[] = {};
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };
    /*
    To edit another information in this classes you can use this exemple.
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
        vItemSpace = 40;
        price = ;
    };

    will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
    */
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Gendarmerie", "cop", {
                "textures\veh\ground\hayon\gen_hatchback.jpg"
            }, "" },
            { "Pompier", "med", {
                "textures\veh\ground\hayon\hayon_pompier.jpg"
            }, "" },
            { "Side-Shop", "civ", {
                "textures\veh\ground\hayon\hayon_sideshop.jpg"
            }, "license_civ_ordi" },
            { "Akatsuki", "civ", {
                "textures\veh\ground\hayon\hayon_akts.jpg"
            }, "call life_donorlevel >= 1" },
            { "Camarilla", "civ", {
                "textures\cama\hatchback1.jpg"
            }, "license_civ_cama" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 500000;
        textures[] = {};
    };

    class B_Truck_01_ammo_F {
        vItemSpace = 750;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 1750000;
        textures[] = {};
    };

    class O_Truck_03_ammo_F {
        vItemSpace = 1500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 4000000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\veh\ground\tempest\tempestgn0.jpg",
                "textures\veh\ground\tempest\tempestgn1.jpg",
                "textures\veh\ground\tempest\tempestgn2.jpg"
            }, "" },
            { "Classique", "civ", {
                    "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
                    "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa"
            }, "" },
            { "Wood", "civ", {
                "textures\veh\ground\tempest\wood0.jpg",
                "textures\veh\ground\tempest\wood1.jpg",
                "textures\veh\ground\tempest\wood2.jpg"
            }, "" },
            { "Gris", "civ", {
                "textures\veh\ground\tempest\gris0.jpg",
                "textures\veh\ground\tempest\gris1.jpg",
                "textures\veh\ground\tempest\gris2.jpg"
            }, "" },
            { "Desert", "civ", {
                "textures\veh\ground\tempest\desert0.jpg",
                "textures\veh\ground\tempest\desert1.jpg",
                "textures\veh\ground\tempest\desert2.jpg"
            }, "" },
            { "Darkgreen", "civ", {
                "textures\veh\ground\tempest\darkgreen0.jpg",
                "textures\veh\ground\tempest\darkgreen1.jpg",
                "textures\veh\ground\tempest\darkgreen2.jpg"
            }, "" }
        };
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" },
            { "Gendarmerie", "cop", {
                "textures\veh\ground\hayon\gen_hatchback.jpg"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Gendarmerie", "cop", {
                "textures\veh\ground\suv\suv_police.jpg"
            }, "" },
            { "Medic", "med", {
                "textures\veh\ground\suv\suv_pompier.jpg"
            }, "" },
            { "Camarilla", "civ", {
                "textures\cama\suv1.jpg"
            }, "license_civ_cama" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 175;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\veh\ground\hunter\hunterpolicealt1.jpg",
                "textures\veh\ground\hunter\hunterpolicealt2.jpg"
            }, "" },
            { "Pompier", "med", {
                "textures\veh\ground\hunter\hunterpompier1.jpg",
                "textures\veh\ground\hunter\hunterpompier2.jpg"
            }, "" }
        };
    };

    class I_MRAP_03_F {
        vItemSpace = 50;
        conditions = "";
        price = 2500000;
        textures[] = {
            { "GIGN", "cop", {
                "textures\veh\ground\strider\stridergign.jpg"
            }, "license_cop_GIGN" },
            { "Gendarmerie", "cop", {
                "textures\veh\ground\strider\stridergn.jpg"
            }, "" },
            { "Vert", "reb", {
                "\A3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa"
            }, "" },
            { "Vert donateur", "reb", {
                "textures\veh\ground\strider\striderdonavert.jpg"
            }, "call life_donorlevel >= 1" },
            { "Gris donateur", "reb", {
                "textures\veh\ground\strider\stridergrisorange.jpg"
            }, "call life_donorlevel >= 1" },
            { "Gris numérique", "reb", {
                "textures\veh\ground\strider\stridernumerique.jpg"
            }, "call life_donorlevel >= 1" },
            { "Orange donateur", "reb", {
                "textures\veh\ground\strider\striderorange.jpg"
            }, "call life_donorlevel >= 1" },
            { "Rouge donateur", "reb", {
                "textures\veh\ground\strider\striderrouge.jpg"
            }, "call life_donorlevel >= 1" },
            { "Violet donateur", "reb", {
                "textures\veh\ground\strider\striderviolet.jpg"
            }, "call life_donorlevel >= 1" },
            { "Akatsuki", "reb", {
                "textures\veh\ground\strider\stridakts.jpg"
            }, "call life_donorlevel >= 3" },
            { "DBZ", "reb", {
                "textures\veh\ground\strider\striddbz.jpg"
            }, "call life_donorlevel >= 3" },
            { "Strider donut", "reb", {
                "textures\veh\ground\strider\striddonut.jpg"
            }, "call life_donorlevel >= 3" },
                        { "Camarilla", "civ", {
                "textures\cama\strider1.jpg"
            }, "license_civ_cama" }
        };
    };

    class B_Heli_Light_01_stripped_F {
        vItemSpace = 20;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\veh\air\h900\H-900_Gen.jpg"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "Pompier", "med", {
                "textures\veh\air\h900\H-900_MH-9.jpg"
            }, "" },
            { "Camarilla", "civ", {
                "textures\cama\hummingbird1.jpg"
            }, "license_civ_cama" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 500000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" },
            { "Gendarmerie", "cop", {
                "textures\veh\air\orca\orca_police.jpg"
            }, "" },
            { "Pompier", "med", {
                "textures\veh\air\orca\orca_pompier.jpg"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 200;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 150000;
        textures[] = {};
    };

    class I_Heli_light_03_F {
        vItemSpace = 10;
        conditions = "";
        price = 850000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\veh\air\hellcat\hellcat_police.jpg"
            }, "" },
            { "Rebelle", "civ", {
                "\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"
            }, "" },
            { "Camarilla", "civ", {
                "textures\cama\hellcat1.jpg"
            }, "license_civ_cama" }
        };
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 10;
        conditions = "";
        price = 500000;
        textures[] = {
            { "Rebelle", "civ", {
                "\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"
            }, "" },
            { "Gendarmerie", "cop", {
                "textures\veh\air\hellcat\hellcat_police.jpg"
            }, "" },
            { "Pompier", "med", {
                "textures\veh\air\hellcat\hellcat_pompier.jpg"
            }, "" }
        };
    };

    class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 200;
        conditions = "";
        price = 3000000;
        textures[] = {
            { "Basique", "reb", {
                "\a3\air_f_heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_CO.paa",
                "\a3\air_f_heli\Heli_Transport_03\Data\Heli_Transport_03_ext02_CO.paa"
            }, "" },
            { "Gendarmerie", "cop", {
                "textures\veh\air\huron\hurongn0.jpg",
                "textures\veh\air\huron\hurongn1.jpg"
            }, "" }
        };
    };

    class C_Van_02_vehicle_F {
        vItemSpace = 150;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {
            { "Pedobear", "civ", {
                "textures\veh\ground\camionnette\Pedobear.jpg"
            }, "" }
        };
    };

    class B_GEN_Van_02_transport_F {
        vItemSpace = 80;
        conditions = "";
        price = 10000;
        textures[] = {};
    };

    class O_Truck_03_repair_F {
        vItemSpace = 1700;
        conditions = "";
        price = 2500000;
        textures[] = {
            { "DHub", "civ", {
                "textures\veh\ground\tempest\dhub0.jpg",
                "textures\veh\ground\tempest\dhub1.jpg",
                "textures\veh\ground\tempest\dhub2.jpg"
            }, "license_civ_diamondHub" },
            { "Tempest Entreprise", "civ", {
                "a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ammo_co.paa"
            }, "license_civ_ordi" }
        };
    };

    class B_Truck_01_Repair_F {
        vItemSpace = 1700;
        conditions = "";
        price = 2500000;
        textures[] = {
            { "HEMTT Entreprise", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"
            }, "license_civ_ordi" },
            { "Oxy-Scrap", "civ", {
                "textures\veh\ground\hemtt\oxy_Hemttbox0.jpg",
                "textures\veh\ground\hemtt\oxy_Hemttbox1.jpg",
                "textures\veh\ground\hemtt\oxy_Hemttbox2.jpg",
                "textures\veh\ground\hemtt\oxy_Hemttbox3.jpg"
            }, "license_civ_OxyScrap" }
        };
    };
};