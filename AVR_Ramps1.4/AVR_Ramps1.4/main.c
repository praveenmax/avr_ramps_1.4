/*
 * GccApplication1_AVRRAMPS.c
 *
 * Created: 10-06-2017 01:24:22 PM
 * Author : PraveenMax
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define E0_PIN_DIR PA6

int main(void)
{
	DDRA |= 1<<PA6;
	PORTA |= 1<<PA6;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTA |= 1<<PA6;
		_delay_ms(500);
		PORTA &= ~(1<<PA6);
		_delay_ms(500);
    }
}

