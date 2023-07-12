#include "src/game/envfx_snow.h"

const GeoLayout cratetrap_geo[] = {
	GEO_CULLING_RADIUS(1000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cratetrap_viscol_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cratetrap_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
