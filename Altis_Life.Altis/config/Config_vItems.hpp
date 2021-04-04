/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "axe", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "fuelFull", "peach", "defibrillator" };
    };

    class bandit {
        name = "Marché bandit";
        side = "civ";
        conditions = "license_civ_bandit";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "ziptie", "lockpick", "pickaxe", "axe", "fuelFull", "peach", "boltcutter" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "defibrillator", "tbacon", "ziptie", "lockpick", "pickaxe", "axe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class cama {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_cama";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "defibrillator", "tbacon", "ziptie", "lockpick", "pickaxe", "axe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana", "joint" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_cut", "bague" };
    };

    class oxyscrap {
        name = "STR_Shops_Oxyscrap";
        side = "civ";
        conditions = "";
        items[] = { "tuyau" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class pieces {
        name = "STR_Shops_pieces";
        side = "civ";
        conditions = "";
        items[] = { "piecesde" };
    };

    class labo {
        name = "STR_Shops_labo";
        side = "civ";
        conditions = "";
        items[] = { "produitsC" };
    };

    class collectionneur {
        name = "STR_Shops_colec";
        side = "civ";
        conditions = "";
        items[] = { "reliques" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "fuelFull", "lockpick", "defusekit", "defibrillator" };
    };

    class paperShop {
        name = "STR_Shops_Paper";
        side = "civ";
        conditions = "";
        items[] = { "paper" };
    };

    class cartegraphShop {
        name = "STR_Shops_Carte_Graph";
        side = "civ";
        conditions = "";
        items[] = { "carte_graph", "ordi" };
    };

    class bitcoinShop {
        name = "STR_Shops_Bitcoin";
        side = "civ";
        conditions = "";
        items[] = { "bitcoin" };
    };

    class fakeMoneyShop {
        name = "STR_Shops_FakeMoney";
        side = "civ";
        conditions = "";
        items[] = { "fakeMoney" };
    };

    class cigaretteShop {
        name = "STR_Shops_Cigarette";
        side = "civ";
        conditions = "";
        items[] = { "cigarette" };
    };

    class cigarShop {
        name = "STR_Shops_Cigar";
        side = "civ";
        conditions = "";
        items[] = { "cigar" };
    };

    class uraLegal {
        name = "STR_Shops_UraCivil";
        side = "civ";
        conditions = "";
        items[] = { "uraClean" };
    };

    class uraFinal {
        name = "STR_Shops_UraFinal";
        side = "civ";
        conditions = "";
        items[] = { "uraFinal" };
    };


};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled, other values = added value)
*        drinkable = Item Drinkable (-1 = Disabled, other values = added value)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class ziptie {
        variable = "ziptie";
        displayName = "STR_Item_Ziptie";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 0;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ziptie.paa";
    };

    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class axe {
        variable = "axe";
        displayName = "STR_Item_Axe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_axe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 25;
        buyPrice = 150000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 10000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 10;
        buyPrice = -1;
        sellPrice = 100000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class piecesde {
        variable = "piecesde";
        displayName = "STR_Item_pices";
        weight = 10;
        buyPrice = -1;
        sellPrice = 60000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pieces.paa";
    };

    class produitsC {
        variable = "produitsC";
        displayName = "STR_Item_produitsC";
        weight = 10;
        buyPrice = -1;
        sellPrice = 75000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_chimiques.paa";
    };

    class reliques {
        variable = "reliques";
        displayName = "STR_Item_reliques";
        weight = 8;
        buyPrice = -1;
        sellPrice = 100000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_reliques.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 10;
        buyPrice = 25000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 15000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 5000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 100000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 500000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 4000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1800;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2300;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1200;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1400;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 4200;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class bague {
        variable = "bague";
        displayName = "STR_Item_Bague";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class tuyau {
        variable = "tuyau";
        displayName = "STR_Item_Tuyau";
        weight = 2;
        buyPrice = -1;
        sellPrice = 8000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_tuyau.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 4;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cement.paa";
    };

    //Trésor nul : weight 4/2 | sell : 2500
    //Trésor bien : weight 4/2 | sell : 10000

    //TODO Map integration :
    //Paper, wood, fakeMoney
    //Tabac, cigarette, cigar
    //Ura

    class uraWaste {
        variable = "uraWaste";
        displayName = "STR_Item_UraWaste";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_uraWaste.paa";
    };

    class uraClean {
        variable = "uraClean";
        displayName = "STR_Item_UraClean";
        weight = 4;
        buyPrice = -1;
        sellPrice = 8000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_uraClean.paa";
    };

    class uraRich {
        variable = "uraRich";
        displayName = "STR_Item_UraRich";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_uraRich.paa";
    };

    class uraFinal {
        variable = "uraFinal";
        displayName = "STR_Item_UraFinal";
        weight = 2;
        buyPrice = -1;
        sellPrice = 22000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_uraFinal.paa";
    };

    class tabac {
        variable = "tabac";
        displayName = "STR_Item_Tabac";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class cigarette {
        variable = "cigarette";
        displayName = "STR_Item_Cigarette";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2500;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class cigar {
        variable = "cigar";
        displayName = "STR_Item_Cigar";
        weight = 2;
        buyPrice = -1;
        sellPrice = 6300;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "";
    };

    class wood {
        variable = "wood";
        displayName = "STR_Item_Wood";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_wood.paa";
        processedItem = "paper";
    };

    class paper {
        variable = "paper";
        displayName = "STR_Item_Paper";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3100;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_paper.paa";
        processedItem = "fakeMoney";
    };

    class fakeMoney {
        variable = "fakeMoney";
        displayName = "STR_Item_FakeMoney";
        weight = 2;
        buyPrice = -1;
        sellPrice = 12000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fakeMoney.paa";
    };


    class carte_graph_endom {
        variable = "carte_graph_endom";
        displayName = "STR_Item_CarteGraphEndom";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cartegraph_endom.paa";
    };

    class carte_graph {
        variable = "carte_graph";
        displayName = "STR_Item_CarteGraph";
        weight = 2;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cartegraph.paa";
    };

    class bitcoin {
        variable = "bitcoin";
        displayName = "STR_Item_Bitcoin";
        weight = 2;
        buyPrice = -1;
        sellPrice = 170000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_bitcoin.paa";
    };

    class ordi {
        variable = "ordi";
        displayName = "STR_Item_Ordi";
        weight = 2;
        buyPrice = -1;
        sellPrice = 4100;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ordi.paa";
    };



    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 9500;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = -1;
        sellPrice = 6500;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class joint {
        variable = "joint";
        displayName = "STR_Item_Joint";
        weight = 3;
        buyPrice = -1;
        sellPrice = 12000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_joint.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 8500;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 500;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = 50;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 80;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 80;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = -1;
        illegal = false;
        edible = 80;
        drinkable = -1;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = -1;
        illegal = false;
        edible = 30;
        drinkable = -1;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = -1;
        illegal = false;
        edible = 20;
        drinkable = -1;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        edible = 25;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = -1;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = -1;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 25000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        drinkable = -1;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = -1;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        drinkable = -1;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = -1;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        drinkable = -1;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 0;
        illegal = false;
        edible = 100;
        drinkable = -1;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 0;
        illegal = false;
        edible = 100;
        drinkable = -1;
        icon = "icons\ico_muttonLeg.paa";
    };
};
