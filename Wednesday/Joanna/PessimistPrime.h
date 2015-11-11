#ifndef PESSIMISTPRIME_H
#define PESSIMISTPRIME_H



#define DRIVE_STBY 0        
#define DRIVE_PWMA 3        
#define DRIVE_AIN1 1        
#define DRIVE_AIN2 4        
#define DRIVE_PWMB 5        
#define DRIVE_BIN1 8        
#define DRIVE_BIN2 11        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);

#define DISTANCESENSOR_VCC None        
DistanceSensor distanceSensor(DISTANCESENSOR_VCC);

Adafruit_8x8LED display_2;

#define BUTTON_SENSE 12        
MomentaryButton button(BUTTON_SENSE);

#define LED_CONTROL_RED 6        
#define LED_CONTROL_GREEN 9        
#define LED_CONTROL_BLUE 10        
RGBLED led(LED_CONTROL_RED,LED_CONTROL_GREEN,LED_CONTROL_BLUE);

#define LED_2_CONTROL 13        
LED led_2(LED_2_CONTROL);

#define LED_3_CONTROL A0        
LED led_3(LED_3_CONTROL);

#define LED_4_CONTROL A1        
LED led_4(LED_4_CONTROL);


#endif