/*
 * Authenticator.h
 *
 *  Created on: Mar 11, 2020
 *      Author: LeoTheLegion
 */

#ifndef AUTHENTICATOR_H_
#define AUTHENTICATOR_H_

#include <stdbool.h>
#include <Input.h>
#include <Output.h>
#include <LightSensorKeyPad.h>
#include <Timer.h>

struct password{
    unsigned int saved: 3;
    unsigned int currentOnKeyBoard: 3;
};

static struct password pass = {5,0};

void setupAuthenticator(void);
bool isPasswordValid(void);

void poll(void);
void updatePassword(unsigned int x);

void HandleDebugLEDs(Key key);
#endif /* AUTHENTICATOR_H_ */
