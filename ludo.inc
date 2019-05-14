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
	//#define LUDO_TITLE				"{4CAA38}L{BD1E1E}U{E4D310}D{179CD8}O{FFFFFF}"
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
	Float:LUDO_MAIN_ZONE_SIZE = 100.0,
	LUDO_TIME_START = 10;


enum
	ludo_game_info
	{
		gAccessToRoom,
		gGameStart,
		gNumPlayers,
		gTimeStart,
		gTimeGame
	}

enum
	ludo_player_info
	{
		uAccessRoom,
		uRoomAdmin,
		uRoomID,
		uNumber,
		uLives,
		uFinish,

		uWorld,
		uOldWorld,
		#if LUDO_INTERIOR != 0
		uOldInterior,
		#endif

		Float:uOldPos_x,
		Float:uOldPos_y,
		Float:uOldPos_z,
		Float:uPos_x,
		Float:uPos_y,
		Float:uPos_z,
		Float:uAngle,

		uZones[MAX_LUDO_PLAYER_POINTS],
		uHomeZone,
		uIndexZone,
		uVehicles[MAX_LUDO_NUMBER_OF_LIVES],

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
#include "../ludo/ludo_enter_exit.inc"
#include "../ludo/ludo_dialogs.inc"
#include "../ludo/ludo_vehicles.inc"
#include "../ludo/ludo_navigator.inc"
#include "../ludo/ludo_timer.inc"
#include "../ludo/ludo_cmd.inc"

public OnGameModeInit()
{
	ludo_main_zone = CreateDynamicSphere(0.0, 0.0, 0.0+LUDO_MAP_NEW_Z, LUDO_MAIN_ZONE_SIZE, -1, LUDO_INTERIOR, -1);

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
		if (PlayerLudo[playerid][uRoomID] != 0)
		{
			if (GetPlayerState(playerid) == PLAYER_STATE_DRIVER)
			{
				new
					vehicleid = GetPlayerVehicleID(playerid);

				SetVehiclePos(vehicleid, PlayerLudo[playerid][uPos_x], PlayerLudo[playerid][uPos_y], PlayerLudo[playerid][uPos_z]);
				SetVehicleZAngle(vehicleid, PlayerLudo[playerid][uAngle]);
			}
			else
			{
				SetPlayerPos(playerid, PlayerLudo[playerid][uPos_x], PlayerLudo[playerid][uPos_y], PlayerLudo[playerid][uPos_z]);
				SetPlayerFacingAngle(playerid, PlayerLudo[playerid][uAngle]);
			}

			SetCameraBehindPlayer(playerid);
		}
		
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

stock SetColorLudo(objectid, playernum, objectslot = 0)
	return SetDynamicObjectMaterial(objectid, objectslot, ludo_map_colors[playernum][lm_id], ludo_map_colors[playernum][lm_lib], ludo_map_colors[playernum][lm_texture], 0xFFFFFFFF);
