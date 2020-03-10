/*
 * Input.h
 *
 *  Created on: Mar 6, 2020
 *      Author: LeoTheLegion
 */

#ifndef INPUT_H_
#define INPUT_H_


#include <msp430.h>
#include <stdbool.h>

void setupInput(int bit);
bool getInput(int bit);
float getInput_raw(int bit);

#endif /* INPUT_H_ */
