class CfgPatches
{
	class LAG_Clothing
	{
		
		units[]={};
		weapons[]={};
		requiredVersions=1.0;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Gear_Containers",
			"DZ_Characters_Headgear",
			"DZ_Data"
			
		};
	};
};


class CfgVehicles
{
	class Clothing;
	class TShirt_Black;
	class RadarCap_Black;
	class Jeans_Black;
	
	
	class LAG_Freshy_TShirt : TShirt_Black
	{
		displayName = "LAG_Freshy_TShirt";
		descriptionShort = "LAG_Freshy_TShirt";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"LAG_Clothing\data\tops\tshirt_black_co.paa",
            "LAG_Clothing\data\tops\tshirt_black_co.paa",
            "LAG_Clothing\data\tops\tshirt_black_co.paa"
			
		};
		
	};
	
	
	
	class LAG_Freshy_Jeans : Jeans_Black
	{
		displayName = "LAG_Freshy_Jeans";
		descriptionShort = "LAG_Freshy_Jeans";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"LAG_Clothing\data\pants\jeans_black_co.paa",
            "LAG_Clothing\data\pants\jeans_black_co.paa",
            "LAG_Clothing\data\pants\jeans_black_co.paa"
		};
		
	};
	
	class LAG_Freshy_Radar_Cap : RadarCap_Black
	{
		displayName = "LAG_Freshy_Radar_Cap";
		descriptionShort = "LAG_Freshy_Radar_Cap";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"LAG_Clothing\data\headgear\radarcap_black_co.paa",
            "LAG_Clothing\data\headgear\radarcap_black_co.paa",
            "LAG_Clothing\data\headgear\radarcap_black_co.paa"
		};
		
	};
};