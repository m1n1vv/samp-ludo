#if defined LUDO_TIMER
	#endinput
#endif
#define LUDO_TIMER

forward LudoTimer();
public LudoTimer()
{
	static
		string[6];
		
	for(new i = 0; i < MAX_LUDO_CREATE_GAMES; i++)
	{
		if (LudoInfo[i][gGameStart] == 1)
		{
			LudoInfo[i][gTimeGame]--;

			format(string, sizeof string,"%02i:%02i", LudoInfo[i][gTimeGame]/60, LudoInfo[i][gTimeGame]%60); 

			for (new j = 0; j < MAX_LUDO_PLAYERS; j++)
			{
				SendClientMessage(LudoInfo[i][gPlayersID][j], -1, string);
			}

			continue;
		}

		if (LudoInfo[i][gNumPlayers] < MAX_LUDO_PLAYERS)
			continue;

		if (LudoInfo[i][gGameStart] == 0 && LudoInfo[i][gNumPlayers] == 4)
		{
			LudoInfo[i][gTimeStart]--;

			if (LudoInfo[i][gTimeStart] == 0)
			{
				for (new j = 0; j < MAX_LUDO_PLAYERS; j++)
				{
					SendClientMessage(LudoInfo[i][gPlayersID][j], -1, !"START");
				}

				LudoInfo[i][gGameStart] = 1;
				LudoInfo[i][gTimeGame] = 1200;
			}
			else
			{
				format(string, sizeof string,"%i", LudoInfo[i][gTimeStart]); 

				for (new j = 0; j < MAX_LUDO_PLAYERS; j++)
				{
					SendClientMessage(LudoInfo[i][gPlayersID][j], -1, string);
				}
			}
		}
	}
	return 1;
}
