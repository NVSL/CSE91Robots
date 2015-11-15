#ifndef FROND_H
#define FROND_H



#define BUZZER_1 4        
Buzzer buzzer(BUZZER_1);

#define BUMP_SENSE 6        
MomentaryButton bump(BUMP_SENSE);

#define BUTTON_SENSE 8        
MomentaryButton button(BUTTON_SENSE);

Adafruit_8x8LED display_2;

#define DRIVE_STBY 9        
#define DRIVE_PWMA 3        
#define DRIVE_AIN1 10        
#define DRIVE_AIN2 11        
#define DRIVE_PWMB 5        
#define DRIVE_BIN1 12        
#define DRIVE_BIN2 13        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);


#endif