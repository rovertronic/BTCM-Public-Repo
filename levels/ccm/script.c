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
#include "levels/ccm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(0xFF, fan_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CRABLET, crab_geo), 
	LOAD_MODEL_FROM_GEO(0xFD, bone_plat_geo), //bone_elevator_geo
	LOAD_MODEL_FROM_GEO(0xFC, bone_elevator_geo), 
	LOAD_MODEL_FROM_GEO(0xFB, bone_train_geo), 
	LOAD_MODEL_FROM_GEO(0xFA, bonespin_geo), 
	LOAD_MODEL_FROM_GEO(0xF9, bonespin2_geo), 
	LOAD_MODEL_FROM_GEO(0xF8, bonegate_geo), 
	LOAD_MODEL_FROM_GEO(0xF7, boneswapgate_geo), 
	LOAD_MODEL_FROM_GEO(0xF6, corenode_geo), 
	LOAD_MODEL_FROM_GEO(0xF5, nullbody_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PIPE1_CCM, pipe1_ccm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PIPE2_CCM, pipe2_ccm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CONV2_CCM, conv2ccm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CONV1_CCM, conv1ccm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EXECUTIVE, executive_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TVHEAD_CCM, tvhead_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EXEC_MISSILE, cosmic_missile_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ESCALATOR, escalator_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TRAINCEIL, trap_trainceil_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BREAKABLE_BOX, -5358, 2994, -8058, 0, 0, 0, (BREAKABLE_BOX_BP_LARGE << 16), bhvBreakableBox),
		OBJECT(MODEL_CRABLET, 3782, -860, 296, 0, -50, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_CRABLET, 6103, 1244, -5096, 0, -8, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_CRABLET, -5736, 2844, -4829, 0, 68, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_NONE, -360, 1244, -4238, 0, 0, 0, 0x00000000, bhvEscalatorSpawner),
		OBJECT(MODEL_NONE, -360, 1244, -5132, 0, 0, 0, (1 << 16), bhvEscalatorSpawner),
		OBJECT(0xFF, -6204, -1312, 920, 0, -90, 0, 0x00000000, bhvOnlyFan),
		OBJECT(0xFF, -5604, -1312, 920, 0, -90, 0, 0x00000000, bhvOnlyFan),
		OBJECT(0xFF, 4670, 187, 3560, 0, 0, 0, 0x00000000, bhvOnlyFan),
		MARIO_POS(0x01, 0, -9249, -2727, 5627),
		OBJECT(MODEL_NONE, -1760, 2150, -4685, 0, 0, 0, 0x00000000, bhvQuicksandEscalator),
		OBJECT(MODEL_NONE, -9249, -2727, 5627, 0, 147, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(0xFB, -8685, 3217, -5823, 0, 180, 0, 0x00000000, bhvBoneTrain),
		OBJECT(MODEL_TRAINCEIL, -8486, 4052, -6086, 0, 0, 0, 0x00000000, bhvTrainCeil),
		OBJECT(MODEL_NONE, -1760, 2997, -4685, 0, 0, 0, (8 << 24) | (TTRIG_ESCALATOR_1 << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -5092, 3094, -8062, 0, 0, 0, (1 << 24) | (TTRIG_ESCALATOR_2 << 16), bhvTrollTrigger),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_RUNOFF),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -9249, -2727, 5627),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
