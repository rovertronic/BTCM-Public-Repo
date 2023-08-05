#include "src/game/envfx_snow.h"

const GeoLayout creepie_floor_geo[] = {
	GEO_CULLING_RADIUS(10000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, creepie_floor_bsmt_006_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, creepie_floor_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
