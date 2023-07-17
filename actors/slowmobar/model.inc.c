Vtx slowmobar_bar_mesh_vtx_cull[8] = {
	{{ {-20, -2, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {-20, -2, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {-20, 2, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {-20, 2, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {20, -2, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {20, -2, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {20, 2, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {20, 2, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
};

Vtx slowmobar_bar_mesh_vtx_0[4] = {
	{{ {-20, -2, 0}, 0, {-16, 767}, {0, 0, 127, 255} }},
	{{ {20, -2, 0}, 0, {767, 767}, {0, 0, 127, 255} }},
	{{ {20, 2, 0}, 0, {767, -16}, {0, 0, 127, 255} }},
	{{ {-20, 2, 0}, 0, {-16, -16}, {0, 0, 127, 255} }},
};

Gfx slowmobar_bar_mesh_tri_0[] = {
	gsSPVertex(slowmobar_bar_mesh_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_slowmobar_bar[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, ENVIRONMENT, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, ENVIRONMENT, 0, PRIMITIVE, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 235, 235, 235, 178),
	gsSPEndDisplayList(),
};

Gfx slowmobar_bar_mesh[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(slowmobar_bar_mesh_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_slowmobar_bar),
	gsSPDisplayList(slowmobar_bar_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

