void scroll_tl_logo_Plane_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 149;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(tl_logo_Plane_mesh_layer_1_vtx_1);

	deltaY = (int)(0.10000000149011612 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_gfx_mat_tl_logo_lab_goo() {
	Gfx *mat = segmented_to_virtual(mat_tl_logo_lab_goo);

	shift_t(mat, 10, PACK_TILESIZE(0, 1));

};

void scroll_intro_level_geo_tl_logo() {
	scroll_tl_logo_Plane_mesh_layer_1_vtx_1();
	scroll_gfx_mat_tl_logo_lab_goo();
};
