#include "src/game/envfx_snow.h"

const GeoLayout voidleak_geo[] = {
	GEO_CULLING_RADIUS(1000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, voidleak_Cube_006_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, voidleak_Cube_006_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, voidleak_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, voidleak_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
