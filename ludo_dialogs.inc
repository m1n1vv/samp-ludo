#if defined LUDO_DIALOGS
	#endinput
#endif
#define LUDO_DIALOGS

enum
{
	LUDO_DIALOGID_MAIN = 1234,
	LUDO_DIALOGID_CREATE,
	LUDO_DIALOGID_NAME_ROOM
}

static
	ludo_dialog_listitem[MAX_LUDO_GAMES];

CMD:d(playerid)
{
	LudoRoomsList(playerid);
	return 1;
}

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

			LudoPlayerConnectToRoom(playerid, room_id);
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
				PlayerLudo[playerid][uPlayerAccessRoom] = !PlayerLudo[playerid][uPlayerAccessRoom];
				return LudoMenuCreateRoom(playerid);
			}
			case 1:
			{
				MAX_LUDO_CREATE_GAMES++;
				LudoInfo[MAX_LUDO_CREATE_GAMES-1][gAccessToRoom] = PlayerLudo[playerid][uPlayerAccessRoom];
				PlayerLudo[playerid][uPlayerAccessRoom] = 0;

				SendClientMessage(playerid, -1, !""#LUDO_TITLE" Комната создана");
				LudoPlayerConnectToRoom(playerid, MAX_LUDO_CREATE_GAMES);

				return 1;
			}

		}

		return 1;
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

	format(string, sizeof string, str, PlayerLudo[playerid][uPlayerAccessRoom] == 0 ? "открытый" : "закрытый");

	return ShowPlayerDialog(playerid, LUDO_DIALOGID_CREATE, DIALOG_STYLE_TABLIST_HEADERS, !""#LUDO_TITLE" | Создание комнаты", string, !"Выбрать", !"Закрыть");
}

stock LudoRoomsList(playerid)
{
	const
		SIZE_LINE = 15;

	new
		listitem_id = 1,
		str[SIZE_LINE],
		string[SIZE_LINE*MAX_LUDO_GAMES];

	strcat(string, "Создать\n");

	for (new i = 0; i < MAX_LUDO_CREATE_GAMES; i++)
	{
		if (LudoInfo[i][gStartGame] != 0)
			continue;

		LudoInfo[i][gAccessToRoom] = random(2);

		if (LudoInfo[i][gAccessToRoom] != 0)
			continue;	

		ludo_dialog_listitem[listitem_id] = i;
		listitem_id++;

		format(str, sizeof str, "Комната №%i\n", i+1);
		strcat(string, str);
	}

	return ShowPlayerDialog(playerid, LUDO_DIALOGID_MAIN, DIALOG_STYLE_LIST, !""#LUDO_TITLE"", string, !"Выбрать", !"Закрыть");
}
