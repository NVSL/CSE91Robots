#include "Wire.h"
#include "HotlineBling.h"

void setup()
{
}

void loop()
{
  
  drive.spinLeft();
  delay(1000);
  drive.spinRight();
  delay(1000);
        
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
          
  led.turnOn();
  delay(1000);
  led.turnOff();
  delay(1000);
          
  led_2.turnOn();
  delay(1000);
  led_2.turnOff();
  delay(1000);
          
  led_3.turnOn();
  delay(1000);
  led_3.turnOff();
  delay(1000);
          
  led_4.turnOn();
  delay(1000);
  led_4.turnOff();
  delay(1000);
          
}