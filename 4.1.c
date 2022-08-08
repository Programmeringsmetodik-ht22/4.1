/******************************************************************************************
* main.c: Blinkar lysdioder anslutna till pin 8 - 10 i en slinga med en blinkhastighet 
*         på 100 ms. 
******************************************************************************************/

/* Inkluderingsdirektiv: */
#include <avr/io.h>

/******************************************************************************************
* main: Lagrar pin-nummer för lysdioder i en statisk array. Motsvarande pins på I/0-port B
*       initieras till utportar. Lysdioderna blinkar sedan kontinuerligt i en slinga med
*       en blinkhastighet på 100 ms.
******************************************************************************************/
int main(void)
{
   const uint8_t leds[] = { 0, 1, 2 };
   const uint8_t num_leds = sizeof(leds) / sizeof(uint8_t);
   setup(leds, num_leds, &DDRB);
    
   while (1) 
   {
      blink(leds, num_leds, 100, &PORTB);
   }

   return 0;
}

