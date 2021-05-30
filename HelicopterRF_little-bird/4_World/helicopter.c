


class HeliRF_little_bird_base extends HeliSIB_middle
{

	override void EEInit()
	{
		super.EEInit();	
		c_startSound = "HelicopterStart_SoundSets_littlebird";
		c_stopSound = "HelicopterStop_SoundSets_littlebird";
		c_rotorSound = "HelicopterRotor_SoundSets_littlebird";
		c_engineSound = "HelicopterEngine_SoundSets_littlebird";
		c_warningSound = "HelicopterWarning_SoundSets_littlebird";
		c_crashSound = "HelicopterCrash_SoundSets_littlebird";
	}
	HeliLightPanel_little_bird m_LightPanel_1_little_bird;	
	HeliLight_little_bird m_Light_1_little_bird;
	bool HeliEnableLight=false;

	ref array<string>  m_little_blade = {"RFlittle_bird_blade1","RFlittle_bird_blade2","RFlittle_bird_blade3","RFlittle_bird_blade4","RFlittle_bird_blade5","RFlittle_bird_bladem1","RFlittle_bird_bladem3"};
	ref array<string>  m_little_blade1 = {"RFlittle_bird_blade1","RFlittle_bird_blade2","RFlittle_bird_blade3","RFlittle_bird_blade4","RFlittle_bird_blade5"};	
	ref array<string>  m_little_blade2 = {"RFlittle_bird_bladem1","RFlittle_bird_bladem3"};

	override bool CanReachSeatFromDoors( string pSeatSelection, vector pFromPos, float pDistance = 1.0 )
	{
		pDistance=10.0;
		string conPointName = GetDoorConditionPointFromSelection(pSeatSelection);
		if (conPointName.Length() > 0)
		{
			if( MemoryPointExists(conPointName) )
			{
				vector conPointMS = GetMemoryPointPos(conPointName);
				vector conPointWS = ModelToWorld(conPointMS);
				
				//! skip the height for now
				conPointWS[1] = 0;
				pFromPos[1] = 0;
				
				if (vector.Distance(pFromPos, conPointWS) <= pDistance)
				{
					return true;
				}
			}
		}

		return false;		
	}
	override bool IsAreaAtDoorFree( int currentSeat, float maxAllowedObjHeight = 0.5, float horizontalExtents = 0.5, float playerHeight = 1.7 )
	{
		return true;
	}
	override void creat_InInventory_heli()
	{

		if(IsKindOf("Helilittle_bird_RF"))
		{
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "RFlittle_bird_blade1" );
			GetInventory().CreateInInventory( "RFlittle_bird_blade2" );
			GetInventory().CreateInInventory( "RFlittle_bird_blade3" );
			GetInventory().CreateInInventory( "RFlittle_bird_blade4" );	
			GetInventory().CreateInInventory( "RFlittle_bird_blade5" );	
			GetInventory().CreateInInventory( "RFlittle_bird_bladem1" );
			GetInventory().CreateInInventory( "RFlittle_bird_bladem3" );
			GetInventory().CreateInInventory( "HeadlightH7" );			
			GetInventory().CreateInInventory( "HeadlightH7" );	
			return;
		}

		super.creat_InInventory_heli();
	};

	
		override string GetDoorInvSlotNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "RFlittle_bird_Door_1_1";
			break;
		case 1:
			return "RFlittle_bird_Door_2_1";
			break;
		case 2:
			return "RFlittle_bird_Door_1_2";
			break;
		case 3:
			return "RFlittle_bird_Door_2_2";
			break;
		}
		
		return super.GetDoorInvSlotNameFromSeatPos(posIdx);
	}
	


	override int GetCarDoorsState( string slotType )
	{
		CarDoor carDoor;
		return CarDoorState.DOORS_MISSING;
	}
	
	override int GetSeatAnimationType( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 1:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 2:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 3:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 4:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 5:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 6:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 7:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 8:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 9:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		}
		return 0;
	}
	override bool CanReachSeatFromSeat( int currentSeat, int nextSeat )
	{
		switch( currentSeat )
		{
		case 0:
			if ( nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 1:
			if ( nextSeat == 0 ||nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 2:
			if ( nextSeat == 0 || nextSeat == 1 ||  nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 3:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 ||  nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 4:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 5:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 ||  nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 6:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 7:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 8:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 9)
			return true;
			break;
		case 9:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 )
			return true;
			break;
		}
		
		return false;
	}
	

	override bool CrewCanGetThrough( int posIdx )
	{
		return true;
	}
	override string GetDoorConditionPointFromSelection( string selection )
	{
		switch( selection )
		{
		case "seat_driver":
			return "seat_con_1_1";
			break;
		case "seat_codriver":
			return "seat_con_2_1";
			break;

		case "seat_cargo1":
		case "seat_cargo3":
		case "seat_cargo5":
		case "seat_cargo7":
			return "seat_con_1_2";
			break;
		case "seat_cargo2":
		case "seat_cargo4":
		case "seat_cargo8":
		case "seat_cargo6":
			return "seat_con_2_2";
			break;

		}
		
		return "";
	}
	void SimulateLight(float dt)
	{
		float beam1 = GetAnimationPhase("beam1");
		if(beam1 == 1)
		{
			if(m_LightPanel_1_little_bird == NULL)
			{
				m_LightPanel_1_little_bird = HeliLightPanel_little_bird.Cast( ScriptedLightBase.CreateLight( HeliLightPanel_little_bird, "0 0 0") );
				m_LightPanel_1_little_bird.AttachOnMemoryPoint(this, "beamStart10","beamEnd10");
			}

		}else{
			if (m_LightPanel_1_little_bird)m_LightPanel_1_little_bird.FadeOut();
		}
		
		float beam2 = GetAnimationPhase("beam2");
		if(beam2 == 1)
		{
			if(m_Light_1_little_bird == NULL)
			{
				m_Light_1_little_bird = HeliLight_little_bird.Cast( ScriptedLightBase.CreateLight( HeliLight_little_bird, "0 0 0") );
				m_Light_1_little_bird.AttachOnMemoryPoint(this, "beamStart2","beamEnd2");
			}
		}else{
			if (m_Light_1_little_bird)m_Light_1_little_bird.FadeOut();
		}
	}
	override void SoundAnim_Simulate(float dt)
	{
		if ( GetGame().IsClient()  && m_enable)
		{
			SimulateLight(dt);
		}
		super.SoundAnim_Simulate(dt);
	}

	override bool CanDisplayAttachmentCategory( string category_name )
	{
		category_name.ToLower();
		if(category_name == "chassis")return false;
		return true;
	}
	override bool CanReleaseAttachment( EntityAI attachment )
	{
		string attType = attachment.GetType();
		if(attType=="HeadlightH7" )return true;
		if( attType == "HatchbackWheel" )return false;
		if(m_AnimRotorSpeed > 0)return false;
		return true;
	}
	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached( item, slot_name );
		if(m_little_blade.Find(slot_name) > -1)
		{
			item.SetAnimationPhase("box", 1);
			item.SetAnimationPhase("blade", 0);
		}
		
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached( item, slot_name );
		if(m_little_blade.Find(slot_name) > -1)
		{
			if(!item.IsRuined())
			{
				item.SetAnimationPhase("box", 0);
				item.SetAnimationPhase("blade", 1);
			}
		}
		if(slot_name == "CarBattery" || slot_name == "Reflector_1_1" || slot_name == "Reflector_2_1")
		{
			SetAnimationPhase("beam1", 0.0);
			SetAnimationPhase("beam2", 0.0);
		}
	}
	override void OnAttachmentRuined(EntityAI attachment)
	{
		super.OnAttachmentRuined( attachment );
		if(attachment && attachment.IsRuined())
		{
			if(m_little_blade.Find(attachment.GetType()) > -1)
			{
				GetGame().ObjectDelete(attachment);
			}
			
			if(attachment.GetType()=="HeadlightH7")
			{
				SetAnimationPhase("beam2", 0.0);
			}
		}
	}	
};

class Helilittle_bird_RF extends HeliRF_little_bird_base{};

modded class ActionHeliStartEngineSIB
{

	override void StartEngineSIB(HeliTest_SIB heli)
	{
		if(heli.IsKindOf("HeliRF_little_bird_base"))
		{
			bool atach_start=false;
			float little_blade_dem1=1;float little_blade_dem1_old=1;
			float little_blade_dem2=1;float little_blade_dem2_old=1;
			HeliRF_little_bird_base helilittle_base;
			if(Class.CastTo(helilittle_base, heli))
			{
				for ( int mz = 0; mz < helilittle_base.m_little_blade.Count(); mz++ )
				{
					EntityAI little_blade =  heli.GetInventory().FindAttachmentByName(helilittle_base.m_little_blade.Get(mz));
					if(!little_blade ||  little_blade && little_blade.IsRuined() )
					{
						atach_start=true;
						break;
					}else
					{
						if(helilittle_base.m_little_blade1.Find(little_blade.GetType()) > -1)
						{
							little_blade_dem1 = little_blade.GetHealth01("", "Health");
							if(little_blade_dem1 < little_blade_dem1_old)
							little_blade_dem1_old =little_blade_dem1;
						}
						if(helilittle_base.m_little_blade2.Find(little_blade.GetType()) > -1)
						{
							little_blade_dem2 = little_blade.GetHealth01("", "Health");
							if(little_blade_dem2 < little_blade_dem2_old)
							little_blade_dem2_old =little_blade_dem2;
						}
					}
				}
				heli.SetHealth01("Rotor1", "Health", little_blade_dem1_old);
				heli.SetHealth01("Engine", "Health", little_blade_dem1_old);
				heli.SetHealth01("Rotor2", "Health", little_blade_dem2_old);
				
				if(atach_start)
				{
					heli.m_playSoundWarning=true;
					heli.PlaySoundWarning();	
					return;
				}
			}
			EntityAI Battery_little_bird = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("CarBattery"));
			if ( !Battery_little_bird || Battery_little_bird && Battery_little_bird.IsRuined() )
			{
				return;
			}

		}
		super.StartEngineSIB(heli);
	}

};

modded class ActionHeliStopEngineSIB
{
	override void StopEngineSIB(HeliTest_SIB heli)
	{
		
		if(heli.IsKindOf("HeliRF_little_bird_base"))
		{
			heli.SetAnimationPhase("monitor", 0);
		}
		super.StopEngineSIB(heli);
	}
};








