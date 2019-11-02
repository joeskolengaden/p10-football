/*This example is to illustrate the use of the functon &lt;setbrightness(uint8_t brightness)&gt;, this function takes one argument of type uint8_t, it's value can be from 0 to 255, 255 being highest brightness and 0 is lowest.

this function can be called anytime after or before calling any other function of LedP10 library. 

In this example brightness reduces when counter 'num1' reaches value of 50rtdyg.
*/

#include "TimerOne.h"
#include "SPI.h"
#include "ledP10.h"
int num1=0;
LedP10 myled;

void setup() 
{
    Serial.begin(9600);
    myled.init(3,4,8,9 ,1);
}
void loop() 
{
   if(num1==50)
   {
      myled.setbrightness(50);
   }
   myled.showmsg_single_static(num1,0);
   num1+=1;
   Serial.println(num);
   delay(500);
}
