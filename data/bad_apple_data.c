#include <ultra64.h>
#include "sm64.h"

#include "make_const_nonconst.h"


ALIGNED8 const u8 dma_jumpscare[] = {
    #include "actors/amp/custom_jumpscare_mario.rgba16.inc.c"
    ,
    #include "actors/amp/custom_jumpscare_pingas.rgba16.inc.c"
    ,
    #include "actors/amp/custom_jumpscare_ford.rgba16.inc.c"
    ,
    #include "actors/amp/custom_jumpscare_fast.rgba16.inc.c"
    ,
    #include "actors/amp/custom_troll_strip.i8.inc.c"
    ,
    #include "actors/amp/custom_HAHA.i8.inc.c"
    ,
    #include "actors/amp/video_strip_1.rgba16.inc.c"
    ,
    #include "actors/amp/video_strip_2.rgba16.inc.c"
    ,
    #include "actors/amp/video_strip_3.rgba16.inc.c"
    ,
    #include "actors/amp/video_strip_4.rgba16.inc.c"
    ,
    #include "actors/amp/video_strip_5.rgba16.inc.c"
    ,
    #include "actors/amp/video_strip_6.rgba16.inc.c"
    ,
    #include "actors/amp/video_strip_7.rgba16.inc.c"
    ,
    #include "actors/amp/screen.rgba16.inc.c"
    };

ALIGNED8 const u8 dma_troll[] = {

};