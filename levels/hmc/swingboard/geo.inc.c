#include "src/game/envfx_snow.h"

const GeoLayout swingboard_geo[] = {
	GEO_CULLING_RADIUS(2000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, swingboard_lvl_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, swingboard_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
