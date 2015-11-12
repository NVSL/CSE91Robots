#include <PinChangeInt.h>
#include <MomentaryButton.h>
#include <Motor.h>
#include <DistanceSensor.h>
#include <Servo.h>
#include <LED.h>


#define DRIVE_STBY 4        
#define DRIVE_PWMA 3        
#define DRIVE_AIN1 8        
#define DRIVE_AIN2 9        
#define DRIVE_PWMB 5        
#define DRIVE_BIN1 10        
#define DRIVE_BIN2 11        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);

#define DISTANCESENSOR_VCC A2        
DistanceSensor distanceSensor(DISTANCESENSOR_VCC);

#define BUTTON_SENSE 12        
MomentaryButton button(BUTTON_SENSE);

#define LED_CONTROL 13        
LED led(LED_CONTROL);

#define LED_2_CONTROL A0        
LED led_2(LED_2_CONTROL);

#define LED_3_CONTROL A1        
LED led_3(LED_3_CONTROL);

Servo myservo;

void setup()
{
  Serial.begin(9600);
  drive.setup();
  distanceSensor.setup();
  button.setup();
  led.setup();
  led_2.setup();
  led_3.setup(); 
  myservo.attach(6);
  
  Serial.println("asdfasdfasdf");
  while(!button.wasPressed()){
    Serial.println(distanceSensor.get_distance());
    delay(300);
  }
}


void loop()
{
  int i = constrain(distanceSensor.get_distance() / 14, 0, 3);
  led.turnOff();
  led_2.turnOff();
  led_3.turnOff();
  if(i <= 2)
    led.turnOn();
  if(i <= 1)
    led_3.turnOn();
  if(i <= 0)
    led_2.turnOn();

  drive.forward((3 - i) * 50);
  myservo.write(constrain(map(distanceSensor.get_distance(), 0, 20, 0, 180), 0, 180));
  delay(50);
  
          
}



