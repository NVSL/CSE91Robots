#ifndef CHASE_H
#define CHASE_H



#define DRIVE_STBY 4        
#define DRIVE_PWMA 3        
#define DRIVE_AIN1 6        
#define DRIVE_AIN2 8        
#define DRIVE_PWMB 5        
#define DRIVE_BIN1 9        
#define DRIVE_BIN2 10        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);

#define DISTANCESENSOR_VCC None        
DistanceSensor distanceSensor(DISTANCESENSOR_VCC);

#define DISTANCESENSOR_2_VCC None        
DistanceSensor distanceSensor_2(DISTANCESENSOR_2_VCC);

#define LED_CONTROL 11        
LED led(LED_CONTROL);

#define LED_2_CONTROL 12        
LED led_2(LED_2_CONTROL);

#define LED_3_CONTROL 13        
LED led_3(LED_3_CONTROL);

#define BUTTON_SENSE A0        
MomentaryButton button(BUTTON_SENSE);

#define BUMP_SENSE A1        
MomentaryButton bump(BUMP_SENSE);


#endif