/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };

    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 1350;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 1750;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 750;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 1120;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 650;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 450;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 1500;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 500;
    };

    class nos {
        MaterialsReq[] = {{"marijuana",1}};
        MaterialsGive[] = {{"joint",1}};
        Text = "STR_Process_Joint";
        NoLicenseCost = 500;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };

    class wood {
        MaterialsReq[] = {{"wood",1}};
        MaterialsGive[] = {{"paper",1}};
        Text = "STR_Process_Wood";
        NoLicenseCost = 350;
    };

    class paper {
        MaterialsReq[] = {{"paper",1}};
        MaterialsGive[] = {{"fakeMoney",1}};
        Text = "STR_Process_FakeMoney";
        NoLicenseCost = 350;
    };

    class cigarette {
        MaterialsReq[] = {{"tabac",1}};
        MaterialsGive[] = {{"cigarette",1}};
        Text = "STR_Process_Cigarette";
        NoLicenseCost = 350;
    };

    class cigar {
        MaterialsReq[] = {{"tabac",1}};
        MaterialsGive[] = {{"cigar",1}};
        Text = "STR_Process_Cigar";
        NoLicenseCost = 350;
    };

    class uraClean {
        MaterialsReq[] = {{"uraWaste",1}};
        MaterialsGive[] = {{"uraClean",1}};
        Text = "STR_Process_UraClean";
        NoLicenseCost = 350;
    };

    class uraRich {
        MaterialsReq[] = {{"uraClean",1}};
        MaterialsGive[] = {{"uraRich",1}};
        Text = "STR_Process_UraRich";
        NoLicenseCost = 350;
    };

    class uraFinal {
        MaterialsReq[] = {{"uraRich",1}};
        MaterialsGive[] = {{"uraFinal",1}};
        Text = "STR_Process_UraFinal";
        NoLicenseCost = 350;
    };

    class diamondHub {
        MaterialsReq[] = {{"diamond_cut",1}};
        MaterialsGive[] = {{"bague",1}};
        Text = "STR_Process_Bague";
        NoLicenseCost = 350;
    };

    class OxyScrap {
        MaterialsReq[] = {{"copper_refined",1}};
        MaterialsGive[] = {{"tuyau",1}};
        Text = "STR_Process_Tuyau";
        NoLicenseCost = 350;
    };

    class carte_graph {
        MaterialsReq[] = {{"carte_graph_endom",1}};
        MaterialsGive[] = {{"carte_graph",1}};
        Text = "STR_Process_Carte_Graph";
        NoLicenseCost = 350;
    };

    class bitcoin {
        MaterialsReq[] = {{"carte_graph",18}};
        MaterialsGive[] = {{"bitcoin",1}};
        Text = "STR_Process_Bitcoin";
        NoLicenseCost = 350;
    };

    class ordi {
        MaterialsReq[] = {{"carte_graph",1}};
        MaterialsGive[] = {{"ordi",1}};
        Text = "STR_Process_Ordi";
        NoLicenseCost = 350;
    };
};
