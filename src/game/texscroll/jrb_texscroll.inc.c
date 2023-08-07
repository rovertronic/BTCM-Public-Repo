#include "levels/jrb/header.h"
#include "levels/jrb/texscroll.inc.c"
#include "levels/jrb/bigmine/texscroll.inc.c"
#include "levels/jrb/jrb_sky/texscroll.inc.c"
#include "levels/jrb/glitch1/texscroll.inc.c"
#include "levels/jrb/glitch2/texscroll.inc.c"
#include "levels/jrb/evilthing/texscroll.inc.c"
void scroll_textures_jrb() {
	scroll_jrb();

	scroll_jrb_level_geo_bigmine();
	scroll_jrb_level_dl_jrb_sky();
	scroll_jrb_level_geo_glitch1();
	scroll_jrb_level_geo_glitch2();
	scroll_jrb_level_geo_evilthing();
}
