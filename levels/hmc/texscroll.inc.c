void scroll_hmc_dl_adarksky_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 488;
	int width = 256 * 0x20;
	int height = 256 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_adarksky_mesh_layer_1_vtx_0);

	deltaX = (int)(0.5 * 0x20) % width;
	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_gfx_mat_hmc_dl_darksky_layer1() {
	Gfx *mat = segmented_to_virtual(mat_hmc_dl_darksky_layer1);

	shift_s(mat, 12, PACK_TILESIZE(0, 1));
	shift_t(mat, 12, PACK_TILESIZE(0, 2));

};

void scroll_hmc() {
	scroll_hmc_dl_adarksky_mesh_layer_1_vtx_0();
	scroll_gfx_mat_hmc_dl_darksky_layer1();
};
