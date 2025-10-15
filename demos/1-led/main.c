//Alternate LEDs from Off, Green, and Red
#include <msp430.h>
#include "libTimer.h"
#include "led.h"

int main(void) {
  static int chosenPart = 2; // 0=A, 1=B, 2=C

  switch(chosenPart){
  case 0:
    P1DIR |= LEDS; // specify all LED bits for output
    P1OUT &= ~LED_GREEN; // turn off green
    P1OUT |= LED_RED; // turn on red
    break;
  case 1:
    P1DIR |= LEDS; // specify all LED bits for output
    P1OUT |= LEDS; // turn on all LEDs
    break;
  case 2:
    P1DIR |= LED_GREEN; // only specify green LED bit for output
    P1OUT |= LEDS; // turn on green and fail to turn on red
    break;
  default:
    break;
  }
  
  or_sr(0x18);		/* CPU off, GIE on */
  return 0;
}
