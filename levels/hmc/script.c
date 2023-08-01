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
#include "actors/group0.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/hmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _cave_yay0SegmentRomStart, _cave_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _ssl_skybox_yay0SegmentRomStart, _ssl_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR, hazy_maze_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM, hmc_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM, hmc_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK, hmc_geo_000548), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE, hmc_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE, hmc_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS, hmc_geo_000530), 
	LOAD_MODEL_FROM_GEO(MODEL_MINECART, minecart_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOULDER, wboulder_geo), //MODEL_COBIE
	LOAD_MODEL_FROM_GEO(MODEL_COBIE, cobie_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BILLMASK_C6, billmask_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HOVERWALL, hoverwall_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BRIDGEFALL, bridgefall_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COCKTUS, cocktus1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COCKTUS2, cocktus2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_JUNKER, junker_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_DESERT_PILLAR, desert_pillar_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A/*spawn*/, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BRIDGEFALL, 8249, 785, -2162, 0, 0, 0, 0x00000000, bhvBridgeFall),
		OBJECT(MODEL_CHECKPOINT_FLAG, 2095, 9915, -2386, 0, 90, 0, (1 << 16), bhvCheckpointFlag),
		OBJECT(MODEL_COCKTUS, 4295, 496, -1533, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_COCKTUS, 3052, 9945, 326, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_COCKTUS, 2444, 9945, 326, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_COCKTUS, 1306, 4297, -5534, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_COCKTUS, 2750, 9945, 519, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_NONE, 8181, 1037, 9412, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2529, 5287, 12876, 0, 15, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3996, 253, -2093, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1369, 29, 152, 0, 103, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_DESERT_PILLAR, 9193, 1445, 9552, 0, 0, 0, 0x00000000, bhvDesertPillar),
		OBJECT(MODEL_RED_FLAME, 9763, 10546, 1320, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 9763, 12664, 1320, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 11128, 11853, 1320, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 11128, 13900, 1320, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 8515, 13906, 1875, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 8515, 13906, 732, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_HEART, 9051, 13513, 1320, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		OBJECT(MODEL_HOVERWALL, 9145, 1202, -459, 0, 0, 0, (0 << 16), bhvHoverWall),
		OBJECT(MODEL_HOVERWALL, 8581, 1202, 5541, 0, 0, 0, (1 << 16), bhvHoverWall),
		OBJECT(MODEL_HOVERWALL, 9145, 1202, 5541, 0, 0, 0, (0 << 16), bhvHoverWall),
		OBJECT(MODEL_JUNKER, -2829, 5287, 11149, 0, -180, 0, (1 << 16), bhvJunker),
		OBJECT(MODEL_JUNKER, -2828, 3868, 10971, 0, -180, 0, 0x00000000, bhvJunker),
		OBJECT(MODEL_MONITOR, 1671, 10194, -2388, 0, 90, 0, (4 << 16), bhvMonitor),
		OBJECT(MODEL_NONE, 0, 0, 0, 0, 90, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_RED_COIN, 5579, 1992, 10779, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, 8836, 1146, 3934, 0, 0, 0, (5 << 24) | (TTRIG_NONE << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 8836, 1146, 5534, 0, 0, 0, (5 << 24) | (TTRIG_PANEL_FLIP << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 9226, 1305, -459, 0, 0, 0, (5 << 24) | (TTRIG_RUN_EARLY << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 6791, 868, -2190, 0, 0, 0, (5 << 24) | (TTRIG_BRIDGE_FALL << 16), bhvTrollTrigger),
		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_JUNK),
		TERRAIN_TYPE(TERRAIN_GRASS),
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
