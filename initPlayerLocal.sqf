// Compile all the things!!
{
    _code = "";
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
	missionNamespace setVariable [_function, _code];
}
forEach
[
    // Get In DLC Vehicles
	["ExileClient_object_vehicle_getInteractionName", "Custom\ExileDLCVehicles\ExileClient_object_vehicle_getInteractionName.sqf"],
	["ExileClient_object_vehicle_moveInSeat", "Custom\ExileDLCVehicles\ExileClient_object_vehicle_moveInSeat.sqf"],
	["ExileClient_object_vehicle_checkForDLCAndSeat", "Custom\ExileDLCVehicles\ExileClient_object_vehicle_checkForDLCAndSeat.sqf"]
];