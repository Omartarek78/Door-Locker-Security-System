/*
 * uart.h
 *
 *  Created on: Mar 26, 2024
 *      Author: Omar Tarek
 */

#ifndef UART_H_
#define UART_H_

#include "std_types.h"


typedef enum{
	five_bits,six_bits,seven_bits,eight_bits,nine_bits=7
}UART_BitData;

typedef enum{
	disabled,even=2,odd
}UART_Parity;

typedef enum{
	one_bit,two_bits
}UART_StopBit;

typedef uint32 UART_BaudRate;


typedef struct{
	UART_BitData bit_data;
	UART_Parity parity;
	UART_StopBit stop_bit;
	UART_BaudRate baud_rate;
}UART_ConfigType;

void UART_init(UART_ConfigType* config);

void UART_sendByte(const uint8 data);

/*
 * Description :
 * Functional responsible for receive byte from another UART device.
 */
uint8 UART_recieveByte(void);

/*
 * Description :
 * Send the required string through UART to the other UART device.
 */
void UART_sendString(const uint8 *Str);

/*
 * Description :
 * Receive the required string until the '#' symbol through UART from the other UART device.
 */
void UART_receiveString(uint8 *Str); // Receive until #


#endif /* UART_H_ */
