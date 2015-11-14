#include "Wire.h"
#include "HotlineBling.h"

void setup()
{
  drive.setup();
  buzzer.setup();
  display.setup();
  button.setup();
  led.setup();
  led_2.setup();
  led_3.setup();
  led_4.setup();
}

void loop()
{
  if (button.isPressed())
  {
    drive.spinLeft();
    delay(1000);
    drive.spinRight();
    delay(1000);
    drive.stop();
          
    buzzer.playNote(440);
    delay(300);
    buzzer.turnOff();
    delay(300);
    buzzer.playNote(450);
    delay(300);
    buzzer.turnOff();
    delay(300);
    buzzer.playNote(460);
    delay(300);
    buzzer.turnOff();
    delay(300);
            
    display.happyFace();
    delay(1000);
    display.clear();
          
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
}
