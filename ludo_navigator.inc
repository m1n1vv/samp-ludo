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
	Float:LUDO_ZONE_SIZE = 4.0,
	Float:LUDO_ZONE_Z = 0.08240;

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
	};

CMD:u(playerid, params[])
{
	PlayerLudo[playerid][uPlayerNum] = playerid+1;
	return LudoNavigation(playerid, LudoRandom);
}

stock LudoNavigation(playerid, pointsnum)
{
	new
		index,
		index2,
		index3,
		index4,

		player_way,
		player_number,
		player_index,
		player_warn,

		index_zone,
		index_pos_zone;

	PlayerLudo[playerid][uOldPointID] += PlayerLudo[playerid][uNewPointID];
	PlayerLudo[playerid][uNewPointID] = pointsnum;
	PlayerLudo[playerid][uOldIndexObject] = PlayerLudo[playerid][uIndexObject];

	if (PlayerLudo[playerid][uNumPointID] >= MAX_LUDO_NAVIGATOR_POINTS_P+MAX_LUDO_NAVIGATOR_POINTS)
		return SendClientMessage(playerid, -1, !"Путь пройден");

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
			LUDO_ZONE_Z+LUDO_NEW_Z, 
			LUDO_ZONE_SIZE, 
			PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid
		);

		PlayerLudo[playerid][uObjectsPoint][index_zone] = CreateDynamicObject(19844, 
			ludo_navigator_points[index_pos_zone][0], 
			ludo_navigator_points[index_pos_zone][1], 
			LUDO_ZONE_Z+LUDO_NEW_Z, 
			0.0, 0.0, 0.0, 
			PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
			LUDO_DISTANCE, LUDO_DISTANCE);
		SetColorDynamicLudo(PlayerLudo[playerid][uObjectsPoint][index_zone], player_number);
	}
	else
	{
		
	}

	PlayerLudo[playerid][uIndexZone]++;

	if (PlayerLudo[playerid][uOldPointID] == 0)
	{
		//направление первого хода
		PlayerLudo[playerid][uObjectsLine][0] = CreateDynamicObject(19366, 
			ludo_navigator_lines_start[player_number][0][0], 
			ludo_navigator_lines_start[player_number][0][1], 
			ludo_navigator_lines_start[player_number][0][2]+LUDO_NEW_Z, 
			0.0, 0.0, 
			ludo_navigator_lines_start[player_number][0][3], 
			PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
			LUDO_DISTANCE, LUDO_DISTANCE);
		SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][0], player_number);

		PlayerLudo[playerid][uObjectsLine][1] = CreateDynamicObject(19366, 
			ludo_navigator_lines_start[player_number][1][0], 
			ludo_navigator_lines_start[player_number][1][1], 
			ludo_navigator_lines_start[player_number][1][2]+LUDO_NEW_Z, 
			0.0,  0.0, 
			ludo_navigator_lines_start[player_number][1][3], 
			PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
			LUDO_DISTANCE, LUDO_DISTANCE);
		SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][1], player_number);
		
		PlayerLudo[playerid][uIndexObject] = 2;
	}

	for (new i = PlayerLudo[playerid][uOldPointID]; i < player_way; i++)
	{
		if (PlayerLudo[playerid][uNumPointID] < MAX_LUDO_NAVIGATOR_POINTS)
		{
			if (i >= MAX_LUDO_NAVIGATOR_POINTS)
				break;

			PlayerLudo[playerid][uNumPointID]++;

			//создание напрвления
			index = PlayerLudo[playerid][uIndexObject];
			index4 = index+player_index+player_warn-2;
			index4 %= MAX_LUDO_NAVIGATOR_LINES+2;

			switch (i)
			{
				case 0: continue;
				case 5, 6, 17, 18, 29, 30, 41, 42: //3 объекта
				{
					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19447, 
						ludo_navigator_lines[index4][0], 
						ludo_navigator_lines[index4][1], 
						ludo_navigator_lines[index4][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index4][3], 
						0.0, 
						ludo_navigator_lines[index4][5], 
						PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
						LUDO_DISTANCE, LUDO_DISTANCE);
					SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					index++;
					index4++;
					index4 %= MAX_LUDO_NAVIGATOR_LINES+2;

					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines[index4][0], 
						ludo_navigator_lines[index4][1], 
						ludo_navigator_lines[index4][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index4][3], 
						0.0, 
						ludo_navigator_lines[index4][5], 
						PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
						LUDO_DISTANCE, LUDO_DISTANCE);
					SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					index++;
					index4++;
					index4 %= MAX_LUDO_NAVIGATOR_LINES+2;

					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines[index4][0], 
						ludo_navigator_lines[index4][1], 
						ludo_navigator_lines[index4][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index4][3], 
						0.0, 
						ludo_navigator_lines[index4][5], 
						PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
						LUDO_DISTANCE, LUDO_DISTANCE);
					SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					PlayerLudo[playerid][uIndexObject] += 3;
				}
				default: //1 объект
				{
					PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines[index4][0], 
						ludo_navigator_lines[index4][1], 
						ludo_navigator_lines[index4][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index4][3], 
						0.0, 
						ludo_navigator_lines[index4][5], 
						PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
						LUDO_DISTANCE, LUDO_DISTANCE);
					SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

					PlayerLudo[playerid][uIndexObject]++;
				}
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
				LUDO_ZONE_Z+LUDO_NEW_Z, 
				0.0, 0.0, 0.0, 
				PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
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
					PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
					LUDO_DISTANCE, LUDO_DISTANCE);
				SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][1][0], 
					ludo_navigator_lines_finish_1[player_number][1][1], 
					ludo_navigator_lines_finish_1[player_number][1][2]+LUDO_NEW_Z, 
						0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][1][5], 
					PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, LUDO_DISTANCE, LUDO_DISTANCE);
				SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][2][0], 
					ludo_navigator_lines_finish_1[player_number][2][1], 
					ludo_navigator_lines_finish_1[player_number][2][2]+LUDO_NEW_Z, 
					0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][2][5], 
					PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
					LUDO_DISTANCE, LUDO_DISTANCE);
				WhiteColorLudo(PlayerLudo[playerid][uObjectsLine][index]);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][3][0], 
					ludo_navigator_lines_finish_1[player_number][3][1], 
					ludo_navigator_lines_finish_1[player_number][3][2]+LUDO_NEW_Z, 
					0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][3][5], 
					PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
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
					ludo_navigator_lines_finish_2[player_number][index3][3], 
					PlayerLudo[playerid][uPlayerWorld], LUDO_INTERIOR, playerid, 
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

	Streamer_Update(playerid, STREAMER_TYPE_OBJECT);

	return 1;
}

stock LudoDeNavigation(playerid)
{
	for (new i = 0, j = PlayerLudo[playerid][uNewPointID]+PlayerLudo[playerid][uOldPointID]; i < j; i++)
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

	if (areaid == PlayerLudo[playerid][uPlayerZones][index_zone])
	{
		DestroyDynamicArea(PlayerLudo[playerid][uPlayerZones][index_zone]);
		LudoDeNavigation(playerid);

		GetPlayerPos(playerid, PlayerLudo[playerid][uPos_x], PlayerLudo[playerid][uPos_y], PlayerLudo[playerid][uPos_z]);
		GetPlayerFacingAngle(playerid, PlayerLudo[playerid][uAngle]);
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
