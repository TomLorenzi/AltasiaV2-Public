waitUntil {!(isNull (findDisplay 46))};
disableSerialization;




_rscLayer = "osefStatusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["osefStatusBar","PLAIN"];
systemChat format["Altasia", _rscLayer];




[] spawn {
    sleep 5;
    _counter = 360;
    _timeSinceLastUpdate = 0;
    while {true} do
    {
        _counter = _counter - 1;
        ((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetText format["ID: %1 | Habitants: %2 | Cash : %3 | Banque : %4", player getVariable ["id_player", 0], count allPlayers, [life_cash] call life_fnc_numberText, [life_atmbank] call life_fnc_numberText, _counter];
        sleep 5;
    }; 
};