void scroll_ccm_dl_viscol_mesh_layer_1_vtx_26() {
	int i = 0;
	int count = 64;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ccm_dl_viscol_mesh_layer_1_vtx_26);

	deltaX = (int)(0.10000000149011612 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_ccm_dl_viscol_mesh_layer_1_vtx_36() {
	int i = 0;
	int count = 35;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ccm_dl_viscol_mesh_layer_1_vtx_36);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_ccm_dl_viscol_mesh_layer_1_vtx_45() {
	int i = 0;
	int count = 26;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ccm_dl_viscol_mesh_layer_1_vtx_45);

	deltaX = (int)(0.10000000149011612 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_gfx_mat_ccm_dl_lavagang_layer1() {
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_lavagang_layer1);

	shift_s(mat, 9, PACK_TILESIZE(0, 1));
	shift_t(mat, 9, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_ccm_dl_lavagang_001_layer1() {
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_lavagang_001_layer1);

	shift_s(mat, 9, PACK_TILESIZE(0, 1));
	shift_t(mat, 9, PACK_TILESIZE(0, 1));

};

void scroll_ccm() {
	scroll_ccm_dl_viscol_mesh_layer_1_vtx_26();
	scroll_ccm_dl_viscol_mesh_layer_1_vtx_36();
	scroll_ccm_dl_viscol_mesh_layer_1_vtx_45();
	scroll_gfx_mat_ccm_dl_lavagang_layer1();
	scroll_gfx_mat_ccm_dl_lavagang_001_layer1();
};
