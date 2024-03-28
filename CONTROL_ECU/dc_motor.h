/*
 * dc_motor.h
 *
 *  Created on: Feb 24, 2024
 *      Author: Omar Tarek
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#include "std_types.h"
#include"pwm.h"
typedef enum{
	stopped,clockwise,anti_clockwise
}DcMotor_State;
void DcMotor_init();
void DcMotor_Rotate(DcMotor_State state,uint8 speed);

#endif /* DC_MOTOR_H_ */
