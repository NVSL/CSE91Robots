#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_LEDBackpack.h"
#include "Buzzer.h"
#include "RGBLED.h"
#include "Motor.h"
#include "LED.h"
#include "PinChangeInt.h"
#include "MomentaryButton.h"


Adafruit_8x8matrix display;

#define BUZZER_1 0
Buzzer buzzer(BUZZER_1);

#define LED_CONTROL_RED 3
#define LED_CONTROL_GREEN 5
#define LED_CONTROL_BLUE 6
RGBLED led(LED_CONTROL_RED, LED_CONTROL_GREEN, LED_CONTROL_BLUE);

#define DRIVE_STBY 1
#define DRIVE_PWMA 9
#define DRIVE_AIN1 4
#define DRIVE_AIN2 8
#define DRIVE_PWMB 10
#define DRIVE_BIN1 11
#define DRIVE_BIN2 12
Motor drive(DRIVE_STBY, DRIVE_PWMA, DRIVE_AIN1, DRIVE_AIN2, DRIVE_PWMB, DRIVE_BIN1, DRIVE_BIN2);

#define LED_2_CONTROL 13
LED led_2(LED_2_CONTROL);

#define LED_3_CONTROL A0
LED led_3(LED_3_CONTROL);

#define BUTTON_SENSE A1
MomentaryButton button(BUTTON_SENSE);

#define LED_5_CONTROL A2
LED led_5(LED_5_CONTROL);

#define LED_6_CONTROL A3
LED led_6(LED_6_CONTROL);

static const uint8_t PROGMEM
circle_bmp[] =
{ B00111100,
  B01000010,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B01000010,
  B00111100
},
square_bmp[] =
{ B11111111,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B11111111
};

void setup()
{
  button.setup();
  drive.setup();
  led.setup();
  display.begin(0x70);
}


void loop()
{

  display.clear();
  display.drawBitmap(0, 0, circle_bmp, 8, 8, LED_ON);
  display.writeDisplay();
  delay(1000);
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      display.drawPixel(i, j, 1);
      display.writeDisplay();
      delay(50);
      display.drawPixel(i, j, 0);
      display.writeDisplay();
      delay(50);
    }
  }

  buzzer.playNote(3000, 1000);
  delay(300);

  led.set(0, 0, 0);
  delay(1000);
  led.set(255, 0, 0);
  delay(1000);
  led.set(0, 255, 0);
  delay(1000);
  led.set(0, 0, 255);
  delay(1000);
  led.set(0, 0, 0);
  delay(1000);
  
  drive.spinLeft(75);
  delay(1000);
  drive.spinRight(75);
  delay(1000);
  drive.forward(75);
  delay(1000);
  drive.backward(75);
  delay(1000);
  drive.stop();

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



