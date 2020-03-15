/*
 * Authenticator.c
 *
 *  Created on: Mar 11, 2020
 *      Author: LeoTheLegion
 */
#include <Authenticator.h>


//output
#define LED1 BIT0
#define LED2 BIT6
#define LED3 BIT1

void setupAuthenticator(){
    setupOutput((LED1 | LED2 | LED3));    //Declare OUTPUTS
    setupInput(BUTTON); //Declare INPUTS
    setOutput((LED1 | LED2 | LED3),ON); //MAKE PIN0&6 HIGH INITIALLY

    SetupLightSensorKeyPad();

    setTickRate(250);
}


bool isPasswordValid(){
    poll();
    return (pass.saved == pass.currentOnKeyBoard);
}
////////////////////////////////////////
void poll(){

    UpdateLightSensorKeyPad();
    step();
    Key key = getKey();

    HandleDebugLEDs(key);

    if(!tick()) return;

    switch(key){
        case HIGH:
            updatePassword(1);
            break;
        case LOW:
            updatePassword(0);
            break;
        case NONE:
            break;
    }
}

void updatePassword(unsigned int x){
    pass.currentOnKeyBoard = pass.currentOnKeyBoard << 1;
    pass.currentOnKeyBoard += x;
}

void HandleDebugLEDs(Key key){
    if(key == HIGH){
         setOutput((LED1),ON);
         setOutput((LED2),OFF);
     }
     else if (key == LOW){
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
