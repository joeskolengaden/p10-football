/*To display two counters of height 8 pixels.
function showmsg_double_static takes three arguments, first two can be either pointer to string or integer independently. Third argument is to select font for which only one value is supported currently i.e. 0.*/

#include "TimerOne.h"
#include "SPI.h"
#include "ledP10.h"
int num1=0,num2=1;
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
      myled.showmsg_double_static(num1,num2,0); 
      num1+=1; 
      num2+=2; 
      delay(500); 
}
