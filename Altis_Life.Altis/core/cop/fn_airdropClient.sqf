if(count _this == 1) then {
	_obj_main = (_this select 0);
	_obj_main addAction ["<t color='#fc0303'>Seize Airdrop</t>", TON_fnc_airdropClient, (_this select 0), 1.5, true, true, "", "playerSide == west && isNull objectParent player && !life_seizingAirdrop", 5];
} else {
	if(life_numSeizeAttempted > 2) exitWith {hint "Veuillez attendre avant de saisir à nouveau...";};
	//[3,"<t color='#ff2222'><t size='2.2'><t align='center'>Airdrop<br/><t color='#FFC966'><t align='center'><t size='1.2'>The Altis Police Department is attempting to confiscate the contents of the Airdrop! You have 2 minutes to stop them.",false,[]] remoteExec["OEC_fnc_broadcast",-2,false];
	life_seizingAirdrop = true;

[_this select 3] spawn{
	disableSerialization;
	_title = "Confiscating Airdrop Contents";
	5 cutRsc["life_progress","PLAIN DOWN"];
	_ui = uiNamespace getVariable "life_progress";
	_progressBar = _ui displayCtrl 38201;
	_titleText = _ui displayCtrl 38202;
	_titleText ctrlSetText format["%2 (1%1)...","%",_title];
	_progressBar progressSetPosition 0.01;
	_cP = 0.01;
	_cpRate = 0.00128;
	_exit = false;

	while {true} do {
		uiSleep 0.26;
		if(isNull _ui) then {
			5 cutRsc ["life_progress","PLAIN DOWN"];
			_ui = uiNamespace getVariable "life_progress";
			_progressBar = _ui displayCtrl 38201;
			_titleText = _ui displayCtrl 38202;
		};
		_cP = _cP + _cpRate;
		_progressBar progressSetPosition _cP;
		_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
		if (_cP >= 1) exitWith {};
	  if (!(isNull objectParent player) || player getVariable["restrained",false] || !alive player || !isNull ((player getVariable["tazedBy",[objNull,0]]) select 0)) exitWith {
	  	_exit = true;
	  };
	  if (player distance (_this select 0) > 10) exitWith {
	  	_exit = true;
	  };
	};
	5 cutText["","PLAIN DOWN"];

	if(_exit) exitWith {
		life_seizingAirdrop = false;
		life_numSeizeAttempted = life_numSeizeAttempted + 1;
		if(life_numSeizeAttempted > 2) then {
			uiSleep 60;
			life_numSeizeAttempted = 0;
		};
	};

	life_numSeizeAttempted = 0;
	[player,"seized",(_this select 0)] remoteExec ["TON_fnc_airdropServer",2];

	_contents = weaponCargo (_this select 0) + magazineCargo (_this select 0) + itemCargo (_this select 0);
	_total = 0;
	_item = "";

	/*{
		_item = _x;
		{
			if(_item isEqualTo (_x select 0)) then {
				_total = _total + (_x select 1);
			};
		} forEach oev_conqGear;
	} forEach _contents;*/

	_total = 10;
	_total = _total / 2.0;
	if(_total > 2000000) then {
		_total = 2000000;
	};

	_nearCops = [];
	{
		if(isPlayer _x && side _x == west) then {
			_nearCops pushBack _x;
		};
	} forEach ((getPos player) nearEntities["Man",150]);

	//{
	//	_x setVariable	
	//} forEach _nearCops;

	};
};
