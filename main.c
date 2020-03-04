#include <msp430.h> 
#include <Input.h>

#define LED1 BIT0
#define LED2 BIT6
#define BUTTON BIT3

/*
 *Our driver.
 * */

void setup(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1DIR |= (LED1 | LED2);    //Declare OUTPUTS
    setupInput(); //Declare INPUTS
    P1OUT = (LED1 | LED2); //MAKE PIN0 HIGH INITIALLY
}

void loop(){
    while(1){
           if(getInput(BUTTON)){
               P1OUT ^= (LED1 | LED2);   ////toggle the bits
           }
       }
}
/**
 * main.c
 */
int main(void)
{
    setup();

    loop();

    return 0;
}
