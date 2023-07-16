#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "small_water_splash/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#ifdef S2DEX_TEXT_ENGINE
#include "src/s2d_engine/config.h"
#include FONT_C_FILE
#endif

#include "Crowbar/model.inc.c"
#include "Crowbar/geo.inc.c"

#include "Hammerbro/model.inc.c"
#include "Hammerbro/anims/data.inc.c"
#include "Hammerbro/anims/table.inc.c"
#include "hammer/model.inc.c"
#include "ring/model.inc.c"
#include "metal_crate/model.inc.c"
#include "metal_crate/collision.inc.c"

#include "monty_mole_hole/model.inc.c"

#include "moneybag/model.inc.c"
#include "moneybag/anims/data.inc.c"
#include "moneybag/anims/table.inc.c"

#include "bowser/anims/data.inc.c"
#include "bowser/anims/table.inc.c"

#include "monty_mole/model.inc.c"
#include "monty_mole/anims/data.inc.c"
#include "monty_mole/anims/table.inc.c"
#include "evil_mario/anims/data.inc.c"
#include "evil_mario/anims/table.inc.c"
#include "chicken/model.inc.c"
#include "chicken/anims/data.inc.c"
#include "chicken/anims/table.inc.c"
#include "token/model.inc.c"
#include "crab_anims/anims/data.inc.c"
#include "crab_anims/anims/table.inc.c"
#include "egg/model.inc.c"
#include "arrow/model.inc.c"
#include "BadgeSelect/model.inc.c"
#include "MysteryBadge/model.inc.c"
#include "snakeblock/collision.inc.c"
#include "snakeblock1/model.inc.c"
#include "snakeblock2/model.inc.c"
#include "snakeblock3/model.inc.c"

#include "b11/model.inc.c"
#include "bE/model.inc.c"
#include "Rex/model.inc.c"
#include "Rex/anims/data.inc.c"
#include "Rex/anims/table.inc.c"
#include "dcoin/model.inc.c"
#include "shopgui/model.inc.c"
#include "shopselect/model.inc.c"
#include "wallet/model.inc.c"
#include "noteblock/model.inc.c"
#include "noteblock/collision.inc.c"
#include "null_anims/anims/data.inc.c"
#include "null_anims/anims/table.inc.c"
#include "ico_heart/model.inc.c"
#include "ico_mana/model.inc.c"
#include "ico_badge/model.inc.c"

#include "rb_hud/model.inc.c"
#include "rb_bar/model.inc.c"
#include "bs_hud/model.inc.c"
#include "bs_bar/model.inc.c"
#include "billmask/model.inc.c"
#include "gradibox/model.inc.c"
#include "showrunner/model.inc.c"
#include "showrunner/anims/data.inc.c"
#include "showrunner/anims/table.inc.c"

#include "executive_/model.inc.c"
#include "spotlight/model.inc.c"
#include "executive_loom_/model.inc.c"
#include "girl/anims/data.inc.c"
#include "girl/anims/table.inc.c"

#include "tvhead/collision.inc.c"
#include "tvhead/model.inc.c"
#include "tvhead/anims/data.inc.c"
#include "tvhead/anims/table.inc.c"
#include "b19/model.inc.c"
#include "quest/model.inc.c"
#include "rocket_boot/model.inc.c"
#include "vanetalc/model.inc.c"
#include "ocean_ttc/model.inc.c"
#include "tvcorpse/model.inc.c"
#include "cosmic_spike/model.inc.c"
#include "crowbar2/model.inc.c"
#include "a_pingas/model.inc.c"
#include "blog1/model.inc.c"
#include "blog4/model.inc.c"
#include "blog2/model.inc.c"
#include "blog3/model.inc.c"
#include "bodylog_ball/model.inc.c"
#include "a_fast/model.inc.c"
#include "tl_logo2/model.inc.c"
#include "troll_element/model.inc.c"
#include "killerspikes/model.inc.c"
#include "global_cone/model.inc.c"
#include "btime1/model.inc.c"
#include "btime2/model.inc.c"
#include "alyxheart1/model.inc.c"
#include "alyxheart2/model.inc.c"
#include "aford/model.inc.c"