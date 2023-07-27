Vtx musicbar_musicbar_mesh_vtx_cull[8] = {
	{{ {-561, -8, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {-561, -8, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {-561, 8, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {-561, 8, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {17, -8, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {17, -8, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {17, 8, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
	{{ {17, 8, 0}, 0, {-16, -16}, {0, 0, 0, 0} }},
};

Vtx musicbar_musicbar_mesh_vtx_0[4] = {
	{{ {-561, -8, 0}, 0, {-16, 1008}, {255, 255, 255, 255} }},
	{{ {8, -8, 0}, 0, {1008, 1008}, {255, 255, 255, 255} }},
	{{ {17, 8, 0}, 0, {1008, -16}, {255, 255, 255, 255} }},
	{{ {-561, 8, 0}, 0, {-16, -16}, {255, 255, 255, 255} }},
};

Gfx musicbar_musicbar_mesh_tri_0[] = {
	gsSPVertex(musicbar_musicbar_mesh_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_musicbar_box[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, 0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, 0, 0, 0, 0, ENVIRONMENT),
	gsSPGeometryMode(G_ZBUFFER | G_SHADE | G_LIGHTING, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_musicbar_box[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_ZBUFFER | G_SHADE | G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx musicbar_musicbar_mesh[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(musicbar_musicbar_mesh_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_musicbar_box),
	gsSPDisplayList(musicbar_musicbar_mesh_tri_0),
	gsSPDisplayList(mat_revert_musicbar_box),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

