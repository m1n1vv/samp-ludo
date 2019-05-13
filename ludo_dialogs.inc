#if defined LUDO_DIALOG
	#endinput
#endif
#define LUDO_DIALOG

enum
{
	LUDO_DIALOGID_MAIN = 1234,
	LUDO_DIALOGID_CREATE
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
				string[20],
				room_id = ludo_dialog_listitem[listitem]+1;

			format(string, sizeof string, "Номер комнаты: %i", room_id);
			SendClientMessage(playerid, -1, string);
			format(string, sizeof string, "Мир: %i", room_id+LUDO_WORLD);
			SendClientMessage(playerid, -1, string);

			PlayerLudo[playerid][uPlayerWorld] = room_id+LUDO_WORLD;
			PlayerLudo[playerid][uPlayerRoomID] = room_id;
			
			SetPlayerVirtualWorld(playerid, room_id+LUDO_WORLD);
			SetPlayerInterior(playerid, LUDO_INTERIOR);
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
				LudoInfo[gAccessToRoom][MAX_LUDO_CREATE_GAMES-1] = PlayerLudo[playerid][uPlayerAccessRoom];
				PlayerLudo[playerid][uPlayerAccessRoom] = 0;

				new
					string[20];

				format(string, sizeof string, "Номер комнаты: %i", MAX_LUDO_CREATE_GAMES);
				SendClientMessage(playerid, -1, string);
				format(string, sizeof string, "Мир: %i", MAX_LUDO_CREATE_GAMES+LUDO_WORLD);
				SendClientMessage(playerid, -1, string);
				SendClientMessage(playerid, -1, !"Комната создана");

				PlayerLudo[playerid][uPlayerWorld] = MAX_LUDO_CREATE_GAMES+LUDO_WORLD;
				PlayerLudo[playerid][uPlayerRoomID] = MAX_LUDO_CREATE_GAMES;
				
				SetPlayerVirtualWorld(playerid, MAX_LUDO_CREATE_GAMES+LUDO_WORLD);
				SetPlayerInterior(playerid, LUDO_INTERIOR);

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

	return ShowPlayerDialog(playerid, LUDO_DIALOGID_CREATE, DIALOG_STYLE_TABLIST_HEADERS, !"Ludo | Создание комнаты", string, !"Выбрать", !"Закрыть");
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
		if (LudoInfo[gStartGame][i] != 0)
			continue;

		LudoInfo[gAccessToRoom][i] = random(2);

		if (LudoInfo[gAccessToRoom][i] != 0)
			continue;	

		ludo_dialog_listitem[listitem_id] = i;
		listitem_id++;

		format(str, sizeof str, "Комната №%i\n", i+1);
		strcat(string, str);
	}

	return ShowPlayerDialog(playerid, LUDO_DIALOGID_MAIN, DIALOG_STYLE_LIST, !"Ludo", string, !"Выбрать", !"Закрыть");
}
