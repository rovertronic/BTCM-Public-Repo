#include "src/game/envfx_snow.h"

const GeoLayout voidgoo_geo[] = {
	GEO_CULLING_RADIUS(213),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, voidgoo_Cylinder_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, voidgoo_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
