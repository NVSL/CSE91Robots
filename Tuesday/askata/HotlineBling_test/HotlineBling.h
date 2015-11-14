#ifndef HOTLINEBLING_H
#define HOTLINEBLING_H

#include "MomentaryButton.h"
#include "Motor.h"
#include "Adafruit_GFX.h"
#include "Buzzer.h"
#include "LEDArray.h"
#include "LED.h"


#define DRIVE_STBY 0        
#define DRIVE_PWMA 3        
#define DRIVE_AIN1 6        
#define DRIVE_AIN2 8        
#define DRIVE_PWMB 5        
#define DRIVE_BIN1 9        
#define DRIVE_BIN2 10        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);

#define BUZZER_1 11        
Buzzer buzzer(BUZZER_1);

LEDArray display;

#define BUTTON_SENSE 12      
MomentaryButton button(BUTTON_SENSE);

#define LED_CONTROL 13        
LED led(LED_CONTROL);

#define LED_2_CONTROL A0        
LED led_2(LED_2_CONTROL);

#define LED_3_CONTROL A1        
LED led_3(LED_3_CONTROL);

#define LED_4_CONTROL A2        
LED led_4(LED_4_CONTROL);


#endif
