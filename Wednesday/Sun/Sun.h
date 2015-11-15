#ifndef SUN_H
#define SUN_H



#define DRIVE_STBY 0        
#define DRIVE_PWMA 3        
#define DRIVE_AIN1 1        
#define DRIVE_AIN2 4        
#define DRIVE_PWMB 5        
#define DRIVE_BIN1 8        
#define DRIVE_BIN2 10        
Motor drive(DRIVE_STBY,DRIVE_PWMA,DRIVE_AIN1,DRIVE_AIN2,DRIVE_PWMB,DRIVE_BIN1,DRIVE_BIN2);

#define DRIVE_2_STBY 11        
#define DRIVE_2_PWMA 6        
#define DRIVE_2_AIN1 12        
#define DRIVE_2_AIN2 13        
#define DRIVE_2_PWMB 9        
#define DRIVE_2_BIN1 A0        
#define DRIVE_2_BIN2 A1        
Motor drive_2(DRIVE_2_STBY,DRIVE_2_PWMA,DRIVE_2_AIN1,DRIVE_2_AIN2,DRIVE_2_PWMB,DRIVE_2_BIN1,DRIVE_2_BIN2);

#define BUMP_SENSE A2        
MomentaryButton bump(BUMP_SENSE);

#define BUTTON_SENSE A3        
MomentaryButton button(BUTTON_SENSE);

#define BUMP_2_SENSE A4        
MomentaryButton bump_2(BUMP_2_SENSE);

#define BUZZER_1 A5        
Buzzer buzzer(BUZZER_1);


#endif