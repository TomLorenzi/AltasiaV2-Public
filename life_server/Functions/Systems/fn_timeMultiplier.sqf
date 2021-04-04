// Credits to // @Liliannismo33 - elyvion.com // @Barette_ // @Florian Digate
// Merci de laisser les crédits :)

// Ici la configuration du script
_timeCheck = 300; // Tout les combien de temps il check l'heure
_nightHour = 20; // Heure de départ de la nuit
_dayHour = 5; // Heure de départ de la journée

_speedTimeDay = 10; // Vitesse de défilement de la journée (De 0.1 à 120)
_speedTimeNight = 80;  // Vitesse de défilement de la nuit (De 0.1 à 120)

// =======================

while {true} do {

    // Partie Nuit
    if ((daytime > _nightHour || daytime < _dayHour) && timeMultiplier != _speedTimeNight) then {
        setTimeMultiplier _speedTimeNight;
    };

    // Partie Jour
    if ((daytime <= _nightHour && daytime >= _dayHour) && timeMultiplier != _speedTimeDay) then {
        setTimeMultiplier _speedTimeDay;
    };

sleep _timeCheck;
};