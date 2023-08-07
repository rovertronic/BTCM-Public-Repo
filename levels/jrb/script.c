#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common0.h"
#include "actors/common1.h"
#include "actors/group0.h"
#include "actors/group1.h"
#include "actors/group2.h"
#include "actors/group3.h"
#include "actors/group4.h"
#include "actors/group5.h"
#include "actors/group6.h"
#include "actors/group7.h"
#include "actors/group8.h"
#include "actors/group9.h"
#include "actors/group10.h"
#include "actors/group11.h"
#include "actors/group12.h"
#include "actors/group13.h"
#include "actors/group14.h"
#include "actors/group15.h"
#include "actors/group16.h"
#include "actors/group17.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/jrb/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ssl_skybox_yay0SegmentRomStart, _ssl_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE, palm_tree_geo), 
	LOAD_MODEL_FROM_GEO(0xFF, rockplate_geo), 
	LOAD_MODEL_FROM_GEO(0xFE, turnblock_geo), 
	LOAD_MODEL_FROM_GEO(0xFD, lily_geo), 
	LOAD_MODEL_FROM_GEO(0xFC, dcoin_geo), 
	LOAD_MODEL_FROM_GEO(0xFB, yoshi_geo), 
	LOAD_MODEL_FROM_GEO(0xFA, moleman_geo), 
	LOAD_MODEL_FROM_GEO(0xF9, pode_seg_geo), 
	LOAD_MODEL_FROM_GEO(0xF8, pode_head_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CREEPIE_DOOR, creepie_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CREEPIE_FLOOR, creepie_floor_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CRUSHER, crusher_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GLITCH, glitch1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EVILTHING, evilthing_geo),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, jrb_area_1),
		WARP_NODE(0x0A/*spawn*/, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B/*CP1*/, LEVEL_JRB, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C/*CP2*/, LEVEL_JRB, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_FLAME, -7798, 978, -15213, 0, 0, 0, (2 << 16), bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -4423, 978, -11819, 0, 0, 0, (2 << 16), bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -7798, 3113, -15213, 0, 0, 0, (1 << 16), bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -4423, 3113, -11819, 0, 0, 0, (1 << 16), bhvFlame),
		OBJECT(MODEL_RED_FLAME, -7851, 936, -11841, 0, 0, 0, (2 << 16), bhvFlame),
		OBJECT(MODEL_RED_FLAME, -4370, 1020, -15190, 0, 0, 0, (2 << 16), bhvFlame),
		OBJECT(MODEL_RED_FLAME, -7851, 3071, -11841, 0, 0, 0, (1 << 16), bhvFlame),
		OBJECT(MODEL_RED_FLAME, -4370, 3155, -15190, 0, 0, 0, (1 << 16), bhvFlame),
		OBJECT(MODEL_BLACK_BOBOMB, 319, 362, -8308, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_CHECKPOINT_FLAG, -6089, 2025, -10165, 0, 0, 0, (1 << 16), bhvCheckpointFlag),
		OBJECT(MODEL_CRUSHER, -1489, 5, 966, 0, 0, 0, 0x00000000, bhvCrusher),
		OBJECT(MODEL_CREEPIE_DOOR, -6089, 2025, -10641, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CREEPIE_DOOR, -6089, 2025, -16390, 0, 0, 0, (1 << 16), bhvDoor),
		OBJECT(MODEL_MARIO, -6089, 2025, -13354, 0, -180, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_BLUE_FLAME, -3499, 305, 2586, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -6089, 305, -434, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, 711, -295, -3634, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -3499, -295, 2586, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -6089, -295, -434, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, 711, 305, -3634, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -6383, 1574, -8740, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -5794, 1574, -8740, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 5406, -457, 2162, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 4817, -448, 2162, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 978, 305, -834, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -89, 305, 2889, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -989, 305, 1988, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -1589, 305, 1988, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6239, 305, 2586, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -3689, 305, -3534, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -2089, 305, -8334, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6089, 305, -4434, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6089, 2616, -10588, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6089, 2616, -16454, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 978, -295, -834, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -89, -295, 2889, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -989, -295, 1988, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -1589, -295, 1988, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6239, -295, 2586, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -3689, -295, -3534, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -2089, -295, -8334, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6089, -295, -4434, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_NONE, -6089, 305, -434, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_NONE, -3637, -2015, 7646, 0, 90, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -6254, 2025, -9975, 0, -180, 0, (0x0B << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -6089, 2025, -16937, 0, -180, 0, (0x0C << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_MONITOR, -2752, -1769, 7646, 0, -90, 0, (5 << 16), bhvMonitor),
		OBJECT(MODEL_PILLAR_TROLL, -6089, 2025, -21715, 0, 0, 0, 0x00000000, bhvPillarTroll),
		OBJECT(MODEL_NONE, 5111, -605, 2206, 0, 0, 0, (12 << 24) | (TTRIG_NO_Y_REFLECTION << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 292, 403, -6882, 0, 0, 0, (6 << 24) | (TTRIG_BOBOMB_ATTACK << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -6089, 2025, -11794, 0, 0, 0, (12 << 24) | (TTRIG_ADJUST_Y_REFLECTION << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -6089, 5, -7986, 0, 0, 0, (24 << 24) | (TTRIG_ADJUST_Y_REFLECTION << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -6089, 2025, -13354, 0, 0, 0, (2 << 24) | (TTRIG_VANISH_REFLECTION << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -1047, 403, 514, 0, 0, 0, (6 << 24) | (TTRIG_CRUSHER << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -6109, 2371, -18628, 0, 0, 0, (6 << 24) | (TTRIG_PILLAR_TROLL << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -4916, 275, -3234, 0, 0, 0, (6 << 24) | (TTRIG_EEL << 16), bhvTrollTrigger),
		OBJECT(MODEL_UNAGI, -6472, 405, -3234, 0, 90, 0, 0x00000000, bhvUnagi),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, jrb_area_2),
		WARP_NODE(0x0A/*spawn*/, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B/*CP1*/, LEVEL_JRB, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C/*CP2*/, LEVEL_JRB, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D/*CP3*/, LEVEL_JRB, 0x02, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x11/*winner*/, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLUE_FLAME, -7798, 3113, -15213, 0, 0, 0, (1 << 16), bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -4423, 3113, -11819, 0, 0, 0, (1 << 16), bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -7798, 978, -15213, 0, 0, 0, (2 << 16), bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -4423, 978, -11819, 0, 0, 0, (2 << 16), bhvFlame),
		OBJECT(MODEL_RED_FLAME, -7851, 3071, -11841, 0, 0, 0, (1 << 16), bhvFlame),
		OBJECT(MODEL_RED_FLAME, -4370, 3155, -15190, 0, 0, 0, (1 << 16), bhvFlame),
		OBJECT(MODEL_RED_FLAME, -7851, 936, -11841, 0, 0, 0, (2 << 16), bhvFlame),
		OBJECT(MODEL_RED_FLAME, -4370, 1020, -15190, 0, 0, 0, (2 << 16), bhvFlame),
		OBJECT(MODEL_BLACK_BOBOMB, 319, 362, -8308, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_CREEPIE_DOOR, -6089, 2025, -10641, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CREEPIE_DOOR, -6089, 2025, -16390, 0, 0, 0, (1 << 16), bhvDoor),
		OBJECT(MODEL_MARIO, -6089, 2025, -13354, 0, -180, 0, 0x00000000, bhvPhantasm),
		OBJECT(MODEL_BLUE_FLAME, 711, 305, -3634, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -3499, 305, 2586, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -6089, 305, -434, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, 711, -295, -3634, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -3499, -295, 2586, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -6089, -295, -434, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -5794, 1574, -8740, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -6383, 1574, -8740, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6459, 1002, -17958, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 5406, -457, 2162, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 4817, -448, 2162, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 978, 305, -834, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -89, 305, 2889, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -989, 305, 1988, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -1589, 305, 1988, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6239, 305, 2586, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -3689, 305, -3534, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -2089, 305, -8334, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6089, 305, -4434, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 978, -295, -834, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -89, -295, 2889, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -989, -295, 1988, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -1589, -295, 1988, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6239, -295, 2586, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -3689, -295, -3534, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -2089, -295, -8334, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6089, -295, -4434, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6089, 2616, -10588, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -6089, 2616, -16454, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BLUE_FLAME, -5747, 1002, -17958, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_NONE, -6089, 305, -434, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_CREEPIE_FLOOR, -6489, 2025, -19310, 0, 0, 0, 0x00000000, bhvCreepieFloor),
		OBJECT(MODEL_CREEPIE_FLOOR, -5689, 2025, -19310, 0, 0, 0, (1 << 16), bhvCreepieFloor),
		OBJECT(MODEL_GLITCH, -6077, -516, -4728, 0, 0, 0, 0x00000000, bhvGlitch),
		OBJECT(MODEL_GLITCH, 1139, -389, -4082, 0, 0, 0, 0x00000000, bhvGlitch),
		OBJECT(MODEL_GLITCH, 1139, -389, -3192, 0, 0, 0, 0x00000000, bhvGlitch),
		OBJECT(MODEL_GLITCH, 1139, -516, -2335, 0, 0, 0, 0x00000000, bhvGlitch),
		OBJECT(MODEL_GLITCH, -3682, -516, -2429, 0, 0, 0, 0x00000000, bhvGlitch),
		OBJECT(MODEL_GLITCH, -3682, -516, -91, 0, 0, 0, 0x00000000, bhvGlitch),
		OBJECT(MODEL_GLITCH, 1126, -516, -1734, 0, 0, 0, 0x00000000, bhvGlitch),
		OBJECT(MODEL_GLITCH, 1139, -1058, -4082, 0, 0, 0, 0x00000000, bhvGlitch),
		OBJECT(MODEL_GLITCH, 1139, -1058, -3192, 0, 0, 0, 0x00000000, bhvGlitch),
		OBJECT(MODEL_EVILTHING, -6118, 2290, -22760, 0, 0, 0, 0x00000000, bhvEvilThing),
		OBJECT(MODEL_NONE, -3637, -2015, 7646, 0, 90, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -6254, 2025, -9975, 0, -180, 0, (0x0B << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -5949, 726, -17573, 0, 0, 0, (0x0D << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_MONITOR, -2752, -1769, 7646, 0, -90, 0, (5 << 16), bhvMonitor),
		OBJECT(MODEL_PILLAR_TROLL, -6089, 2025, -21715, 0, 0, 0, 0x00000000, bhvPillarTroll),
		OBJECT(MODEL_NONE, -4794, -1470, 7663, 0, 0, 0, (6 << 24) | (TTRIG_WINNER << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 292, 403, -6882, 0, 0, 0, (6 << 24) | (TTRIG_BOBOMB_ATTACK << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -6089, 2025, -13354, 0, 0, 0, (2 << 24) | (TTRIG_VANISH_REFLECTION << 16), bhvTrollTrigger),
		TERRAIN(jrb_area_2_collision),
		MACRO_OBJECTS(jrb_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
