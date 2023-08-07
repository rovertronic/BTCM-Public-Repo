void scroll_glitch2_Plane_002_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 36;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(glitch2_Plane_002_mesh_layer_1_vtx_0);

	deltaX = (int)(0.10000000149011612 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_gfx_mat_glitch2_corruption_layer1() {
	Gfx *mat = segmented_to_virtual(mat_glitch2_corruption_layer1);


	shift_s(mat, 9, PACK_TILESIZE(0, 1));
	shift_t(mat, 11, PACK_TILESIZE(0, 1));

};

void scroll_jrb_level_geo_glitch2() {
	scroll_glitch2_Plane_002_mesh_layer_1_vtx_0();
	scroll_gfx_mat_glitch2_corruption_layer1();
};
