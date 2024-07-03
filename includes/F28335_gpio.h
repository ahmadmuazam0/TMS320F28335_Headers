/*
    This file contains all the Register defination for TMS320F28335
    Created : 03 July, 2024
    Author: Muazam
*/

#ifndef __F28335_GPIO_H__
#define __F28335_GPIO_H__

#define  EALLOW asm(" EALLOW")
#define  EDIS   asm(" EDIS")

// Registers For GPIO port A

#define GPACTRL     (*((volatile UInt16 *)0x6F80))  // GPIO Port control
#define GPAQSEL1    (*((volatile UInt16 *)0x6F82))  //GPA Qualifier Select (GPIO0-GPIO15). It works like how many samples required to register an Input
#define GPAQSEL2    (*((volatile UInt16 *)0x6F84))  //GPA Qualifier Select (GPIO16-GPIO31). It works like how many samples required to register an Input
#define GPAMUX1     (*((volatile UInt16 *)0x6F86))  // GPA MUX 1 register for (GPIO0-GPIO15)
#define GPAMUX2     (*((volatile UInt16 *)0x6F88))  // GPA MUX 2 register for (GPIO16-GPIO31)
#define GPADIR      (*((volatile UInt16 *)0x6F8A))  // GPA Direction Input/Output
#define GPAPUD      (*((volatile UInt16 *)0x6F8C))  // GPA Internal Pull-Up 0-enable/1-Disable
#define GPADAT      (*((volatile UInt16 *)0x6FC0))  // GPIO Data Register
#define GPASET      (*((volatile UInt16 *)0x6FC2))  // GPIO SET pin state
#define GPACLEAR    (*((volatile UInt16 *)0x6FC4))  // GPIO Clear pin state
#define GPACTOGGLE  (*((volatile UInt16 *)0x6FC6))  // GPIO Toggle the pin state

// Registers For GPIO port B
#define GPBCTRL     (*((volatile UInt16 *)0x6F90))  // GPIO Port control
#define GPBQSEL1    (*((volatile UInt16 *)0x6F92))  //GPA Qualifier Select (GPIO32-GPIO47). It works like how many samples required to register an Input
#define GPBQSEL2    (*((volatile UInt16 *)0x6F94))  //GPA Qualifier Select (GPIO48-GPIO63). It works like how many samples required to register an Input
#define GPBMUX1     (*((volatile UInt16 *)0x6F96))  // GPA MUX 1 register for (GPIO32-GPIO47)
#define GPBMUX2     (*((volatile UInt16 *)0x6F98))  // GPA MUX 1 register for (GPIO48-GPIO63)
#define GPBDIR      (*((volatile UInt16 *)0x6F9A))  // GPA Direction Input/Output
#define GPBPUD      (*((volatile UInt16 *)0x6F9C))  // GPA Internal Pull-Up 0-enable/1-Disable
#define GPBDAT      (*((volatile UInt16 *)0x6FC8))  // GPIO Data Register
#define GPBSET      (*((volatile UInt16 *)0x6FCA))  // GPIO SET pin state
#define GPBCLEAR    (*((volatile UInt16 *)0x6FCC))  // GPIO Clear pin state
#define GPBCTOGGLE  (*((volatile UInt16 *)0x6FCE))  // GPIO Toggle the pin state

// Registers For GPIO port C
#define GPCMUX1     (*((volatile UInt16 *)0x6FA6))  // GPC MUX 1 register for (GPIO64-GPIO79)
#define GPCMUX2     (*((volatile UInt16 *)0x6F96))  // GPC MUX 2 register for (GPIO80-GPIO87)
#define GPCDIR      (*((volatile UInt16 *)0x6FA))   // GPC Direction Input/Output
#define GPCPUD      (*((volatile UInt16 *)0x6F8C))  // GPC Internal Pull-Up 0-enable/1-Disable
#define GPCDAT      (*((volatile UInt16 *)0x6FD0))  // GPIO Data Register
#define GPCSET      (*((volatile UInt16 *)0x6FD2))  // GPIO SET pin state
#define GPCCLEAR    (*((volatile UInt16 *)0x6FD4))  // GPIO Clear pin state
#define GPCCTOGGLE  (*((volatile UInt16 *)0x6FD6))  // GPIO Toggle the pin state

//GPIO Interrupt and Low Power Mode Select Registers

#define GPIOXINT1SEL    (*((volatile UInt16 *)0x6FE0))  //XINT1 Source Select Register (GPIO0-GPIO31)
#define GPIOXINT2SEL    (*((volatile UInt16 *)0x6FE1))  //XINT2 Source Select Register (GPIO0-GPIO31)
#define GPIOXNMISEL     (*((volatile UInt15 *)0x6FE2))  //XNMI Source Select Register (GPIO0-GPIO31)
#define GPIOXINT3SEL    (*((volatile UInt16 *)0x6FE3))  //XINT3 Source Select Register (GPIO32-GPIO63)
#define GPIOXINT4SEL    (*((volatile UInt16 *)0x6FE4))  //XINT4 Source Select Register (GPIO32-GPIO63)
#define GPIOXINT5SEL    (*((volatile UInt16 *)0x6FE5))  //XINT5 Source Select Register (GPIO32-GPIO63)
#define GPIOXINT6SEL    (*((volatile UInt16 *)0x6FE6))  //XINT6 Source Select Register (GPIO32-GPIO63)
#define GPIOXINT7SEL    (*((volatile UInt16 *)0x6FE7))  //XINT7 Source Select Register (GPIO32-GPIO63)
#define GPIOLPMSEL      (*((volatile UInt16 *)0x6FE8))  //LPM wakeup Source Select Register (GPIO0-GPIO31)

#endif