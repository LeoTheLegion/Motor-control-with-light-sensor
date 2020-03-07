/*
 * Timer.h
 *
 *  Created on: Mar 6, 2020
 *      Author: LeoTheLegion
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <stdbool.h>

int tickRate = 0;
int steps = 0;

void setTickRate(int ms);

void step(void);

bool tick(void);

#endif /* TIMER_H_ */
