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

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x7, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0(0xa, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(0xFF, secret_books_geo), 
	LOAD_MODEL_FROM_GEO(0xFE, reflection_change_geo), 
	LOAD_MODEL_FROM_GEO(0xFD, fucking_mirror_geo), 
	LOAD_MODEL_FROM_GEO(0xFC, vr_geo), 
	LOAD_MODEL_FROM_GEO(0xFB, garage_geo), 
	LOAD_MODEL_FROM_GEO(0xFA, rocking_chair_geo), 
	LOAD_MODEL_FROM_GEO(0xF9, ghoad_geo), 
	LOAD_MODEL_FROM_GEO(0xF8, c5_bridge_geo), 
	LOAD_MODEL_FROM_GEO(0xF7, book_elevator_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TELE, tele_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_MGB, mgb_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_MGB2, mgb2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SHOWRUNNER_TV, showrunner_tv_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GRATE30, grate30_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_DEMENTOR, dementor_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SHOWRUNNER_TV_ANGRY, showrunner_tv_angry_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PHONOGRAPH, phonograph_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(/*spawn*/0x0A, LEVEL_CASTLE, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01/*lv1*/, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02/*lv2*/, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03/*lv3*/, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04/*lv4*/, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -992, 0, 0, 0, -90, 0, 0x00000000, bhvAgcrack),
		OBJECT(MODEL_NONE, -992, -117, 0, 0, 0, 0, 0x00000000, bhvStaticObject),
		MARIO_POS(0x01, 0, -3478, 0, 0),
		OBJECT(MODEL_MONITOR, -1102, 1398, 720, 23, -123, 2, (3 << 16), bhvMonitor),
		OBJECT(MODEL_GLOBAL_PIPE, 0, 0, -1477, 0, 0, 0, (1 << 16), bhvWarpPipe),
		OBJECT(MODEL_GLOBAL_PIPE, 1477, 0, 0, 0, 0, 0, (2 << 16), bhvWarpPipe),
		OBJECT(MODEL_GLOBAL_PIPE, 0, 0, 1477, 0, 0, 0, (3 << 16), bhvWarpPipe),
		OBJECT(MODEL_GLOBAL_PIPE, -1477, 0, 0, 0, 0, 0, (4 << 16), bhvWarpPipe),
		OBJECT(MODEL_NONE, -3478, 0, 0, 0, 90, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -1132, 611, 0, 0, 0, 0, (8 << 24) | (TTRIG_MIRROR << 16), bhvTrollTrigger),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -3478, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
