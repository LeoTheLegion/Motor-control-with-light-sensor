/*
 * LightSensorKeyPad.h
 *
 *  Created on: Mar 9, 2020
 *      Author: LeoTheLegion
 */

#ifndef LIGHTSENSORKEYPAD_H_
#define LIGHTSENSORKEYPAD_H_

#include <msp430.h>
#include <Input.h>

#define BUTTON BIT3

typedef enum {
    HIGH,LOW,NONE
} Key;


float v,ref_v;

void SetupLightSensorKeyPad(void);
void UpdateLightSensorKeyPad(void);

Key getKey();


#endif /* LIGHTSENSORKEYPAD_H_ */
