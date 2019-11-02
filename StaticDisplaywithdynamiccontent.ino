/*
 LedP10 Example Program
 Reads the value from ADC Channel A0 and Display on P10
 */
#include "TimerOne.h"
#include "SPI.h"
#include "LedP10.h"
 ///
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
      int sensorValue = analogRead(A0);
      // Display sensorValue statically in single line with font 0
      myled.showmsg_single_static(sensorValue,0);
      delay(500);
}
