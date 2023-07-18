#include "src/game/envfx_snow.h"

const GeoLayout monitor_geo[] = {
	GEO_CULLING_RADIUS(100),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, monitor_screen_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, monitor_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
