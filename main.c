/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs 

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs  - 1.45
        Device            :  PIC16F15376
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"

#define RS IO_RD2_LAT
#define EN IO_RD3_LAT
#define D4 IO_RD4_LAT
#define D5 IO_RD5_LAT
#define D6 IO_RD6_LAT
#define D7 IO_RD7_LAT

#include "lcd.h";
#include "stdio.h"
#include "pisca.h"
#include "ultrassom.h"
#include "variaveis.h"

void delay_ms(unsigned int milliseconds) {
   while(milliseconds > 0) {
       __delay_ms(1);
      milliseconds--;
    }
 }


/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    Lcd_Init();
    
    pisca_delay(50);

    
    extern char texto[20];
    extern char texto2[20];
    extern unsigned char led;
    extern unsigned char botao;
    
    int count = 0;
    
    led = 0;
    botao = 0;
    
    
    float medida = 0;
    unsigned int delay = pisca_delay(-1);
    
    while (1)
    {
        // Add your application code
        delay = pisca_delay(-1);
        delay_ms(delay);
        led = led? 0 : 1;
        IO_RA0_LAT = led;
   
        medida = ultrassom_get();
        
        sprintf(texto, "");
        if (medida > 0 && medida <= 32) {
            count = 16 - medida/2;
            texto[count] = 0;
            for (count = count-1; count >= 0; count--) {
                texto[count] = '-';
            }
        }
        
        //sprintf(texto, "%u %d %d", delay, count, ultrassom_medida(-1));
        sprintf(texto2, "T=%ums d=%ucm", delay, (unsigned int) medida);
        
        Lcd_Clear();
        Lcd_Set_Cursor(1,1);
        Lcd_Write_String(texto);
        Lcd_Set_Cursor(2,1);
        Lcd_Write_String(texto2);
        
        if (botao) {
            Lcd_Set_Cursor(2,16);
            Lcd_Write_Char('X');
        }
        
        
        //if (led) { 
            //printf("Count = %d \r\n", count);
            //count++;
            
            //começa a medir distancia
            //printf("t = %u \r\n", TMR1_ReadTimer());
            
        //}
        
        //if (count > 1000) count = 0;
    }
}
/**
 End of File
*/