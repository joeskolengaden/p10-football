// this is a football timmer that works with p10 non-smd LED pannels and controlled by an arduino


// the below code is reffered from p10 library availble in github for arduino 

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
const int buttonPin = 2;  // input pin that determines the halfs

int brightness=255; // value could be from 0 to 255

int mpin=0;  //input pin initial vlaue
int s=0;
int m=0;
void setup() 
{ 
    pinMode(buttonPin, INPUT);
 
    myled.setbrightness(brightness);      //set brigthness

    myled.init(3,4,8,9 ,2);
    myled.showmsg_single_scroll("WELCOME",1,3,0);                  //welcome msg
    myled.showmsg_single_scroll("    Let's FOOTBALL   ",1,3,0);   // intro msg
    delay(2000);
    
     mpin = digitalRead(buttonPin);  // read the value of the input pin to variable mpin

    
    if(mpin==LOW)    //input will set minutes variable m  to 0 or 30 based on input value
    {
     
         m=0;
                   
          myled.showmsg_single_scroll("First Half",1,3,0);
    }
    else //(mpin==HIGH)
    { m=30;
   
          myled.showmsg_single_scroll("Second Half",1,3,0);
     

    }
delay(3000);
    
}

void loop() {
  
  if(s==60) //increment variable m when variable s=60 
  {
    m=m+1;
    s=0;     // reset variable s
  }
  char msg[10];
  sprintf(msg, " %d :: %d", m, s);  // join all variable together into a string named msg
 
  myled.showmsg_single_static(msg,0);// display the msg
  
  s=s+1; // increment second's variable s
  delay(880);  // 800 milli seconds delay  for each second. The rest 200 milli seconds is taken by the p10 diplay functions
}
