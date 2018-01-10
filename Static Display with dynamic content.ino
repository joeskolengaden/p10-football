/*
 * This example displays an integer counter value.
 * showmsg_single_static function takes two arguments
 * first argument can be an interger value or a pointer to character string or a string in double quotes.
 * second argument is to select font, for which rwo values i.e. 0 and 1 are supported.
 */

#include "TimerOne.h"
#include "SPI.h"
#include "ledP10.h"
 
int num1=0;
LedP10 myled;

void setup() 
{
    myled.init(3,4,8,9,1);
      /*
      P10 Select Line A - Arduino Pin 3
      P10 Select Line B - Arduino Pin 4
      P10 Store Line    - Arduino Pin 8
      P10 OE Line       - Arduino Pin 9
      No. of Panels     - 1 (Can be up to 10)
      */
}
void loop() 
{
    myled.showmsg_single_static(num1,0);
    num1+=1;
    delay(500);
}
