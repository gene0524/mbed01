#include "mbed.h"

DigitalOut myled(LED2);
DigitalOut myled2(LED1);

int main()
{
   while (1)
   {
      myled = 1;  // LED2 high
      myled2 = 0; // LED1 low
      ThisThread::sleep_for(1s);

      myled.write(0);  // LED2 low
      myled2.write(1); // LED1 high
      ThisThread::sleep_for(1s);
   }
}