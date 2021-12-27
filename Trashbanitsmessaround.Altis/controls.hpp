class dialogTest
{
	idd = 1234;

	class controls
	{

		class baseFrame: RscFrame
		{
			idc = 1800;

			x = 0.37625 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.232031 * safezoneW;
			h = 0.385 * safezoneH;
		};
		class playerListBox: RscListBox
		{
			idc = 1500;

			x = 0.546406 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.198 * safezoneH;
		};
		class buttonKill: RscButton
		{
			idc = 1600;
			action = "execvm 'killUnit.sqf'";

			text = "Kill"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		class buttonTeleport: RscButton
		{
			idc = 1600;
			action = "execvm 'teleportToUnit.sqf'";

			text = "Teleport To"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};

	};

};