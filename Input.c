/*
 * Intput.c
 *
 *  Created on: Mar 6, 2020
 *      Author: LeoTheLegion
 */

#include "Input.h"

void setupInput(int bit){
    P1DIR &= ~(bit);  //Declare Inputs
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

float getInput_raw(int bit){
    ADC10CTL0 = SREF_0|ADC10SHT_2|ADC10ON;

    ADC10CTL1 = INCH_3|SHS_0\
    |ADC10DIV_0|ADC10SSEL_0|CONSEQ_0;

    ADC10AE0 = bit;

    ADC10CTL0 |=ENC;
    ADC10CTL0 |= ADC10SC;
    while(ADC10CTL1 & BUSY);

    volatile float voltage;
    voltage = ((ADC10MEM*3.55)/0x03FF);
    return voltage;
}
