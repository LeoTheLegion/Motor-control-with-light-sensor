/*
 * Timer.c
 *
 *  Created on: Mar 6, 2020
 *      Author: LeoTheLegion
 */
#include <Timer.h>

void setTickRate(int ms){
    tickRate = ms;
}

void step(void){
    steps++;
    if(steps >= tickRate){
        steps = 0;
    }
}

bool tick(void){
    return (steps == tickRate-1);
}
