/*
 * Output.h
 *
 *  Created on: Mar 6, 2020
 *      Author: LeoTheLegion
 */

#ifndef OUTPUT_H_
#define OUTPUT_H_

#include <msp430.h>

typedef enum {
    ON,OFF,TOGGLE
} PowerState;

void setupOutput(int bit);

void setOutput(int bit, PowerState state);

#endif /* OUTPUT_H_ */
