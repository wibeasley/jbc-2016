#include <kipr/botball.h>

int main()
{
    printf("go strait\n");
    motor(0,60);
    motor(3,60);
    msleep(1500);
    
    printf("turn right\n");
    motor(0,00);
    motor(3,50);
    msleep(1500);
    
    printf("go strait\n");
    motor(0,60);
    motor(3,60);
    msleep(3000);
  
    printf("turn right\n");
    motor(0,50);
    motor(3,-50);
    msleep(1500);
 
    printf("go strait\n");
    motor(0,60);
    motor(3,60);
    msleep(3100);
    
     printf("turn right\n");
    motor(0,-50);
    motor(3,50);
    msleep(500);
 
    printf("go strait\n");
    motor(0,60);
    motor(3,60);
    msleep(1000);
   
      printf("turn right\n");
    motor(0,-50);
    motor(3,50);
    msleep(900);
  
     printf("go strait\n");
    motor(0,60);
    motor(3,60);
    msleep(2500);
  
      printf("turn right\n");
    motor(0,50);
    motor(3,-50);
    msleep(900);
   
      printf("go strait\n");
    motor(0,60);
    motor(3,60);
    msleep(100);
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
