class CfgPatches
{
	class HelicopterModRF_little_bird
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"HelicopterModScriptsSIB"};
	};
};
class CfgMods
{
	class HelicopterModRF_little_bird
	{
		dir="HelicopterRF_little_bird";
		hideName=0;
		hidePicture=0;
		name="HelicopterModRF_little_bird";
		credits="";
		author="RedFalcon (based on SIBNIC)";
		authorID="";
		version="version 5";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterRF_little-bird/4_World"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterRF_little-bird/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterRF_little-bird/5_Mission"
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class Heli_littlebird_crash_SoundShaders
	{
		samples[] = {{"HelicopterRF_little-bird\Sound\crash",1}};
		range = 250;
		volume = 1.0;
	};
	class Heli_littlebird_warning_SoundShaders
	{
		samples[] = {{"HelicopterRF_little-bird\Sound\warning",1}};
		range = 250;
		volume = 1.0;
	};
	class Heli_littlebird_engine_SoundShaders
	{
		samples[] = {{"HelicopterRF_little-bird\Sound\engine",1}};
		range = 700;
		volume = 1.5;
	};
	class Heli_littlebird_rotor_SoundShaders
	{
		samples[] = {{"HelicopterRF_little-bird\Sound\mh6rotor",1}};
		range = 700;
		volume = 1.5;
	};
	class Heli_littlebird_start_SoundShaders
	{
		samples[] = {{"HelicopterRF_little-bird\Sound\start",1}};
		range = 500;
		volume = 1.5;
	};
	class Heli_littlebird_stop_SoundShaders
	{
		samples[] = {{"HelicopterRF_little-bird\Sound\stop",1}};
		range = 500;
		volume = 1.5;
	};
};
class CfgSoundSets
{
	class Heli_base_SoundSet
	{
		sound3DProcessingType = "character3DProcessingType";
		volumeCurve = "characterAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class HelicopterCrash_SoundSets_littlebird: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_littlebird_crash_SoundShaders"};
	};
	class HelicopterWarning_SoundSets_littlebird: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_littlebird_warning_SoundShaders"};
	};
	class HelicopterStart_SoundSets_littlebird: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_littlebird_start_SoundShaders"};
	};
	class HelicopterStop_SoundSets_littlebird: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_littlebird_stop_SoundShaders"};
	};
	class HelicopterEngine_SoundSets_littlebird: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_littlebird_engine_SoundShaders"};
		loop = 1;
	};
	class HelicopterRotor_SoundSets_littlebird: Heli_base_SoundSet
	{
		soundShaders[] = {"Heli_littlebird_rotor_SoundShaders"};
		loop = 1;
	};
};


class CfgVehicles
{
	
	
	class AnimationSources;
	class Inventory_Base;
	class Crew;

	
	class RFlittle_bird_blade1:  Inventory_Base
	{
		scope = 2;
		displayName = "little bird blade 1";
		descriptionShort = "little bird blade 1";
		model = "\HelicopterRF_little-bird\RFlittle_bird_blade1.p3d";
		inventorySlot[] = {"RFlittle_bird_blade1"};
		//rotationFlags = 8;
		itemSize[] = {10,10};
		class AnimationSources
		{
			class box
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0;
			};
			class blade
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0;
			};
		};
	};
	class RFlittle_bird_blade2:  RFlittle_bird_blade1
	{
		scope = 2;
		displayName = "little bird blade 2";
		descriptionShort = "little bird blade 2";
		model = "\HelicopterRF_little-bird\RFlittle_bird_blade2.p3d";
		inventorySlot[] = {"RFlittle_bird_blade2"};
	};
	class RFlittle_bird_blade3:  RFlittle_bird_blade1
	{
		scope = 2;
		displayName = "little bird blade 3";
		descriptionShort = "little bird blade 3";
		model = "\HelicopterRF_little-bird\RFlittle_bird_blade3.p3d";
		inventorySlot[] = {"RFlittle_bird_blade3"};
	};
	class RFlittle_bird_blade4:  RFlittle_bird_blade1
	{
		scope = 2;
		displayName = "little bird blade 4";
		descriptionShort = "little bird blade 4";
		model = "\HelicopterRF_little-bird\RFlittle_bird_blade4.p3d";
		inventorySlot[] = {"RFlittle_bird_blade4"};
	};
	class RFlittle_bird_blade5:  RFlittle_bird_blade1
	{
		scope = 2;
		displayName = "little bird blade 5";
		descriptionShort = "little bird blade 5";
		model = "\HelicopterRF_little-bird\RFlittle_bird_blade5.p3d";
		inventorySlot[] = {"RFlittle_bird_blade5"};
	};	
	class RFlittle_bird_bladem1:  RFlittle_bird_blade1
	{
		scope = 2;
		displayName = "little bird tail blade 1";
		descriptionShort = "little bird tail blade 1";
		model = "\HelicopterRF_little-bird\RFlittle_bird_bladem1.p3d";
		inventorySlot[] = {"RFlittle_bird_bladem1"};
	};
	class RFlittle_bird_bladem3:  RFlittle_bird_blade1
	{
		scope = 2;
		displayName = "little bird tail blade 3";
		descriptionShort = "little bird tail blade 3";
		model = "\HelicopterRF_little-bird\RFlittle_bird_bladem3.p3d";
		inventorySlot[] = {"RFlittle_bird_bladem3"};
	};
	class HeliSIB_middle;
	class HeliRF_little_bird_base: HeliSIB_middle
	{
		scope=1;
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","CarBattery","RFlittle_bird_blade1","RFlittle_bird_blade2","RFlittle_bird_blade3","RFlittle_bird_blade4","RFlittle_bird_blade5","RFlittle_bird_bladem1","RFlittle_bird_bladem3"};
		model="\HelicopterRF_little-bird\little_bird.p3d";
	

		class Cargo
		{
			itemsCargoSize[]={10,30};
		};
		class GUIInventoryAttachmentsProps
		{
			class Chassis 
			{
				name = "$STR_attachment_Chassis0";
				description = "";
				icon = "cat_vehicle_chassis";
				attachmentSlots[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2"};
			};
			class Body
			{
				name = "$STR_attachment_Body0";
				description = "";
				icon="cat_vehicle_body";
				attachmentSlots[] = {};
			};
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				attachmentSlots[] = {"CarBattery","RFlittle_bird_blade1","RFlittle_bird_blade2","RFlittle_bird_blade3","RFlittle_bird_blade4","RFlittle_bird_blade5","RFlittle_bird_bladem1","RFlittle_bird_bladem3"};
				icon = "cat_vehicle_engine";
			};
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3000;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Body
				{
					fatalInjuryCoef = 0.001;
					memoryPoints[] = {"dmgzone_body"};
					componentNames[] = {"dmgzone_body"};
					class Health
					{
						hitpoints = 8000;
						transferToGlobalCoef = 0.001;
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
				};
				class Chassis
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_chassis","dmgzone_proj"};
					componentNames[] = {"dmgzone_chassis","dmgzone_proj"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 0;

					};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class Engine
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_engine"};
					componentNames[] = {"dmgzone_engine"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"CarBattery"};
					inventorySlotsCoefs[] = {0.0};
				};
				class Fuel
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgzone_fuel"};
					memoryPoints[] = {"dmgzone_fuel"};
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlotsCoefs[] = {};
					inventorySlots[] = {};
				};
				class Rotor1
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor1"};
					componentNames[] = {"dmgzone_rotor1"};
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {"RFlittle_bird_blade1","RFlittle_bird_blade2","RFlittle_bird_blade3","RFlittle_bird_blade4","RFlittle_bird_blade4"};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {0.1,0.1,0.1,0.1,0.1,0.1};
				};
				class Rotor2
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor2"};
					componentNames[] = {"dmgzone_rotor2"};
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"RFlittle_bird_bladem1","RFlittle_bird_bladem3"};
					inventorySlotsCoefs[] = {0.1,0.1};
					
				};
			};
		};
		
		class Crew: Crew
		{
			class Driver
			{
				actionSel = "seat_driver";
				proxyPos = "crewdriver";
				getInPos = "pos_driver";
				getInDir = "pos_driver_dir";
				isDriver = 0;	
			};
			class CoDriver
			{
				actionSel = "seat_codriver";
				proxyPos = "crewcodriver";
				getInPos = "pos_codriver";
				getInDir = "pos_codriver_dir";
				isDriver = 0;	
			};
			class Cargo1
			{
				actionSel = "seat_cargo1";
				proxyPos = "crewcargo1";
				getInPos = "pos_cargo1";
				getInDir = "pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel = "seat_cargo2";
				proxyPos = "crewcargo2";
				getInPos = "pos_cargo2";
				getInDir = "pos_cargo2_dir";
			};		
			class Cargo3
			{
				actionSel = "seat_cargo3";
				proxyPos = "crewcargo3";
				getInPos = "pos_cargo3";
				getInDir = "pos_cargo3_dir";
			};
			class Cargo4
			{
				actionSel = "seat_cargo4";
				proxyPos = "crewcargo4";
				getInPos = "pos_cargo4";
				getInDir = "pos_cargo4_dir";
			};	
			class Cargo5
			{
				actionSel = "seat_cargo5";
				proxyPos = "crewcargo5";
				getInPos = "pos_cargo5";
				getInDir = "pos_cargo5_dir";
			};
			class Cargo6
			{
				actionSel = "seat_cargo6";
				proxyPos = "crewcargo6";
				getInPos = "pos_cargo6";
				getInDir = "pos_cargo6_dir";
			};				
		};
	};
	class Helilittle_bird_RF_clear: HeliRF_little_bird_base
	{
		scope=2;
		displayName="little bird";
		descriptionShort="";
	};
	class Helilittle_bird_RF: HeliRF_little_bird_base
	{
		scope=2;
		displayName="MH-6M Little Bird";
		descriptionShort="MH-6M Little Bird, also occasionally referred to as the Mission Enhanced Little Bird (MELB), it is a highly modified version of the MD 530 series commercial helicopter.";
	};
};
	
class CfgSlots
{
	class Slot_RFlittle_bird_blade1
	{
		name="RFlittle_bird_blade1";
		displayName="Little_bird blade 1";
		ghostIcon="doorrear";
	};
	class Slot_RFlittle_bird_blade2
	{
		name="RFlittle_bird_blade2";
		displayName="Little_bird blade 2";
		ghostIcon="doorrear";
	};
	class Slot_RFlittle_bird_blade3
	{
		name="RFlittle_bird_blade3";
		displayName="Little_bird blade 3";
		ghostIcon="doorrear";
	};
	class Slot_RFlittle_bird_blade4
	{
		name="RFlittle_bird_blade4";
		displayName="Little_bird blade 4";
		ghostIcon="doorrear";
	};
	class Slot_RFlittle_bird_blade5
	{
		name="RFlittle_bird_blade5";
		displayName="Little_bird blade 5";
		ghostIcon="doorrear";
	};
	class Slot_RFlittle_bird_bladem1
	{
		name="RFlittle_bird_bladem1";
		displayName="RFlittle_bird_tail_blade 1";
		ghostIcon="doorrear";
	};
	class Slot_RFlittle_bird_bladem3
	{
		name="RFlittle_bird_bladem3";
		displayName="RFlittle_bird_tail_blade 3";
		ghostIcon="doorrear";
	};
};

class CfgNonAIVehicles
{
	class ProxyVehiclePart;
	class ProxyRFlittle_bird_blade1: ProxyVehiclePart
	{
		model = "\HelicopterRF_little-bird\RFlittle_bird_blade1.p3d";
		inventorySlot = "RFlittle_bird_blade1";
	};
	class ProxyRFlittle_bird_blade2: ProxyVehiclePart
	{
		model = "\HelicopterRF_little-bird\RFlittle_bird_blade2.p3d";
		inventorySlot = "RFlittle_bird_blade2";
	};
	class ProxyRFlittle_bird_blade3: ProxyVehiclePart
	{
		model = "\HelicopterRF_little-bird\RFlittle_bird_blade3.p3d";
		inventorySlot = "RFlittle_bird_blade3";
	};
	class ProxyRFlittle_bird_blade4: ProxyVehiclePart
	{
		model = "\HelicopterRF_little-bird\RFlittle_bird_blade4.p3d";
		inventorySlot = "RFlittle_bird_blade4";
	};
	class ProxyRFlittle_bird_blade5: ProxyVehiclePart
	{
		model = "\HelicopterRF_little-bird\RFlittle_bird_blade5.p3d";
		inventorySlot = "RFlittle_bird_blade5";
	};
	class ProxyRFlittle_bird_bladem1: ProxyVehiclePart
	{
		model = "\HelicopterRF_little-bird\RFlittle_bird_bladem1.p3d";
		inventorySlot = "RFlittle_bird_bladem1";
	};
	class ProxyRFlittle_bird_bladem3: ProxyVehiclePart
	{
		model = "\HelicopterRF_little-bird\RFlittle_bird_bladem3.p3d";
		inventorySlot = "RFlittle_bird_bladem3";
	};
};