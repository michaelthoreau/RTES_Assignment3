/*
* Project:    Assignment3
* File:       main.cpp
* Author(s):  Michael Thoreau, Chris Piekarski
*/

#include <mbed.h>
//References
// PwmOut
// https://os.mbed.com/docs/mbed-os/v6.9/apis/pwmout.html

// Function Prototypes
void part1();
void part2();
void part3();
void extension();

//User Button Definition
DigitalIn userButton(USER_BUTTON);

// Define your PwmOuts
PwmOut led1(PD_13);  // Look on the datasheet and find that LED1 is connected to pin PD_13


/* main function for Assignment 3 - comment out parts you aren't currently working on */
int main() {

	while (1) {
		
		part1();

		part2();

		part3();

		extension();
	}

}


/*	Flashing LED
*	Part 1 - Modify the code below so that it will blink the LED at a rate of 1Hz with a 50% duty cycle.
*/
void part1() {
	    led1.period_ms(1);     
		led1.write(0.1f);
}

/*	Flashing LED
*	Part 2 - Apply a PWM signal that will blink LED2 at a rate of 500Hz with a 10% duty cycle.
*	For this part, locate LED2 on the datasheet and find what pin it is connected to. Write a PwmOut declaration
*	in the appropriate section at the top of the file. Apply the PWM signal to LED2.
*
*	For this question, please note your observation of the brightness of LED1 compared to LED2.
*	Is LED1 brighter or dimmer than LED2? Why or why not? Write your answer in a comment below:
*
*	Answer:
*
*/

void part2() {

	}


/*	LED Dimmer
*	Part 3 - Create a function that will cycle through different LED brightness levels using the user button.
*	Hint: Go back to Part 2 and experiment with different duty cycles and observe results in the brightless levels of LEDs.
*/

void part3() {

	}

/*	Signal Graphing
*	Extension - In this exercise you will utilize a timer to monitor the Analog ADC pins and sample their values.
*	Set up PB_0 for PwmOut and set up PB_1 for AnalogIn. Initiate a PWM signal of 1Hz with a 20% duty cycle on PB_0.
*	When sampling, you must short the pins PB_0 and PB_1. One method is to utilize jumper JP2 that comes with your board!
*	For this extension, you will sample the ADC for 5 seconds at 500 samples/second. Store your samples in a buffer and then output the buffer to the terminal.
*	From the terminal, record and graph your collected data in either Matlab or Python (Using matplotlib libraries)
*	and submit the resulting graph as a jpg/png as part of this assignment. Remember to label the x & y axis correctly.
*/

void extension() {
	
	}


