#include "src/game/envfx_snow.h"

const GeoLayout troll_element_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(GEO_TRANSPARENCY_MODE_NORMAL, geo_update_layer_transparency),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, troll_element_Plane_001_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, troll_element_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
