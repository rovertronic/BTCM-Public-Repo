void scroll_gfx_mat_ssl_dl_Lava_002() {
	Gfx *mat = segmented_to_virtual(mat_ssl_dl_Lava_002);
	static int interval_tex_ssl_dl_Lava_002 = 5;
	static int cur_interval_tex_ssl_dl_Lava_002 = 5;

	if (--cur_interval_tex_ssl_dl_Lava_002 <= 0) {
		shift_s(mat, 13, PACK_TILESIZE(0, 64));
		cur_interval_tex_ssl_dl_Lava_002 = interval_tex_ssl_dl_Lava_002;
	}

};

void scroll_gfx_mat_ssl_dl_SMB2_Waterfall_002() {
	Gfx *mat = segmented_to_virtual(mat_ssl_dl_SMB2_Waterfall_002);
	static int interval_tex_ssl_dl_SMB2_Waterfall_002 = 3;
	static int cur_interval_tex_ssl_dl_SMB2_Waterfall_002 = 3;

	if (--cur_interval_tex_ssl_dl_SMB2_Waterfall_002 <= 0) {
		shift_s_down(mat, 13, PACK_TILESIZE(0, 64));
		cur_interval_tex_ssl_dl_SMB2_Waterfall_002 = interval_tex_ssl_dl_SMB2_Waterfall_002;
	}

};

void scroll_gfx_mat_ssl_dl_SMB2_Vine_002() {
	Gfx *mat = segmented_to_virtual(mat_ssl_dl_SMB2_Vine_002);
	static int interval_tex_ssl_dl_SMB2_Vine_002 = 7;
	static int cur_interval_tex_ssl_dl_SMB2_Vine_002 = 7;

	if (--cur_interval_tex_ssl_dl_SMB2_Vine_002 <= 0) {
		shift_s(mat, 13, PACK_TILESIZE(0, 64));
		cur_interval_tex_ssl_dl_SMB2_Vine_002 = interval_tex_ssl_dl_SMB2_Vine_002;
	}

};

void scroll_ssl() {
	scroll_gfx_mat_ssl_dl_Lava_002();
	scroll_gfx_mat_ssl_dl_SMB2_Waterfall_002();
	scroll_gfx_mat_ssl_dl_SMB2_Vine_002();
};
