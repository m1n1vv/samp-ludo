#if defined LUDO_CMD
	#endinput
#endif
#define LUDO_CMD

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
	if (isnull(params))
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": /invite [id]");

	new
		roomid = PlayerLudo[playerid][uRoomID],
		id = strval(params);
		
	if (id == playerid)
		return 0;

	if (!IsPlayerConnected(id))
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": игрок не найден");

	if (roomid != PlayerLudo[playerid][uRoomAdmin])
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": Вы не создатель этой комнаты");


	if (PlayerLudo[id][uRoomID] != 0)
		return SendClientMessage(playerid, -1, !""#LUDO_TITLE": игрок с этим ID в другой комнате");

	return LudoPlayerEnterToRoom(id, roomid);
}
