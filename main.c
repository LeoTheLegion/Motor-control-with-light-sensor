#include <msp430.h> 
#include <Input.h>
#include <Output.h>
#include <LightSensorKeyPad.h>

#define LED1 BIT0
#define LED2 BIT6
#define LED3 BIT1

#define BUTTON BIT3

/*
 *Our driver.
 * */



void setup(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    setupOutput((LED1 | LED2 | LED3));    //Declare OUTPUTS
    setupInput(BUTTON); //Declare INPUTS
    setOutput((LED1 | LED2 | LED3),ON); //MAKE PIN0&6 HIGH INITIALLY

    SetupLightSensorKeyPad();
    setTickRate(250);
}

void loop(){
    while(1){
           UpdateLightSensorKeyPad();
           step();

          if(getKey() == HIGH){
              setOutput((LED1),ON);
              setOutput((LED2),OFF);
          }
          else if (getKey() == LOW){
              setOutput((LED2),ON);
              setOutput((LED1),OFF);
          }else{
              setOutput((LED1),OFF);
              setOutput((LED2),OFF);
          }

          if(tick()){
              setOutput((LED3),TOGGLE);
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
