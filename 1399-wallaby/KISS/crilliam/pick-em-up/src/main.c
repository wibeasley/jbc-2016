#include <kipr/botball.h>

int main()
{   
         printf("go straight\n");                                                                                                                                                                                                                                                  
    motor (0,60);                                                                                                                                                                                                                                                                                                                                                                   
    motor (3,60);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    msleep(500);
         printf("stop\n");
    motor (0,0);
    motor (3,0);
    msleep (1000);
         printf("open claw\n");
    enable_servos ();
    set_servo_position (2,1000);
    msleep(500);
    
         printf("arm down\n");
    enable_servos ();
    set_servo_position (3,1780);
    msleep(500);
    motor (0,50);
    motor (3,50);
    msleep(700);
         printf("close claw");
    enable_servos ();
    set_servo_position (2,418);
    msleep(500);
    
    motor (0,50);
    motor (3,50);
    msleep(500);
         printf("close claw\n");
    enable_servos ();
    set_servo_position (2,460);
         printf("claw up\n");
    enable_servos ();
    set_servo_position (3,1040);
    msleep(500);
    enable_servos ();
    set_servo_position (3,1700);
    msleep(500);
    motor (0,43);
    motor (3,40);
    msleep(600);
         printf("arm down");
    enable_servos ();
    set_servo_position (3,1870);
    msleep(500);
    motor (0,0);
    motor (3,0);
    msleep(1000);
         printf("open claw");
    enable_servos ();
    set_servo_position (2,910);
    msleep(500);
    enable_servos ();
    set_servo_position (3,480);
    msleep(500); 
    motor (0,-50);
    motor (3,-50);
    msleep(4000);
    motor (0,50);
    motor (3,50);
    msleep(3000);
    motor (0,60);
    motor (3,10);
    msleep(2000);
    motor (0,10);
    motor (3,60);
    msleep(1900);
    motor (0,50);
    motor (3,50);
    msleep(1500);
    motor (0,10);
    motor (3,40);
    msleep(2200);
    enable_servos ();
           printf("arm down\n");
    set_servo_position (3,1840);
    msleep(500);
           printf("close claw");
    enable_servos ();
    set_servo_position (2,460);
    msleep(500);
    motor (0,40);
    motor (3,5);
    msleep(00);
           printf("arm up");
    enable_servos ();
    set_servo_position (3,967);
    msleep(500);
    motor (0,60);
    motor (3,60);
    msleep(100);
           printf("arm down");
    set_servo_position (3,1780);
    msleep(500);
    motor (0,30);
    motor (3,40);
    msleep(700);
    set_servo_position (2,1092);
    msleep(500);
     return 0;                                                                                                                                                                                  
}                                                                               
