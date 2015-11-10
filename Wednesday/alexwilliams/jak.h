#ifndef JAK_H
#define JAK_H



Adafruit_8x8LED display;

#define BUZZER_1 0        
Buzzer buzzer(BUZZER_1);

#define LED_CONTROL_RED 3        
#define LED_CONTROL_GREEN 5        
#define LED_CONTROL_BLUE 6        
RGBLED led(LED_CONTROL_RED,LED_CONTROL_GREEN,LED_CONTROL_BLUE);

#define DRIVE_STBY 1        
#define DRIVE_PWMA 9        
#define DRIVE_AIN1 4        
#define DRIVE_AIN2 8        
#define DRIVE_PWMB 10        
#define DRIVE_BIN1 11        
#define DRIVE_BIN2 12        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);

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


#endif