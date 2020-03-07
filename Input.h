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

void setupInput(void);
bool getInput(int bit);


#endif /* INPUT_H_ */
