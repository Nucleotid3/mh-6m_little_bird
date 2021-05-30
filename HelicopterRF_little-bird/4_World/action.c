
modded class ActionHeliEnableLightPanelRF_little_bird
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{		
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliRF_little_bird_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						EntityAI Battery_little_bird = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("CarBattery"));
						if ( !Battery_little_bird || Battery_little_bird && Battery_little_bird.IsRuined() )
						{
							return;
						}
						EntityAI Reflector_1_1_little_bird = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("Reflector_1_1"));
						if ( !Reflector_1_1_little_bird || Reflector_1_1_little_bird && Reflector_1_1_little_bird.IsRuined() )
						{
							return;
						}
						heli.SetAnimationPhase("beam1", 1.0);
					}
				}
			}	
		}
	}
	
};

modded class ActionHeliDisableLightPanelRF_little_bird
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliRF_little_bird_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						heli.SetAnimationPhase("beam1", 0.0);
					}
				}
			}
		}
	}
};

modded class ActionHeliEnableLightRF_little_bird
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{		
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliRF_little_bird_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						EntityAI Battery_little_bird = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("CarBattery"));
						if ( !Battery_little_bird || Battery_little_bird && Battery_little_bird.IsRuined() )
						{
							return;
						}
						EntityAI Reflector_2_1_little_bird = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("Reflector_2_1"));
						if ( !Reflector_2_1_little_bird || Reflector_2_1_little_bird && Reflector_2_1_little_bird.IsRuined() )
						{
							return;
						}
						heli.SetAnimationPhase("beam2", 1.0);
					}
				}
			}	
		}
	}
	
};

modded class ActionHeliDisableLightRF_little_bird
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliRF_little_bird_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						heli.SetAnimationPhase("beam2", 0.0);
					}
				}
			}
		}
	}
};

modded class PlayerBase
{
	override void SetActions(out TInputActionMap InputActionMap)
	{
		//little_bird 
		AddAction(ActionHeliEnableLightRF_little_bird, InputActionMap);
		AddAction(ActionHeliEnableLightPanelRF_little_bird, InputActionMap);
		AddAction(ActionHeliDisableLightRF_little_bird, InputActionMap);
		AddAction(ActionHeliDisableLightPanelRF_little_bird, InputActionMap);
		super.SetActions(InputActionMap);
	}
}
modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		actions.Insert(ActionHeliEnableLightRF_little_bird);
		actions.Insert(ActionHeliEnableLightPanelRF_little_bird);
		actions.Insert(ActionHeliDisableLightRF_little_bird);
		actions.Insert(ActionHeliDisableLightPanelRF_little_bird);
		super.RegisterActions(actions);
	}
}