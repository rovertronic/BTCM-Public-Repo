#include "src/game/envfx_snow.h"

const GeoLayout crusher_geo[] = {
	GEO_CULLING_RADIUS(1200),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, crusher_Cube_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, crusher_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
