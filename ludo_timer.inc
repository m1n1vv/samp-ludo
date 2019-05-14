#if defined LUDO_TIMER
	#endinput
#endif
#define LUDO_TIMER

forward LudoTimer();
public LudoTimer()
{

	for(new i = 0; i < MAX_LUDO_CREATE_GAMES; i++)
	{
		if (LudoInfo[i][gGameStart] == 1)
			continue;

		if (LudoInfo[i][gGameStart] == 0 && LudoInfo[i][gNumPlayers] == 4)
		{
			LudoInfo[i][gTimeStart]--;

			if (LudoInfo[i][gTimeStart] == 0)
			{
				LudoInfo[i][gGameStart] = 1;
			}
		}
	}
	return 1;
}
