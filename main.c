#include <msp430.h> 
#include <Output.h>
#include <Authenticator.h>

//output
#define MOTOR BIT2

//input
#define BUTTON BIT3

/*
 *Our driver.
 * */



void setup(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    setupOutput((MOTOR));    //Declare OUTPUTS
    setupInput(BUTTON); //Declare INPUTS
    setOutput((MOTOR),ON); //MAKE PIN0&6 HIGH INITIALLY

    setupAuthenticator();
}

void loop(){
    while(1){
          if(isPasswordValid()){
              setOutput(MOTOR,ON);
          }else{
              setOutput(MOTOR,OFF);
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
