#if defined LUDO_NAVIGATOR
	#endinput
#endif
#define LUDO_NAVIGATOR

const
	MAX_LUDO_NAVIGATOR_POINTS = 47,
	MAX_LUDO_NAVIGATOR_POINTS_P = 7,
	MAX_LUDO_NAVIGATOR_LINES = 58,
	MAX_LUDO_NAVIGATOR_LINES_TR = 4,
	MAX_LUDO_NAVIGATOR_LINES_FINISH = 6,
	MAX_LUDO_NAVIGATOR_LINES_START = 2;

static const
	Float:ludo_navigator_points[MAX_LUDO_NAVIGATOR_POINTS+1][] = //19844
	{
		{9.63000, 71.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{9.63000, 61.00000, 0.08240, 0.00000, 0.00000, 0.00000},
		{9.63000, 50.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{9.63000, 40.00000, 0.08240, 0.00000, 0.00000, 0.00000},
		{9.63000, 29.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{16.350, 16.350, 0.08240, 0.00000, 0.00000, 0.00000},
		{29.50000, 9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{40.00000, 9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{50.50000, 9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{61.00000, 9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{71.51880, 9.63690, 0.08240, 0.00000, 0.00000, -90.00000},
		{71.50000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
		{71.50000, -9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{61.00000, -9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{50.50000, -9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{40.00000, -9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{29.50000, -9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{16.350, -16.350, 0.08240, 0.00000, 0.00000, 0.00000},
		{9.63000, -29.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{9.63000, -40.00000, 0.08240, 0.00000, 0.00000, 0.00000},
		{9.63000, -50.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{9.63000, -61.00000, 0.08240, 0.00000, 0.00000, 0.00000},
		{9.63690, -71.51880, 0.08240, 0.00000, 0.00000, 0.00000},
		{0.00000, -71.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{-9.63000, -71.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{-9.63000, -61.00000, 0.08240, 0.00000, 0.00000, 0.00000},
		{-9.63000, -50.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{-9.63000, -40.00000, 0.08240, 0.00000, 0.00000, 0.00000},
		{-9.63000, -29.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{-16.350, -16.350, 0.08240, 0.00000, 0.00000, 0.00000},
		{-29.50000, -9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{-40.00000, -9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{-50.50000, -9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{-61.00000, -9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{-71.51880, -9.63690, 0.08240, 0.00000, 0.00000, -90.00000},
		{-71.50000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
		{-71.50000, 9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{-61.00000, 9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{-50.50000, 9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{-40.00000, 9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{-29.50000, 9.63000, 0.08240, 0.00000, 0.00000, -90.00000},
		{-16.350, 16.350, 0.08240, 0.00000, 0.00000, 0.00000},
		{-9.63000, 29.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{-9.63000, 40.00000, 0.08240, 0.00000, 0.00000, 0.00000},
		{-9.63000, 50.50000, 0.08240, 0.00000, 0.00000, 0.00000},
		{-9.63000, 61.00000, 0.08240, 0.00000, 0.00000, 0.00000},
		{-9.63690, 71.51880, 0.08240, 0.00000, 0.00000, 0.00000},
		{0.00000, 71.50000, 0.08240, 0.00000, 0.00000, 0.00000}
	},
	Float:ludo_navigator_player_points[MAX_LUDO_PLAYERS][MAX_LUDO_NAVIGATOR_POINTS_P][] = //19844
	{
		{
			{0.00000, 71.50000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, 61.00000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, 50.50000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, 40.00000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, 29.50000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, 19.00000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, 8.68000, 0.08240, 0.00000, 0.00000, 0.00000}
		},
		{
			{71.50000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{61.00000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{50.50000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{40.00000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{29.50000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{19.00000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{8.68000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000}
		},
		{
			{0.00000, -71.50000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, -61.00000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, -50.50000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, -40.00000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, -29.50000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, -19.00000, 0.08240, 0.00000, 0.00000, 0.00000},
			{0.00000, -8.68000, 0.08240, 0.00000, 0.00000, 0.00000}
		},
		{
			{-71.50000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{-61.00000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{-50.50000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{-40.00000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{-29.50000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{-19.00000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000},
			{-8.68000, 0.00000, 0.08240, 0.00000, 0.00000, -90.00000}
		}
	},
	Float:ludo_navigator_lines[MAX_LUDO_NAVIGATOR_LINES+2][] = //19378/19366
	{
		{9.63000, 66.25000, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, 55.75000, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, 45.25000, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, 34.75000, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, 29.50000, -4.68600, 90.00000, 0.00000, 0.00000},
		{12.98440, 20.28440, -4.68600, 90.00000, 0.00000, 40.00000},
		{20.28600, 12.98400, -4.68600, 90.00000, 0.00000, 50.00000},
		{25.85570, 9.63000, -1.61910, 0.00000, 0.00000, 90.00000},
		{28.14670, 9.63000, -1.62110, 0.00000, 0.00000, 90.00000},
		{34.75000, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{45.25000, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{55.75000, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{66.25000, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{71.50000, 4.82000, -5.12100, 0.00000, 0.00000, 0.00000},
		{71.50000, -4.82000, -5.12100, 0.00000, 0.00000, 0.00000},
		{66.25000, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{55.75000, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{45.25000, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{34.75000, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{29.50000, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{20.28600, -12.98400, -4.68600, 90.00000, 0.00000, -50.00000},
		{12.98440, -20.28440, -4.68600, 90.00000, 0.00000, -40.00000},
		{9.63000, -25.85570, -1.61910, 0.00000, 0.00000, 0.00000},
		{9.63000, -28.14670, -1.62110, 0.00000, 0.00000, 0.00000},
		{9.63000, -34.75000, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, -45.25000, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, -55.75000, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, -66.25000, -4.68600, 90.00000, 0.00000, 0.00000},
		{4.82000, -71.50000, -5.12100, 0.00000, 0.00000, 90.00000},
		{-4.82000, -71.50000, -5.12100, 0.00000, 0.00000, 90.00000},
		{-9.63000, -66.25000, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, -55.75000, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, -45.25000, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, -34.75000, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, -29.50000, -4.68600, 90.00000, 0.00000, 0.00000},
		{-12.98440, -20.28440, -4.68600, 90.00000, 0.00000, 40.00000},
		{-20.28600, -12.98400, -4.68600, 90.00000, 0.00000, 50.00000},
		{-25.85570, -9.63000, -1.61910, 0.00000, 0.00000, 90.00000},
		{-28.14670, -9.63000, -1.62110, 0.00000, 0.00000, 90.00000},
		{-34.75000, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-45.25000, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-55.75000, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-66.25000, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-71.50000, -4.82000, -5.12100, 0.00000, 0.00000, 0.00000},
		{-71.50000, 4.82000, -5.12100, 0.00000, 0.00000, 0.00000},
		{-66.25000, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-55.75000, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-45.25000, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-34.75000, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-29.50000, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-20.28600, 12.98400, -4.68600, 90.00000, 0.00000, -50.00000},
		{-12.98440, 20.28440, -4.68600, 90.00000, 0.00000, -40.00000},
		{-9.63000, 25.85570, -1.61910, 0.00000, 0.00000, 0.00000},
		{-9.63000, 28.14670, -1.62110, 0.00000, 0.00000, 0.00000},
		{-9.63000, 34.75000, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, 45.25000, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, 55.75000, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, 66.25000, -4.68600, 90.00000, 0.00000, 0.00000},
		{-4.82000, 71.50000, -5.12100, 0.00000, 0.00000, 90.00000},
		{4.82000, 71.50000, -5.12100, 0.00000, 0.00000, 90.00000}
	},
	Float:ludo_navigator_lines_start[MAX_LUDO_PLAYERS][MAX_LUDO_NAVIGATOR_LINES_START][] = //19366
	{
		{
			{12.93400, 71.50000, -1.61910, 0.00000, 0.00000, 90.00000},
			{11.00000, 71.50000, -1.62110, 0.00000, 0.00000, 90.00000}
		},
		{
			{71.50000, -12.93400, -1.61910, 0.00000, 0.00000, 0.00000},
			{71.50000, -11.00000, -1.62110, 0.00000, 0.00000, 0.00000}
		},
		{
			{-12.93400, -71.50000, -1.61910, 0.00000, 0.00000, 90.00000},
			{-11.00000, -71.50000, -1.62110, 0.00000, 0.00000, 90.00000}
		},
		{
			{-71.50000, 12.93400, -1.61910, 0.00000, 0.00000, 0.00000},
			{-71.50000, 11.00000, -1.62110, 0.00000, 0.00000, 0.00000}
		}
	},
	Float:ludo_navigator_lines_finish_1[MAX_LUDO_PLAYERS][MAX_LUDO_NAVIGATOR_LINES_TR][] = //19366
	{
		{
			{-7.59500, 71.50000, -1.61910, 0.00000, 0.00000, 90.00000},
			{-6.41900, 71.50000, -1.62110, 0.00000, 0.00000, 90.00000},
			{-3.20920, 71.50000, -1.62110, 0.00000, 0.00000, 90.00000},
			{-1.52490, 71.50000, -1.61910, 0.00000, 0.00000, 90.00000}
		},
		{
			{71.50000, 7.59500, -1.61910, 0.00000, 0.00000, 0.00000},
			{71.50000, 6.41900, -1.62110, 0.00000, 0.00000, 0.00000},
			{71.50000, 3.20920, -1.62110, 0.00000, 0.00000, 0.00000},
			{71.50000, 1.52490, -1.61910, 0.00000, 0.00000, 0.00000}
		},
		{
			{7.59500, -71.50000, -1.61910, 0.00000, 0.00000, 90.00000},
			{6.41900, -71.50000, -1.62110, 0.00000, 0.00000, 90.00000},
			{3.20920, -71.50000, -1.62110, 0.00000, 0.00000, 90.00000},
			{1.52490, -71.50000, -1.61910, 0.00000, 0.00000, 90.00000}
		},
		{
			{-71.50000, -7.59500, -1.61910, 0.00000, 0.00000, 0.00000},
			{-71.50000, -6.41900, -1.62110, 0.00000, 0.00000, 0.00000},
			{-71.50000, -3.20920, -1.62110, 0.00000, 0.00000, 0.00000},
			{-71.50000, -1.52490, -1.61910, 0.00000, 0.00000, 0.00000}
		}
	},
	Float:ludo_navigator_lines_finish_2[MAX_LUDO_PLAYERS][MAX_LUDO_NAVIGATOR_LINES_FINISH][] = //19378
	{
		{
			{0.00000, 66.25000, -4.68600, 90.00000, 0.00000, 0.00000},
			{0.00000, 55.75000, -4.68600, 90.00000, 0.00000, 0.00000},
			{0.00000, 45.25000, -4.68600, 90.00000, 0.00000, 0.00000},
			{0.00000, 34.75000, -4.68600, 90.00000, 0.00000, 0.00000},
			{0.00000, 24.25000, -4.68600, 90.00000, 0.00000, 0.00000},
			{0.00000, 13.75000, -4.68600, 90.00000, 0.00000, 0.00000}
		},
		{
			{66.25000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000},
			{55.75000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000},
			{45.25000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000},
			{34.75000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000},
			{24.25000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000},
			{13.75000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000}
		},
		{
			{0.00000, -66.25000, -4.68600, 90.00000, 0.00000, 0.00000},
			{0.00000, -55.75000, -4.68600, 90.00000, 0.00000, 0.00000},
			{0.00000, -45.25000, -4.68600, 90.00000, 0.00000, 0.00000},
			{0.00000, -34.75000, -4.68600, 90.00000, 0.00000, 0.00000},
			{0.00000, -24.25000, -4.68600, 90.00000, 0.00000, 0.00000},
			{0.00000, -13.75000, -4.68600, 90.00000, 0.00000, 0.00000}
		},
		{
			{-66.25000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000},
			{-55.75000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000},
			{-45.25000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000},
			{-34.75000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000},
			{-24.25000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000},
			{-13.75000, 0.00000, -4.68600, 90.00000, 0.00000, -90.00000}
		}
	};

CMD:u(playerid, params[])
{
	PlayerLudo[playerid][uPlayerID] = 1;
	return LudoNavigation(playerid, strval(params));
}

stock LudoNavigation(playerid, pointsnum)
{
	new
		index,
		index2,
		index3,
		index4,
		index5,

		player_number,
		player_index,
		player_warn;

	PlayerLudo[playerid][uOldPointID] += PlayerLudo[playerid][uNewPointID];
	PlayerLudo[playerid][uNewPointID] = pointsnum;
	PlayerLudo[playerid][uOldIndexObject] = PlayerLudo[playerid][uIndexObject];

	if (PlayerLudo[playerid][uNumPointID] >= MAX_LUDO_NAVIGATOR_POINTS_P+MAX_LUDO_NAVIGATOR_POINTS)
		return SendClientMessage(playerid, -1, !"Путь пройден");

	player_number = PlayerLudo[playerid][uPlayerID];
	player_number--;

	switch(player_number)
	{
		case 1: 
		{
			player_index = 12;
			player_warn = 3;
		}
		case 2:
		{
			player_index = 24;
			player_warn = 6;
		}
		case 3:
		{
			player_index = 36;
			player_warn = 9;
		}
	}

	if (PlayerLudo[playerid][uOldPointID] == 0)
	{
		//направление первого хода
		PlayerLudo[playerid][uObjectsLine][0] = CreateDynamicObject(19366, 
			ludo_navigator_lines_start[player_number][0][0], 
			ludo_navigator_lines_start[player_number][0][1], 
			ludo_navigator_lines_start[player_number][0][2]+LUDO_NEW_Z, 
			0.0, 
			ludo_navigator_lines_start[player_number][0][4], 
			ludo_navigator_lines_start[player_number][0][5], 
			-1, -1, -1, 
			LUDO_DISTANCE, LUDO_DISTANCE);
		SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][0], player_number);

		PlayerLudo[playerid][uObjectsLine][1] = CreateDynamicObject(19366, 
			ludo_navigator_lines_start[player_number][1][0], 
			ludo_navigator_lines_start[player_number][1][1], 
			ludo_navigator_lines_start[player_number][1][2]+LUDO_NEW_Z, 
			0.0, 
			ludo_navigator_lines_start[player_number][1][4], 
			ludo_navigator_lines_start[player_number][1][5], 
			-1, -1, -1, 
			LUDO_DISTANCE, LUDO_DISTANCE);
		SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][1], player_number);
		
		PlayerLudo[playerid][uIndexObject] = 2;
	}

	for (new i = PlayerLudo[playerid][uOldPointID], j = PlayerLudo[playerid][uNewPointID]+PlayerLudo[playerid][uOldPointID]; i < j; i++)
	{
		if (PlayerLudo[playerid][uNumPointID] < MAX_LUDO_NAVIGATOR_POINTS)
		{
			if (i >= MAX_LUDO_NAVIGATOR_POINTS)
				break;

			index4 = i+player_index;
			index4 %= MAX_LUDO_NAVIGATOR_POINTS+1;

			//создание точек до дорожки к дому
			PlayerLudo[playerid][uObjectsPoint][i] = CreateDynamicObject(19844, 
				ludo_navigator_points[index4][0], 
				ludo_navigator_points[index4][1], 
				ludo_navigator_points[index4][2]+LUDO_NEW_Z, 
				0.0, 0.0, 0.0, 
				-1, -1, -1, 
				LUDO_DISTANCE, LUDO_DISTANCE);
			SetColorDynamicLudo(PlayerLudo[playerid][uObjectsPoint][i], player_number);

			PlayerLudo[playerid][uNumPointID]++;

			//создание напрвления
			index = PlayerLudo[playerid][uIndexObject];
			index5 = index+player_index+player_warn-2;
			index5 %= MAX_LUDO_NAVIGATOR_LINES+2;

			switch (i)
			{
				case 0: continue;
				case 5, 17, 29, 41: //2 объекта
				{
					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines[index5][0], 
						ludo_navigator_lines[index5][1], 
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index5][3], 
						0.0, 
						ludo_navigator_lines[index5][5], 
						-1, -1, -1, 
						LUDO_DISTANCE, LUDO_DISTANCE);
					SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					index++;
					index5++;
					index5 %= MAX_LUDO_NAVIGATOR_LINES+2;

					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines[index5][0], 
						ludo_navigator_lines[index5][1], 
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index5][3], 
						0.0, 
						ludo_navigator_lines[index5][5], 
						-1, -1, -1, 
						LUDO_DISTANCE, LUDO_DISTANCE);
					SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					PlayerLudo[playerid][uIndexObject] += 2;
				}
				case 6, 18, 30, 42: //3 объекта
				{
					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines[index5][0], 
						ludo_navigator_lines[index5][1], 
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index5][3], 
						0.0, 
						ludo_navigator_lines[index5][5], 
						-1, -1, -1, 
						LUDO_DISTANCE, LUDO_DISTANCE);
					SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					index++;
					index5++;
					index5 %= MAX_LUDO_NAVIGATOR_LINES+2;

					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines[index5][0], 
						ludo_navigator_lines[index5][1], 
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index5][3], 
						0.0, 
						ludo_navigator_lines[index5][5], 
						-1, -1, -1, 
						LUDO_DISTANCE, LUDO_DISTANCE);
					SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					index++;
					index5++;
					index5 %= MAX_LUDO_NAVIGATOR_LINES+2;

					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines[index5][0], 
						ludo_navigator_lines[index5][1], 
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index5][3], 
						0.0, 
						ludo_navigator_lines[index5][5], 
						-1, -1, -1, 
						LUDO_DISTANCE, LUDO_DISTANCE);
					SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					PlayerLudo[playerid][uIndexObject] += 3;
				}
				default: //1 объект
				{
					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines[index5][0], 
						ludo_navigator_lines[index5][1], 
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index5][3], 
						0.0, 
						ludo_navigator_lines[index5][5], 
						-1, -1, -1, 
						LUDO_DISTANCE, LUDO_DISTANCE);
					SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					PlayerLudo[playerid][uIndexObject]++;			}
			}
		}
		else
		{
			if (i >= MAX_LUDO_NAVIGATOR_POINTS_P+MAX_LUDO_NAVIGATOR_POINTS)
			{
				SendClientMessage(playerid, -1, !"Финиш");
				break;
			}

			//создание точек на дорожке к дому
			index2 = i-MAX_LUDO_NAVIGATOR_POINTS;

			PlayerLudo[playerid][uObjectsPoint][i] = CreateDynamicObject(19844, 
				ludo_navigator_player_points[player_number][index2][0], 
				ludo_navigator_player_points[player_number][index2][1], 
				ludo_navigator_player_points[player_number][index2][2]+LUDO_NEW_Z, 
				0.0, 0.0, 0.0, 
				-1, -1, -1, 
				LUDO_DISTANCE, LUDO_DISTANCE);
			WhiteColorLudo(PlayerLudo[playerid][uObjectsPoint][i]);

			PlayerLudo[playerid][uNumPointID]++;

			//создание напрвления
			index = PlayerLudo[playerid][uIndexObject];

			if (i == 47)
			{
				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][0][0], 
					ludo_navigator_lines_finish_1[player_number][0][1], 
					ludo_navigator_lines_finish_1[player_number][0][2]+LUDO_NEW_Z, 
					0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][0][5], 
					-1, -1, -1, 
					LUDO_DISTANCE, LUDO_DISTANCE);
				SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][1][0], 
					ludo_navigator_lines_finish_1[player_number][1][1], 
					ludo_navigator_lines_finish_1[player_number][1][2]+LUDO_NEW_Z, 
						0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][1][5], 
					-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
				SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][2][0], 
					ludo_navigator_lines_finish_1[player_number][2][1], 
					ludo_navigator_lines_finish_1[player_number][2][2]+LUDO_NEW_Z, 
					0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][2][5], 
					-1, -1, -1, 
					LUDO_DISTANCE, LUDO_DISTANCE);
				WhiteColorLudo(PlayerLudo[playerid][uObjectsLine][index]);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][3][0], 
					ludo_navigator_lines_finish_1[player_number][3][1], 
					ludo_navigator_lines_finish_1[player_number][3][2]+LUDO_NEW_Z, 
					0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][3][5], 
					-1, -1, -1, 
					LUDO_DISTANCE, LUDO_DISTANCE);
				WhiteColorLudo(PlayerLudo[playerid][uObjectsLine][index]);

				PlayerLudo[playerid][uIndexObject] += 4;
			}
			else
			{
				index3 = i-MAX_LUDO_NAVIGATOR_POINTS-1;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19378, 
					ludo_navigator_lines_finish_2[player_number][index3][0], 
					ludo_navigator_lines_finish_2[player_number][index3][1], 
					ludo_navigator_lines_finish_2[player_number][index3][2]+LUDO_NEW_Z, 
					90.0, 0.0, 
					ludo_navigator_lines_finish_2[player_number][index3][5], 
					-1, -1, -1, 
					LUDO_DISTANCE, LUDO_DISTANCE);
				WhiteColorLudo(PlayerLudo[playerid][uObjectsLine][index]);

				PlayerLudo[playerid][uIndexObject]++;
			}

			if (i == MAX_LUDO_NAVIGATOR_POINTS_P+MAX_LUDO_NAVIGATOR_POINTS-1)
			{
				SendClientMessage(playerid, -1, !"Финиш");
				break;
			}
		}
	}

	for (new i = 0, j = PlayerLudo[playerid][uOldPointID]; i < j; i++)
	{
		BlackColorLudo(PlayerLudo[playerid][uObjectsPoint][i]);
	}

	for (new i = 0, j = PlayerLudo[playerid][uOldIndexObject]; i < j; i++)
	{
		BlackColorLudo(PlayerLudo[playerid][uObjectsLine][i]);
	}

	Streamer_Update(playerid, STREAMER_TYPE_OBJECT);

	return 1;
}
