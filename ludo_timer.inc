#if defined LUDO_TIMER
	#endinput
#endif
#define LUDO_TIMER

forward LudoTimerStartGame(roomid);
public LudoTimerStartGame(roomid)
{
	static
		string[3];
		
	if (--LudoInfo[roomid][gTimeStart] != 0)
	{
		format(string, sizeof string, "%i", LudoInfo[roomid][gTimeStart]); 

		for (new i = 0; i < MAX_LUDO_PLAYERS; i++)
		{
			SendClientMessage(LudoInfo[roomid][gPlayersID][i], -1, string);
		}
	}
	else
	{
		for (new i = 0; i < MAX_LUDO_PLAYERS; i++)
		{
			SendClientMessage(LudoInfo[roomid][gPlayersID][i], -1, !"START");
			KillTimer(LudoInfo[roomid][gRoomTimer]);
			LudoInfo[roomid][gRoomTimer] = SetTimerEx("LudoTimerTimeGame", 1000, true, "i", roomid);
		}

		LudoInfo[roomid][gGameStart] = 1;
		LudoInfo[roomid][gTimeGame] = LUDO_TIME_GAME;
	}

	return 1;
}

forward LudoTimerTimeGame(roomid);
public LudoTimerTimeGame(roomid)
{
	static
		string[6];
		
	LudoInfo[roomid][gTimeGame]--;

	format(string, sizeof string, "%02i:%02i", LudoInfo[roomid][gTimeGame]/60, LudoInfo[roomid][gTimeGame]%60); 

	for (new i = 0; i < MAX_LUDO_PLAYERS; i++)
	{
		SendClientMessage(LudoInfo[roomid][gPlayersID][i], -1, string);
	}

	if (LudoInfo[roomid][gTimeGame] == 0)
	{
		KillTimer(LudoInfo[roomid][gRoomTimer]);
		LudoInfo[roomid][gRoomTimer] = 0;
		LudoInfo[roomid][gGameStart] = -1;
		//LudoWinner();
	}


	return 1;
}
