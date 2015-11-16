#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_LEDBackpack.h"
#include "Buzzer.h"
#include "RGBLED.h"
#include "Motor.h"
#include "LED.h"
#include "PinChangeInt.h"
#include "MomentaryButton.h"
#include "DistanceSensor.h"

#define DRIVE_STBY 4
#define DRIVE_PWMA 3
#define DRIVE_AIN1 8
#define DRIVE_AIN2 11
#define DRIVE_PWMB 5
#define DRIVE_BIN1 12
#define DRIVE_BIN2 13
Motor drive(DRIVE_STBY, DRIVE_PWMB, DRIVE_BIN1, DRIVE_BIN2, DRIVE_PWMA, DRIVE_AIN2, DRIVE_AIN1);

#define DISTANCESENSOR_VCC A2
DistanceSensor distanceSensor(DISTANCESENSOR_VCC);

#define BUZZER_1 A0
Buzzer buzzer(BUZZER_1);

Adafruit_8x8matrix display;

#define LED_CONTROL_RED 6
#define LED_CONTROL_GREEN 9
#define LED_CONTROL_BLUE 10
RGBLED led(LED_CONTROL_RED, LED_CONTROL_GREEN, LED_CONTROL_BLUE);

#define BUTTON_SENSE A1
MomentaryButton button(BUTTON_SENSE);


void setup()
{
  button.setup();
  display.begin(0x70);
  distanceSensor.setup();
  drive.setup();
  Serial.begin(9600);
  while (!button.wasPressed()) {
    Serial.println(distanceSensor.get_distance());
    delay(500);
  }
}


void loop()
{

  drive.forward(100);
  delay(1000);
  drive.backward(100);
  delay(1000);
  drive.spinLeft(100);
  delay(1000);
  drive.spinRight(100);
  delay(1000);
  drive.stop();
  delay(2000);




  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      display.drawPixel(i, j, 1);
      display.writeDisplay();
      delay(20);
      display.drawPixel(i, j, 0);
      display.writeDisplay();
      delay(20);
    }
  }

  drive.spinLeft(75);
  delay(1000);
  drive.spinRight(75);
  delay(1000);
  drive.forward(75);
  delay(1000);
  drive.backward(75);
  delay(1000);
  drive.stop();


  buzzer.playNote(2000, 2000);
  // buzzer.turnOff();
  delay(300);

  led.set(0, 0, 0);
  delay(500);
  led.set(255, 0, 0);
  delay(500);
  led.set(255, 255, 0);
  delay(500);
  led.set(255, 255, 255);
  delay(500);
  led.set(0, 0, 0);
  delay(500);

}




