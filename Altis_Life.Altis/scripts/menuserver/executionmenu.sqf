/* 
	჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻
	჻჻  
	჻჻  ELYVION | HOLDING - (Anciennement Kreygers | Group)
	჻჻
	჻჻  Description : Execute le Menu
	჻჻
	჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻჻ 
*/ 

enableEnvironment [false, false];

createDialog "menu01";

((uiNamespace getVariable "menu01")displayCtrl 0002) ctrlShow false;
((uiNamespace getVariable "menu01")displayCtrl 0003) ctrlShow false;
((uiNamespace getVariable "menu01")displayCtrl 1002) ctrlShow false;
((uiNamespace getVariable "menu01")displayCtrl 1003) ctrlShow false;

//((uiNamespace getVariable "menu01")displayCtrl 0001) ctrlSetText "textures\BlackBackground.jpg";
//sleep 1;
((uiNamespace getVariable "menu01")displayCtrl 0001) ctrlSetText "";

["videos\altasia.ogv"] call BIS_fnc_playVideo;

((uiNamespace getVariable "menu01")displayCtrl 0001) ctrlSetText "textures\BlackBackground.jpg";

sleep 0.5;

[] spawn {
	((uiNamespace getVariable "menu01")displayCtrl 0003) ctrlSetText "textures\bg.jpg";
};

((uiNamespace getVariable "menu01")displayCtrl 0003) ctrlShow true;
((uiNamespace getVariable "menu01")displayCtrl 0003) ctrlSetFade 1;
((uiNamespace getVariable "menu01")displayCtrl 0003) ctrlCommit 0;
((uiNamespace getVariable "menu01")displayCtrl 0003) ctrlSetFade 0;
((uiNamespace getVariable "menu01")displayCtrl 0003) ctrlCommit 3;

((uiNamespace getVariable "menu01")displayCtrl 1002) ctrlShow true;
((uiNamespace getVariable "menu01")displayCtrl 1002) ctrlSetFade 1;
((uiNamespace getVariable "menu01")displayCtrl 1002) ctrlCommit 0;
((uiNamespace getVariable "menu01")displayCtrl 1002) ctrlSetFade 0;
((uiNamespace getVariable "menu01")displayCtrl 1002) ctrlCommit 3;

((uiNamespace getVariable "menu01")displayCtrl 1003) ctrlShow true;
((uiNamespace getVariable "menu01")displayCtrl 1003) ctrlSetFade 1;
((uiNamespace getVariable "menu01")displayCtrl 1003) ctrlCommit 0;
((uiNamespace getVariable "menu01")displayCtrl 1003) ctrlSetFade 0;
((uiNamespace getVariable "menu01")displayCtrl 1003) ctrlCommit 2;

/*Enter_keyDownEHId = (findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1) == 28) then { [] execVM ""scripts\menuserver\executionmenuscnd.sqf"" }"];*/