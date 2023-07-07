void scroll_tl_logo2_Plane_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 138;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(tl_logo2_Plane_mesh_layer_1_vtx_1);

	deltaY = (int)(0.20000000298023224 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_gfx_mat_tl_logo2_lab_goo_layer1() {
	Gfx *mat = segmented_to_virtual(mat_tl_logo2_lab_goo_layer1);

	shift_t_down(mat, 11, PACK_TILESIZE(0, 2));

};

void scroll_actor_geo_tl_logo2() {
	scroll_tl_logo2_Plane_mesh_layer_1_vtx_1();
	scroll_gfx_mat_tl_logo2_lab_goo_layer1();
};
