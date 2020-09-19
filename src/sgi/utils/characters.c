#include "characters.h"
#include "game/area.h"
#include "include/model_ids.h"
#include "game/mario.h"
#include "game/level_update.h"
#include "include/sm64.h"
#include "audio/data.h"
#include "audio/external.h"
#include "seq_ids.h"
#include "game/hud.h"

void setCharacterModel(s32 characterType){
    s32 type = MODEL_MARIO;
    switch (characterType) {
        case MARIO:
            type = MODEL_MARIO;
            break;
        case LUIGI:
            type = MODEL_LUIGI;
            break;
    }

    gLoadedGraphNodes[MODEL_PLAYER] = gLoadedGraphNodes[type];
}

s32 getCharacterType(){
    s32 type;
    if(gLoadedGraphNodes[MODEL_PLAYER] == gLoadedGraphNodes[MODEL_MARIO]){
        type = MARIO;
    }else if(gLoadedGraphNodes[MODEL_PLAYER] == gLoadedGraphNodes[MODEL_LUIGI]){
        type = LUIGI;
    }else{
        type = MARIO;
    }
    return type;
}

f32 getCharacterMultiplier(){
    f32 mul = 1.0f;
    switch (getCharacterType()) {
        case MARIO:
            mul = 1.0f;
            break;
        case LUIGI:
            mul = 1.07f;
            break;
    }
    return mul;
}

s32 isLuigi(){
    return getCharacterType() == LUIGI;
}

void playCharacterSound(s32 actionSound, s32 characterSound){
    play_mario_sound(gMarioState, actionSound, characterSound);
}
s8 notificationStatus = FALSE;

void triggerLuigiNotification(){
    if(!notificationStatus){
        play_cutscene_music(SEQUENCE_ARGS(15, SEQ_EVENT_SOLVE_PUZZLE));
        queue_rumble_data(15, 80);
        set_notification_state(TRUE);
        notificationStatus = TRUE;
    }    
}

void set_notification_status(s8 newState){
    notificationStatus = newState;
}
s8 get_notification_status(){
    return notificationStatus;
}
