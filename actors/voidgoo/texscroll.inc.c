void scroll_gfx_mat_voidgoo_void_layer1() {
	Gfx *mat = segmented_to_virtual(mat_voidgoo_void_layer1);


	shift_t(mat, 10, PACK_TILESIZE(0, 1));
	shift_s(mat, 12, PACK_TILESIZE(0, 1));

};

void scroll_actor_geo_voidgoo() {
	scroll_gfx_mat_voidgoo_void_layer1();
};
