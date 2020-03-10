#include <msp430.h> 
#include <Input.h>
#include <Output.h>

#define LED1 BIT0
#define LED2 BIT6
#define BUTTON BIT3

/*
 *Our driver.
 * */

float v,avg;

void setup(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    setupOutput();    //Declare OUTPUTS
    setupInput(); //Declare INPUTS
    setOutput((LED1 | LED2),ON); //MAKE PIN0&6 HIGH INITIALLY
}

void loop(){
    while(1){
           if(getInput(BUTTON)){
               setOutput((LED1),TOGGLE); ////toggle the bits
           }

           v = getInput_raw(BUTTON);

           if(v> 1)
               setOutput((LED2),ON);
           else{
               setOutput((LED2),OFF);

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
