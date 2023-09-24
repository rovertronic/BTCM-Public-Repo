Vtx fh1_p_mesh_vtx_0[8] = {
	{{{-138, 60, 0},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-138, -60, 0},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-4, -60, 0},0, {482, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-16, -19, 0},0, {436, 659},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{15, -44, 0},0, {551, 870},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-16, 37, 0},0, {438, 176},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{18, 8, 0},0, {564, 430},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{13, 60, 0},0, {544, -16},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx fh1_p_mesh_tri_0[] = {
	gsSPVertex(fh1_p_mesh_vtx_0 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(5, 7, 0, 0),
	gsSPEndDisplayList(),
};

Gfx mat_fh1_f3d_material_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx fh1_p_mesh[] = {
	gsSPDisplayList(mat_fh1_f3d_material_001),
	gsSPDisplayList(fh1_p_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

