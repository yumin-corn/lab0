#include "mbed.h"


DigitalOut redLED(LED_RED);

DigitalOut greenLED(LED_GREEN);



void Led0(DigitalOut& ledpin)

{

   for(int i=0; i<6; ++i) { //blink for 6 times

       ledpin = !ledpin; // toggle led

       wait(0.2f);

   }

}
void Led1(DigitalOut& ledpin)

{

   for(int i=0; i<4; ++i) { //blink for 4 times

       ledpin = !ledpin; // toggle led

       wait(0.2f);

   }

}
int main()

{

   redLED = 1;

   greenLED = 1;

   while (true) {

       Led0(redLED);

       Led1(greenLED);

   }

}