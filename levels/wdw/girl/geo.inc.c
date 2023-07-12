#include "src/game/envfx_snow.h"

const GeoLayout girl_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 48, 0, 0, -90, 0),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_root_mesh_layer_1_mat_override_Girl2_0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_head_skinned_mesh_layer_1_mat_override_Girl2_0),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 50, 0, girl_head_mesh_layer_1_mat_override_Girl2_0),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_leg_L_skinned_mesh_layer_1_mat_override_Girl2_0),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 1, -9, 180, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_leg_L_mesh_layer_1_mat_override_Girl2_0),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_leg_R_skinned_mesh_layer_1_mat_override_Girl2_0),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 1, 9, 180, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_leg_R_mesh_layer_1_mat_override_Girl2_0),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_arm_L_skinned_mesh_layer_1_mat_override_Girl2_0),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 50, 0, -96, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 18, 0, 6, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_arm_L_mesh_layer_1_mat_override_Girl2_0),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_arm_R_skinned_mesh_layer_1_mat_override_Girl2_0),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 50, 0, 96, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 18, 0, -6, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_arm_R_mesh_layer_1_mat_override_Girl2_0),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout girl_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 48, 0, 0, -90, 0),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_root_mesh_layer_1_mat_override_Girl3_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_head_skinned_mesh_layer_1_mat_override_Girl3_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 50, 0, girl_head_mesh_layer_1_mat_override_Girl3_1),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_leg_L_skinned_mesh_layer_1_mat_override_Girl3_1),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 1, -9, 180, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_leg_L_mesh_layer_1_mat_override_Girl3_1),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_leg_R_skinned_mesh_layer_1_mat_override_Girl3_1),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 1, 9, 180, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_leg_R_mesh_layer_1_mat_override_Girl3_1),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_arm_L_skinned_mesh_layer_1_mat_override_Girl3_1),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 50, 0, -96, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 18, 0, 6, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_arm_L_mesh_layer_1_mat_override_Girl3_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_arm_R_skinned_mesh_layer_1_mat_override_Girl3_1),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 50, 0, 96, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 18, 0, -6, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_arm_R_mesh_layer_1_mat_override_Girl3_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout girl_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 48, 0, 0, -90, 0),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_root_mesh_layer_1_mat_override_Girl4_2),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_head_skinned_mesh_layer_1_mat_override_Girl4_2),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 50, 0, girl_head_mesh_layer_1_mat_override_Girl4_2),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_leg_L_skinned_mesh_layer_1_mat_override_Girl4_2),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 1, -9, 180, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_leg_L_mesh_layer_1_mat_override_Girl4_2),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_leg_R_skinned_mesh_layer_1_mat_override_Girl4_2),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 1, 9, 180, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_leg_R_mesh_layer_1_mat_override_Girl4_2),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_arm_L_skinned_mesh_layer_1_mat_override_Girl4_2),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 50, 0, -96, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 18, 0, 6, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_arm_L_mesh_layer_1_mat_override_Girl4_2),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_arm_R_skinned_mesh_layer_1_mat_override_Girl4_2),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 50, 0, 96, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 18, 0, -6, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_arm_R_mesh_layer_1_mat_override_Girl4_2),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout girl_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(4, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 48, 0, 0, -90, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_root_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_head_skinned_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 50, 0, girl_head_mesh_layer_1),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_leg_L_skinned_mesh_layer_1),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 1, -9, 180, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_leg_L_mesh_layer_1),
						GEO_CLOSE_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_leg_R_skinned_mesh_layer_1),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 1, 9, 180, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_leg_R_mesh_layer_1),
						GEO_CLOSE_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_arm_L_skinned_mesh_layer_1),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 50, 0, -96, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 18, 0, 6, 0, 0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_arm_L_mesh_layer_1),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_arm_R_skinned_mesh_layer_1),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 50, 0, 96, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 18, 0, -6, 0, 0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, girl_arm_R_mesh_layer_1),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, girl_switch_opt1),
			GEO_BRANCH(1, girl_switch_opt2),
			GEO_BRANCH(1, girl_switch_opt3),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, girl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};