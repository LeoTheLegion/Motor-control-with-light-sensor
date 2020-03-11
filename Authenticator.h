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

static int password = 2;
static int passwordOnTheKeyBoard = 0;

void setupAuthenticator(void);
bool isPasswordValid(void);

void poll(void);
void updatePassword(int x);

void HandleDebugLEDs(Key key);
#endif /* AUTHENTICATOR_H_ */
