class ActionUnpackIRPCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNPACK);
	}
};

class ActionUnpackIRP: ActionContinuousBase
{	
	ItemBase resultItem;
	void ActionUnpackIRP()
	{
		m_CallbackClass = ActionUnpackIRPCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_OPENITEM;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	
	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	
	override bool HasProneException()
	{
		return true;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "Открыть";
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		if ( action_data.m_MainItem && action_data.m_MainItem.GetHierarchyRootPlayer() == action_data.m_Player )
		{
			switch(action_data.m_MainItem.GetType()) {
				
				/*
						case "Класснейм ИРП": // если будете делать другие текстуры в config.cpp
						resultItem = ItemBase.Cast( GetGame().CreateObject("Сюда класснейм предмета который выпадет" , action_data.m_Player.GetPosition(), false) );	// То, что появится после распаковки			
						break;	
					
				*/	
					case "MbK_IRP_1":
						resultItem = ItemBase.Cast( GetGame().CreateObject("Apple" , action_data.m_Player.GetPosition(), false) );		
						resultItem = ItemBase.Cast( GetGame().CreateObject("PeachesCan" , action_data.m_Player.GetPosition(), false) );		
						resultItem = ItemBase.Cast( GetGame().CreateObject("TunaCan" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("SodaCan_Pipsi" , action_data.m_Player.GetPosition(), false) );		
						resultItem = ItemBase.Cast( GetGame().CreateObject("PurificationTablets" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("CanOpener" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("Matchbox" , action_data.m_Player.GetPosition(), false) );						
						break;					
					case "MbK_IRP_2":
						resultItem = ItemBase.Cast( GetGame().CreateObject("Apple" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("BakedBeansCan" , action_data.m_Player.GetPosition(), false) );		
						resultItem = ItemBase.Cast( GetGame().CreateObject("TunaCan" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("SodaCan_Spite" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("PurificationTablets" , action_data.m_Player.GetPosition(), false) );
						resultItem = ItemBase.Cast( GetGame().CreateObject("CanOpener" , action_data.m_Player.GetPosition(), false) );		
						resultItem = ItemBase.Cast( GetGame().CreateObject("Matchbox" , action_data.m_Player.GetPosition(), false) );
						break;		
					case "MbK_IRP_Kapitan":
						resultItem = ItemBase.Cast( GetGame().CreateObject("Apple" , action_data.m_Player.GetPosition(), false) );
						resultItem = ItemBase.Cast( GetGame().CreateObject("TacticalBaconCan" , action_data.m_Player.GetPosition(), false) );		
						resultItem = ItemBase.Cast( GetGame().CreateObject("TunaCan" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("Marmalade" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("SodaCan_Cola" , action_data.m_Player.GetPosition(), false) );
						resultItem = ItemBase.Cast( GetGame().CreateObject("PurificationTablets" , action_data.m_Player.GetPosition(), false) );
						resultItem = ItemBase.Cast( GetGame().CreateObject("CanOpener" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("Matchbox" , action_data.m_Player.GetPosition(), false) );						
						break;					
					case "MbK_IRP_General":
						resultItem = ItemBase.Cast( GetGame().CreateObject("Apple" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("SpaghettiCan" , action_data.m_Player.GetPosition(), false) );		
						resultItem = ItemBase.Cast( GetGame().CreateObject("SardinesCan" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("Marmalade" , action_data.m_Player.GetPosition(), false) );		
						resultItem = ItemBase.Cast( GetGame().CreateObject("SodaCan_Kvass" , action_data.m_Player.GetPosition(), false) );	
						resultItem = ItemBase.Cast( GetGame().CreateObject("PurificationTablets" , action_data.m_Player.GetPosition(), false) );
						resultItem = ItemBase.Cast( GetGame().CreateObject("CanOpener" , action_data.m_Player.GetPosition(), false) );		
						resultItem = ItemBase.Cast( GetGame().CreateObject("Matchbox" , action_data.m_Player.GetPosition(), false) );						
						break;								
			}
			GetGame().ObjectDelete(action_data.m_MainItem);
		}
	}
};