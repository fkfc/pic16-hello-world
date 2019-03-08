/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC16F15376
        Version           :  1.01
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


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS               TRISAbits.TRISA0
#define IO_RA0_LAT                LATAbits.LATA0
#define IO_RA0_PORT               PORTAbits.RA0
#define IO_RA0_WPU                WPUAbits.WPUA0
#define IO_RA0_OD                ODCONAbits.ODCA0
#define IO_RA0_ANS                ANSELAbits.ANSA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetPushPull()    do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_RA0_SetOpenDrain()   do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_RA0_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_US_TRIGGER aliases
#define IO_US_TRIGGER_TRIS               TRISAbits.TRISA1
#define IO_US_TRIGGER_LAT                LATAbits.LATA1
#define IO_US_TRIGGER_PORT               PORTAbits.RA1
#define IO_US_TRIGGER_WPU                WPUAbits.WPUA1
#define IO_US_TRIGGER_OD                ODCONAbits.ODCA1
#define IO_US_TRIGGER_ANS                ANSELAbits.ANSA1
#define IO_US_TRIGGER_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_US_TRIGGER_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_US_TRIGGER_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_US_TRIGGER_GetValue()           PORTAbits.RA1
#define IO_US_TRIGGER_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_US_TRIGGER_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_US_TRIGGER_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_US_TRIGGER_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_US_TRIGGER_SetPushPull()    do { ODCONAbits.ODCA1 = 1; } while(0)
#define IO_US_TRIGGER_SetOpenDrain()   do { ODCONAbits.ODCA1 = 0; } while(0)
#define IO_US_TRIGGER_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define IO_US_TRIGGER_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set IO_US_ECHO aliases
#define IO_US_ECHO_TRIS               TRISAbits.TRISA2
#define IO_US_ECHO_LAT                LATAbits.LATA2
#define IO_US_ECHO_PORT               PORTAbits.RA2
#define IO_US_ECHO_WPU                WPUAbits.WPUA2
#define IO_US_ECHO_OD                ODCONAbits.ODCA2
#define IO_US_ECHO_ANS                ANSELAbits.ANSA2
#define IO_US_ECHO_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_US_ECHO_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_US_ECHO_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_US_ECHO_GetValue()           PORTAbits.RA2
#define IO_US_ECHO_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_US_ECHO_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_US_ECHO_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_US_ECHO_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_US_ECHO_SetPushPull()    do { ODCONAbits.ODCA2 = 1; } while(0)
#define IO_US_ECHO_SetOpenDrain()   do { ODCONAbits.ODCA2 = 0; } while(0)
#define IO_US_ECHO_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_US_ECHO_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_EXT_SWITCH aliases
#define IO_EXT_SWITCH_TRIS               TRISBbits.TRISB0
#define IO_EXT_SWITCH_LAT                LATBbits.LATB0
#define IO_EXT_SWITCH_PORT               PORTBbits.RB0
#define IO_EXT_SWITCH_WPU                WPUBbits.WPUB0
#define IO_EXT_SWITCH_OD                ODCONBbits.ODCB0
#define IO_EXT_SWITCH_ANS                ANSELBbits.ANSB0
#define IO_EXT_SWITCH_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_EXT_SWITCH_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_EXT_SWITCH_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_EXT_SWITCH_GetValue()           PORTBbits.RB0
#define IO_EXT_SWITCH_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_EXT_SWITCH_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_EXT_SWITCH_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_EXT_SWITCH_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_EXT_SWITCH_SetPushPull()    do { ODCONBbits.ODCB0 = 1; } while(0)
#define IO_EXT_SWITCH_SetOpenDrain()   do { ODCONBbits.ODCB0 = 0; } while(0)
#define IO_EXT_SWITCH_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define IO_EXT_SWITCH_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()    do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()   do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()   do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()         PORTBbits.RB6
#define RB6_SetDigitalInput()   do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()  do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()     do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()   do { WPUBbits.WPUB6 = 0; } while(0)
#define RB6_SetAnalogMode() do { ANSELBbits.ANSB6 = 1; } while(0)
#define RB6_SetDigitalMode()do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()    do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()   do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()   do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()         PORTBbits.RB7
#define RB7_SetDigitalInput()   do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()  do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()     do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()   do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode() do { ANSELBbits.ANSB7 = 1; } while(0)
#define RB7_SetDigitalMode()do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()    do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()   do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()   do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()         PORTCbits.RC6
#define RC6_SetDigitalInput()   do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()  do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()     do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()   do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode() do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IO_RD2 aliases
#define IO_RD2_TRIS               TRISDbits.TRISD2
#define IO_RD2_LAT                LATDbits.LATD2
#define IO_RD2_PORT               PORTDbits.RD2
#define IO_RD2_WPU                WPUDbits.WPUD2
#define IO_RD2_OD                ODCONDbits.ODCD2
#define IO_RD2_ANS                ANSELDbits.ANSD2
#define IO_RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_RD2_GetValue()           PORTDbits.RD2
#define IO_RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_RD2_SetPullup()      do { WPUDbits.WPUD2 = 1; } while(0)
#define IO_RD2_ResetPullup()    do { WPUDbits.WPUD2 = 0; } while(0)
#define IO_RD2_SetPushPull()    do { ODCONDbits.ODCD2 = 1; } while(0)
#define IO_RD2_SetOpenDrain()   do { ODCONDbits.ODCD2 = 0; } while(0)
#define IO_RD2_SetAnalogMode()  do { ANSELDbits.ANSD2 = 1; } while(0)
#define IO_RD2_SetDigitalMode() do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set IO_RD3 aliases
#define IO_RD3_TRIS               TRISDbits.TRISD3
#define IO_RD3_LAT                LATDbits.LATD3
#define IO_RD3_PORT               PORTDbits.RD3
#define IO_RD3_WPU                WPUDbits.WPUD3
#define IO_RD3_OD                ODCONDbits.ODCD3
#define IO_RD3_ANS                ANSELDbits.ANSD3
#define IO_RD3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define IO_RD3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define IO_RD3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define IO_RD3_GetValue()           PORTDbits.RD3
#define IO_RD3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define IO_RD3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define IO_RD3_SetPullup()      do { WPUDbits.WPUD3 = 1; } while(0)
#define IO_RD3_ResetPullup()    do { WPUDbits.WPUD3 = 0; } while(0)
#define IO_RD3_SetPushPull()    do { ODCONDbits.ODCD3 = 1; } while(0)
#define IO_RD3_SetOpenDrain()   do { ODCONDbits.ODCD3 = 0; } while(0)
#define IO_RD3_SetAnalogMode()  do { ANSELDbits.ANSD3 = 1; } while(0)
#define IO_RD3_SetDigitalMode() do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set IO_RD4 aliases
#define IO_RD4_TRIS               TRISDbits.TRISD4
#define IO_RD4_LAT                LATDbits.LATD4
#define IO_RD4_PORT               PORTDbits.RD4
#define IO_RD4_WPU                WPUDbits.WPUD4
#define IO_RD4_OD                ODCONDbits.ODCD4
#define IO_RD4_ANS                ANSELDbits.ANSD4
#define IO_RD4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define IO_RD4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define IO_RD4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define IO_RD4_GetValue()           PORTDbits.RD4
#define IO_RD4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define IO_RD4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define IO_RD4_SetPullup()      do { WPUDbits.WPUD4 = 1; } while(0)
#define IO_RD4_ResetPullup()    do { WPUDbits.WPUD4 = 0; } while(0)
#define IO_RD4_SetPushPull()    do { ODCONDbits.ODCD4 = 1; } while(0)
#define IO_RD4_SetOpenDrain()   do { ODCONDbits.ODCD4 = 0; } while(0)
#define IO_RD4_SetAnalogMode()  do { ANSELDbits.ANSD4 = 1; } while(0)
#define IO_RD4_SetDigitalMode() do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set IO_RD5 aliases
#define IO_RD5_TRIS               TRISDbits.TRISD5
#define IO_RD5_LAT                LATDbits.LATD5
#define IO_RD5_PORT               PORTDbits.RD5
#define IO_RD5_WPU                WPUDbits.WPUD5
#define IO_RD5_OD                ODCONDbits.ODCD5
#define IO_RD5_ANS                ANSELDbits.ANSD5
#define IO_RD5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IO_RD5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IO_RD5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IO_RD5_GetValue()           PORTDbits.RD5
#define IO_RD5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IO_RD5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IO_RD5_SetPullup()      do { WPUDbits.WPUD5 = 1; } while(0)
#define IO_RD5_ResetPullup()    do { WPUDbits.WPUD5 = 0; } while(0)
#define IO_RD5_SetPushPull()    do { ODCONDbits.ODCD5 = 1; } while(0)
#define IO_RD5_SetOpenDrain()   do { ODCONDbits.ODCD5 = 0; } while(0)
#define IO_RD5_SetAnalogMode()  do { ANSELDbits.ANSD5 = 1; } while(0)
#define IO_RD5_SetDigitalMode() do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set IO_RD6 aliases
#define IO_RD6_TRIS               TRISDbits.TRISD6
#define IO_RD6_LAT                LATDbits.LATD6
#define IO_RD6_PORT               PORTDbits.RD6
#define IO_RD6_WPU                WPUDbits.WPUD6
#define IO_RD6_OD                ODCONDbits.ODCD6
#define IO_RD6_ANS                ANSELDbits.ANSD6
#define IO_RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IO_RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IO_RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IO_RD6_GetValue()           PORTDbits.RD6
#define IO_RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IO_RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define IO_RD6_SetPullup()      do { WPUDbits.WPUD6 = 1; } while(0)
#define IO_RD6_ResetPullup()    do { WPUDbits.WPUD6 = 0; } while(0)
#define IO_RD6_SetPushPull()    do { ODCONDbits.ODCD6 = 1; } while(0)
#define IO_RD6_SetOpenDrain()   do { ODCONDbits.ODCD6 = 0; } while(0)
#define IO_RD6_SetAnalogMode()  do { ANSELDbits.ANSD6 = 1; } while(0)
#define IO_RD6_SetDigitalMode() do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set IO_RD7 aliases
#define IO_RD7_TRIS               TRISDbits.TRISD7
#define IO_RD7_LAT                LATDbits.LATD7
#define IO_RD7_PORT               PORTDbits.RD7
#define IO_RD7_WPU                WPUDbits.WPUD7
#define IO_RD7_OD                ODCONDbits.ODCD7
#define IO_RD7_ANS                ANSELDbits.ANSD7
#define IO_RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IO_RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IO_RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IO_RD7_GetValue()           PORTDbits.RD7
#define IO_RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IO_RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define IO_RD7_SetPullup()      do { WPUDbits.WPUD7 = 1; } while(0)
#define IO_RD7_ResetPullup()    do { WPUDbits.WPUD7 = 0; } while(0)
#define IO_RD7_SetPushPull()    do { ODCONDbits.ODCD7 = 1; } while(0)
#define IO_RD7_SetOpenDrain()   do { ODCONDbits.ODCD7 = 0; } while(0)
#define IO_RD7_SetAnalogMode()  do { ANSELDbits.ANSD7 = 1; } while(0)
#define IO_RD7_SetDigitalMode() do { ANSELDbits.ANSD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF0 pin functionality
 * @Example
    IOCBF0_ISR();
 */
void IOCBF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF0_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_InterruptHandler);

*/
extern void (*IOCBF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_DefaultInterruptHandler);

*/
void IOCBF0_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/