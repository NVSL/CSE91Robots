#include "Wire.h"
#include "jak.h"

void setup()
{
}

void loop()
{
  
  buzzer.turnOn();
  delay(300);
  buzzer.turnOff();
  delay(300);
  buzzer.turnOn();
  delay(300);
  buzzer.turnOff();
  delay(300);
  buzzer.turnOn();
  delay(300);
  buzzer.turnOff();
  delay(300);
          
  led.set(0, 0, 0);
  delay(100);
  led.set(256, 0, 0);
  delay(100);
  led.set(256, 256, 0);
  delay(100);
  led.set(256, 256, 256);
  delay(100);
  led.set(0, 0, 0);
  delay(100);
          
  drive.spinLeft();
  delay(1000);
  drive.spinRight();
  delay(1000);
        
  led_2.turnOn();
  delay(1000);
  led_2.turnOff();
  delay(1000);
          
  led_3.turnOn();
  delay(1000);
  led_3.turnOff();
  delay(1000);
          
  led_5.turnOn();
  delay(1000);
  led_5.turnOff();
  delay(1000);
          
  led_6.turnOn();
  delay(1000);
  led_6.turnOff();
  delay(1000);
          
}