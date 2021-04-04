/* 
	჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻
	჻჻  
	჻჻  ELYVION | HOLDING - Modified by Nirawin
	჻჻
	჻჻  Description : Fichier dialog du Main Menu
	჻჻
	჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻ 
*/


class menu01 {
    idd = 66650;
    movingEnable = 0;
    enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['menu01', _this select 0]";
	onUnload = "uiNamespace setVariable ['menu01', objNull]; [""""] call BIS_fnc_playVideo;";
	onDestroy = "uiNamespace setVariable ['menu01', objNull]; [""""] call BIS_fnc_playVideo;";
	
    class controls {
		class BackgroundBlackMenuStart: Life_RscPicture {
            idc = 0001;
            text = "";
            x = 0 * safezoneW + safezoneX;
            y = 0 * safezoneH + safezoneY;
            w = 1 * safezoneW;
            h = 1 * safezoneH;
        };
		
		class WarningTextMenuStart: Life_RscStructuredText {
            colorBackground[] = {0, 0, 0, 0};
            idc = 0002;
			text = "<t font='PuristaBold' align='center' size='1.6' color='#FFFFFF'>AVERTISSEMENTS<br/><br/><t size='1' font='PuristaBold' align='center' color='#045FB4'>Altasia <t color='#FFFFFF' font='PuristaLight'>- UNE PROPRIÉTÉ INTELECTUELLE D'<t font='PuristaBold'>ALTASIA<t font='PuristaLight'>. TOUS DROITS RÉSERVÉS.<br/><br/><br/><br/>Menu créé par OXYUM modifié par Nirawin";
            x = 0 * safezoneW + safezoneX;
            y = 0.35 * safezoneH + safezoneY;
            w = 1 * safezoneW;
            h = 0.4 * safezoneH;
        };
		
		class BackgroundImgMenuStart: Life_RscPicture {
            idc = 0003;
            text = "";
            x = 0 * safezoneW + safezoneX;
            y = 0 * safezoneH + safezoneY;
            w = 1 * safezoneW;
            h = 1 * safezoneH;
        };
		
		class AppuyezPourCommencezTxt: Life_RscStructuredText {
            colorBackground[] = {0, 0, 0, 0};
            idc = 1002;
			text = "<br/><t size='1.3' shadow='0' font='PuristaBold' color='#191919' align='center'>APPUYEZ SUR [<t color='#ff0000'> ECHAP<t color='#191919'> ] POUR CONTINUER</t><br/><br/><t size='0.7' shadow='0' font='PuristaLight' color='#a6a6a6' align='center'><t color='#a6a6a6' size='0.6'>COPYRIGHT - KREYGERS | GROUP [2018]</br> Modified by Nira</t>";
            x = 0 * safezoneW + safezoneX;
            y = 0.6 * safezoneH + safezoneY;
            w = 1 * safezoneW;
            h = 0.4 * safezoneH;
        };
		
		class LogoStart: Life_RscPicture {
            idc = 1003;
            text = "textures\altasiaPAA.paa";
            x = 0.3 * safezoneW + safezoneX;
            y = 0.1 * safezoneH + safezoneY;
            w = 0.4 * safezoneW;
            h = 0.7 * safezoneH;
        };
		
		class CloseBtn: Life_RscButtonMenu {
            colorBackground[] = {0, 0, 0, 0.9};
            idc = -1;
            x = 0.96 * safezoneW + safezoneX;
            y = 0 * safezoneH + safezoneY;
            w = 0.118594 * safezoneW;
            h = 0.01 * safezoneH;
			onButtonClick = "closeDialog 0;";
        };
    };
};
