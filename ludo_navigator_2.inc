stock CreateLudoNavigation(playerid)
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

	PlayerLudo[playerid][uObjectsLine][0] = CreateDynamicObject(19366, 
		ludo_navigator_lines_start[player_number][0][0], 
		ludo_navigator_lines_start[player_number][0][1], 
		ludo_navigator_lines_start[player_number][0][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
		0.0, 
		ludo_navigator_lines_start[player_number][0][4], 
		ludo_navigator_lines_start[player_number][0][5], 
		-1, -1, -1, 
		LUDO_DISTANCE, LUDO_DISTANCE);
	SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][0], player_number);

	PlayerLudo[playerid][uObjectsLine][1] = CreateDynamicObject(19366, 
		ludo_navigator_lines_start[player_number][1][0], 
		ludo_navigator_lines_start[player_number][1][1], 
		ludo_navigator_lines_start[player_number][1][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
		0.0, 
		ludo_navigator_lines_start[player_number][1][4], 
		ludo_navigator_lines_start[player_number][1][5], 
		-1, -1, -1, 
		LUDO_DISTANCE, LUDO_DISTANCE);
	SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][1], player_number);
		
	PlayerLudo[playerid][uIndexObject] = 2;

	for (new i = 0, j = MAX_LUDO_PLAYER_POINTS; i < j; i++)
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
				ludo_navigator_points[index4][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
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
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
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
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
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
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
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
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
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
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
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
						ludo_navigator_lines[index5][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
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
			//создание точек на дорожке к дому
			index2 = i-MAX_LUDO_NAVIGATOR_POINTS;

			PlayerLudo[playerid][uObjectsPoint][i] = CreateDynamicObject(19844, 
				ludo_navigator_player_points[player_number][index2][0], 
				ludo_navigator_player_points[player_number][index2][1], 
				ludo_navigator_player_points[player_number][index2][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
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
					ludo_navigator_lines_finish_1[player_number][0][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
					0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][0][5], 
					-1, -1, -1, 
					LUDO_DISTANCE, LUDO_DISTANCE);
				SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][1][0], 
					ludo_navigator_lines_finish_1[player_number][1][1], 
					ludo_navigator_lines_finish_1[player_number][1][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
						0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][1][5], 
					-1, -1, -1, LUDO_DISTANCE, LUDO_DISTANCE);
				SetColorDynamicLudo(PlayerLudo[playerid][uObjectsLine][index], player_number);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][2][0], 
					ludo_navigator_lines_finish_1[player_number][2][1], 
					ludo_navigator_lines_finish_1[player_number][2][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
					0.0, 0.0, 
					ludo_navigator_lines_finish_1[player_number][2][5], 
					-1, -1, -1, 
					LUDO_DISTANCE, LUDO_DISTANCE);
				WhiteColorLudo(PlayerLudo[playerid][uObjectsLine][index]);

				index++;

				PlayerLudo[playerid][uObjectsLine][index] = CreateDynamicObject(19366, 
					ludo_navigator_lines_finish_1[player_number][3][0], 
					ludo_navigator_lines_finish_1[player_number][3][1], 
					ludo_navigator_lines_finish_1[player_number][3][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
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
					ludo_navigator_lines_finish_2[player_number][index3][2]+LUDO_NEW_Z-LUDO_NAVIGATOR_Z, 
					90.0, 0.0, 
					ludo_navigator_lines_finish_2[player_number][index3][5], 
					-1, -1, -1, 
					LUDO_DISTANCE, LUDO_DISTANCE);
				WhiteColorLudo(PlayerLudo[playerid][uObjectsLine][index]);

				PlayerLudo[playerid][uIndexObject]++;
			}
		}
	}

	PlayerLudo[playerid][uIndexObject] =
	PlayerLudo[playerid][uNumPointID] = 0;

	Streamer_Update(playerid, STREAMER_TYPE_OBJECT);

	return 1;
}

stock LudoNavigation(playerid, pointsnum)
{
	new
		Float:x,
		Float:y,
		Float:z,
		index;

	PlayerLudo[playerid][uOldPointID] += PlayerLudo[playerid][uNewPointID];
	PlayerLudo[playerid][uNewPointID] = pointsnum;
	PlayerLudo[playerid][uOldIndexObject] = PlayerLudo[playerid][uIndexObject];

	if (PlayerLudo[playerid][uNumPointID] >= MAX_LUDO_PLAYER_POINTS)
		return SendClientMessage(playerid, -1, !"Путь пройден");

	if (PlayerLudo[playerid][uOldPointID] == 0)
	{
		//направление первого хода
		GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][0], x, y, z);
		SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][0], x, y, z+LUDO_NAVIGATOR_Z);
		
		GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][1], x, y, z);
		SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][1], x, y, z+LUDO_NAVIGATOR_Z);
		
		PlayerLudo[playerid][uIndexObject] = 2;
	}

	for (new i = PlayerLudo[playerid][uOldPointID], j = PlayerLudo[playerid][uNewPointID]+PlayerLudo[playerid][uOldPointID]; i < j; i++)
	{
		if (PlayerLudo[playerid][uNumPointID] < MAX_LUDO_NAVIGATOR_POINTS)
		{
			if (i >= MAX_LUDO_NAVIGATOR_POINTS)
				break;

			//создание точек до дорожки к дому
			GetDynamicObjectPos(PlayerLudo[playerid][uObjectsPoint][i], x, y, z);
			SetDynamicObjectPos(PlayerLudo[playerid][uObjectsPoint][i], x, y, z+LUDO_NAVIGATOR_Z);

			PlayerLudo[playerid][uNumPointID]++;

			//создание напрвления
			index = PlayerLudo[playerid][uIndexObject];

			switch (i)
			{
				case 0: continue;
				case 5, 17, 29, 41: //2 объекта
				{
					GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
					SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

					index++;

					GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
					SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

					PlayerLudo[playerid][uIndexObject] += 2;
				}
				case 6, 18, 30, 42: //3 объекта
				{
					GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
					SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

					index++;

					GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
					SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

					index++;

					GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
					SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

					PlayerLudo[playerid][uIndexObject] += 3;
				}
				default: //1 объект
				{
					GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
					SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

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
			GetDynamicObjectPos(PlayerLudo[playerid][uObjectsPoint][i], x, y, z);
			SetDynamicObjectPos(PlayerLudo[playerid][uObjectsPoint][i], x, y, z+LUDO_NAVIGATOR_Z);

			PlayerLudo[playerid][uNumPointID]++;

			//создание напрвления
			index = PlayerLudo[playerid][uIndexObject];

			if (i == 47)
			{
				GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
				SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

				index++;

				GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
				SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

				index++;

				GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
				SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

				index++;

				GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
				SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

				PlayerLudo[playerid][uIndexObject] += 4;
			}
			else
			{
				GetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z);
				SetDynamicObjectPos(PlayerLudo[playerid][uObjectsLine][index], x, y, z+LUDO_NAVIGATOR_Z);

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

	LudoDeNavigation(playerid);

	return 1;
}

stock LudoDeNavigation(playerid)
{
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
