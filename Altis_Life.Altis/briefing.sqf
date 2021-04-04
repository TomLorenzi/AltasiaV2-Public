waitUntil {!isServer && {!isNull player} && {player isEqualTo player}};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["credits","Credits"];
//player createDiarySubject ["changelog","Change Log"];
//player createDiarySubject ["serverrules","General Rules"];
//player createDiarySubject ["policerules","Police Procedures/Rules"];
//player createDiarySubject ["safezones","Safe Zones (No Killing)"];
//player createDiarySubject ["civrules","Civilian Rules"];
//player createDiarySubject ["illegalitems","Illegal Activity"];
//player createDiarySubject ["gangrules","Gang Rules"];
//player createDiarySubject ["terrorrules","Terrorism Rules"];
player createDiarySubject ["controls","Controles"];

/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>
                "
        ]
    ];
*/

    player createDiaryRecord ["credits",
        [
            "AsYetUntitled",
                "
AsYetUntitled (formerly ArmaLife) is a GitHub project which aims to update and keep adding new features to the original 'Altis Life RPG' by Tonic.<br/><br/>
                "
        ]
    ];

// Controls Section

    player createDiaryRecord ["controls",
        [
            "Police et medic",
                "
F: Sirène véhicule.<br/>
L: Radar de vitesse (avec le p07 en main).<br/>
Left Shift + L: Activer le gyrophare.<br/>
Left Shift + R: Mettre les menottes.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "Controles civil",
                "
Left Shift + G: Assomer<br/>
Spacebar: Placer le conteuneur de stockage.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "General",
                "
Y: Ouvrir le téléphone.<br/>
U: Ouvrir / fermer maison et véhicules.<br/>
T: Ouvrir l'inventaire item.<br/>
Left Shift + B: Mettre les mains sur la tête.<br/>
Left Windows: Utiliser.<br/>
Left Shift + H: Mettre l'arme dans le dos.<br/>
Left Ctrl + H: Reprendre l'arme en main.<br/>
Shift + Spacebar: Sauter.<br/>
Left Shift + O: Bouchons d'oreilles.<br/><br/>
                "
        ]
    ];
