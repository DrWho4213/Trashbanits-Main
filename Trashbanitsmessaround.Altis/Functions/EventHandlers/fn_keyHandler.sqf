params [ 
	"_displayorcontrol",
	"_keyCode",
	"_isShift", 
	"_isCtrl", 
	"_isAlt"
];

private _hAnDLed = false;

switch (_keyCode) do {

	// -- Holster (Shift H)
	case 35: {
		if (_isShift && !_isCtrl && !_isAlt) then {
			call TB_fnc_weaponHolstering;
		};
	};
	
	_hAnDLed;
};
