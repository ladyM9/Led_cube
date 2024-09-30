# Led_cube(8x8x8)
This project is based on the STM32F103C8T6 (Blue Pill) for controlling WS2812D (LED diodes). The LED cube is used for ambient lighting.
Various animations can be displayed on the LED cube, which makes it very impressive and interesting.

***How this project works***

The STM32F103C8T6 and WS2812D (LED diodes) cannot be directly connected because they operate at different voltage levels. 
To solve this issue, the LED diodes and STM32F103C8T6 are connected using a logic level converter. A computer power supply is used to power the LED cube.
It is necessary to use a computer power supply because when all 512 LEDs are lit, the LED cube requires a 20 A/5 V power source to function correctly.
Programming code upload on STM32F103C8T6 with ST-Link.


***Commponets for project:***
- STM32F103C8T6
- ST-Link
- WS2812D(512 piece)
- Capacitors(100 nF)
- Power supply(20A/5V)
- Logic Level Converter
- Wires for BreadBoard
- 3D printer(optional)
- 3D printing filament

![alt text](https://github.com/ladyM9/Led_cube/blob/main/Images/LED_CUBE.jpg?raw=true)

