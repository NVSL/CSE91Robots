#ifndef BASHKETCHUM_H
#define BASHKETCHUM_H



#define DRIVE_STBY 4        
#define DRIVE_PWMA 3        
#define DRIVE_AIN1 8        
#define DRIVE_AIN2 11        
#define DRIVE_PWMB 5        
#define DRIVE_BIN1 12        
#define DRIVE_BIN2 13        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);

#define DISTANCESENSOR_VCC None        
DistanceSensor distanceSensor(DISTANCESENSOR_VCC);

#define BUZZER_1 A0        
Buzzer buzzer(BUZZER_1);

Adafruit_8x8LED display;

#define LED_CONTROL_RED 6        
#define LED_CONTROL_GREEN 9        
#define LED_CONTROL_BLUE 10        
RGBLED led(LED_CONTROL_RED,LED_CONTROL_GREEN,LED_CONTROL_BLUE);

#define BUTTON_SENSE A1        
MomentaryButton button(BUTTON_SENSE);


#endif