# p10-football
Football timer using arduino and  P10 led panel display.

This code can be used only with ordinary P10 led pannels . The library does not support SMD type led pannels due to scan rete differences.

football.ino code could be used to run a timmer for football from 0:0 to infinity till the power is turned off.
football_twoHalfs.ino code could be used to put up two halfs of the match . The first half stats from 0:0 and goes on till the power is turned off. The second half starts from 30:0 and goes on untill the power is turned off


# P10 library
use the upto date library from this link http://www.electroons.com/blog/ledp10-arduino-library-for-p10-led-display-panels/
the details of how to instal and use the P10 library are given in detail in the above link
Use p10_pinout.png to wireup your display from arduino.

## Library features:
 
Can drive up to 320×16 pixels (10 Panels connected in cascade).

Supports dual line display, i.e. one panel divided into two.

Supports dynamic screen refresh. You can program to display dynamic content on the panels.

Supports different scroll speeds.

Static and scrolling text mode. Can switch from one to another at run time.

Supports only text based content right now.

256 step Brightness control.

## Installation :

Unzip the LedP10 archive inside any directory on your machine.

Read the readme Install file.

Copy LedP10 folder into /Arduino/libraries of your arduino installation.

Open arduino IDE. (You need to reopen it after installing the LedP10 library).

In Arduino IDE, goto File > Examples > LedP10

You will find a few example program to demonstrate the usage of our library.

Build your own project by modifying these examples in the way you want.


# This code repo is powered by MOTIFY.IN
