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

const
	MAX_LUDO_GAMES = 1,
	MAX_LUDO_PLAYERS = 4,
	MAX_LUDO_NUMBER_OF_LIVES = 4;

const	//ludo_navigation.inc
	MAX_LUDO_NAVIGATOR_POINTS = 47,
	MAX_LUDO_NAVIGATOR_POINTS_P = 7,
	MAX_LUDO_NAVIGATOR_LINES = 58,
	MAX_LUDO_NAVIGATOR_LINES_TR = 4,
	MAX_LUDO_NAVIGATOR_LINES_FINISH = 6,
	MAX_LUDO_NAVIGATOR_LINES_START = 2;

enum
	ludo_player_info
	{
		uRoomID,
		uPlayerID,
		uObjectsPoint[MAX_LUDO_NAVIGATOR_POINTS+MAX_LUDO_NAVIGATOR_POINTS_P],
		uNewPointID,
		uOldPointID,
		uNumPointID,
		uObjectsLine[MAX_LUDO_NAVIGATOR_LINES_START+MAX_LUDO_NAVIGATOR_LINES+MAX_LUDO_NAVIGATOR_LINES_TR+MAX_LUDO_NAVIGATOR_LINES_FINISH],
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
		{19134, !"MatArrows", !"green"},				//зеленый
		{19133, !"MatArrows", !"red-2"},				//красный
		{8538, !"vgsrailroad", !"concreteyellow256 copy"},		//желтый
		{8839, !"vgsecarshow", !"lightblue2_32"}			//синий
	};

new
	PlayerLudo[MAX_PLAYERS][ludo_player_info];

#include "../ludo/ludo_map.inc"
#include "../ludo/ludo_vehicles.inc"
#include "../ludo/ludo_navigator.inc"

stock SetColorLudo(objectid, playernum, objectslot = 0)
	return SetObjectMaterial(objectid, objectslot, ludo_map_colors[playernum][lm_id], ludo_map_colors[playernum][lm_lib], ludo_map_colors[playernum][lm_texture], 0xFFFFFFFF);
	
stock SetColorDynamicLudo(objectid, playernum, objectslot = 0)
	return SetDynamicObjectMaterial(objectid, objectslot, ludo_map_colors[playernum][lm_id], ludo_map_colors[playernum][lm_lib], ludo_map_colors[playernum][lm_texture], 0xFFFFFFFF);
