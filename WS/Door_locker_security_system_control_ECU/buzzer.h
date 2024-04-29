/*
 * buzzer.h
 *
 *  Created on: Mar 29, 2024
 *      Author: Omar Tarek
 */

#ifndef BUZZER_H_
#define BUZZER_H_
#include"std_types.h"
#include "common_macros.h"
#include "gpio.h"
#define BUZZER_PORT PORTA_ID
#define BUZZER_PIN PIN0_ID
void Buzzer_init(void);
void Buzzer_on(void);
void Buzzer_off(void);

#endif /* BUZZER_H_ */
