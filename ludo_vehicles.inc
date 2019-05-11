#if defined LUDO_VEHICLES
	#endinput
#endif
#define LUDO_VEHICLES

static const
	ludo_vehicles_colors[MAX_LUDO_PLAYERS] =
	{
		86,
		175,
		228,
		135
		
	},
	ludo_vehicles_ids[MAX_LUDO_NUMBER_OF_LIVES] =
	{
		411,
		418,
		458,
		480
	},
	Float:ludo_vehicles_position[MAX_LUDO_PLAYERS][MAX_LUDO_NUMBER_OF_LIVES][] =
	{
		{
			{40.1500, 43.0000, 1.0476, 90.0000},
			{40.0500, 47.2000, 1.3619, 90.0000},
			{48.0000, 43.0000, 1.1293, 90.0000},
			{47.7000, 47.2000, 1.0326, 90.0000}
		},
		{
			{41.7000, -41.5000, 1.0476, 0.0000},
			{41.7000, -49.1960, 1.3619, 0.0000},
			{46.1000, -41.1000, 1.1293, 0.0000},
			{46.1000, -49.0000, 1.0326, 0.0000}
		},
		{
			{-40.1500, -43.0000, 1.0476, -90.0000},
			{-40.0500, -47.2000, 1.3619, -90.0000},
			{-48.0000, -43.0000, 1.1293, -90.0000},
			{-47.7000, -47.2000, 1.0326, -90.0000}
		},
		{
			{-41.7000, 41.5000, 1.0476, 180.0000},
			{-41.7000, 49.1960, 1.3619, 180.0000},
			{-46.1000, 41.1000, 1.1293, 180.0000},
			{-46.1000, 49.0000, 1.0326, 180.0000}
		}
		
	};


CMD:v(playerid)
{
	PlayerLudo[playerid][uPlayerNum] = 4;
	return LudoCreatePlayerVehicles(playerid);
}

stock LudoCreatePlayerVehicles(playerid)
{
	new
		player_number = PlayerLudo[playerid][uPlayerNum]-1;

	for (new i = 0; i < MAX_LUDO_NUMBER_OF_LIVES; i++)
	{
		PlayerLudo[playerid][uPlayerVehicles][i] = AddStaticVehicle(ludo_vehicles_ids[i], 
			ludo_vehicles_position[player_number][i][0], 
			ludo_vehicles_position[player_number][i][1], 
			ludo_vehicles_position[player_number][i][2]+LUDO_NEW_Z, 
			ludo_vehicles_position[player_number][i][3], 
			ludo_vehicles_colors[player_number], 
			ludo_vehicles_colors[player_number]
		);
		SetVehicleVirtualWorld(PlayerLudo[playerid][uPlayerVehicles][i], PlayerLudo[playerid][uPlayerWorld]);
		LinkVehicleToInterior(PlayerLudo[playerid][uPlayerVehicles][i], LUDO_INTERIOR);
	}
	return 1;
}
