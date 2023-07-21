#include "src/game/envfx_snow.h"

const GeoLayout trollspawn_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_TRANSPARENT, 0, 0, 0, trollspawn_Plane_013_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, trollspawn_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
