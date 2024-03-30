/*
 * hmi_ecu.c
 *
 *  Created on: Mar 29, 2024
 *      Author: omart
 */

#include"hmi_ecu.h"
#include<util/delay.h>
void main(void){
	uint8 i=0,flag,pressed;
	uint8 loop = 0; // to control the cases of the program
	LCD_init();
	UART_init(&config_uart);
	while(1)
	{
		if (loop==0){
			LCD_clearScreen();
			LCD_moveCursor(0,0);
			LCD_displayString("plz enter pass:");//15 columns
			LCD_moveCursor(1,0);
			for(i=0;i<5;++i){
				pass[0]= KEYPAD_getPressedKey();
				LCD_displayCharacter('*');
				_delay_ms(500);
			}
			UART_sendByte(MC1_READY);

			for(i=0;i<5;++i){
				while(UART_recieveByte()!=MC2_READY){}
				UART_sendByte(pass[i]);
//				LCD_clearScreen();
//				LCD_moveCursor(0,0);
//				LCD_displayString("UartSending1");

				}


			LCD_clearScreen();
			LCD_moveCursor(0,0);
			LCD_displayString("Plz re-enter the");
			LCD_moveCursor(1,0);
			LCD_displayString("same pass:");//10 columns w seeb 1 space yb2a 11
			LCD_moveCursor(1,11);



			for(i=0;i<5;++i){
				pass_verf[0]= KEYPAD_getPressedKey();
				LCD_displayCharacter('*');
				_delay_ms(500);
				}



			UART_sendByte(MC1_READY);
			for(i=0;i<5;++i){
				while(UART_recieveByte()!=MC2_READY);
				UART_sendByte(pass_verf[i]);

			}
			_delay_ms(500);
			UART_sendByte(MC1_READY);


			flag = UART_recieveByte();
//			LCD_clearScreen();
//			LCD_moveCursor(0,0);
//			LCD_intgerToString(flag);
			if(flag == SUCCESS_PASS){
				loop=1;
			}

		}
		if(loop==1){
			LCD_moveCursor(0,0);
			LCD_clearScreen();
			LCD_displayString("+ : Open Door");
			LCD_moveCursor(1,0);
			LCD_displayString("- : Change Pass");
			pressed=KEYPAD_getPressedKey();
			_delay_ms(500);
			if(pressed =='+'){
				UART_sendByte(MC1_READY);
				while(UART_recieveByte()!=MC2_READY);
				UART_sendByte(RETRIVING_MODE);
				loop =2;
			}else if(pressed== '-'){
				UART_sendByte(MC1_READY);
				while(UART_recieveByte()!=MC2_READY);
				UART_sendByte(STORING_MODE);
				loop=0;
			}
		}
		if(loop==2){
			LCD_clearScreen();
			LCD_moveCursor(0,0);
			LCD_displayString("plz enter pass:");
			LCD_moveCursor(1,0);
			for(i=0;i<5;++i){
				pass[0]= KEYPAD_getPressedKey();
				LCD_displayCharacter('*');
				_delay_ms(500);
				}
			UART_sendByte(MC1_READY);
			for(i=0;i<5;++i){
				while(UART_recieveByte()!=MC2_READY){}
				UART_sendByte(pass[i]);
			}
			UART_sendByte(MC1_READY);
			while(UART_recieveByte()!=MC2_READY);
			if(UART_recieveByte()==SUCCESS_PASS){
				LCD_clearScreen();
				LCD_moveCursor(0,0);
				LCD_displayString("Opening door");
				_delay_ms(2000);
			}else if(UART_recieveByte()==FAIL_PASS){

			}
		}



	}


}
