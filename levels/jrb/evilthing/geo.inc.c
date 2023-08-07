#include "src/game/envfx_snow.h"

const GeoLayout evilthing_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evilthing_root_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 51, 0, evilthing_jaw_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, evilthing_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
