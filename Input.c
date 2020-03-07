/*
 * Intput.c
 *
 *  Created on: Mar 6, 2020
 *      Author: LeoTheLegion
 */

#include "Input.h"

#define BUTTON BIT3

void setupInput(void){
    P1DIR &= ~(BUTTON);  //Declare Inputs
}

bool getInput(int bit){// works like a OnPressed for now...
    unsigned int i;   //Delay variable
    if((P1IN & bit) == bit){
        while((P1IN & bit) == bit){}//wait for release
        for(i=0;i<20000;i++){}
        return true;
    }
    return false;
}


