#include <PR/ultratypes.h>
#include "randomizer.h"
#include "mtwister.h"
#include "save_file.h"
#include "level_update.h"

/* RANDOMIZER TABLES (ALL S16) */

u16 costume_table[15];
u16 randomizer_levels[8];

void reset_randomizer_factory() {
    for (u8 i=0; i<15; i++) {
        costume_table[i] = i;
    }

    randomizer_levels[0] = LEVEL_BOB | 0x0000;
    randomizer_levels[1] = LEVEL_WF  | 0x0100;
    randomizer_levels[2] = LEVEL_JRB | 0x0200;
    randomizer_levels[3] = LEVEL_BBH | 0x0300;
    randomizer_levels[4] = LEVEL_HMC | 0x0400;
    randomizer_levels[5] = LEVEL_DDD | 0x0500;
    randomizer_levels[6] = LEVEL_LLL | 0x0600;
    randomizer_levels[7] = LEVEL_PSS | 0x0700;
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

void randomize_game(u32 seed, u8 is_newgame) {
    randomizer_seed = seedRand(seed);
    reset_randomizer_factory();
    //randomize costumes
    shuffleArray(&costume_table,15);
    if (is_newgame) {
        save_file_set_costume_unlock((1<<costume_table[0]));
        gMarioState->CostumeID = costume_table[0];
    }
    //randomize levels
    shuffleArray(&randomizer_levels,8);
}