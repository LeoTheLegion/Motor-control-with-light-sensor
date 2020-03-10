/*
 * Output.c
 *
 *  Created on: Mar 6, 2020
 *      Author: LeoTheLegion
 */

#include "Output.h"

void setupOutput(int bit){
    P1DIR |= bit;
}

void setOutput(int bit, PowerState state){
    switch(state){
        case ON:
            P1OUT |= bit;
            break;
        case OFF:
            P1OUT &= ~(bit);
            break;
        case TOGGLE:
            P1OUT ^= bit;
            break;
    }
}
