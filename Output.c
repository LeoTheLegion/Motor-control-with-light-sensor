/*
 * Output.c
 *
 *  Created on: Mar 6, 2020
 *      Author: LeoTheLegion
 */

#include "Output.h"

void setupOutput(void){
    P1DIR |= (LED1 | LED2);
}

void setOutput(int bit, PowerState state){
    switch(state){
        case ON:
            P1OUT |= bit;
            break;
        case OFF:
            P1DIR &= ~(bit);
            break;
        case TOGGLE:
            P1OUT ^= bit;
            break;
    }
}
