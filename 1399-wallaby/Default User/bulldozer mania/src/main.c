#include <kipr/botball.h>

int main()
{
   
  motor(3,50);
  motor(0,50);//go forword 
  msleep(8000);  
  
 
    
  motor(0,5);
 motor(3,50); //turn right 
 msleep(4000);   
    
 motor(3,60);
 motor(0,50);//go forword
 msleep(11000);
  ao(); 
    
    
    
    
    
    
    
     printf("Hello World\n"); 
    
 return 0;
}