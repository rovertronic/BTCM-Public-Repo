void scroll_jrb_dl_bsmt_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 24;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(jrb_dl_bsmt_mesh_layer_1_vtx_4);

	deltaX = (int)(0.10000000149011612 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_gfx_mat_jrb_dl_lava_layer1() {
	Gfx *mat = segmented_to_virtual(mat_jrb_dl_lava_layer1);

	shift_s(mat, 11, PACK_TILESIZE(0, 1));

};

void scroll_jrb() {
	scroll_jrb_dl_bsmt_mesh_layer_1_vtx_4();
	scroll_gfx_mat_jrb_dl_lava_layer1();
};
