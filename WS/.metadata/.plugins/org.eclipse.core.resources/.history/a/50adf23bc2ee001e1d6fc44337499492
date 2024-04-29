/*
 * dc_motor.c
 *
 *  Created on: Feb 24, 2024
 *      Author: Omar Tarek
 */
#include "dc_motor.h"
#include"pwm.h"
#include "common_macros.h"
#include "gpio.h"
void DcMotor_init(){
	GPIO_setupPinDirection(PORTB_ID,PIN1_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(PORTB_ID,PIN2_ID,PIN_OUTPUT);
	GPIO_writePin(PORTD_ID,PIN4_ID,LOGIC_LOW);
	GPIO_writePin(PORTD_ID,PIN5_ID,LOGIC_LOW);
}
void DcMotor_Rotate(DcMotor_State state,uint8 speed){
	switch(state){
	case stopped:
		GPIO_writePin(PORTB_ID,PIN1_ID,LOGIC_LOW);
		GPIO_writePin(PORTB_ID,PIN2_ID,LOGIC_LOW);
		break;
	case clockwise:
		GPIO_writePin(PORTB_ID,PIN1_ID,LOGIC_HIGH);
		GPIO_writePin(PORTB_ID,PIN2_ID,LOGIC_LOW);
		break;
	}
	Timer0_PWM_init(speed);
}

