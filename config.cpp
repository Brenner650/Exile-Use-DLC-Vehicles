class CfgExileCustomCode 
{
	// Compile Interaction Names
	ExileClient_gui_interactionMenu_hook = "Custom\ExileDLCVehicles\ExileClient_gui_interactionMenu_hook.sqf";
};

class CfgInteractionMenus
{
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			// Get In DLC Driver
			class GetInDLCDriver: ExileAbstractAction
			{
				title = "['Driver'] call ExileClient_object_vehicle_getInteractionName";
				condition = "['Driver'] call ExileClient_object_vehicle_checkForDLCAndSeat";
				action = "['Driver'] call ExileClient_object_vehicle_moveInSeat";
				priority = 6;
			};

			// Get In DLC Gunner
			class GetInDLCGunner: ExileAbstractAction
			{
				title = "['Gunner'] call ExileClient_object_vehicle_getInteractionName";
				condition = "['Gunner'] call ExileClient_object_vehicle_checkForDLCAndSeat";
				action = "['Gunner'] call ExileClient_object_vehicle_moveInSeat";
				priority = 6;
			};

			// Get In DLC Commander
			class GetInDLCCommander: ExileAbstractAction
			{
				title = "['Commander'] call ExileClient_object_vehicle_getInteractionName";
				condition = "['Commander'] call ExileClient_object_vehicle_checkForDLCAndSeat";
				action = "['Commander'] call ExileClient_object_vehicle_moveInSeat";
				priority = 6;
			};
		};
	};
};