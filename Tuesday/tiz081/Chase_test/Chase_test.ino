#include <Wire.h>
#include <Servo.h>
#include "PinChangeInt.h"
#include "MomentaryButton.h"
#include "DistanceSensor.h"
#include "Motor.h"
#include "LED.h"

#define BUTTON A0
#define BUMP A1
#define DISTANCE1 A2
#define DISTANCE2 A3

//motor setup vars
#define STBY 4
#define BIN1 9
#define BIN2 10
#define PWMB 5
#define AIN1 6
#define AIN2 8
#define PWMA 3


#define LED1 11
#define LED2 12
#define LED3 13

MomentaryButton button(BUTTON);                                  //Button "button" created
MomentaryButton bump(BUMP);                                      //Bump sensor "bump" created
DistanceSensor dist1(DISTANCE1);                                  //Distance sensors "dist1" and "dist2" created
DistanceSensor dist2(DISTANCE2);
Motor motor(STBY, PWMB, BIN1, BIN2, PWMA, AIN1, AIN2);          //Motor motor created
LED led1(LED1);
LED led2(LED2);
LED led3(LED3);

const int STOPPED = 0;

int state;

void setup() {
  Serial.begin(9600);
  // Normal setup stuff...
  button.setup();
  bump.setup();
  dist1.setup();
  dist2.setup();
  motor.setup();
  
  motor.changePolarity();
}

void loop() {
  led1.turnOn();
  led2.turnOn();
  led3.turnOn();

  led1.turnOff();

  Serial.print(dist1.get_distance());
  Serial.print("\t");
  Serial.println(dist2.get_distance());

  if (dist1.get_distance() < 10) {
    Serial.println(dist1.get_distance());
    led2.turnOff();
    delay(500);
  }

  if (dist2.get_distance() < 10) {
    Serial.println(dist2.get_distance());
    led3.turnOff();
    delay(500);
  }

}
