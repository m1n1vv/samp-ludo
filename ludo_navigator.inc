#if defined LUDO_NAVIGATOR
	#endinput
#endif
#define LUDO_NAVIGATOR

const
	MAX_LUDO_NAVIGATOR_POINTS = 47,
	MAX_LUDO_NAVIGATOR_POINTS_P = 7,
	MAX_LUDO_NAVIGATOR_LINES_START = 2,
	MAX_LUDO_NAVIGATOR_LINES = 62,
	MAX_LUDO_NAVIGATOR_LINES_TR = 4,
	MAX_LUDO_NAVIGATOR_LINES_FINISH = 6;

const
	Float:LUDO_NAVIGATOR_ZONE_SIZE = 4.0,
	Float:LUDO_NAVIGATOR_ZONE_Z = 0.08240;

static const
	Float:ludo_navigator_points[MAX_LUDO_NAVIGATOR_POINTS+1][] = //19844
	{
		{9.63000, 71.50000},
		{9.63000, 61.00000},
		{9.63000, 50.50000},
		{9.63000, 40.00000},
		{9.63000, 29.50000},
		{16.41000, 16.41000},
		{29.50000, 9.63000},
		{40.00000, 9.63000},
		{50.50000, 9.63000},
		{61.00000, 9.63000},
		{71.51880, 9.63690},
		{71.50000, 0.00000},
		{71.50000, -9.63000},
		{61.00000, -9.63000},
		{50.50000, -9.63000},
		{40.00000, -9.63000},
		{29.50000, -9.63000},
		{16.41000, -16.41000},
		{9.63000, -29.50000},
		{9.63000, -40.00000},
		{9.63000, -50.50000},
		{9.63000, -61.00000},
		{9.63690, -71.51880},
		{0.00000, -71.50000},
		{-9.63000, -71.50000},
		{-9.63000, -61.00000},
		{-9.63000, -50.50000},
		{-9.63000, -40.00000},
		{-9.63000, -29.50000},
		{-16.41000, -16.41000},
		{-29.50000, -9.63000},
		{-40.00000, -9.63000},
		{-50.50000, -9.63000},
		{-61.00000, -9.63000},
		{-71.51880, -9.63690},
		{-71.50000, 0.00000},
		{-71.50000, 9.63000},
		{-61.00000, 9.63000},
		{-50.50000, 9.63000},
		{-40.00000, 9.63000},
		{-29.50000, 9.63000},
		{-16.41000, 16.41000},
		{-9.63000, 29.50000},
		{-9.63000, 40.00000},
		{-9.63000, 50.50000},
		{-9.63000, 61.00000},
		{-9.63690, 71.51880},
		{0.00000, 71.50000}
	},
	Float:ludo_navigator_player_points[MAX_LUDO_PLAYERS][MAX_LUDO_NAVIGATOR_POINTS_P][] = //19844
	{
		{
			{0.00000, 71.50000},
			{0.00000, 61.00000},
			{0.00000, 50.50000},
			{0.00000, 40.00000},
			{0.00000, 29.50000},
			{0.00000, 19.00000},
			{0.00000, 8.68000}
		},
		{
			{71.50000, 0.00000},
			{61.00000, 0.00000},
			{50.50000, 0.00000},
			{40.00000, 0.00000},
			{29.50000, 0.00000},
			{19.00000, 0.00000},
			{8.68000, 0.00000}
		},
		{
			{0.00000, -71.50000},
			{0.00000, -61.00000},
			{0.00000, -50.50000},
			{0.00000, -40.00000},
			{0.00000, -29.50000},
			{0.00000, -19.00000},
			{0.00000, -8.68000}
		},
		{
			{-71.50000, 0.00000},
			{-61.00000, 0.00000},
			{-50.50000, 0.00000},
			{-40.00000, 0.00000},
			{-29.50000, 0.00000},
			{-19.00000, 0.00000},
			{-8.68000, 0.00000}
		}
	},
	Float:ludo_navigator_lines[MAX_LUDO_NAVIGATOR_LINES+2][] = //19378/19447/19366
	{
		{9.63000, 66.33900, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, 55.83900, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, 45.33900, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, 34.83900, -4.68600, 90.00000, 0.00000, 0.00000},
		{13.01060, 19.81350, -1.62110, 0.00000, 0.00000, 45.00000},
		{9.63000, 24.9078, -1.4760, 90.00000, 0.00000, 0.00000},
		{9.63000, 27.99300, -1.62110, 0.00000, 0.00000, 0.00000},
		{19.81350, 13.01060, -1.62110, 0.00000, 0.00000, 45.00000},
		{24.9078, 9.63000, -1.4760, 90.00000, 0.00000, 90.00000},
		{27.99300, 9.63000, -1.62110, 0.00000, 0.00000, 90.00000},
		{34.83900, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{45.33900, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{55.83900, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{66.33900, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{71.50000, 4.7320, -5.12100, 0.00000, 0.00000, 0.00000},
		{71.50000, -4.90200, -5.12100, 0.00000, 0.00000, 0.00000},
		{66.33900, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{55.83900, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{45.33900, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{34.83900, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{19.81350, -13.01060, -1.62110, 0.00000, 0.00000, -45.00000},
		{24.9078, -9.63000, -1.4760, 90.00000, 0.00000, 90.00000},
		{27.99300, -9.63000, -1.62110, 0.00000, 0.00000, 90.00000},
		{13.01060, -19.81350, -1.62110, 0.00000, 0.00000, -45.00000},
		{9.63000, -24.9078, -1.4760, 90.00000, 0.00000, 0.00000},
		{9.63000, -27.99300, -1.62110, 0.00000, 0.00000, 0.00000},
		{9.63000, -34.83900, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, -45.33900, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, -55.83900, -4.68600, 90.00000, 0.00000, 0.00000},
		{9.63000, -66.33900, -4.68600, 90.00000, 0.00000, 0.00000},
		{4.7320, -71.50000, -5.12100, 0.00000, 0.00000, 90.00000},
		{-4.90200, -71.50000, -5.12100, 0.00000, 0.00000, 90.00000},
		{-9.63000, -66.33900, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, -55.83900, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, -45.33900, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, -34.83900, -4.68600, 90.00000, 0.00000, 0.00000},
		{-13.01060, -19.81350, -1.62110, 0.00000, 0.00000, 45.00000},
		{-9.63000, -24.9078, -1.4760, 90.00000, 0.00000, 0.00000},
		{-9.63000, -27.99300, -1.62110, 0.00000, 0.00000, 0.00000},
		{-19.81350, -13.01060, -1.62110, 0.00000, 0.00000, 45.00000},
		{-24.9078, -9.63000, -1.4760, 90.00000, 0.00000, 90.00000},
		{-27.99300, -9.63000, -1.62110, 0.00000, 0.00000, 90.00000},
		{-34.83900, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-45.33900, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-55.83900, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-66.33900, -9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-71.50000, -4.7320, -5.12100, 0.00000, 0.00000, 0.00000},
		{-71.50000, 4.90200, -5.12100, 0.00000, 0.00000, 0.00000},
		{-66.33900, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-55.83900, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-45.33900, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-34.83900, 9.63000, -4.68600, 90.00000, 0.00000, -90.00000},
		{-19.81350, 13.01060, -1.62110, 0.00000, 0.00000, -45.00000},
		{-24.9078, 9.63000, -1.4760, 90.00000, 0.00000, 90.00000},
		{-27.99300, 9.63000, -1.62110, 0.00000, 0.00000, 90.00000},
		{-13.01060, 19.81350, -1.62110, 0.00000, 0.00000, -45.00000},
		{-9.63000, 24.9078, -1.4760, 90.00000, 0.00000, 0.00000},
		{-9.63000, 27.99300, -1.62110, 0.00000, 0.00000, 0.00000},
		{-9.63000, 34.83900, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, 45.33900, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, 55.83900, -4.68600, 90.00000, 0.00000, 0.00000},
		{-9.63000, 66.33900, -4.68600, 90.00000, 0.00000, 0.00000},
		{-4.7320, 71.50000, -5.12100, 0.00000, 0.00000, 90.00000},
		{4.90200, 71.50000, -5.12100, 0.00000, 0.00000, 90.00000}
	},
	Float:ludo_navigator_lines_start[MAX_LUDO_PLAYERS][MAX_LUDO_NAVIGATOR_LINES_START][] = //19366
	{
		{
			{12.93400, 71.50000, -1.61910, 90.00000},
			{11.1465, 71.50000, -1.62110, 90.00000}
		},
		{
			{71.50000, -12.93400, -1.61910, 0.00000},
			{71.50000, -11.1465, -1.62110, 0.00000}
		},
		{
			{-12.93400, -71.50000, -1.61910, 90.00000},
			{-11.1465, -71.50000, -1.62110, 90.00000}
		},
		{
			{-71.50000, 12.93400, -1.61910, 0.00000},
			{-71.50000, 11.1465, -1.62110, 0.00000}
		}

	},
	Float:ludo_navigator_lines_finish_1[MAX_LUDO_PLAYERS][MAX_LUDO_NAVIGATOR_LINES_TR][] = //19366
	{
		{
			{-8.11300, 71.50000, -1.61910, 0.00000, 0.00000, 90.00000},
			{-6.41900, 71.50000, -1.62110, 0.00000, 0.00000, 90.00000},
			{-3.20920, 71.50000, -1.62110, 0.00000, 0.00000, 90.00000},
			{-1.52490, 71.50000, -1.61910, 0.00000, 0.00000, 90.00000}
		},
		{
			{71.50000, 8.11300, -1.61910, 0.00000, 0.00000, 0.00000},
			{71.50000, 6.41900, -1.62110, 0.00000, 0.00000, 0.00000},
			{71.50000, 3.20920, -1.62110, 0.00000, 0.00000, 0.00000},
			{71.50000, 1.52490, -1.61910, 0.00000, 0.00000, 0.00000}
		},
		{
			{8.11300, -71.50000, -1.61910, 0.00000, 0.00000, 90.00000},
			{6.41900, -71.50000, -1.62110, 0.00000, 0.00000, 90.00000},
			{3.20920, -71.50000, -1.62110, 0.00000, 0.00000, 90.00000},
			{1.52490, -71.50000, -1.61910, 0.00000, 0.00000, 90.00000}
		},
		{
			{-71.50000, -8.11300, -1.61910, 0.00000, 0.00000, 0.00000},
			{-71.50000, -6.41900, -1.62110, 0.00000, 0.00000, 0.00000},
			{-71.50000, -3.20920, -1.62110, 0.00000, 0.00000, 0.00000},
			{-71.50000, -1.52490, -1.61910, 0.00000, 0.00000, 0.00000}
		}
	},
	Float:ludo_navigator_lines_finish_2[MAX_LUDO_PLAYERS][MAX_LUDO_NAVIGATOR_LINES_FINISH][] = //19378
	{
		{
			{0.00000, 66.3386, -4.68600, 0.00000},
			{0.00000, 55.8386, -4.68600, 0.00000},
			{0.00000, 45.3386, -4.68600, 0.00000},
			{0.00000, 34.8386, -4.68600, 0.00000},
			{0.00000, 24.3386, -4.68600, 0.00000},
			{0.00000, 13.8386, -4.68600, 0.00000}
		},
		{
			{66.3386, 0.00000, -4.68600, -90.00000},
			{55.8386, 0.00000, -4.68600, -90.00000},
			{45.3386, 0.00000, -4.68600, -90.00000},
			{34.8386, 0.00000, -4.68600, -90.00000},
			{24.3386, 0.00000, -4.68600, -90.00000},
			{13.8386, 0.00000, -4.68600, -90.00000}
		},
		{
			{0.00000, -66.3386, -4.68600, 0.00000},
			{0.00000, -55.8386, -4.68600, 0.00000},
			{0.00000, -45.3386, -4.68600, 0.00000},
			{0.00000, -34.8386, -4.68600, 0.00000},
			{0.00000, -24.3386, -4.68600, 0.00000},
			{0.00000, -13.8386, -4.68600, 0.00000}
		},
		{
			{-66.3386, 0.00000, -4.68600, -90.00000},
			{-55.8386, 0.00000, -4.68600, -90.00000},
			{-45.3386, 0.00000, -4.68600, -90.00000},
			{-34.8386, 0.00000, -4.68600, -90.00000},
			{-24.3386, 0.00000, -4.68600, -90.00000},
			{-13.8386, 0.00000, -4.68600, -90.00000}
		}
	},
	Float:ludo_navigator_finish_zones[MAX_LUDO_PLAYERS][] =
	{
		{12.65560, 13.31170, 1.63110, 2.63080, -1.63110, 2.63080, -12.65560, 13.31170, 12.65560, 13.31170},
		{13.31170, 12.65560, 2.63080, 1.63110, 2.63080, -1.63110, 13.31170, -12.65560, 13.31170, 12.65560},
		{12.65560, -13.31170, 1.63110, -2.63080, -1.63110, -2.63080, -12.65560, -13.31170, 12.65560, -13.31170},
		{-13.31165, 12.65555, -2.63084, 1.63111, -2.63080, -1.63110, -13.31170, -12.65560, -13.31165, 12.65555}
	};

CMD:u(playerid, params[])
{
	PlayerLudo[playerid][uPlayerNum] = playerid+1;
	return LudoNavigation(playerid, strval(params));
}

stock LudoNavigation(playerid, pointsnum)
{
	new
		index,
		index2,
		index3,

		player_way,
		player_number,
		player_index,
		player_warn,

		index_zone,
		index_pos_zone;

	PlayerLudo[playerid][uOldPointID] += PlayerLudo[playerid][uNewPointID];
	PlayerLudo[playerid][uNewPointID] = pointsnum;
	PlayerLudo[playerid][uOldIndexObject] = PlayerLudo[playerid][uIndexObject];

	player_number = PlayerLudo[playerid][uPlayerNum];
	player_number--;
	player_way = PlayerLudo[playerid][uNewPointID]+PlayerLudo[playerid][uOldPointID];
	index_zone  = PlayerLudo[playerid][uIndexZone];

	switch(player_number)
	{
		case 1: 
		{
			player_index = 12;
			player_warn = 4;
		}
		case 2:
		{
			player_index = 24;
			player_warn = 8;
		}
		case 3:
		{
			player_index = 36;
			player_warn = 12;
		}
	}

	if (player_way < MAX_LUDO_NAVIGATOR_POINTS)
	{
		index_pos_zone = player_way-1+player_index;
		index_pos_zone %= MAX_LUDO_NAVIGATOR_POINTS+1;

		PlayerLudo[playerid][uPlayerZones][index_zone] = CreateDynamicSphere(
			ludo_navigator_points[index_pos_zone][0], 
			ludo_navigator_points[index_pos_zone][1], 
			LUDO_NAVIGATOR_ZONE_Z+LUDO_MAP_NEW_Z, 
			LUDO_NAVIGATOR_ZONE_SIZE, 
			PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid
		);

		PlayerLudo[playerid][uObjectsPoint][index_zone] = CreateDynamicObject(19844, 
			ludo_navigator_points[index_pos_zone][0], 
			ludo_navigator_points[index_pos_zone][1], 
			LUDO_NAVIGATOR_ZONE_Z+LUDO_MAP_NEW_Z, 
			0.0, 0.0, 0.0, 
			PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
			LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
		);
		SetColorLudo(PlayerLudo[playerid][uObjectsPoint][index_zone], player_number);
	}
	else
	{
		index_pos_zone = player_way-1-MAX_LUDO_NAVIGATOR_POINTS;

		if (index_pos_zone >= MAX_LUDO_NAVIGATOR_POINTS_P)
			index_pos_zone = 6;

		if (player_way >= MAX_LUDO_NAVIGATOR_POINTS+MAX_LUDO_NAVIGATOR_POINTS_P)
		{
			player_way = MAX_LUDO_NAVIGATOR_POINTS+MAX_LUDO_NAVIGATOR_POINTS_P;
			PlayerLudo[playerid][uNewPointID] = player_way-PlayerLudo[playerid][uOldPointID];
		}

		if (index_pos_zone == MAX_LUDO_NAVIGATOR_POINTS_P-1)
		{
			SendClientMessage(playerid, -1, "Зона финиша");
			
			PlayerLudo[playerid][uPlayerHomeZone] = CreateDynamicPolygon(ludo_navigator_finish_zones[player_number], 
				.worldid = PlayerLudo[playerid][uPlayerWorld], 
				.interiorid = LUDO_INTERIOR, 
				.playerid = playerid
			);
		}
		else
		{
			PlayerLudo[playerid][uPlayerZones][index_zone] = CreateDynamicSphere(
				ludo_navigator_player_points[player_number][index_pos_zone][0], 
				ludo_navigator_player_points[player_number][index_pos_zone][1], 
				LUDO_NAVIGATOR_ZONE_Z+LUDO_MAP_NEW_Z, 
				LUDO_NAVIGATOR_ZONE_SIZE, 
				PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid
			);
		}

		PlayerLudo[playerid][uObjectsPoint][index_zone] = CreateDynamicObject(19844, 
			ludo_navigator_player_points[player_number][index_pos_zone][0], 
			ludo_navigator_player_points[player_number][index_pos_zone][1], 
			LUDO_NAVIGATOR_ZONE_Z+LUDO_MAP_NEW_Z, 
			0.0, 0.0, 0.0, 
			PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
			LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
		);
		WhiteColorLudo(PlayerLudo[playerid][uObjectsPoint][index_zone]);	
	}

	PlayerLudo[playerid][uIndexZone]++;

	if (PlayerLudo[playerid][uOldPointID] == 0)
	{
		//направление первого хода
		PlayerLudo[playerid][uObjectsLine][0] = CreateDynamicObject(19366, 
			ludo_navigator_lines_start[player_number][0][0], 
			ludo_navigator_lines_start[player_number][0][1], 
			ludo_navigator_lines_start[player_number][0][2]+LUDO_MAP_NEW_Z, 
			0.0, 0.0, 
			ludo_navigator_lines_start[player_number][0][3], 
			PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
			LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
		);
		SetColorLudo(PlayerLudo[playerid][uObjectsLine][0], player_number);

		PlayerLudo[playerid][uObjectsLine][1] = CreateDynamicObject(19366, 
			ludo_navigator_lines_start[player_number][1][0], 
			ludo_navigator_lines_start[player_number][1][1], 
			ludo_navigator_lines_start[player_number][1][2]+LUDO_MAP_NEW_Z, 
			0.0,  0.0, 
			ludo_navigator_lines_start[player_number][1][3], 
			PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
			LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
		);
		SetColorLudo(PlayerLudo[playerid][uObjectsLine][1], player_number);
		
		PlayerLudo[playerid][uIndexObject] = 2;
	}

	for (new i = PlayerLudo[playerid][uOldPointID]; i < player_way; i++)
	{
		if (i < MAX_LUDO_NAVIGATOR_POINTS)
		{
			if (i >= MAX_LUDO_NAVIGATOR_POINTS)
				break;

			//создание напрвления
			index = PlayerLudo[playerid][uIndexObject];
			index3 = index+player_index+player_warn-2;
			index3 %= MAX_LUDO_NAVIGATOR_LINES+2;

			switch (i)
			{
				case 0: continue;
				case 5, 6, 17, 18, 29, 30, 41, 42: //3 объекта
				{
					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19447, 
						ludo_navigator_lines[index3][0], 
						ludo_navigator_lines[index3][1], 
						ludo_navigator_lines[index3][2]+LUDO_MAP_NEW_Z, 
						ludo_navigator_lines[index3][3], 
						0.0, 
						ludo_navigator_lines[index3][5], 
						PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
						LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
					);
					SetColorLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					index++;
					index3++;
					index3 %= MAX_LUDO_NAVIGATOR_LINES+2;

					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines[index3][0], 
						ludo_navigator_lines[index3][1], 
						ludo_navigator_lines[index3][2]+LUDO_MAP_NEW_Z, 
						ludo_navigator_lines[index3][3], 
						0.0, 
						ludo_navigator_lines[index3][5], 
						PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
						LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
					);
					SetColorLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					index++;
					index3++;
					index3 %= MAX_LUDO_NAVIGATOR_LINES+2;

					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines[index3][0], 
						ludo_navigator_lines[index3][1], 
						ludo_navigator_lines[index3][2]+LUDO_MAP_NEW_Z, 
						ludo_navigator_lines[index3][3], 
						0.0, 
						ludo_navigator_lines[index3][5], 
						PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
						LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
					);
					SetColorLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					PlayerLudo[playerid][uIndexObject] += 3;
				}
				default: //1 объект
				{
					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines[index3][0], 
						ludo_navigator_lines[index3][1], 
						ludo_navigator_lines[index3][2]+LUDO_MAP_NEW_Z, 
						ludo_navigator_lines[index3][3], 
						0.0, 
						ludo_navigator_lines[index3][5], 
						PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
						LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
					);
					SetColorLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					PlayerLudo[playerid][uIndexObject]++;
				}
			}
		}
		else
		{
			//создание напрвления
			index = PlayerLudo[playerid][uIndexObject];

			if (i == 47)
			{
				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][0][0], 
					ludo_navigator_lines_finish_1[player_number][0][1], 
					ludo_navigator_lines_finish_1[player_number][0][2]+LUDO_MAP_NEW_Z, 
					0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][0][5], 
					PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
					LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
				);
				SetColorLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][1][0], 
					ludo_navigator_lines_finish_1[player_number][1][1], 
					ludo_navigator_lines_finish_1[player_number][1][2]+LUDO_MAP_NEW_Z, 
						0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][1][5], 
					PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
					LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
				);
				SetColorLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][2][0], 
					ludo_navigator_lines_finish_1[player_number][2][1], 
					ludo_navigator_lines_finish_1[player_number][2][2]+LUDO_MAP_NEW_Z, 
					0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][2][5], 
					PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
					LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
				);
				WhiteColorLudo(PlayerLudo[playerid][uObjectsLine][index]);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][3][0], 
					ludo_navigator_lines_finish_1[player_number][3][1], 
					ludo_navigator_lines_finish_1[player_number][3][2]+LUDO_MAP_NEW_Z, 
					0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][3][5], 
					PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
					LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
				);
				WhiteColorLudo(PlayerLudo[playerid][uObjectsLine][index]);

				PlayerLudo[playerid][uIndexObject] += 4;
			}
			else
			{
				index2 = i-MAX_LUDO_NAVIGATOR_POINTS-1;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19378, 
					ludo_navigator_lines_finish_2[player_number][index2][0], 
					ludo_navigator_lines_finish_2[player_number][index2][1], 
					ludo_navigator_lines_finish_2[player_number][index2][2]+LUDO_MAP_NEW_Z, 
					90.0, 0.0, 
					ludo_navigator_lines_finish_2[player_number][index2][3], 
					PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
					LUDO_MAP_DISTANCE, LUDO_MAP_DISTANCE
				);
				WhiteColorLudo(PlayerLudo[playerid][uObjectsLine][index]);

				PlayerLudo[playerid][uIndexObject]++;
			}
		}
	}

	Streamer_Update(playerid, STREAMER_TYPE_OBJECT);

	return 1;
}

stock LudoDeNavigation(playerid)
{
	for (new i = 0, j = PlayerLudo[playerid][uIndexZone]; i < j; i++)
	{
		BlackColorLudo(PlayerLudo[playerid][uObjectsPoint][i]);
	}

	for (new i = 0, j = PlayerLudo[playerid][uIndexObject]; i < j; i++)
	{
		BlackColorLudo(PlayerLudo[playerid][uObjectsLine][i]);
	}

	Streamer_Update(playerid, STREAMER_TYPE_OBJECT);

	return 1;
}

public OnPlayerEnterDynamicArea(playerid, areaid)
{
	new 
		index_zone = PlayerLudo[playerid][uIndexZone]-1;

	if (PlayerLudo[playerid][uIndexZone] != 0)
	{
		if (areaid == PlayerLudo[playerid][uPlayerZones][index_zone])
		{
			DestroyDynamicArea(PlayerLudo[playerid][uPlayerZones][index_zone]);
			PlayerLudo[playerid][uPlayerZones][index_zone] = 0;

			LudoDeNavigation(playerid);

			GetPlayerPos(playerid, PlayerLudo[playerid][uPos_x], PlayerLudo[playerid][uPos_y], PlayerLudo[playerid][uPos_z]);
			GetPlayerFacingAngle(playerid, PlayerLudo[playerid][uAngle]);
		}
		else if (areaid == PlayerLudo[playerid][uPlayerHomeZone])
		{
			DestroyDynamicArea(PlayerLudo[playerid][uPlayerHomeZone]);
			PlayerLudo[playerid][uPlayerHomeZone] = 0;

			PlayerLudo[playerid][uPlayerLives]--;
			PlayerLudo[playerid][uPlayerFinish]++;

			for (new i = 0, j = PlayerLudo[playerid][uIndexZone]; i < j; i++)
			{
				DestroyDynamicObject(PlayerLudo[playerid][uObjectsPoint][i]);
				PlayerLudo[playerid][uObjectsPoint][i] = 0;
			}

			for (new i = 0, j = PlayerLudo[playerid][uIndexObject]; i < j; i++)
			{
				DestroyDynamicObject(PlayerLudo[playerid][uObjectsLine][i]);
				PlayerLudo[playerid][uObjectsLine][i] = 0;

				for (new n = 0, m = PlayerLudo[playerid][uIndexZone]; n < m; n++)
				{
					DestroyDynamicObject(PlayerLudo[playerid][uObjectsPoint][n]);
					PlayerLudo[playerid][uObjectsPoint][n] = 0;
				}

				for (new n = 0, m = PlayerLudo[playerid][uIndexObject]; n < m; n++)
				{
					DestroyDynamicObject(PlayerLudo[playerid][uObjectsLine][n]);
					PlayerLudo[playerid][uObjectsLine][n] = 0;
				}

				PlayerLudo[playerid][uOldPointID] =
				PlayerLudo[playerid][uNewPointID] =
				PlayerLudo[playerid][uIndexZone] =
				PlayerLudo[playerid][uIndexObject] =
				PlayerLudo[playerid][uOldIndexObject] = 0;
			}
		}
	}
	
	#if defined ludo_n_OnPlayerEnterDynamicArea
		ludo_n_OnPlayerEnterDynamicArea(playerid, areaid);
	#endif

	return 1;
}

#if defined _ALS_OnPlayerEnterDynamicArea
	#undef OnPlayerEnterDynamicArea
#else
	#define _ALS_OnPlayerEnterDynamicArea
#endif
#define OnPlayerEnterDynamicArea ludo_n_OnPlayerEnterDynamicArea
#if defined ludo_n_OnPlayerEnterDynamicArea
	forward ludo_n_OnPlayerEnterDynamicArea(playerid, areaid);
#endif
