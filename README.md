# Door-Locker-Security-System

https://github.com/Omartarek78/Door-Locker-Security-System/assets/108580462/f94adaf3-e688-46d0-9569-a3a9816546e7


https://github.com/Omartarek78/Door-Locker-Security-System/assets/108580462/d13e9ab0-7b61-4209-b7f5-68b8cb5d4fa5


https://github.com/Omartarek78/Door-Locker-Security-System/assets/108580462/980b5291-d618-4a7b-8542-39e533589bc9


This Door Locker Security System is developed using C programming language for the ATmega32 microcontroller. It utilizes various drivers including GPIO, Keypad, LCD, Timer, UART, I2C, EEPROM, and DC-Motor to provide a comprehensive solution for securing doors with password-based access.

## Features

- **Password Protection:** Users can set a password to unlock the door, providing an additional layer of security.
- **Keypad Interface:** The system utilizes a keypad for entering the password, ensuring ease of use for authorized individuals.
- **LCD Display:** A LCD display is incorporated to provide visual feedback and prompts during operation, enhancing user experience.
- **Timer Functionality:** Timers are employed for time-sensitive operations, ensuring efficient performance of the system.
- **UART Communication:** UART is used for communication, facilitating interaction with external EEPROM  and Microcontroller.
- **EEPROM Storage:** The system utilizes EEPROM for storing password information securely.
- **DC-Motor Control:** The system controls a DC motor to physically unlock the door upon successful authentication.

## Installation

1. **Hardware Setup:** Connect the ATmega32 microcontroller to the required components including keypad, LCD, DC motor, etc., as per the circuit diagram provided.
2. **Software Setup:** Install the AVR toolchain and configure the development environment for programming the ATmega32 microcontroller.
3. **Compile Code:** Compile the provided C code using the AVR GCC compiler.
4. **Upload Code:** Upload the compiled code onto the ATmega32 microcontroller using an appropriate programmer.
5. **Deploy System:** Mount the hardware setup onto the door and ensure all connections are secure.

## Usage

1. **Power On:** Apply power to the system.
2. **Enter Password:** Use the keypad to enter the pre-set password.
3. **Authentication:** The system will compare the entered password with the stored password in EEPROM.
4. **Unlock Door:** If the entered password matches, the system will activate the DC motor to unlock the door.
5. **Feedback:** Visual feedback is provided on the LCD display.


