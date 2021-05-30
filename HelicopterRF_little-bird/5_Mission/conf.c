
class Json_Heli_little_bird
{
	float version = 5.099999904632568;
	float duration = 0.05000000074505806;
	float Lift_power = 4.300000190734863;
	float No_power = 1400.000000;
	float Full_power = 1450.000000;
	float side_strength = 1.2999999523162842;
	float power_before = 1.000000;
	float friction = 0.30000001192092898;
	float Mass = 1400.8121337890626;
	float incline=0.6000000238418579;
	float front_tilt=1;
	float inclineMouse = 2.0;
	float front_tiltMouse = 2.0;
	float m_povorot = 0.4000000059604645;
	
	float Chassis=0;
	float Body=0;
	float Engine=0;
	float Fuel=0;
	float Rotor1=0;
	float Rotor2=0;
	
	float kill_z=0;

	float gasoline_costs=0.00039999998989515007;

	float gasoline_restart=1;
	float c_camDistance=15;
	float maxFuel = 70.0;
	float m_Crash_dem = 15.0;
	
	float m_engineVolume=1.0;
	float m_rotorVolume=1.0;
	float m_warningVolume=1.0;
	float m_crashVolume=1.0;
	
	const string count ="duration,Lift_power = 4.300000190734863,No_power = 1400.0,Full_power = 1450.0,side_strength = 1.2999999523162842,power_before = 1.000000,friction = 0.30000001192092898,Mass = 1400.8121337890626,incline=0.6000000238418579,front_tilt=1.0,inclineMouse = 2.0,front_tiltMouse = 2.0,Fender_1_1=0,Fender_1_2=0,Fender_2_1=0,Fender_2_2=0,Front=0,Engine=0,Back=0,FuelTank=0,Roof=0,Chassis=0,WindowFront=0,WindowBack=0,kill_z=0,gasoline_costs=0.00039999998989515007,gasoline_restart=1,c_camDistance=15.0,maxFuel = 70.0";
	

};

modded class MissionServer
{
	override void vert_conf(string child_name)
	{
		if(child_name.Contains("Heli_little_bird_RF"))
		{
			vert_conf_little_bird(child_name);
			return;
		}
		super.vert_conf(child_name);
	}
	void obnul_conflittle_bird(bool obnul, string child_name)
	{
		if(obnul)
		{
			string papka =  "$profile:\\Heli_sib"; 
			if (!FileExist(papka))
			{
				MakeDirectory(papka);
			}
			ref Json_Heli_little_bird config_heli_clear  = new Json_Heli_little_bird();
			string path =  "$profile:\\Heli_sib\\"+child_name+"_config.json";   
			JsonFileLoaderVert<ref Json_Heli_little_bird>.JsonSaveFile(path, config_heli_clear);
			vert_conf_little_bird(child_name);
		}
	}
	void vert_conf_little_bird(string child_name)
	{
		bool obnul=true;
		string papka =  "$profile:\\Heli_sib"; 
		if (!FileExist(papka))
		{
			MakeDirectory(papka);
		}
		ref Json_Heli_little_bird config_heli  = new Json_Heli_little_bird();
		float version_json_base = config_heli.version;
		string path =  "$profile:\\Heli_sib\\"+child_name+"_config.json";   
		if (!FileExist(path))
		{
			JsonFileLoaderVert<ref Json_Heli_little_bird>.JsonSaveFile(path, config_heli);
		}
		JsonFileLoaderVert<ref Json_Heli_little_bird>.JsonLoadFile(path, config_heli);
		JsonFileLoaderVert<ref Json_Heli_little_bird>.JsonSaveFile(path, config_heli);
		int num_mass=0;
		float version_json_config = config_heli.version;
		if(version_json_config<version_json_base || version_json_config == 0)
		{
			obnul_conflittle_bird(true,child_name);
			return;
		}
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.duration );num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.Lift_power );num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.No_power );num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.Full_power );num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.side_strength );num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.power_before );num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.friction );num_mass++;
		if(config_heli.Mass > 1)obnul=false;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.Mass );num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.incline);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.front_tilt);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.inclineMouse);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.front_tiltMouse);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.m_povorot);num_mass++;

		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.Chassis);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.Body);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.Engine);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.Fuel);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.Rotor1);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.Rotor2);num_mass++;

		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.kill_z);num_mass++;

		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.gasoline_costs);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.gasoline_restart);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.c_camDistance);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.maxFuel);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.m_Crash_dem);num_mass++;
		if(config_heli.m_engineVolume == 0)obnul=true;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.m_engineVolume);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.m_rotorVolume);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.m_warningVolume);num_mass++;
		ssaBWDQnlAkkAQp.Insert(child_name+"_"+num_mass, config_heli.m_crashVolume);num_mass++;
		obnul_conflittle_bird(obnul,child_name);
	}
};