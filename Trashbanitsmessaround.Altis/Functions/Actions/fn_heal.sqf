// File Name: heal.sqf
// Description: Shift H heal script
// By: DrWho

params [ 
	"_displayorcontrol",
	"_keyCode",
	"_isShift", 
	"_isCtrl", 
	"_isAlt"
];

// -- Heal (Shift + 3)
case 4: {
	if (_isShift && !_isCtrl && !_isAlt) then {
		player setDamage 0;
		hint "You were healed!";
	};
};