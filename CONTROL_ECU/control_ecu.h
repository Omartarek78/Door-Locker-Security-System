/*
 * control_ecu.h
 *
 *  Created on: Mar 29, 2024
 *      Author: omart
 */

#ifndef CONTROL_ECU_H_
#define CONTROL_ECU_H_
#define MC2_READY 0x20
#define MC1_READY 0x10
#define SUCCESS_PASS 0x01
#define FAIL_PASS 0x02
#define STORING_MODE 0x55
#define RETRIVING_MODE 0x66
#include "twi.h"
#include "uart.h"
#include "external_eeprom.h"


TWI_ConfigType config_twi = {
		0b00000010,four_hundred_kb
};
UART_ConfigType config_uart = {
		eight_bits,even,one_bit,9600
};
uint8 pass[5];
uint8 pass_verf[5];
#endif /* CONTROL_ECU_H_ */
