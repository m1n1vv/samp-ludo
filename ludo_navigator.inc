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

enum
	ludo_player_info
	{
		uRoomID,
		uPlayerID,
		uObjectsPoint[MAX_LUDO_NAVIGATOR_POINTS+MAX_LUDO_NAVIGATOR_POINTS_P],
		uNewPointID,
		uOldPointID,
		uNumPointID,
		uObjectsLine[MAX_LUDO_NAVIGATOR_LINES_START+MAX_LUDO_NAVIGATOR_LINES+MAX_LUDO_NAVIGATOR_LINES_TR+MAX_LUDO_NAVIGATOR_LINES_FINISH],
		uIndexObject,
		uOldIndexObject
	}

static
	LudoInfo[ludo_player_info];

CMD:u(playerid, params[])
{
	new
		index,
		index2;

	LudoInfo[uOldPointID] += LudoInfo[uNewPointID];
	LudoInfo[uNewPointID] = strval(params);
	LudoInfo[uOldIndexObject] = LudoInfo[uIndexObject];

	if (LudoInfo[uNumPointID] >= MAX_LUDO_NAVIGATOR_POINTS_P+MAX_LUDO_NAVIGATOR_POINTS)
		return SendClientMessage(playerid, -1, !"Путь пройден");

	if (LudoInfo[uOldPointID] == 0)
	{
		//направление первого хода
		LudoInfo[uObjectsLine][0] = CreateDynamicObject(19366, 
			ludo_navigator_lines_start[0][0][0], 
			ludo_navigator_lines_start[0][0][1], 
			ludo_navigator_lines_start[0][0][2]+LUDO_NEW_Z, 
			0.0, 
			ludo_navigator_lines_start[0][0][4], 
			ludo_navigator_lines_start[0][0][5], 
			-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
		SetDynamicObjectMaterial(LudoInfo[uObjectsLine][0], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);

		LudoInfo[uObjectsLine][1] = CreateDynamicObject(19366, 
			ludo_navigator_lines_start[0][1][0], 
			ludo_navigator_lines_start[0][1][1], 
			ludo_navigator_lines_start[0][1][2]+LUDO_NEW_Z, 
			0.0, 
			ludo_navigator_lines_start[0][1][4], 
			ludo_navigator_lines_start[0][1][5], 
			-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
		SetDynamicObjectMaterial(LudoInfo[uObjectsLine][1], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);
		
		LudoInfo[uIndexObject] = 2;
	}

	for (new i = LudoInfo[uOldPointID], j = LudoInfo[uNewPointID]+LudoInfo[uOldPointID]; i < j; i++)
	{
		if (LudoInfo[uNumPointID] < MAX_LUDO_NAVIGATOR_POINTS)
		{
			if (i >= MAX_LUDO_NAVIGATOR_POINTS)
				break;

			//создание точек до дорожки к дому
			LudoInfo[uObjectsPoint][i] = CreateDynamicObject(19844, 
				ludo_navigator_points[i][0], 
				ludo_navigator_points[i][1], 
				ludo_navigator_points[i][2]+LUDO_NEW_Z, 
				0.0, 
				ludo_navigator_points[i][4], 
				ludo_navigator_points[i][5], 
				-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
			SetDynamicObjectMaterial(LudoInfo[uObjectsPoint][i], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);

			LudoInfo[uNumPointID]++;

			//создание напрвления
			index = LudoInfo[uIndexObject];

			switch (i)
			{
				case 0: continue;
				case 5, 17, 29, 41: //2 объекта
				{
					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines[index-2][0], 
						ludo_navigator_lines[index-2][1], 
						ludo_navigator_lines[index-2][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index-2][3], 
						0.0, 
						ludo_navigator_lines[index-2][5], 
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);

					index++;

					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines[index-2][0], 
						ludo_navigator_lines[index-2][1], 
						ludo_navigator_lines[index-2][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index-2][3], 
						0.0, 
						ludo_navigator_lines[index-2][5], 
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);

					LudoInfo[uIndexObject] += 2;
				}
				case 6, 18, 30, 42: //3 объекта
				{
					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines[index-2][0], 
						ludo_navigator_lines[index-2][1], 
						ludo_navigator_lines[index-2][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index-2][3], 
						0.0, 
						ludo_navigator_lines[index-2][5], 
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);

					index++;

					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines[index-2][0], 
						ludo_navigator_lines[index-2][1], 
						ludo_navigator_lines[index-2][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index-2][3], 
						0.0, 
						ludo_navigator_lines[index-2][5], 
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);

					index++;

					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines[index-2][0], 
						ludo_navigator_lines[index-2][1], 
						ludo_navigator_lines[index-2][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index-2][3], 
						0.0, 
						ludo_navigator_lines[index-2][5], 
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);

					LudoInfo[uIndexObject] += 3;
				}
				default: //1 объект
				{
					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines[index-2][0], 
						ludo_navigator_lines[index-2][1], 
						ludo_navigator_lines[index-2][2]+LUDO_NEW_Z, 
						ludo_navigator_lines[index-2][3], 
						0.0, 
						ludo_navigator_lines[index-2][5], 
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);

					LudoInfo[uIndexObject]++;
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
			LudoInfo[uObjectsPoint][i] = CreateDynamicObject(19844, 
				ludo_navigator_player_points[0][i-MAX_LUDO_NAVIGATOR_POINTS][0], 
				ludo_navigator_player_points[0][i-MAX_LUDO_NAVIGATOR_POINTS][1], 
				ludo_navigator_player_points[0][i-MAX_LUDO_NAVIGATOR_POINTS][2]+LUDO_NEW_Z, 
				0.0, 
				ludo_navigator_player_points[0][i-MAX_LUDO_NAVIGATOR_POINTS][4], 
				ludo_navigator_player_points[0][i-MAX_LUDO_NAVIGATOR_POINTS][5], 
				-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
			SetDynamicObjectMaterial(LudoInfo[uObjectsPoint][i], 0, 16150, !"ufo_bar", !"GEwhite1_64", 0xFFFFFFFF);

			LudoInfo[uNumPointID]++;

			//создание напрвления
			index = LudoInfo[uIndexObject];

			switch (i)
			{
				case 47:
				{
					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines_finish_1[0][0][0], 
						ludo_navigator_lines_finish_1[0][0][1], 
						ludo_navigator_lines_finish_1[0][0][2]+LUDO_NEW_Z, 
						ludo_navigator_lines_finish_1[0][0][3], 
						0.0, 
						ludo_navigator_lines_finish_1[0][0][5], 
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);

					index++;

					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines_finish_1[0][1][0], 
						ludo_navigator_lines_finish_1[0][1][1], 
						ludo_navigator_lines_finish_1[0][1][2]+LUDO_NEW_Z, 
						ludo_navigator_lines_finish_1[0][1][3], 
						0.0, 
						ludo_navigator_lines_finish_1[0][1][5], 
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, ludo_map_colors[0][lm_id], ludo_map_colors[0][lm_lib], ludo_map_colors[0][lm_texture], 0xFFFFFFFF);

					index++;

					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines_finish_1[0][2][0], 
						ludo_navigator_lines_finish_1[0][2][1], 
						ludo_navigator_lines_finish_1[0][2][2]+LUDO_NEW_Z, 
						ludo_navigator_lines_finish_1[0][2][3], 
						0.0, 
						ludo_navigator_lines_finish_1[0][2][5], 
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, 16150, !"ufo_bar", !"GEwhite1_64", 0xFFFFFFFF);

					index++;

					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19366, 
						ludo_navigator_lines_finish_1[0][3][0], 
						ludo_navigator_lines_finish_1[0][3][1], 
						ludo_navigator_lines_finish_1[0][3][2]+LUDO_NEW_Z, 
						ludo_navigator_lines_finish_1[0][3][3], 
						0.0, 
						ludo_navigator_lines_finish_1[0][3][5], 
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, 16150, !"ufo_bar", !"GEwhite1_64", 0xFFFFFFFF);

					LudoInfo[uIndexObject] += 4;
				}
				default:
				{
					index2 = i-MAX_LUDO_NAVIGATOR_POINTS-1;
					
					LudoInfo[uObjectsLine][index] = CreateDynamicObject(19378, 
						ludo_navigator_lines_finish_2[0][index2][0], 
						ludo_navigator_lines_finish_2[0][index2][1], 
						ludo_navigator_lines_finish_2[0][index2][2]+LUDO_NEW_Z, 
						ludo_navigator_lines_finish_2[0][index2][3], 
						0.0, 
						ludo_navigator_lines_finish_2[0][index2][5],  
						-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
					SetDynamicObjectMaterial(LudoInfo[uObjectsLine][index], 0, 16150, !"ufo_bar", !"GEwhite1_64", 0xFFFFFFFF);

					LudoInfo[uIndexObject]++;
				}
			}

			if (i == MAX_LUDO_NAVIGATOR_POINTS_P+MAX_LUDO_NAVIGATOR_POINTS-1)
			{
				SendClientMessage(playerid, -1, !"Финиш");
				break;
			}
		}
	}

	for (new i = 0, j = LudoInfo[uOldPointID]; i < j; i++)
	{
		SetDynamicObjectMaterial(LudoInfo[uObjectsPoint][i], 0, 1676, !"wshxrefpump", !"black64", 0xFFFFFFFF);
	}

	for (new i = 0, j = LudoInfo[uOldIndexObject]; i < j; i++)
	{
		SetDynamicObjectMaterial(LudoInfo[uObjectsLine][i], 0, 1676, !"wshxrefpump", !"black64", 0xFFFFFFFF);
	}

	Streamer_Update(playerid, STREAMER_TYPE_OBJECT);

	return 1;
}
