#include "src/game/envfx_snow.h"

const GeoLayout desert_pillar_geo[] = {
	GEO_CULLING_RADIUS(3000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, desert_pillar_lvl_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, desert_pillar_lvl_002_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, desert_pillar_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, desert_pillar_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
