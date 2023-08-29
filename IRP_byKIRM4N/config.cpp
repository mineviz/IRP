class CfgPatches
{
	class IRP_byKIRM4N
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Gear_Containers",
			"DZ_Gear_Consumables",
			"DZ_Gear_Tools",
			"DZ_Gear_Cooking",
			"DZ_Gear_Food",
			"DZ_Gear_Navigation",
			"DZ_Gear_Drinks",
			"DZ_Gear_Camping",
			"DZ_Gear_Optics",
			"DZ_Gear_Crafting",
			"DZ_Weapons_Firearms",
			"DZ_Radio",
			"DZ_Characters_Belts"
		};
	};
};
class CfgMods
{
	class IRP_byKIRM4N
	{
		dir="IRP_byKIRM4N";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="IRP_byKIRM4N";
		credits="KIRM4N";
		author="KIRM4N";
		authorID="0";
		version=1;
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World",
			"Game"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"IRP_byKIRM4N/scripts/4_world"
				};
			};
		};
	};
};
