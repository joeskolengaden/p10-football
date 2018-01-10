 /*This example illustrates two user funcions of LedP10 library
  *First function-showmsg_single_scroll is for scroling of single message on P10 panel with 4 arguments which are message, no. of times of message scrolling, speed and font.
  *for message, pointer to a character string can be passed. For continuously running the message, INF can be passed in second argument, spped can be in range of 0-30, 
   and font can be 0 or 1 as two type of fonts are currently supported for full screen messages. 
   
  * For second function-showmsg_double_scroll, there would be 7 arguments, 2 for messages, two for no. of times of message scrolling, two for speed, and last one for font. 
  * Specification being same as for single scrolling function, except only ont font id provided for double scrolling and it's value should be 0.
  * For connection diagram visit https://goo.gl/HiCJC1
  */
 
#include <TimerOne.h>
#include"SPI.h"
#include <ledP10.h>
#include <String.h>

LedP10 myled;
const int buttonPin = 2;
//const int buttonPin2 = 5;
int brightness=255;
int mpin=0;
//int mpin2=1;
int s=0;
int m=0;
void setup() 
{ 
    pinMode(buttonPin, INPUT);
    //pinMode(buttonPin2, INPUT);
 
    myled.setbrightness(brightness);      //set brigthness

    myled.init(3,4,8,9 ,2);
    myled.showmsg_single_scroll("WELCOME",1,3,0);
    delay(2000);
    
     mpin = digitalRead(buttonPin);
    // mpin2 = digitalRead(buttonPin2);

    //input to select minute to be 0 or 30
    
    if(mpin==LOW)
    {
     
         m=0;
                   
          myled.showmsg_single_scroll("First Half",1,3,0);
    }
    else //(mpin==HIGH)
    { m=30;
   
          myled.showmsg_single_scroll("Second Half",1,3,0);
     

    }
delay(3000);
    
    //myled.showmsg_double_scroll("this is double led test1","this is double led test2",10,INF,3,1,0); 
}

void loop() {
  
  if(s==60)
  {
    m=m+1;
    s=0;
  }
  char msg[10];
  sprintf(msg, " %d :: %d", m, s);
  
  //char timer[7] = m2 + ':' + s2;
            

  myled.showmsg_single_static(msg,0);
   mpin = digitalRead(buttonPin);
  
  s=s+1;
  delay(880);
}
