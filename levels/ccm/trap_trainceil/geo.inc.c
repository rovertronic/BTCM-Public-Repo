#include "src/game/envfx_snow.h"

const GeoLayout trap_trainceil_geo[] = {
	GEO_CULLING_RADIUS(5000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, trap_trainceil_viscol_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, trap_trainceil_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
