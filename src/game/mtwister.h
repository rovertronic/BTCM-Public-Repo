#ifndef __MTWISTER_H
#define __MTWISTER_H

#include <PR/ultratypes.h>

#define STATE_VECTOR_LENGTH 624
#define STATE_VECTOR_M      397 /* changes to STATE_VECTOR_LENGTH also require changes to this */

typedef struct tagMTRand {
  unsigned long mt[STATE_VECTOR_LENGTH];
  int index;
} MTRand;

MTRand seedRand(unsigned long seed);
unsigned long genRandLong(MTRand* rand);
f32 genRand(MTRand* rand);

#endif /* #ifndef __MTWISTER_H */