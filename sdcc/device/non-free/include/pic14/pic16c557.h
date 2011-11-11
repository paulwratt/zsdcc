//
// Register Declarations for Microchip 16C557 Processor
//
//
// This header file was automatically generated by:
//
//	inc2h.pl V4850
//
//	Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
//
//	SDCC is licensed under the GNU Public license (GPL) v2.  Note that
//	this license covers the code to the compiler and other executables,
//	but explicitly does not cover any code or objects generated by sdcc.
//	We have not yet decided on a license for the run time libraries, but
//	it will not put any requirements on code linked against it. See:
// 
//	http://www.gnu.org/copyleft/gpl/html
//
//	See http://sdcc.sourceforge.net/ for the latest information on sdcc.
//
// 
#ifndef P16C557_H
#define P16C557_H

//
// Register addresses.
//
#define INDF_ADDR	0x0000
#define TMR0_ADDR	0x0001
#define PCL_ADDR	0x0002
#define STATUS_ADDR	0x0003
#define FSR_ADDR	0x0004
#define PORTA_ADDR	0x0005
#define PORTB_ADDR	0x0006
#define PORTC_ADDR	0x0007
#define PCLATH_ADDR	0x000A
#define INTCON_ADDR	0x000B
#define OPTION_REG_ADDR	0x0081
#define TRISA_ADDR	0x0085
#define TRISB_ADDR	0x0086
#define TRISC_ADDR	0x0087
#define PCON_ADDR	0x008E

//
// Memory organization.
//



//         LIST
// P16C557.INC  Standard Header File, Version 1.00    Microchip Technology, Inc.
//         NOLIST

// This header file defines configurations, registers, and other useful bits of
// information for the PIC16C557 microcontroller.  These names are taken to match 
// the data sheets as closely as possible.  

// Note that the processor must be selected before this file is 
// included.  The processor may be selected the following ways:

//       1. Command line switch:
//               C:\ MPASM MYFILE.ASM /p=16C557
//       2. LIST directive in the source file
//               LIST   P=16C557
//       3. Processor Type entry in the MPASM full-screen interface

//==========================================================================
//
//       Revision History
//
//==========================================================================

//Rev:   Date:    Reason:

//1.00   08/29/01 Initial Release

//==========================================================================
//
//       Verify Processor
//
//==========================================================================

//        IFNDEF __16C557
//            MESSG "Processor-header file mismatch.  Verify selected processor."
//         ENDIF

//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#define W                    0x0000
#define F                    0x0001

//----- Register Files------------------------------------------------------

extern __sfr  __at (INDF_ADDR)                    INDF;
extern __sfr  __at (TMR0_ADDR)                    TMR0;
extern __sfr  __at (PCL_ADDR)                     PCL;
extern __sfr  __at (STATUS_ADDR)                  STATUS;
extern __sfr  __at (FSR_ADDR)                     FSR;
extern __sfr  __at (PORTA_ADDR)                   PORTA;
extern __sfr  __at (PORTB_ADDR)                   PORTB;
extern __sfr  __at (PORTC_ADDR)                   PORTC;
extern __sfr  __at (PCLATH_ADDR)                  PCLATH;
extern __sfr  __at (INTCON_ADDR)                  INTCON;

extern __sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
extern __sfr  __at (TRISA_ADDR)                   TRISA;
extern __sfr  __at (TRISB_ADDR)                   TRISB;
extern __sfr  __at (TRISC_ADDR)                   TRISC;
extern __sfr  __at (PCON_ADDR)                    PCON;

//----- STATUS Bits --------------------------------------------------------


//----- INTCON Bits --------------------------------------------------------


//----- OPTION Bits --------------------------------------------------------


//----- PCON Bits ----------------------------------------------------------


//==========================================================================
//
//       RAM Definition
//
//==========================================================================

//         __MAXRAM H'FF'
//         __BADRAM H'08'-H'09', H'0C'-H'1F'
//         __BADRAM H'88'-H'89', H'8C'-H'8D', H'8F'-H'9F', H'C0'-H'EF'

//==========================================================================
//
//       Configuration Bits
//
//==========================================================================

#define _CP_ALL              0x00CF
#define _CP_75               0x15DF
#define _CP_50               0x2AEF
#define _CP_OFF              0x3FFF
#define _PWRTE_OFF           0x3FFF
#define _PWRTE_ON            0x3FF7
#define _WDT_ON              0x3FFF
#define _WDT_OFF             0x3FFB
#define _LP_OSC              0x3FFC
#define _XT_OSC              0x3FFD
#define _HS_OSC              0x3FFE
#define _RC_OSC              0x3FFF

//         LIST

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char RBIF:1;
    unsigned char INTF:1;
    unsigned char T0IF:1;
    unsigned char RBIE:1;
    unsigned char INTE:1;
    unsigned char T0IE:1;
    unsigned char :1;
    unsigned char GIE:1;
  };
} __INTCONbits_t;
extern volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;

// ----- OPTION_REG bits --------------------
typedef union {
  struct {
    unsigned char PS0:1;
    unsigned char PS1:1;
    unsigned char PS2:1;
    unsigned char PSA:1;
    unsigned char T0SE:1;
    unsigned char T0CS:1;
    unsigned char INTEDG:1;
    unsigned char NOT_RBPU:1;
  };
} __OPTION_REGbits_t;
extern volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;

// ----- PCON bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char NOT_POR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PCONbits_t;
extern volatile __PCONbits_t __at(PCON_ADDR) PCONbits;

// ----- PORTA bits --------------------
typedef union {
  struct {
    unsigned char RA0:1;
    unsigned char RA1:1;
    unsigned char RA2:1;
    unsigned char RA3:1;
    unsigned char RA4:1;
    unsigned char RA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __PORTAbits_t;
extern volatile __PORTAbits_t __at(PORTA_ADDR) PORTAbits;

// ----- PORTB bits --------------------
typedef union {
  struct {
    unsigned char RB0:1;
    unsigned char RB1:1;
    unsigned char RB2:1;
    unsigned char RB3:1;
    unsigned char RB4:1;
    unsigned char RB5:1;
    unsigned char RB6:1;
    unsigned char RB7:1;
  };
} __PORTBbits_t;
extern volatile __PORTBbits_t __at(PORTB_ADDR) PORTBbits;

// ----- PORTC bits --------------------
typedef union {
  struct {
    unsigned char RC0:1;
    unsigned char RC1:1;
    unsigned char RC2:1;
    unsigned char RC3:1;
    unsigned char RC4:1;
    unsigned char RC5:1;
    unsigned char RC6:1;
    unsigned char RC7:1;
  };
} __PORTCbits_t;
extern volatile __PORTCbits_t __at(PORTC_ADDR) PORTCbits;

// ----- STATUS bits --------------------
typedef union {
  struct {
    unsigned char C:1;
    unsigned char DC:1;
    unsigned char Z:1;
    unsigned char NOT_PD:1;
    unsigned char NOT_TO:1;
    unsigned char RP0:1;
    unsigned char RP1:1;
    unsigned char IRP:1;
  };
} __STATUSbits_t;
extern volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;

// ----- TRISA bits --------------------
typedef union {
  struct {
    unsigned char TRISA0:1;
    unsigned char TRISA1:1;
    unsigned char TRISA2:1;
    unsigned char TRISA3:1;
    unsigned char TRISA4:1;
    unsigned char TRISA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __TRISAbits_t;
extern volatile __TRISAbits_t __at(TRISA_ADDR) TRISAbits;

// ----- TRISB bits --------------------
typedef union {
  struct {
    unsigned char TRISB0:1;
    unsigned char TRISB1:1;
    unsigned char TRISB2:1;
    unsigned char TRISB3:1;
    unsigned char TRISB4:1;
    unsigned char TRISB5:1;
    unsigned char TRISB6:1;
    unsigned char TRISB7:1;
  };
} __TRISBbits_t;
extern volatile __TRISBbits_t __at(TRISB_ADDR) TRISBbits;

// ----- TRISC bits --------------------
typedef union {
  struct {
    unsigned char TRISC0:1;
    unsigned char TRISC1:1;
    unsigned char TRISC2:1;
    unsigned char TRISC3:1;
    unsigned char TRISC4:1;
    unsigned char TRISC5:1;
    unsigned char TRISC6:1;
    unsigned char TRISC7:1;
  };
} __TRISCbits_t;
extern volatile __TRISCbits_t __at(TRISC_ADDR) TRISCbits;


#ifndef NO_BIT_DEFINES

#define RBIF                 INTCONbits.RBIF                /* bit 0 */
#define INTF                 INTCONbits.INTF                /* bit 1 */
#define T0IF                 INTCONbits.T0IF                /* bit 2 */
#define RBIE                 INTCONbits.RBIE                /* bit 3 */
#define INTE                 INTCONbits.INTE                /* bit 4 */
#define T0IE                 INTCONbits.T0IE                /* bit 5 */
#define GIE                  INTCONbits.GIE                 /* bit 7 */

#define PS0                  OPTION_REGbits.PS0             /* bit 0 */
#define PS1                  OPTION_REGbits.PS1             /* bit 1 */
#define PS2                  OPTION_REGbits.PS2             /* bit 2 */
#define PSA                  OPTION_REGbits.PSA             /* bit 3 */
#define T0SE                 OPTION_REGbits.T0SE            /* bit 4 */
#define T0CS                 OPTION_REGbits.T0CS            /* bit 5 */
#define INTEDG               OPTION_REGbits.INTEDG          /* bit 6 */
#define NOT_RBPU             OPTION_REGbits.NOT_RBPU        /* bit 7 */

#define NOT_POR              PCONbits.NOT_POR               /* bit 1 */

#define RA0                  PORTAbits.RA0                  /* bit 0 */
#define RA1                  PORTAbits.RA1                  /* bit 1 */
#define RA2                  PORTAbits.RA2                  /* bit 2 */
#define RA3                  PORTAbits.RA3                  /* bit 3 */
#define RA4                  PORTAbits.RA4                  /* bit 4 */
#define RA5                  PORTAbits.RA5                  /* bit 5 */

#define RB0                  PORTBbits.RB0                  /* bit 0 */
#define RB1                  PORTBbits.RB1                  /* bit 1 */
#define RB2                  PORTBbits.RB2                  /* bit 2 */
#define RB3                  PORTBbits.RB3                  /* bit 3 */
#define RB4                  PORTBbits.RB4                  /* bit 4 */
#define RB5                  PORTBbits.RB5                  /* bit 5 */
#define RB6                  PORTBbits.RB6                  /* bit 6 */
#define RB7                  PORTBbits.RB7                  /* bit 7 */

#define RC0                  PORTCbits.RC0                  /* bit 0 */
#define RC1                  PORTCbits.RC1                  /* bit 1 */
#define RC2                  PORTCbits.RC2                  /* bit 2 */
#define RC3                  PORTCbits.RC3                  /* bit 3 */
#define RC4                  PORTCbits.RC4                  /* bit 4 */
#define RC5                  PORTCbits.RC5                  /* bit 5 */
#define RC6                  PORTCbits.RC6                  /* bit 6 */
#define RC7                  PORTCbits.RC7                  /* bit 7 */

#define C                    STATUSbits.C                   /* bit 0 */
#define DC                   STATUSbits.DC                  /* bit 1 */
#define Z                    STATUSbits.Z                   /* bit 2 */
#define NOT_PD               STATUSbits.NOT_PD              /* bit 3 */
#define NOT_TO               STATUSbits.NOT_TO              /* bit 4 */
#define RP0                  STATUSbits.RP0                 /* bit 5 */
#define RP1                  STATUSbits.RP1                 /* bit 6 */
#define IRP                  STATUSbits.IRP                 /* bit 7 */

#define TRISA0               TRISAbits.TRISA0               /* bit 0 */
#define TRISA1               TRISAbits.TRISA1               /* bit 1 */
#define TRISA2               TRISAbits.TRISA2               /* bit 2 */
#define TRISA3               TRISAbits.TRISA3               /* bit 3 */
#define TRISA4               TRISAbits.TRISA4               /* bit 4 */
#define TRISA5               TRISAbits.TRISA5               /* bit 5 */

#define TRISB0               TRISBbits.TRISB0               /* bit 0 */
#define TRISB1               TRISBbits.TRISB1               /* bit 1 */
#define TRISB2               TRISBbits.TRISB2               /* bit 2 */
#define TRISB3               TRISBbits.TRISB3               /* bit 3 */
#define TRISB4               TRISBbits.TRISB4               /* bit 4 */
#define TRISB5               TRISBbits.TRISB5               /* bit 5 */
#define TRISB6               TRISBbits.TRISB6               /* bit 6 */
#define TRISB7               TRISBbits.TRISB7               /* bit 7 */

#define TRISC0               TRISCbits.TRISC0               /* bit 0 */
#define TRISC1               TRISCbits.TRISC1               /* bit 1 */
#define TRISC2               TRISCbits.TRISC2               /* bit 2 */
#define TRISC3               TRISCbits.TRISC3               /* bit 3 */
#define TRISC4               TRISCbits.TRISC4               /* bit 4 */
#define TRISC5               TRISCbits.TRISC5               /* bit 5 */
#define TRISC6               TRISCbits.TRISC6               /* bit 6 */
#define TRISC7               TRISCbits.TRISC7               /* bit 7 */
#endif /* NO_BIT_DEFINES */

#ifndef NO_LEGACY_NAMES
#define INTCON_bits          INTCONbits
#define OPTION_REG_bits      OPTION_REGbits
#define PCON_bits            PCONbits
#define PORTA_bits           PORTAbits
#define PORTB_bits           PORTBbits
#define PORTC_bits           PORTCbits
#define STATUS_bits          STATUSbits
#define TRISA_bits           TRISAbits
#define TRISB_bits           TRISBbits
#define TRISC_bits           TRISCbits
#endif /* NO_LEGACY_NAMES */

#endif
