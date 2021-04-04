/*
    File: init.sqf
    Author:

    Description:

*/
StartProgress = false;
//Any functions needed
StartProgress = true;

0 setOvercast 0;
0 setRain 0;
0 setFog 0;

[] spawn {
	for "_i" from 0 to 1 step 0 do {
		0 setfog 0;
		0 setRain 0;
		0 setOvercast 0;
		sleep 100;
	};  
}; 
