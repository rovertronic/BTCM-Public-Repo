void scroll_voidleak_Cube_006_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 38;
	int width = 128 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(voidleak_Cube_006_mesh_layer_5_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_gfx_mat_voidleak_void_layer1() {
	Gfx *mat = segmented_to_virtual(mat_voidleak_void_layer1);


	shift_t(mat, 10, PACK_TILESIZE(0, 1));
	shift_s(mat, 12, PACK_TILESIZE(0, 1));

};

void scroll_actor_geo_voidleak() {
	scroll_voidleak_Cube_006_mesh_layer_5_vtx_0();
	scroll_gfx_mat_voidleak_void_layer1();
};
