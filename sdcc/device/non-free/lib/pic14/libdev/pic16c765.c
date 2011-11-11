/* Register definitions for pic16c765.
 * This file was automatically generated by:
 *   inc2h.pl V4850
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 */
#include <pic16c765.h>

__sfr  __at (INDF_ADDR)                    INDF;
__sfr  __at (TMR0_ADDR)                    TMR0;
__sfr  __at (PCL_ADDR)                     PCL;
__sfr  __at (STATUS_ADDR)                  STATUS;
__sfr  __at (FSR_ADDR)                     FSR;
__sfr  __at (PORTA_ADDR)                   PORTA;
__sfr  __at (PORTB_ADDR)                   PORTB;
__sfr  __at (PORTC_ADDR)                   PORTC;
__sfr  __at (PORTD_ADDR)                   PORTD;
__sfr  __at (PORTE_ADDR)                   PORTE;
__sfr  __at (PCLATH_ADDR)                  PCLATH;
__sfr  __at (INTCON_ADDR)                  INTCON;
__sfr  __at (PIR1_ADDR)                    PIR1;
__sfr  __at (PIR2_ADDR)                    PIR2;
__sfr  __at (TMR1L_ADDR)                   TMR1L;
__sfr  __at (TMR1H_ADDR)                   TMR1H;
__sfr  __at (T1CON_ADDR)                   T1CON;
__sfr  __at (TMR2_ADDR)                    TMR2;
__sfr  __at (T2CON_ADDR)                   T2CON;
__sfr  __at (CCPR1L_ADDR)                  CCPR1L;
__sfr  __at (CCPR1H_ADDR)                  CCPR1H;
__sfr  __at (CCP1CON_ADDR)                 CCP1CON;
__sfr  __at (RCSTA_ADDR)                   RCSTA;
__sfr  __at (TXREG_ADDR)                   TXREG;
__sfr  __at (RCREG_ADDR)                   RCREG;
__sfr  __at (CCPR2L_ADDR)                  CCPR2L;
__sfr  __at (CCPR2H_ADDR)                  CCPR2H;
__sfr  __at (CCP2CON_ADDR)                 CCP2CON;
__sfr  __at (ADRES_ADDR)                   ADRES;
__sfr  __at (ADCON0_ADDR)                  ADCON0;
__sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
__sfr  __at (TRISA_ADDR)                   TRISA;
__sfr  __at (TRISB_ADDR)                   TRISB;
__sfr  __at (TRISC_ADDR)                   TRISC;
__sfr  __at (TRISD_ADDR)                   TRISD;
__sfr  __at (TRISE_ADDR)                   TRISE;
__sfr  __at (PIE1_ADDR)                    PIE1;
__sfr  __at (PIE2_ADDR)                    PIE2;
__sfr  __at (PCON_ADDR)                    PCON;
__sfr  __at (PR2_ADDR)                     PR2;
__sfr  __at (TXSTA_ADDR)                   TXSTA;
__sfr  __at (SPBRG_ADDR)                   SPBRG;
__sfr  __at (ADCON1_ADDR)                  ADCON1;
__sfr  __at (UIR_ADDR)                     UIR;
__sfr  __at (UIE_ADDR)                     UIE;
__sfr  __at (UEIR_ADDR)                    UEIR;
__sfr  __at (UEIE_ADDR)                    UEIE;
__sfr  __at (USTAT_ADDR)                   USTAT;
__sfr  __at (UCTRL_ADDR)                   UCTRL;
__sfr  __at (UADDR_ADDR)                   UADDR;
__sfr  __at (USWSTAT_ADDR)                 USWSTAT;
__sfr  __at (UEP0_ADDR)                    UEP0;
__sfr  __at (UEP1_ADDR)                    UEP1;
__sfr  __at (UEP2_ADDR)                    UEP2;
__sfr  __at (BD0OST_ADDR)                  BD0OST;
__sfr  __at (BD0OBC_ADDR)                  BD0OBC;
__sfr  __at (BD0OAL_ADDR)                  BD0OAL;
__sfr  __at (BD0IST_ADDR)                  BD0IST;
__sfr  __at (BD0IBC_ADDR)                  BD0IBC;
__sfr  __at (BD0IAL_ADDR)                  BD0IAL;
__sfr  __at (BD1OST_ADDR)                  BD1OST;
__sfr  __at (BD1OBC_ADDR)                  BD1OBC;
__sfr  __at (BD1OAL_ADDR)                  BD1OAL;
__sfr  __at (BD1IST_ADDR)                  BD1IST;
__sfr  __at (BD1IBC_ADDR)                  BD1IBC;
__sfr  __at (BD1IAL_ADDR)                  BD1IAL;
__sfr  __at (BD2OST_ADDR)                  BD2OST;
__sfr  __at (BD2OBC_ADDR)                  BD2OBC;
__sfr  __at (BD2OAL_ADDR)                  BD2OAL;
__sfr  __at (BD2IST_ADDR)                  BD2IST;
__sfr  __at (BD2IBC_ADDR)                  BD2IBC;
__sfr  __at (BD2IAL_ADDR)                  BD2IAL;

// 
// bitfield definitions
// 
volatile __ADCON0bits_t __at(ADCON0_ADDR) ADCON0bits;
volatile __ADCON1bits_t __at(ADCON1_ADDR) ADCON1bits;
volatile __CCP1CONbits_t __at(CCP1CON_ADDR) CCP1CONbits;
volatile __CCP2CONbits_t __at(CCP2CON_ADDR) CCP2CONbits;
volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;
volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;
volatile __PCONbits_t __at(PCON_ADDR) PCONbits;
volatile __PIE1bits_t __at(PIE1_ADDR) PIE1bits;
volatile __PIE2bits_t __at(PIE2_ADDR) PIE2bits;
volatile __PIR1bits_t __at(PIR1_ADDR) PIR1bits;
volatile __PIR2bits_t __at(PIR2_ADDR) PIR2bits;
volatile __PORTAbits_t __at(PORTA_ADDR) PORTAbits;
volatile __PORTBbits_t __at(PORTB_ADDR) PORTBbits;
volatile __PORTCbits_t __at(PORTC_ADDR) PORTCbits;
volatile __PORTDbits_t __at(PORTD_ADDR) PORTDbits;
volatile __PORTEbits_t __at(PORTE_ADDR) PORTEbits;
volatile __RCSTAbits_t __at(RCSTA_ADDR) RCSTAbits;
volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;
volatile __T1CONbits_t __at(T1CON_ADDR) T1CONbits;
volatile __T2CONbits_t __at(T2CON_ADDR) T2CONbits;
volatile __TRISAbits_t __at(TRISA_ADDR) TRISAbits;
volatile __TRISBbits_t __at(TRISB_ADDR) TRISBbits;
volatile __TRISCbits_t __at(TRISC_ADDR) TRISCbits;
volatile __TRISDbits_t __at(TRISD_ADDR) TRISDbits;
volatile __TRISEbits_t __at(TRISE_ADDR) TRISEbits;
volatile __TXSTAbits_t __at(TXSTA_ADDR) TXSTAbits;
volatile __UCTRLbits_t __at(UCTRL_ADDR) UCTRLbits;
volatile __UEIEbits_t __at(UEIE_ADDR) UEIEbits;
volatile __UEP0bits_t __at(UEP0_ADDR) UEP0bits;
volatile __UIEbits_t __at(UIE_ADDR) UIEbits;
volatile __USTATbits_t __at(USTAT_ADDR) USTATbits;

