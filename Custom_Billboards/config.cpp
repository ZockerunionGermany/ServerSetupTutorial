
class CfgPatches
{
	class Custom_Billboards
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};


class CfgVehicles
{
	class HouseNoDestruct;
	class land_lag_billboard_main: HouseNoDestruct
	{
		scope=2;
		model="\Custom_Billboards\models\billboard_1.p3d";
	};

	class land_lag_billboard_trader_rules: HouseNoDestruct
	{
		scope=2;
		model="\Custom_Billboards\models\billboard_2.p3d";
	};
	
};
