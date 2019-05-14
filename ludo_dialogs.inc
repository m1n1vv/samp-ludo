#if defined LUDO_DIALOGS
	#endinput
#endif
#define LUDO_DIALOGS

enum
{
	LUDO_DIALOGID_MAIN = 1234,
	LUDO_DIALOGID_CREATE,
	LUDO_DIALOGID_NAME_ROOM,
	LUDO_DIALOGID_EXIT
}

static
	ludo_dialog_listitem[MAX_LUDO_GAMES];

public OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	if (dialogid == LUDO_DIALOGID_MAIN)
	{
		if (response == 0)
			return 0;

		if (listitem == 0)
		{
			return LudoMenuCreateRoom(playerid);
		}
		else
		{
			new
				room_id = ludo_dialog_listitem[listitem]+1;

			LudoPlayerEnterToRoom(playerid, room_id);
		}
		return 1;
	}
	else if (dialogid == LUDO_DIALOGID_CREATE)
	{
		if (response == 0)
			return LudoRoomsList(playerid);

		switch (listitem)
		{
			case 0:
			{
				PlayerLudo[playerid][uAccessRoom] = !PlayerLudo[playerid][uAccessRoom];
				return LudoMenuCreateRoom(playerid);
			}
			case 1:
			{
				MAX_LUDO_CREATE_GAMES++;
				LudoInfo[MAX_LUDO_CREATE_GAMES-1][gAccessToRoom] = PlayerLudo[playerid][uAccessRoom];
				PlayerLudo[playerid][uAccessRoom] = 0;

				SendClientMessage(playerid, -1, !""#LUDO_TITLE": Комната создана");
				LudoPlayerEnterToRoom(playerid, MAX_LUDO_CREATE_GAMES);

				return 1;
			}

		}

		return 1;
	}
	else if (dialogid == LUDO_DIALOGID_EXIT)
	{
		if (response == 0)
		{
			return 0;
		}
		else
		{
			return LudoPlayerExitFromRoom(playerid);
		}
	}
	
	#if defined ludo_dialogs_OnDialogResponse
		ludo_dialogs_OnDialogResponse(playerid, dialogid, response, listitem, inputtext);
	#endif

	return 0;
}

#if defined _ALS_OnDialogResponse
	#undef OnDialogResponse
#else
	#define _ALS_OnDialogResponse
#endif
#define OnDialogResponse ludo_dialogs_OnDialogResponse
#if defined ludo_dialogs_OnDialogResponse
	forward ludo_dialogs_OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]);
#endif

static stock LudoMenuCreateRoom(playerid)
{
	static const
		str[] = "Параметры\tЗначения\nДоступ\t%s\nСоздать";

	static
		string[sizeof str + 8 - 2];

	format(string, sizeof string, str, PlayerLudo[playerid][uAccessRoom] == 0 ? "открытый" : "закрытый");

	return ShowPlayerDialog(playerid, LUDO_DIALOGID_CREATE, DIALOG_STYLE_TABLIST_HEADERS, !""#LUDO_TITLE" > Создание комнаты", string, !"Выбрать", !"Закрыть");
}

stock LudoRoomsList(playerid)
{
	const
		SIZE_LINE = 25;

	new
		listitemid = 1,
		str[SIZE_LINE],
		string[SIZE_LINE*MAX_LUDO_GAMES] = "Комната\tИгроки\nСоздать\t \n";

	for (new i = 0; i < MAX_LUDO_CREATE_GAMES; i++)
	{
		if (LudoInfo[i][gStartGame] != 0)
			continue;

		if (LudoInfo[i][gNumPlayers] > 4)
			continue;

		if (LudoInfo[i][gAccessToRoom] != 0)
			continue;	

		ludo_dialog_listitem[listitemid] = i;
		listitemid++;

		format(str, sizeof str, "Комната №%i\t(%i/4)\n", i+1, LudoInfo[i][gNumPlayers]);
		strcat(string, str);
	}

	return ShowPlayerDialog(playerid, LUDO_DIALOGID_MAIN, DIALOG_STYLE_TABLIST_HEADERS, !""#LUDO_TITLE" > Список комнат", string, !"Выбрать", !"Закрыть");
}
