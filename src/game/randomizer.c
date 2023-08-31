#include <PR/ultratypes.h>
#include "randomizer.h"
#include "mtwister.h"
#include "save_file.h"
#include "level_update.h"
#include "ingame_menu.h"

/* RANDOMIZER TABLES (ALL S16) */

u16 randomizer_costume_table[15];
u16 randomizer_levels[8];
u16 randomizer_badges[30];
u16 randomizer_negative_rules[4];
u16 randomizer_positive_rules[2];

s32 rule_check(u16 rule, u8 positive) {
    u8 rule_flagged = FALSE;

    if (positive) {
        for (u8 i=0;i<2;i++){
            if (randomizer_positive_rules[i] == rule) {
                rule_flagged = TRUE;
            }
        }   
    } else {
        for (u8 i=0;i<4;i++){
            if (randomizer_negative_rules[i] == rule) {
                rule_flagged = TRUE;
            }
        }
    }

    return rule_flagged;
}


void reset_randomizer_factory() {
    for (u8 i=0; i<15; i++) {
        randomizer_costume_table[i] = i;
    }

    for (u8 i=0; i<4; i++) {
        randomizer_negative_rules[i] = i;
    }

    for (u8 i=0; i<2; i++) {
        randomizer_positive_rules[i] = i;
    }

    randomizer_levels[0] = LEVEL_BOB | 0x0000;
    randomizer_levels[1] = LEVEL_WF  | 0x0100;
    randomizer_levels[2] = LEVEL_JRB | 0x0200;
    randomizer_levels[3] = LEVEL_BBH | 0x0300;
    randomizer_levels[4] = LEVEL_HMC | 0x0400;
    randomizer_levels[5] = LEVEL_DDD | 0x0500;
    randomizer_levels[6] = LEVEL_LLL | 0x0600;
    randomizer_levels[7] = LEVEL_PSS | 0x0700;

    randomizer_badges[0] = BADGE_FALL;
    randomizer_badges[1] = BADGE_DEFENSE;
    randomizer_badges[2] = BADGE_MAGNET;
    randomizer_badges[3] = BADGE_MANA;
    randomizer_badges[4] = BADGE_FALL;
    randomizer_badges[5] = BADGE_DEFENSE;
    randomizer_badges[6] = BADGE_LAVA;
    randomizer_badges[7] = BADGE_FALL;
    randomizer_badges[8] = BADGE_BURN;
    randomizer_badges[9] = BADGE_FINS;
    randomizer_badges[10] = BADGE_GILLS;
    randomizer_badges[11] = BADGE_STAR;
    randomizer_badges[12] = BADGE_DAMAGE;
    randomizer_badges[13] = BADGE_MANA;
    randomizer_badges[14] = BADGE_BURN;
    randomizer_badges[15] = BADGE_HP;
    randomizer_badges[16] = BADGE_GREED;
    randomizer_badges[17] = BADGE_TIME;
    randomizer_badges[18] = BADGE_FEET;
    randomizer_badges[19] = BADGE_STICKY;
    randomizer_badges[20] = BADGE_FEATHER;
    randomizer_badges[21] = BADGE_SQUISH;
    randomizer_badges[22] = BADGE_WEIGHT;
    randomizer_badges[23] = BADGE_BURN;
    randomizer_badges[24] = BADGE_BRITTLE;
    randomizer_badges[25] = BADGE_WITHER;
    randomizer_badges[26] = BADGE_HARDCORE;
    randomizer_badges[27] = BADGE_HEAL;
    randomizer_badges[28] = BADGE_BOTTOMLESS;
    randomizer_badges[29] = BADGE_SLAYER;

    //{BADGE_FALL,25,BADGE_DEFENSE,70,BADGE_MAGNET,125},//shop 0 main*
    //{12,0,13,0,14,0},//upgrade station [UNUSED]
    //{BADGE_MANA,100,BADGE_FALL,10,BADGE_DEFENSE,30},//shop 2 secret*
    //{BADGE_LAVA,40,BADGE_FALL,30,BADGE_BURN,150},//shop 3 reservoir*
    //{BADGE_FINS,50,BADGE_GILLS,150,BADGE_STAR,200},//ghost ship shop*
    //{BADGE_DAMAGE,170,BADGE_MANA,120,BADGE_BURN,75},//floor 2 (castle outdoor) shop*
    //{BADGE_HP,300,BADGE_GREED,250,BADGE_TIME,420},//floor 2 extra shop*
    //{BADGE_FEET,80,BADGE_STICKY,200,BADGE_FEATHER,400},//KTQ Thwomp Towers Shop*
    //{BADGE_LAVA,100,BADGE_DEFENSE,100,BADGE_FALL,100},//tutorial shop  //{0,0,0,0,0,0},//executive (HUB 3) shop
    //{BADGE_SQUISH,120,BADGE_WEIGHT,50,BADGE_BURN, 180},//floor 1 alternative shop
    //{BADGE_BRITTLE,1,BADGE_WITHER,1,BADGE_HARDCORE,1},//burden shop (ALL FOR 1 DOLLAR LOL!)
    //{BADGE_HEAL,300,BADGE_BOTTOMLESS,200,BADGE_SLAYER,50}//starfair final shop
}

/* RANDOMIZER LOGIC*/

MTRand randomizer_seed;

// Function to shuffle an array of signed 16-bit integers (u16)
void shuffleArray(u16* arr, size_t size) {
    for (size_t i = size - 1; i > 0; --i) {
        // Generate a random index between 0 and i (inclusive)
        size_t j = genRandLong(&randomizer_seed) % (i + 1);

        // Swap elements at index i and j
        u16 temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

u8 shop_ids_to_randomize[] = {0,2,3,4,5,6,7,9,10,11};

void randomize_game(u32 seed, u8 is_newgame) {
    randomizer_seed = seedRand(seed);
    reset_randomizer_factory();
    //randomize costumes
    shuffleArray(&randomizer_costume_table,15);
    if (is_newgame) {
        save_file_set_costume_unlock((1<<randomizer_costume_table[0]));
        gMarioState->CostumeID = randomizer_costume_table[0];
    }
    //randomize levels
    shuffleArray(&randomizer_levels,8);

    //randomize badge shops
    shuffleArray(&randomizer_badges,30);
    for (u8 i=0; i<10; i++) {
        shoptable[shop_ids_to_randomize[i]][0] = randomizer_badges[(i*3)+0];
        shoptable[shop_ids_to_randomize[i]][2] = randomizer_badges[(i*3)+1];
        shoptable[shop_ids_to_randomize[i]][4] = randomizer_badges[(i*3)+2];
    }

    //randomize rules
    shuffleArray(&randomizer_negative_rules,4);
    shuffleArray(&randomizer_positive_rules,2);
}