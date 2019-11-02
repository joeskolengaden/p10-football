/*This example illustrates two user funcions of LedP10 library

First function-showmsg_single_scroll is for scroling of single message on P10 panel with 4 arguments which are message, no. of times of message scrolling, speed and font.

for message, pointer to a character string can be passed. For continuously running the message, INF can be passed in second argument, speed can be in range of 0-30, and font can be 0 or 1 as two type of fonts are currently supported for full screen messages. 


For second function-showmsg_double_scroll, there would be 7 arguments, 2 for messages, two for no. of times of message scrolling, two for speed, and last one for font. 
ngugghvghvhc
Specification being same as for single scrolling function, except only one font id provided for double scrolling and it's value should be 0.*/
 
#include "TimerOne.h"
#include  "SPI.h"
#include  "ledP10.h"

LedP10 myled;

void setup() 
{
   myled.init(3,4,8,9,5);
       /*
      P10 Select Line A - Arduino Pin 3
      P10 Select Line B - Arduino Pin 4
      P10 Store Line    - Arduino Pin 8
      P10 OE Line       - Arduino Pin 9
      No. of Panels     - 5 (Can be up to 10)
      */

 
   myled.showmsg_single_scroll("this is single led test",2,3,0);
   delay(6000);
   myled.showmsg_double_scroll("this is double led test1","this is double led test2",10,INF,3,1,0); 
}

void loop() 
{
 
}
