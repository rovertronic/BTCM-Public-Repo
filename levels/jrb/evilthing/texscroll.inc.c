void scroll_gfx_mat_evilthing_void_layer1() {
	Gfx *mat = segmented_to_virtual(mat_evilthing_void_layer1);


	shift_t(mat, 10, PACK_TILESIZE(0, 1));
	shift_s(mat, 12, PACK_TILESIZE(0, 1));

};

void scroll_jrb_level_geo_evilthing() {
	scroll_gfx_mat_evilthing_void_layer1();
};
