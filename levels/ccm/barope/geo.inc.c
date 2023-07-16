#include "src/game/envfx_snow.h"

const GeoLayout barope_geo[] = {
	GEO_CULLING_RADIUS(100),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, barope_Plane_012_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, barope_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
