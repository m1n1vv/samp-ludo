#if defined LUDO
	#endinput
#endif
#define LUDO

#if !defined WhiteColorLudo
	#define WhiteColorLudo(%0)			SetDynamicObjectMaterial(%0, 0, 16150, !"ufo_bar", !"GEwhite1_64", 0xFFFFFFFF)
#endif

#if !defined BlackColorLudo
	#define BlackColorLudo(%0)			SetDynamicObjectMaterial(%0, 0, 1676, !"wshxrefpump", !"black64", 0xFFFFFFFF)
#endif

#if !defined LudoRandom
	#define LudoRandom				(random(6)+1)
#endif

#if !defined LUDO_TITLE
	#define LUDO_TITLE				"{FF9900}Ludo:{FFFFFF}"
#endif


const
	MAX_LUDO_GAMES = 100,
	MAX_LUDO_PLAYERS = 4,
	MAX_LUDO_NUMBER_OF_LIVES = 4,
	MAX_LUDO_PLAYER_POINTS = 54,
	MAX_LUDO_PLAYER_LINES = 74;

const
	LUDO_WORLD = 10000,
	LUDO_INTERIOR = 0,
	Float:LUDO_MAIN_ZONE_SIZE = 100.0;


enum
	ludo_game_info
	{
		gAccessToRoom,
		gStartGame,
		gNumPlayers
	}

enum
	ludo_player_info
	{
		uPlayerAccessRoom,

		uPlayerRoomID,
		uPlayerNum,
		uPlayerWorld,

		uPlayerLives,
		uPlayerFinish,

		uPlayerZones[MAX_LUDO_PLAYER_POINTS],
		uPlayerHomeZone,
		uIndexZone,

		uPlayerVehicles[MAX_LUDO_NUMBER_OF_LIVES],

		Float:uPos_x,
		Float:uPos_y,
		Float:uPos_z,
		Float:uAngle,

		uObjectsPoint[MAX_LUDO_PLAYER_POINTS],
		uNewPointID,
		uOldPointID,
		uObjectsLine[MAX_LUDO_PLAYER_LINES],
		uIndexObject,
		uOldIndexObject
	}

enum
	ludo_map_color
	{
		lm_id,
		lm_lib[20],
		lm_texture[40]
	};

new const
	ludo_map_colors[MAX_LUDO_PLAYERS][ludo_map_color] =
	{
		{19134, !"MatArrows", !"green"},			//зеленый
		{19133, !"MatArrows", !"red-2"},			//красный
		{8538, !"vgsrailroad", !"concreteyellow256 copy"},	//желтый
		{8839, !"vgsecarshow", !"lightblue2_32"}		//синий
	};

new
	MAX_LUDO_CREATE_GAMES = 10,
	PlayerLudo[MAX_PLAYERS][ludo_player_info],
	LudoInfo[MAX_LUDO_GAMES][ludo_game_info];

static
	ludo_main_zone;

#include "../ludo/ludo_map.inc"
#include "../ludo/ludo_dialogs.inc"
#include "../ludo/ludo_vehicles.inc"
#include "../ludo/ludo_navigator.inc"

public OnGameModeInit()
{
	ludo_main_zone = CreateDynamicSphere(0.0, 0.0, 0.0+LUDO_NEW_Z, LUDO_MAIN_ZONE_SIZE, -1, LUDO_INTERIOR, -1);

	#if defined ludo_OnGameModeInit
		ludo_OnGameModeInit();
	#endif

	return 1;
}

#if defined _ALS_OnGameModeInit
	#undef OnGameModeInit
#else
	#define _ALS_OnGameModeInit
#endif
#define OnGameModeInit ludo_OnGameModeInit
#if  defined ludo_OnGameModeInit
	forward ludo_OnGameModeInit();
#endif

public OnPlayerLeaveDynamicArea(playerid, areaid)
{
	if (areaid == ludo_main_zone)
	{
		SetPlayerPos(playerid, PlayerLudo[playerid][uPos_x], PlayerLudo[playerid][uPos_y], PlayerLudo[playerid][uPos_z]);
		SetPlayerFacingAngle(playerid, PlayerLudo[playerid][uAngle]);
		return 1;
	}

	#if defined ludo_OnPlayerLeaveDynamicArea
		ludo_OnPlayerLeaveDynamicArea(playerid, areaid);
	#endif

	return 1;
}

#if defined _ALS_OnPlayerLeaveDynamicArea
	#undef OnPlayerLeaveDynamicArea
#else
	#define _ALS_OnPlayerLeaveDynamicArea
#endif
#define OnPlayerLeaveDynamicArea ludo_OnPlayerLeaveDynamicArea
#if defined ludo_OnPlayerLeaveDynamicArea
	forward ludo_OnPlayerLeaveDynamicArea(playerid, areaid);
#endif

stock LudoPlayerConnectToRoom(playerid, roomid)
{
	static const
		str[] = ""#LUDO_TITLE" Вы подключиль к %i-й комнате (%i)";

	static
		string[sizeof str + 3 + 10 - 2*2];

	format(string, sizeof string, str, roomid, roomid+LUDO_WORLD);
	SendClientMessage(playerid, -1, string);

	PlayerLudo[playerid][uPlayerWorld] = roomid+LUDO_WORLD;
	PlayerLudo[playerid][uPlayerRoomID] = roomid;
	LudoInfo[roomid-1][gNumPlayers]++;
	PlayerLudo[playerid][uPlayerNum] = LudoInfo[roomid-1][gNumPlayers];
				
	SetPlayerVirtualWorld(playerid, roomid+LUDO_WORLD);
	SetPlayerInterior(playerid, LUDO_INTERIOR);
	return 1;
}

stock SetColorLudo(objectid, playernum, objectslot = 0)
	return SetObjectMaterial(objectid, objectslot, ludo_map_colors[playernum][lm_id], ludo_map_colors[playernum][lm_lib], ludo_map_colors[playernum][lm_texture], 0xFFFFFFFF);
	
stock SetColorDynamicLudo(objectid, playernum, objectslot = 0)
	return SetDynamicObjectMaterial(objectid, objectslot, ludo_map_colors[playernum][lm_id], ludo_map_colors[playernum][lm_lib], ludo_map_colors[playernum][lm_texture], 0xFFFFFFFF);
