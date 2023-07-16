// pole_base.inc.c

void bhv_pole_base_loop(void) {
    if (
        o->oPosY - 10.0f < gMarioObject->oPosY
        && gMarioObject->oPosY < o->oPosY + o->hitboxHeight + 30.0f
        && o->oTimer > 10
        && !(gMarioState->action & MARIO_PUNCHING)
    ) {
        cur_obj_push_mario_away(70.0f);
    }

    u8 b1 = GET_BPARAM1(o->oBehParams);
    if (b1==1) {
        switch(o->oAction) {
            case 0:
                if (lateral_dist_between_objects(o,gMarioObject) < 10.0f) {
                    if (gMarioState->action == ACT_HOLDING_POLE) {
                        o->oAction++;
                        cur_obj_play_sound_2(SOUND_GENERAL_OPEN_CHEST);
                        o->oVelY = 0.0f;
                        o->oHomeY = o->oPosY;
                        run_event(EVENT_FELEGG);
                    }
                }
            break;
            case 1:
                o->oPosY += o->oVelY;
                o->oVelY -= 2.0f;

                if (o->oTimer > 50) {
                    o->oAction++;
                }
            break;
            case 2:
                //wait for event to change action
            break;
            case 3:
                o->oVelY += 2.0f;
                o->oPosY -= o->oVelY;

                if (o->oTimer > 50) {
                    o->oAction++;
                }
            break;
        }
    }
}

//Oscilation
void bhv_Tree_Osc(void) {
    //init

    if (o->oAction == 0) {
        o->oVelX = o->oBehParams2ndByte-128;
        o->oVelZ = o->oBehParams2ndByte-128;
        o->oAction = 1;
        }
    if (o->oAction == 1) {
        if (((gCurrentObject->oBehParams >> 24) & 0xFF) == 0) {
            o->oPosX += o->oVelX;

            if (o->oPosX > o->oHomeX) {
                o->oVelX --;
                }
                else
                {
                o->oVelX ++;
                }
            }
            else
            {
            o->oPosZ += o->oVelZ;

            if (o->oPosZ > o->oHomeZ) {
                o->oVelZ --;
                }
                else
                {
                o->oVelZ ++;
                }
            }
        }
    }
