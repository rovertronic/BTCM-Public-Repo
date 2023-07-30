#include "src/game/envfx_snow.h"

const GeoLayout hoverwall_geo[] = {
	GEO_CULLING_RADIUS(500),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hoverwall_Cube_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, hoverwall_Cube_002_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hoverwall_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, hoverwall_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
