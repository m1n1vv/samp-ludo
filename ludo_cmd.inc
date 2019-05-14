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
