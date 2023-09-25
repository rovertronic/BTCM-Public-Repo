#pragma once

extern u8 randomizer_global_seed;
extern u8 randomizer_is_newgame;

extern u16 randomizer_costume_table[15];
extern u16 randomizer_levels[8];
extern u16 randomizer_negative_rules[];
extern u16 randomizer_positive_rules[];

void randomize_game(u32 seed, u8 is_newgame);
s32 rule_check(u16 rule, u8 positive);