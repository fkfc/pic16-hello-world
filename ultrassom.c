#include "ultrassom.h"
#include "mcc_generated_files/mcc.h"


float ultrassom_get() {
    unsigned int i;
    float d;

    //TMR1H = 0;                        //Sets the Initial Value of Timer 
    //TMR1L = 0;                        //Sets the Initial Value of Timer 
    

    IO_US_TRIGGER_LAT = 0;  
    __delay_us(2);                   
    IO_US_TRIGGER_LAT = 1;            //TRIGGER HIGH
    __delay_us(10);                   //10uS Delay
    IO_US_TRIGGER_LAT = 0;            //TRIGGER LOW 
    
   i = 0x00FF;
   while( !IO_US_ECHO_PORT && i-- );
   TMR1_WriteTimer(0);
   TMR1_StartTimer();
   
   i = 0x00FF;
   while( IO_US_ECHO_PORT && i-- );
   TMR1_StopTimer();
   
   d = (8.9 * TMR1_ReadTimer() / 14);
   if (d > 1000) d = 0;
   
   return d;
   
        
}
