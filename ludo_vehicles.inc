#if defined LUDO_VEHICLES
	#endinput
#endif
#define LUDO_VEHICLES

static const
	ludo_vehicles_colors[MAX_LUDO_PLAYERS] =
	{
		137,
		135,
		228,
		175
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
			{-41.7000, 41.5000, 1.0476, 180.0000},
			{-41.7000, 49.1960, 1.3619, 180.0000},
			{-46.1000, 41.1000, 1.1293, 180.0000},
			{-46.1000, 49.0000, 1.0326, 180.0000}
		},
		{
			{-40.1500, -43.0000, 1.0476, -90.0000},
			{-40.0500, -47.2000, 1.3619, -90.0000},
			{-48.0000, -43.0000, 1.1293, -90.0000},
			{-47.7000, -47.2000, 1.0326, -90.0000}
		},
		{
			{41.7000, -41.5000, 1.0476, 0.0000},
			{41.7000, -49.1960, 1.3619, 0.0000},
			{46.1000, -41.1000, 1.1293, 0.0000},
			{46.1000, -49.0000, 1.0326, 0.0000}
		}
	};

public OnGameModeInit()
{
	for (new i = 0; i < MAX_LUDO_PLAYERS; i++)
	{
		for (new j = 0; j < MAX_LUDO_NUMBER_OF_LIVES; j++)
		{
			CreateVehicle(ludo_vehicles_ids[j], ludo_vehicles_position[i][j][0], ludo_vehicles_position[i][j][1], ludo_vehicles_position[i][j][2]+LUDO_NEW_Z, ludo_vehicles_position[i][j][3], ludo_vehicles_colors[i], ludo_vehicles_colors[i], 0);
		}
	}

	#if defined ludo_vehicles_OnGameModeInit
		ludo_vehicles_OnGameModeInit();
	#endif

	return 1;
}

#if defined _ALS_OnGameModeInit
	#undef OnGameModeInit
#else
	#define _ALS_OnGameModeInit
#endif
#define OnGameModeInit ludo_vehicles_OnGameModeInit
#if  defined ludo_vehicles_OnGameModeInit
	forward ludo_vehicles_OnGameModeInit();
#endif
