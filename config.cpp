class CfgPatches
{
	class Your_ClassName
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
	
	
	class Your_CLassname_Freshy_TShirt : TShirt_Black
	{
		displayName = "Your_CLassname_Freshy_TShirt";
		descriptionShort = "Your_CLassname_Freshy_TShirt";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Your_ClassName\data\tops\tshirt_black_co.paa",
            "Your_ClassName\data\tops\tshirt_black_co.paa",
            "Your_ClassName\data\tops\tshirt_black_co.paa"
			
		};
		
	};
	
	
	
	class Your_CLassname_Freshy_Jeans : Jeans_Black
	{
		displayName = "Your_CLassname_Freshy_TShirt";
		descriptionShort = "Your_CLassname_Freshy_TShirt";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Your_ClassName\data\pants\jeans_black_co.paa",
            "Your_ClassName\data\pants\jeans_black_co.paa",
            "Your_ClassName\data\pants\jeans_black_co.paa"
		};
		
	};
	
	class Your_CLassname_Freshy_Radar_Cap : RadarCap_Black
	{
		displayName = "Your_CLassname_Freshy_TShirt";
		descriptionShort = "Your_CLassname_Freshy_TShirt";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Your_ClassName\data\headgear\radarcap_black_co.paa",
            "Your_ClassName\data\headgear\radarcap_black_co.paa",
            "Your_ClassName\data\headgear\radarcap_black_co.paa"
		};
		
	};
};