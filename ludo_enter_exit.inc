#if defined LUDO_ENTER_EXIT
	#endinput
#endif
#define LUDO_ENTER_EXIT

stock LudoPlayerEnterToRoom(playerid, roomid)
{
	static const
		str[] = ""#LUDO_TITLE": Вы подключиль к %i-й комнате (%i)";

	static
		string[sizeof str + 3 + 10 - 2*2];

	format(string, sizeof string, str, roomid, roomid+LUDO_WORLD);
	SendClientMessage(playerid, -1, string);

	PlayerLudo[playerid][uWorld] = roomid+LUDO_WORLD;
	PlayerLudo[playerid][uRoomID] = roomid;

	for (new i = 0; i < MAX_LUDO_PLAYERS; i++)
	{
		if (LudoInfo[roomid-1][gPlayersID][i] == 0)
		{
			LudoInfo[roomid-1][gNumPlayers]++;
			LudoInfo[roomid-1][gPlayersID][i] = playerid;
			PlayerLudo[playerid][uNumber] = i+1;
			break;
		}
	}

	if (LudoInfo[roomid-1][gNumPlayers] == MAX_LUDO_PLAYERS)
		LudoInfo[roomid-1][gTimeStart] = LUDO_TIME_START;
	
	GetPlayerPos(playerid, PlayerLudo[playerid][uOldPos_x], PlayerLudo[playerid][uOldPos_y], PlayerLudo[playerid][uOldPos_z]);
	PlayerLudo[playerid][uOldWorld] = GetPlayerVirtualWorld(playerid);
	#if LUDO_INTERIOR != 0
		PlayerLudo[playerid][uOldInterior] = GetPlayerInterior(playerid);
	#endif
	SetPlayerVirtualWorld(playerid, roomid+LUDO_WORLD);
	SetPlayerInterior(playerid, LUDO_INTERIOR);

	TogglePlayerSpectating(playerid, true);
	AttachCameraToObject(playerid, ludo_camera_object);

	SetTimerEx(!"LudoPlayerSpawnTimer", 1000, false, "i", playerid);

	return 1;
}

forward LudoPlayerSpawnTimer(playerid);
public LudoPlayerSpawnTimer(playerid)
{
	CancelEdit(playerid);
	TogglePlayerSpectating(playerid, false);
	SetPlayerPos(playerid, 0.0, 0.0, 1.0+LUDO_MAP_NEW_Z);
	PlayerLudo[playerid][uPos_x] =
	PlayerLudo[playerid][uPos_y] = 0.0;
	PlayerLudo[playerid][uPos_z] = 1.0+LUDO_MAP_NEW_Z;

	return 1;
}

stock LudoPlayerExitFromRoom(playerid)
{
	new
		index = PlayerLudo[playerid][uNumber]-1,
		roomid = PlayerLudo[playerid][uRoomID]-1;

	LudoInfo[roomid][gNumPlayers]--;
	LudoInfo[roomid][gTimeStart] = 0;
	LudoInfo[roomid][gPlayersID][index] = 0;

	for (new i = 0; i < MAX_LUDO_PLAYER_POINTS; i++)
	{
		DestroyDynamicArea(PlayerLudo[playerid][uZones][i]);
		PlayerLudo[playerid][uZones][i] = 0;
		DestroyDynamicObject(PlayerLudo[playerid][uObjectsPoint][i]);
		PlayerLudo[playerid][uObjectsPoint][i] = 0;
	}

	for (new i = 0; i < MAX_LUDO_NUMBER_OF_LIVES; i++)
	{
		DestroyVehicle(PlayerLudo[playerid][uVehicles][i]);
		PlayerLudo[playerid][uVehicles][i] = 0;
	}

	for (new i = 0; i < MAX_LUDO_PLAYER_LINES; i++)
	{
		DestroyDynamicObject(PlayerLudo[playerid][uObjectsLine][i]);
		PlayerLudo[playerid][uObjectsLine][i] = 0;
	}

	SetPlayerVirtualWorld(playerid, PlayerLudo[playerid][uOldWorld]);
	#if LUDO_INTERIOR != 0
		SetPlayerInterior(playerid, PlayerLudo[playerid][uOldInterior]);
	#endif
	SetPlayerPos(playerid, PlayerLudo[playerid][uOldPos_x], PlayerLudo[playerid][uOldPos_y], PlayerLudo[playerid][uOldPos_z]);
	SetCameraBehindPlayer(playerid);

	PlayerLudo[playerid][uRoomID] =
	PlayerLudo[playerid][uRoomAdmin] =
	PlayerLudo[playerid][uNumber] =
	PlayerLudo[playerid][uLives] =
	PlayerLudo[playerid][uFinish] =
	PlayerLudo[playerid][uWorld] =
	PlayerLudo[playerid][uOldWorld] =
	PlayerLudo[playerid][uOldPointID] =
	PlayerLudo[playerid][uNewPointID] =
	PlayerLudo[playerid][uIndexZone] =
	PlayerLudo[playerid][uHomeZone] =
	PlayerLudo[playerid][uIndexObject] =
	PlayerLudo[playerid][uOldIndexObject] = 0;
	#if LUDO_INTERIOR != 0
		PlayerLudo[playerid][uOldInterior] = 0;
	#endif
	
	PlayerLudo[playerid][uOldPos_x] = 
	PlayerLudo[playerid][uOldPos_y] = 
	PlayerLudo[playerid][uOldPos_z] =
	PlayerLudo[playerid][uPos_x] = 
	PlayerLudo[playerid][uPos_y] = 
	PlayerLudo[playerid][uPos_z] = 
	PlayerLudo[playerid][uAngle] = 0.0;

	return 1;
}
