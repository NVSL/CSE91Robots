#ifndef MONSTERBOT_H
#define MONSTERBOT_H



Adafruit_8x8LED display;

#define DRIVE_STBY 4        
#define DRIVE_PWMA 3        
#define DRIVE_AIN1 8        
#define DRIVE_AIN2 9        
#define DRIVE_PWMB 5        
#define DRIVE_BIN1 10        
#define DRIVE_BIN2 11        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);

#define BUTTON_SENSE 12        
MomentaryButton button(BUTTON_SENSE);

#define LED_CONTROL 13        
LED led(LED_CONTROL);

#define LED_2_CONTROL A0        
LED led_2(LED_2_CONTROL);


#endif