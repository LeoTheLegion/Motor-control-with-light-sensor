/*
 * LightSensorKeyPad.s
 *
 *  Created on: Mar 9, 2020
 *      Author: LeoTheLegion
 */
#include <LightSensorKeyPad.h>

void SetupLightSensorKeyPad(void){
    ref_v = getInput_raw(BUTTON);
}

void UpdateLightSensorKeyPad(void){
    v = getInput_raw(BUTTON);
}

Key getKey(){
    if(v> ref_v * 0.80)
        return NONE;

    if(v>ref_v * 0.6)
        return HIGH;

    return LOW;
}
