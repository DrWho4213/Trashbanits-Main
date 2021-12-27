class TB
{
	tag = "TB";
	
	class Actions
	{
		file = "Functions\Actions";
		class noWeaponSpawn {};
		class weaponHolstering {};
		class heal {};
	};

	class EventHandlers
	{
		file = "Functions\EventHandlers";
		class keyHandler {};
	};

	class Server
	{
		file = "Functions\Server";
		class godModeOn {};
		class godModeOff {};
	};

	class Gear
	{
		file = "Functions\Gear";
		class initalLoadout {};
	};
};