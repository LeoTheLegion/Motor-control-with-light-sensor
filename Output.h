/*
 * Output.h
 *
 *  Created on: Mar 6, 2020
 *      Author: LeoTheLegion
 */

#ifndef OUTPUT_H_
#define OUTPUT_H_

#include <msp430.h>

#define LED1 BIT0
#define LED2 BIT6
#define BUTTON BIT3

typedef enum {
    ON,OFF,TOGGLE
} PowerState;

void setupOutput(void);

void setOutput(int bit, PowerState state);

#endif /* OUTPUT_H_ */
