/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC16F15376
        Driver Version    :  1.02
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/

#include <xc.h>
#include "pin_manager.h"
#include "stdbool.h"
#include "stdio.h"
#include "../variaveis.h"

void (*IOCBF0_InterruptHandler)(void);

extern unsigned char botao;

void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */   
    LATE = 0x00;    
    LATD = 0x00;    
    LATA = 0x01;    
    LATB = 0x00;    
    LATC = 0x00;    

    /**
    TRISx registers
    */    
    TRISE = 0x0F;
    TRISA = 0xFC;
    TRISB = 0xBF;
    TRISC = 0xBF;
    TRISD = 0x03;

    /**
    ANSELx registers
    */   
    ANSELC = 0xFF;
    ANSELB = 0x7E;
    ANSELD = 0xFF;
    ANSELE = 0x07;
    ANSELA = 0xF9;

    /**
    WPUx registers
    */ 
    WPUD = 0x00;
    WPUE = 0x00;
    WPUB = 0x00;
    WPUA = 0x00;
    WPUC = 0x00;

    /**
    ODx registers
    */   
    ODCONE = 0x00;
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;
    ODCOND = 0x00;
    

    /**
    IOCx registers
    */
    // interrupt on change for group IOCBF - flag
    IOCBFbits.IOCBF0 = 0;
    // interrupt on change for group IOCBN - negative
    IOCBNbits.IOCBN0 = 1;
    // interrupt on change for group IOCBP - positive
    IOCBPbits.IOCBP0 = 1;

    // register default IOC callback functions at runtime; use these methods to register a custom function
    IOCBF0_SetInterruptHandler(IOCBF0_DefaultInterruptHandler);
   
    // Enable IOCI interrupt 
    PIE0bits.IOCIE = 1; 
    
    
    bool state = (unsigned char)GIE;
    GIE = 0;
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x00; // unlock PPS

    RX1DTPPSbits.RX1DTPPS = 0x0F;   //RB7->EUSART1:RX1;
    RC6PPS = 0x0F;   //RC6->EUSART1:TX1;
    RB6PPS = 0x0F;   //RB6->EUSART1:TX1;

    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x01; // lock PPS

    GIE = state;
}       

void PIN_MANAGER_IOC(void)
{   
    // interrupt on change for pin IOCBF0
    if(IOCBFbits.IOCBF0 == 1)
    {
        IOCBF0_ISR();  
    }                          


}

/**
   IOCBF0 Interrupt Service Routine
*/
void IOCBF0_ISR(void) {

    // Add custom IOCBF0 code

    // Call the interrupt handler for the callback registered at runtime
    if(IOCBF0_InterruptHandler)
    {
        IOCBF0_InterruptHandler();
    }
    IOCBFbits.IOCBF0 = 0;
}

/**
  Allows selecting an interrupt handler for IOCBF0 at application runtime
*/
void IOCBF0_SetInterruptHandler(void* InterruptHandler){
    IOCBF0_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCBF0
*/
void IOCBF0_DefaultInterruptHandler(void){
    // add your IOCBF0 interrupt custom code
    // or set custom function using IOCBF0_SetInterruptHandler()
    botao =  IO_EXT_SWITCH_GetValue();
    printf("RB0 = %d\r\n", botao);
}

/**
 End of File
*/