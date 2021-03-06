#if defined LUDO_CMD
	#endinput
#endif
#define LUDO_CMD

CMD:list(playerid)
{
	return LudoRoomsList(playerid);
	
}

CMD:ludo(playerid)
{
	if (PlayerLudo[playerid][uRoomID] == 0)
	{
		return LudoRoomsList(playerid);
	}
	else
	{
		return ShowPlayerDialog(playerid, LUDO_DIALOGID_EXIT, DIALOG_STYLE_MSGBOX, !""#LUDO_TITLE"", !"Подтвердите выход", !"Да", !"Отмена");
	}
}

CMD:invite(playerid, params[])
{
	if (PlayerLudo[playerid][uRoomID] == 0)
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": Вы не в комнате");

	if (isnull(params))
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": /invite [id]");

	new
		roomid = PlayerLudo[playerid][uRoomID],
		id = strval(params);

	if (roomid != PlayerLudo[playerid][uRoomAdmin])
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": Вы не создатель этой комнаты");

	if (id == playerid)
		return 0;

	if (!IsPlayerConnected(id))
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": игрок не найден");

	if (LudoInfo[roomid][gGameStart] != 0)
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": игра уже началась");

	if (PlayerLudo[id][uRoomID] != 0)
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": игрок в другой комнате");

	return LudoPlayerEnterToRoom(id, roomid);
}

CMD:ex(playerid, params[])
{
	if (PlayerLudo[playerid][uRoomID] == 0)
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": Вы не в комнате");

	if (isnull(params))
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": /ex [id]");

	new
		roomid = PlayerLudo[playerid][uRoomID],
		id = strval(params);

	if (roomid != PlayerLudo[playerid][uRoomAdmin])
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": Вы не создатель этой комнаты");

	if (id == playerid)
		return 0;

	if (!IsPlayerConnected(id))
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": игрок не найден");

	if (LudoInfo[roomid][gGameStart] != 0)
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": игра уже началась");

	if (PlayerLudo[id][uRoomID] != roomid)
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": игрок в другой комнате");

	if (PlayerLudo[id][uRoomID] == 0)
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": игрок вне игры");

	return LudoPlayerExitFromRoom(id);
}
