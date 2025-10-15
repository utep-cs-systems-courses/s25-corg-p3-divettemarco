## Description
* A: Turns on the red LED for a few seconds in a quick blinking pattern.
* B: Turns on green and red LED (different combo of LEDs illuminate).
* C: Turns on green LED and tries and fails to turn on red LED (don't set using P1DIR for red LED)

## Notes
Be sure to understand the manipulation of P1OUT and P1DIR.
* P1DIR specifies which bits are for output
* P1OUT provides bits of data to output
