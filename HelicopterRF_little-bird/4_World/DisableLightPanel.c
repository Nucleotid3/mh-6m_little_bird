class ActionDisableLightPanelHeliCB_little_bird : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(0);
	}
};

class ActionHeliDisableLightPanelRF_little_bird: ActionContinuousBase
{
	void ActionHeliDisableLightPanelRF_little_bird()
	{
		m_CallbackClass = ActionDisableLightPanelHeliCB_little_bird;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_STARTENGINE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ALL;
		m_SpecialtyWeight = 0;
		m_LockTargetOnUse = false;
	}

	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTNone;
		m_ConditionItem = new CCINone;

	}
	
	override string GetText()
	{
		return "Disable Panel Light";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		HeliRF_little_bird_base trans = null;
		HumanCommandVehicle vehCommand = player.GetCommand_Vehicle();
		if ( !vehCommand  )return false;	
		
		if ( !target )return false;
		
		if ( !Class.CastTo(trans, target.GetObject()) )return false;
		Human crew = trans.CrewMember(0);
		if ( !crew )
		{
			crew = trans.CrewMember(1);
			if ( !crew )return false;
		}
		
		int crewIdx = trans.CrewMemberIndex( player );
		if(crewIdx>1)return false;
		
		if(!trans.m_enable)return false;
		if (trans.m_typeVehicle == 0)return false;
		float anim_engine = trans.GetAnimationPhase("beam1");
		if(anim_engine == 0.0)return false;

		array<string> selections = new array<string>;
		target.GetObject().GetActionComponentNameList(target.GetComponentIndex(), selections);

		
		for (int s = 0; s < selections.Count(); s++)
		{
			if ( selections[s] == "button_beam1")
			{
				if( trans.MemoryPointExists("button_beam1") )
				{
					vector conPointMS = trans.GetMemoryPointPos("button_beam1");
					vector conPointWS = trans.ModelToWorld(conPointMS);
					vector pFromPos = player.GetPosition();
					//! skip the height for now
					conPointWS[1] = 0;
					pFromPos[1] = 0;
					
					if (vector.Distance(pFromPos, conPointWS) <= 2.0)
					{
						return true;
					}
				}
			}
		}
		
		return false;
	}

	override bool CanBeUsedInVehicle()
	{
		return true;
	}
};