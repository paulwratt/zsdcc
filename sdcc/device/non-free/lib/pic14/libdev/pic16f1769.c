/*
 * This definitions of the PIC16F1769 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2016.
 *
 * This file is generated automatically by the cinc2h.pl, 2016-01-09 15:09:04 UTC.
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * but explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#include <pic16f1769.h>

//==============================================================================

__at(0x0000) __sfr INDF0;

__at(0x0001) __sfr INDF1;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR0;

__at(0x0004) __sfr FSR0L;

__at(0x0005) __sfr FSR0H;

__at(0x0006) __sfr FSR1;

__at(0x0006) __sfr FSR1L;

__at(0x0007) __sfr FSR1H;

__at(0x0008) __sfr BSR;
__at(0x0008) volatile __BSRbits_t BSRbits;

__at(0x0009) __sfr WREG;

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PORTA;
__at(0x000C) volatile __PORTAbits_t PORTAbits;

__at(0x000D) __sfr PORTB;
__at(0x000D) volatile __PORTBbits_t PORTBbits;

__at(0x000E) __sfr PORTC;
__at(0x000E) volatile __PORTCbits_t PORTCbits;

__at(0x0011) __sfr PIR1;
__at(0x0011) volatile __PIR1bits_t PIR1bits;

__at(0x0012) __sfr PIR2;
__at(0x0012) volatile __PIR2bits_t PIR2bits;

__at(0x0013) __sfr PIR3;
__at(0x0013) volatile __PIR3bits_t PIR3bits;

__at(0x0014) __sfr PIR4;
__at(0x0014) volatile __PIR4bits_t PIR4bits;

__at(0x0015) __sfr TMR0;

__at(0x0016) __sfr TMR1;

__at(0x0016) __sfr TMR1L;

__at(0x0017) __sfr TMR1H;

__at(0x0018) __sfr T1CON;
__at(0x0018) volatile __T1CONbits_t T1CONbits;

__at(0x0019) __sfr T1GCON;
__at(0x0019) volatile __T1GCONbits_t T1GCONbits;

__at(0x001A) __sfr T2TMR;

__at(0x001A) __sfr TMR2;

__at(0x001B) __sfr PR2;

__at(0x001B) __sfr T2PR;

__at(0x001C) __sfr T2CON;
__at(0x001C) volatile __T2CONbits_t T2CONbits;

__at(0x001D) __sfr T2HLT;
__at(0x001D) volatile __T2HLTbits_t T2HLTbits;

__at(0x001E) __sfr T2CLKCON;
__at(0x001E) volatile __T2CLKCONbits_t T2CLKCONbits;

__at(0x001F) __sfr T2RST;
__at(0x001F) volatile __T2RSTbits_t T2RSTbits;

__at(0x008C) __sfr TRISA;
__at(0x008C) volatile __TRISAbits_t TRISAbits;

__at(0x008D) __sfr TRISB;
__at(0x008D) volatile __TRISBbits_t TRISBbits;

__at(0x008E) __sfr TRISC;
__at(0x008E) volatile __TRISCbits_t TRISCbits;

__at(0x0091) __sfr PIE1;
__at(0x0091) volatile __PIE1bits_t PIE1bits;

__at(0x0092) __sfr PIE2;
__at(0x0092) volatile __PIE2bits_t PIE2bits;

__at(0x0093) __sfr PIE3;
__at(0x0093) volatile __PIE3bits_t PIE3bits;

__at(0x0094) __sfr PIE4;
__at(0x0094) volatile __PIE4bits_t PIE4bits;

__at(0x0095) __sfr OPTION_REG;
__at(0x0095) volatile __OPTION_REGbits_t OPTION_REGbits;

__at(0x0096) __sfr PCON;
__at(0x0096) volatile __PCONbits_t PCONbits;

__at(0x0097) __sfr WDTCON;
__at(0x0097) volatile __WDTCONbits_t WDTCONbits;

__at(0x0098) __sfr OSCTUNE;
__at(0x0098) volatile __OSCTUNEbits_t OSCTUNEbits;

__at(0x0099) __sfr OSCCON;
__at(0x0099) volatile __OSCCONbits_t OSCCONbits;

__at(0x009A) __sfr OSCSTAT;
__at(0x009A) volatile __OSCSTATbits_t OSCSTATbits;

__at(0x009B) __sfr ADRES;

__at(0x009B) __sfr ADRESL;

__at(0x009C) __sfr ADRESH;

__at(0x009D) __sfr ADCON0;
__at(0x009D) volatile __ADCON0bits_t ADCON0bits;

__at(0x009E) __sfr ADCON1;
__at(0x009E) volatile __ADCON1bits_t ADCON1bits;

__at(0x009F) __sfr ADCON2;
__at(0x009F) volatile __ADCON2bits_t ADCON2bits;

__at(0x010C) __sfr LATA;
__at(0x010C) volatile __LATAbits_t LATAbits;

__at(0x010D) __sfr LATB;
__at(0x010D) volatile __LATBbits_t LATBbits;

__at(0x010E) __sfr LATC;
__at(0x010E) volatile __LATCbits_t LATCbits;

__at(0x010F) __sfr CMOUT;
__at(0x010F) volatile __CMOUTbits_t CMOUTbits;

__at(0x0110) __sfr CM1CON0;
__at(0x0110) volatile __CM1CON0bits_t CM1CON0bits;

__at(0x0111) __sfr CM1CON1;
__at(0x0111) volatile __CM1CON1bits_t CM1CON1bits;

__at(0x0112) __sfr CM1NSEL;
__at(0x0112) volatile __CM1NSELbits_t CM1NSELbits;

__at(0x0113) __sfr CM1PSEL;
__at(0x0113) volatile __CM1PSELbits_t CM1PSELbits;

__at(0x0114) __sfr CM2CON0;
__at(0x0114) volatile __CM2CON0bits_t CM2CON0bits;

__at(0x0115) __sfr CM2CON1;
__at(0x0115) volatile __CM2CON1bits_t CM2CON1bits;

__at(0x0116) __sfr CM2NSEL;
__at(0x0116) volatile __CM2NSELbits_t CM2NSELbits;

__at(0x0117) __sfr CM2PSEL;
__at(0x0117) volatile __CM2PSELbits_t CM2PSELbits;

__at(0x0118) __sfr CM3CON0;
__at(0x0118) volatile __CM3CON0bits_t CM3CON0bits;

__at(0x0119) __sfr CM3CON1;
__at(0x0119) volatile __CM3CON1bits_t CM3CON1bits;

__at(0x011A) __sfr CM3NSEL;
__at(0x011A) volatile __CM3NSELbits_t CM3NSELbits;

__at(0x011B) __sfr CM3PSEL;
__at(0x011B) volatile __CM3PSELbits_t CM3PSELbits;

__at(0x011C) __sfr CM4CON0;
__at(0x011C) volatile __CM4CON0bits_t CM4CON0bits;

__at(0x011D) __sfr CM4CON1;
__at(0x011D) volatile __CM4CON1bits_t CM4CON1bits;

__at(0x011E) __sfr CM4NSEL;
__at(0x011E) volatile __CM4NSELbits_t CM4NSELbits;

__at(0x011F) __sfr CM4PSEL;
__at(0x011F) volatile __CM4PSELbits_t CM4PSELbits;

__at(0x018C) __sfr ANSELA;
__at(0x018C) volatile __ANSELAbits_t ANSELAbits;

__at(0x018D) __sfr ANSELB;
__at(0x018D) volatile __ANSELBbits_t ANSELBbits;

__at(0x018E) __sfr ANSELC;
__at(0x018E) volatile __ANSELCbits_t ANSELCbits;

__at(0x0191) __sfr PMADR;

__at(0x0191) __sfr PMADRL;

__at(0x0192) __sfr PMADRH;

__at(0x0193) __sfr PMDAT;

__at(0x0193) __sfr PMDATL;

__at(0x0194) __sfr PMDATH;

__at(0x0195) __sfr PMCON1;
__at(0x0195) volatile __PMCON1bits_t PMCON1bits;

__at(0x0196) __sfr PMCON2;

__at(0x0197) __sfr VREGCON;
__at(0x0197) volatile __VREGCONbits_t VREGCONbits;

__at(0x0199) __sfr RC1REG;

__at(0x0199) __sfr RCREG;

__at(0x0199) __sfr RCREG1;

__at(0x019A) __sfr TX1REG;

__at(0x019A) __sfr TXREG;

__at(0x019A) __sfr TXREG1;

__at(0x019B) __sfr SP1BRG;

__at(0x019B) __sfr SP1BRGL;

__at(0x019B) __sfr SPBRG;

__at(0x019B) __sfr SPBRG1;

__at(0x019B) __sfr SPBRGL;

__at(0x019C) __sfr SP1BRGH;

__at(0x019C) __sfr SPBRGH;

__at(0x019C) __sfr SPBRGH1;

__at(0x019D) __sfr RC1STA;
__at(0x019D) volatile __RC1STAbits_t RC1STAbits;

__at(0x019D) __sfr RCSTA;
__at(0x019D) volatile __RCSTAbits_t RCSTAbits;

__at(0x019D) __sfr RCSTA1;
__at(0x019D) volatile __RCSTA1bits_t RCSTA1bits;

__at(0x019E) __sfr TX1STA;
__at(0x019E) volatile __TX1STAbits_t TX1STAbits;

__at(0x019E) __sfr TXSTA;
__at(0x019E) volatile __TXSTAbits_t TXSTAbits;

__at(0x019E) __sfr TXSTA1;
__at(0x019E) volatile __TXSTA1bits_t TXSTA1bits;

__at(0x019F) __sfr BAUD1CON;
__at(0x019F) volatile __BAUD1CONbits_t BAUD1CONbits;

__at(0x019F) __sfr BAUDCON;
__at(0x019F) volatile __BAUDCONbits_t BAUDCONbits;

__at(0x019F) __sfr BAUDCON1;
__at(0x019F) volatile __BAUDCON1bits_t BAUDCON1bits;

__at(0x019F) __sfr BAUDCTL;
__at(0x019F) volatile __BAUDCTLbits_t BAUDCTLbits;

__at(0x019F) __sfr BAUDCTL1;
__at(0x019F) volatile __BAUDCTL1bits_t BAUDCTL1bits;

__at(0x020C) __sfr WPUA;
__at(0x020C) volatile __WPUAbits_t WPUAbits;

__at(0x020D) __sfr WPUB;
__at(0x020D) volatile __WPUBbits_t WPUBbits;

__at(0x020E) __sfr WPUC;
__at(0x020E) volatile __WPUCbits_t WPUCbits;

__at(0x0211) __sfr SSP1BUF;
__at(0x0211) volatile __SSP1BUFbits_t SSP1BUFbits;

__at(0x0211) __sfr SSPBUF;
__at(0x0211) volatile __SSPBUFbits_t SSPBUFbits;

__at(0x0212) __sfr SSP1ADD;
__at(0x0212) volatile __SSP1ADDbits_t SSP1ADDbits;

__at(0x0212) __sfr SSPADD;
__at(0x0212) volatile __SSPADDbits_t SSPADDbits;

__at(0x0213) __sfr SSP1MSK;
__at(0x0213) volatile __SSP1MSKbits_t SSP1MSKbits;

__at(0x0213) __sfr SSPMSK;
__at(0x0213) volatile __SSPMSKbits_t SSPMSKbits;

__at(0x0214) __sfr SSP1STAT;
__at(0x0214) volatile __SSP1STATbits_t SSP1STATbits;

__at(0x0214) __sfr SSPSTAT;
__at(0x0214) volatile __SSPSTATbits_t SSPSTATbits;

__at(0x0215) __sfr SSP1CON;
__at(0x0215) volatile __SSP1CONbits_t SSP1CONbits;

__at(0x0215) __sfr SSP1CON1;
__at(0x0215) volatile __SSP1CON1bits_t SSP1CON1bits;

__at(0x0215) __sfr SSPCON;
__at(0x0215) volatile __SSPCONbits_t SSPCONbits;

__at(0x0215) __sfr SSPCON1;
__at(0x0215) volatile __SSPCON1bits_t SSPCON1bits;

__at(0x0216) __sfr SSP1CON2;
__at(0x0216) volatile __SSP1CON2bits_t SSP1CON2bits;

__at(0x0216) __sfr SSPCON2;
__at(0x0216) volatile __SSPCON2bits_t SSPCON2bits;

__at(0x0217) __sfr SSP1CON3;
__at(0x0217) volatile __SSP1CON3bits_t SSP1CON3bits;

__at(0x0217) __sfr SSPCON3;
__at(0x0217) volatile __SSPCON3bits_t SSPCON3bits;

__at(0x021D) __sfr BORCON;
__at(0x021D) volatile __BORCONbits_t BORCONbits;

__at(0x021E) __sfr FVRCON;
__at(0x021E) volatile __FVRCONbits_t FVRCONbits;

__at(0x021F) __sfr ZCD1CON;
__at(0x021F) volatile __ZCD1CONbits_t ZCD1CONbits;

__at(0x028C) __sfr ODCONA;
__at(0x028C) volatile __ODCONAbits_t ODCONAbits;

__at(0x028D) __sfr ODCONB;
__at(0x028D) volatile __ODCONBbits_t ODCONBbits;

__at(0x028E) __sfr ODCONC;
__at(0x028E) volatile __ODCONCbits_t ODCONCbits;

__at(0x0291) __sfr CCPR1;

__at(0x0291) __sfr CCPR1L;

__at(0x0292) __sfr CCPR1H;

__at(0x0293) __sfr CCP1CON;
__at(0x0293) volatile __CCP1CONbits_t CCP1CONbits;

__at(0x0294) __sfr CCP1CAP;
__at(0x0294) volatile __CCP1CAPbits_t CCP1CAPbits;

__at(0x0298) __sfr CCPR2;

__at(0x0298) __sfr CCPR2L;

__at(0x0299) __sfr CCPR2H;

__at(0x029A) __sfr CCP2CON;
__at(0x029A) volatile __CCP2CONbits_t CCP2CONbits;

__at(0x029B) __sfr CCP2CAP;
__at(0x029B) volatile __CCP2CAPbits_t CCP2CAPbits;

__at(0x029E) __sfr CCPTMRS;
__at(0x029E) volatile __CCPTMRSbits_t CCPTMRSbits;

__at(0x030C) __sfr SLRCONA;
__at(0x030C) volatile __SLRCONAbits_t SLRCONAbits;

__at(0x030D) __sfr SLRCONB;
__at(0x030D) volatile __SLRCONBbits_t SLRCONBbits;

__at(0x030E) __sfr SLRCONC;
__at(0x030E) volatile __SLRCONCbits_t SLRCONCbits;

__at(0x031B) __sfr MD2CON0;
__at(0x031B) volatile __MD2CON0bits_t MD2CON0bits;

__at(0x031C) __sfr MD2CON1;
__at(0x031C) volatile __MD2CON1bits_t MD2CON1bits;

__at(0x031D) __sfr MD2SRC;
__at(0x031D) volatile __MD2SRCbits_t MD2SRCbits;

__at(0x031E) __sfr MD2CARL;
__at(0x031E) volatile __MD2CARLbits_t MD2CARLbits;

__at(0x031F) __sfr MD2CARH;
__at(0x031F) volatile __MD2CARHbits_t MD2CARHbits;

__at(0x038C) __sfr INLVLA;
__at(0x038C) volatile __INLVLAbits_t INLVLAbits;

__at(0x038D) __sfr INLVLB;
__at(0x038D) volatile __INLVLBbits_t INLVLBbits;

__at(0x038E) __sfr INLVLC;
__at(0x038E) volatile __INLVLCbits_t INLVLCbits;

__at(0x0391) __sfr IOCAP;
__at(0x0391) volatile __IOCAPbits_t IOCAPbits;

__at(0x0392) __sfr IOCAN;
__at(0x0392) volatile __IOCANbits_t IOCANbits;

__at(0x0393) __sfr IOCAF;
__at(0x0393) volatile __IOCAFbits_t IOCAFbits;

__at(0x0394) __sfr IOCBP;
__at(0x0394) volatile __IOCBPbits_t IOCBPbits;

__at(0x0395) __sfr IOCBN;
__at(0x0395) volatile __IOCBNbits_t IOCBNbits;

__at(0x0396) __sfr IOCBF;
__at(0x0396) volatile __IOCBFbits_t IOCBFbits;

__at(0x0397) __sfr IOCCP;
__at(0x0397) volatile __IOCCPbits_t IOCCPbits;

__at(0x0398) __sfr IOCCN;
__at(0x0398) volatile __IOCCNbits_t IOCCNbits;

__at(0x0399) __sfr IOCCF;
__at(0x0399) volatile __IOCCFbits_t IOCCFbits;

__at(0x039B) __sfr MD1CON0;
__at(0x039B) volatile __MD1CON0bits_t MD1CON0bits;

__at(0x039C) __sfr MD1CON1;
__at(0x039C) volatile __MD1CON1bits_t MD1CON1bits;

__at(0x039D) __sfr MD1SRC;
__at(0x039D) volatile __MD1SRCbits_t MD1SRCbits;

__at(0x039E) __sfr MD1CARL;
__at(0x039E) volatile __MD1CARLbits_t MD1CARLbits;

__at(0x039F) __sfr MD1CARH;
__at(0x039F) volatile __MD1CARHbits_t MD1CARHbits;

__at(0x040E) __sfr HIDRVC;
__at(0x040E) volatile __HIDRVCbits_t HIDRVCbits;

__at(0x0413) __sfr T4TMR;

__at(0x0413) __sfr TMR4;

__at(0x0414) __sfr PR4;

__at(0x0414) __sfr T4PR;

__at(0x0415) __sfr T4CON;
__at(0x0415) volatile __T4CONbits_t T4CONbits;

__at(0x0416) __sfr T4HLT;
__at(0x0416) volatile __T4HLTbits_t T4HLTbits;

__at(0x0417) __sfr T4CLKCON;
__at(0x0417) volatile __T4CLKCONbits_t T4CLKCONbits;

__at(0x0418) __sfr T4RST;
__at(0x0418) volatile __T4RSTbits_t T4RSTbits;

__at(0x041A) __sfr T6TMR;

__at(0x041A) __sfr TMR6;

__at(0x041B) __sfr PR6;

__at(0x041B) __sfr T6PR;

__at(0x041C) __sfr T6CON;
__at(0x041C) volatile __T6CONbits_t T6CONbits;

__at(0x041D) __sfr T6HLT;
__at(0x041D) volatile __T6HLTbits_t T6HLTbits;

__at(0x041E) __sfr T6CLKCON;
__at(0x041E) volatile __T6CLKCONbits_t T6CLKCONbits;

__at(0x041F) __sfr T6RST;
__at(0x041F) volatile __T6RSTbits_t T6RSTbits;

__at(0x0493) __sfr TMR3;

__at(0x0493) __sfr TMR3L;

__at(0x0494) __sfr TMR3H;

__at(0x0495) __sfr T3CON;
__at(0x0495) volatile __T3CONbits_t T3CONbits;

__at(0x0496) __sfr T3GCON;
__at(0x0496) volatile __T3GCONbits_t T3GCONbits;

__at(0x049A) __sfr TMR5;

__at(0x049A) __sfr TMR5L;

__at(0x049B) __sfr TMR5H;

__at(0x049C) __sfr T5CON;
__at(0x049C) volatile __T5CONbits_t T5CONbits;

__at(0x049D) __sfr T5GCON;
__at(0x049D) volatile __T5GCONbits_t T5GCONbits;

__at(0x050F) __sfr OPA1NCHS;

__at(0x0510) __sfr OPA1PCHS;

__at(0x0511) __sfr OPA1CON;
__at(0x0511) volatile __OPA1CONbits_t OPA1CONbits;

__at(0x0512) __sfr OPA1ORS;

__at(0x0513) __sfr OPA2NCHS;

__at(0x0514) __sfr OPA2PCHS;

__at(0x0515) __sfr OPA2CON;
__at(0x0515) volatile __OPA2CONbits_t OPA2CONbits;

__at(0x0516) __sfr OPA2ORS;

__at(0x0590) __sfr DACLD;
__at(0x0590) volatile __DACLDbits_t DACLDbits;

__at(0x0591) __sfr DAC1CON0;
__at(0x0591) volatile __DAC1CON0bits_t DAC1CON0bits;

__at(0x0592) __sfr DAC1CON1;
__at(0x0592) volatile __DAC1CON1bits_t DAC1CON1bits;

__at(0x0592) __sfr DAC1REF;

__at(0x0592) __sfr DAC1REFL;
__at(0x0592) volatile __DAC1REFLbits_t DAC1REFLbits;

__at(0x0593) __sfr DAC1CON2;
__at(0x0593) volatile __DAC1CON2bits_t DAC1CON2bits;

__at(0x0593) __sfr DAC1REFH;
__at(0x0593) volatile __DAC1REFHbits_t DAC1REFHbits;

__at(0x0594) __sfr DAC2CON0;
__at(0x0594) volatile __DAC2CON0bits_t DAC2CON0bits;

__at(0x0595) __sfr DAC2CON1;
__at(0x0595) volatile __DAC2CON1bits_t DAC2CON1bits;

__at(0x0595) __sfr DAC2REF;

__at(0x0595) __sfr DAC2REFL;
__at(0x0595) volatile __DAC2REFLbits_t DAC2REFLbits;

__at(0x0596) __sfr DAC2CON2;
__at(0x0596) volatile __DAC2CON2bits_t DAC2CON2bits;

__at(0x0596) __sfr DAC2REFH;
__at(0x0596) volatile __DAC2REFHbits_t DAC2REFHbits;

__at(0x0597) __sfr DAC3CON0;
__at(0x0597) volatile __DAC3CON0bits_t DAC3CON0bits;

__at(0x0598) __sfr DAC3CON1;
__at(0x0598) volatile __DAC3CON1bits_t DAC3CON1bits;

__at(0x0598) __sfr DAC3REF;
__at(0x0598) volatile __DAC3REFbits_t DAC3REFbits;

__at(0x0599) __sfr DAC4CON0;
__at(0x0599) volatile __DAC4CON0bits_t DAC4CON0bits;

__at(0x059A) __sfr DAC4CON1;
__at(0x059A) volatile __DAC4CON1bits_t DAC4CON1bits;

__at(0x059A) __sfr DAC4REF;
__at(0x059A) volatile __DAC4REFbits_t DAC4REFbits;

__at(0x0617) __sfr PWM3DCL;
__at(0x0617) volatile __PWM3DCLbits_t PWM3DCLbits;

__at(0x0618) __sfr PWM3DCH;
__at(0x0618) volatile __PWM3DCHbits_t PWM3DCHbits;

__at(0x0619) __sfr PWM3CON;
__at(0x0619) volatile __PWM3CONbits_t PWM3CONbits;

__at(0x061A) __sfr PWM4DCL;
__at(0x061A) volatile __PWM4DCLbits_t PWM4DCLbits;

__at(0x061B) __sfr PWM4DCH;
__at(0x061B) volatile __PWM4DCHbits_t PWM4DCHbits;

__at(0x061C) __sfr PWM4CON;
__at(0x061C) volatile __PWM4CONbits_t PWM4CONbits;

__at(0x068D) __sfr COG1PHR;
__at(0x068D) volatile __COG1PHRbits_t COG1PHRbits;

__at(0x068E) __sfr COG1PHF;
__at(0x068E) volatile __COG1PHFbits_t COG1PHFbits;

__at(0x068F) __sfr COG1BLKR;
__at(0x068F) volatile __COG1BLKRbits_t COG1BLKRbits;

__at(0x0690) __sfr COG1BLKF;
__at(0x0690) volatile __COG1BLKFbits_t COG1BLKFbits;

__at(0x0691) __sfr COG1DBR;
__at(0x0691) volatile __COG1DBRbits_t COG1DBRbits;

__at(0x0692) __sfr COG1DBF;
__at(0x0692) volatile __COG1DBFbits_t COG1DBFbits;

__at(0x0693) __sfr COG1CON0;
__at(0x0693) volatile __COG1CON0bits_t COG1CON0bits;

__at(0x0694) __sfr COG1CON1;
__at(0x0694) volatile __COG1CON1bits_t COG1CON1bits;

__at(0x0695) __sfr COG1RIS0;
__at(0x0695) volatile __COG1RIS0bits_t COG1RIS0bits;

__at(0x0696) __sfr COG1RIS1;
__at(0x0696) volatile __COG1RIS1bits_t COG1RIS1bits;

__at(0x0697) __sfr COG1RSIM0;
__at(0x0697) volatile __COG1RSIM0bits_t COG1RSIM0bits;

__at(0x0698) __sfr COG1RSIM1;
__at(0x0698) volatile __COG1RSIM1bits_t COG1RSIM1bits;

__at(0x0699) __sfr COG1FIS0;
__at(0x0699) volatile __COG1FIS0bits_t COG1FIS0bits;

__at(0x069A) __sfr COG1FIS1;
__at(0x069A) volatile __COG1FIS1bits_t COG1FIS1bits;

__at(0x069B) __sfr COG1FSIM0;
__at(0x069B) volatile __COG1FSIM0bits_t COG1FSIM0bits;

__at(0x069C) __sfr COG1FSIM1;
__at(0x069C) volatile __COG1FSIM1bits_t COG1FSIM1bits;

__at(0x069D) __sfr COG1ASD0;
__at(0x069D) volatile __COG1ASD0bits_t COG1ASD0bits;

__at(0x069E) __sfr COG1ASD1;
__at(0x069E) volatile __COG1ASD1bits_t COG1ASD1bits;

__at(0x069F) __sfr COG1STR;
__at(0x069F) volatile __COG1STRbits_t COG1STRbits;

__at(0x070D) __sfr COG2PHR;
__at(0x070D) volatile __COG2PHRbits_t COG2PHRbits;

__at(0x070E) __sfr COG2PHF;
__at(0x070E) volatile __COG2PHFbits_t COG2PHFbits;

__at(0x070F) __sfr COG2BLKR;
__at(0x070F) volatile __COG2BLKRbits_t COG2BLKRbits;

__at(0x0710) __sfr COG2BLKF;
__at(0x0710) volatile __COG2BLKFbits_t COG2BLKFbits;

__at(0x0711) __sfr COG2DBR;
__at(0x0711) volatile __COG2DBRbits_t COG2DBRbits;

__at(0x0712) __sfr COG2DBF;
__at(0x0712) volatile __COG2DBFbits_t COG2DBFbits;

__at(0x0713) __sfr COG2CON0;
__at(0x0713) volatile __COG2CON0bits_t COG2CON0bits;

__at(0x0714) __sfr COG2CON1;
__at(0x0714) volatile __COG2CON1bits_t COG2CON1bits;

__at(0x0715) __sfr COG2RIS0;
__at(0x0715) volatile __COG2RIS0bits_t COG2RIS0bits;

__at(0x0716) __sfr COG2RIS1;
__at(0x0716) volatile __COG2RIS1bits_t COG2RIS1bits;

__at(0x0717) __sfr COG2RSIM0;
__at(0x0717) volatile __COG2RSIM0bits_t COG2RSIM0bits;

__at(0x0718) __sfr COG2RSIM1;
__at(0x0718) volatile __COG2RSIM1bits_t COG2RSIM1bits;

__at(0x0719) __sfr COG2FIS0;
__at(0x0719) volatile __COG2FIS0bits_t COG2FIS0bits;

__at(0x071A) __sfr COG2FIS1;
__at(0x071A) volatile __COG2FIS1bits_t COG2FIS1bits;

__at(0x071B) __sfr COG2FSIM0;
__at(0x071B) volatile __COG2FSIM0bits_t COG2FSIM0bits;

__at(0x071C) __sfr COG2FSIM1;
__at(0x071C) volatile __COG2FSIM1bits_t COG2FSIM1bits;

__at(0x071D) __sfr COG2ASD0;
__at(0x071D) volatile __COG2ASD0bits_t COG2ASD0bits;

__at(0x071E) __sfr COG2ASD1;
__at(0x071E) volatile __COG2ASD1bits_t COG2ASD1bits;

__at(0x071F) __sfr COG2STR;
__at(0x071F) volatile __COG2STRbits_t COG2STRbits;

__at(0x0794) __sfr PRG1RTSS;
__at(0x0794) volatile __PRG1RTSSbits_t PRG1RTSSbits;

__at(0x0795) __sfr PRG1FTSS;
__at(0x0795) volatile __PRG1FTSSbits_t PRG1FTSSbits;

__at(0x0796) __sfr PRG1INS;
__at(0x0796) volatile __PRG1INSbits_t PRG1INSbits;

__at(0x0797) __sfr PRG1CON0;
__at(0x0797) volatile __PRG1CON0bits_t PRG1CON0bits;

__at(0x0798) __sfr PRG1CON1;
__at(0x0798) volatile __PRG1CON1bits_t PRG1CON1bits;

__at(0x0799) __sfr PRG1CON2;
__at(0x0799) volatile __PRG1CON2bits_t PRG1CON2bits;

__at(0x079A) __sfr PRG2RTSS;
__at(0x079A) volatile __PRG2RTSSbits_t PRG2RTSSbits;

__at(0x079B) __sfr PRG2FTSS;
__at(0x079B) volatile __PRG2FTSSbits_t PRG2FTSSbits;

__at(0x079C) __sfr PRG2INS;
__at(0x079C) volatile __PRG2INSbits_t PRG2INSbits;

__at(0x079D) __sfr PRG2CON0;
__at(0x079D) volatile __PRG2CON0bits_t PRG2CON0bits;

__at(0x079E) __sfr PRG2CON1;
__at(0x079E) volatile __PRG2CON1bits_t PRG2CON1bits;

__at(0x079F) __sfr PRG2CON2;
__at(0x079F) volatile __PRG2CON2bits_t PRG2CON2bits;

__at(0x0D8E) __sfr PWMEN;
__at(0x0D8E) volatile __PWMENbits_t PWMENbits;

__at(0x0D8F) __sfr PWMLD;
__at(0x0D8F) volatile __PWMLDbits_t PWMLDbits;

__at(0x0D90) __sfr PWMOUT;
__at(0x0D90) volatile __PWMOUTbits_t PWMOUTbits;

__at(0x0D91) __sfr PWM5PH;

__at(0x0D91) __sfr PWM5PHL;
__at(0x0D91) volatile __PWM5PHLbits_t PWM5PHLbits;

__at(0x0D92) __sfr PWM5PHH;
__at(0x0D92) volatile __PWM5PHHbits_t PWM5PHHbits;

__at(0x0D93) __sfr PWM5DC;

__at(0x0D93) __sfr PWM5DCL;
__at(0x0D93) volatile __PWM5DCLbits_t PWM5DCLbits;

__at(0x0D94) __sfr PWM5DCH;
__at(0x0D94) volatile __PWM5DCHbits_t PWM5DCHbits;

__at(0x0D95) __sfr PWM5PR;

__at(0x0D95) __sfr PWM5PRL;
__at(0x0D95) volatile __PWM5PRLbits_t PWM5PRLbits;

__at(0x0D96) __sfr PWM5PRH;
__at(0x0D96) volatile __PWM5PRHbits_t PWM5PRHbits;

__at(0x0D97) __sfr PWM5OF;

__at(0x0D97) __sfr PWM5OFL;
__at(0x0D97) volatile __PWM5OFLbits_t PWM5OFLbits;

__at(0x0D98) __sfr PWM5OFH;
__at(0x0D98) volatile __PWM5OFHbits_t PWM5OFHbits;

__at(0x0D99) __sfr PWM5TMR;

__at(0x0D99) __sfr PWM5TMRL;
__at(0x0D99) volatile __PWM5TMRLbits_t PWM5TMRLbits;

__at(0x0D9A) __sfr PWM5TMRH;
__at(0x0D9A) volatile __PWM5TMRHbits_t PWM5TMRHbits;

__at(0x0D9B) __sfr PWM5CON;
__at(0x0D9B) volatile __PWM5CONbits_t PWM5CONbits;

__at(0x0D9C) __sfr PWM5INTCON;
__at(0x0D9C) volatile __PWM5INTCONbits_t PWM5INTCONbits;

__at(0x0D9C) __sfr PWM5INTE;
__at(0x0D9C) volatile __PWM5INTEbits_t PWM5INTEbits;

__at(0x0D9D) __sfr PWM5INTF;
__at(0x0D9D) volatile __PWM5INTFbits_t PWM5INTFbits;

__at(0x0D9D) __sfr PWM5INTFLG;
__at(0x0D9D) volatile __PWM5INTFLGbits_t PWM5INTFLGbits;

__at(0x0D9E) __sfr PWM5CLKCON;
__at(0x0D9E) volatile __PWM5CLKCONbits_t PWM5CLKCONbits;

__at(0x0D9F) __sfr PWM5LDCON;
__at(0x0D9F) volatile __PWM5LDCONbits_t PWM5LDCONbits;

__at(0x0DA0) __sfr PWM5OFCON;
__at(0x0DA0) volatile __PWM5OFCONbits_t PWM5OFCONbits;

__at(0x0DA1) __sfr PWM6PH;

__at(0x0DA1) __sfr PWM6PHL;
__at(0x0DA1) volatile __PWM6PHLbits_t PWM6PHLbits;

__at(0x0DA2) __sfr PWM6PHH;
__at(0x0DA2) volatile __PWM6PHHbits_t PWM6PHHbits;

__at(0x0DA3) __sfr PWM6DC;

__at(0x0DA3) __sfr PWM6DCL;
__at(0x0DA3) volatile __PWM6DCLbits_t PWM6DCLbits;

__at(0x0DA4) __sfr PWM6DCH;
__at(0x0DA4) volatile __PWM6DCHbits_t PWM6DCHbits;

__at(0x0DA5) __sfr PWM6PR;

__at(0x0DA5) __sfr PWM6PRL;
__at(0x0DA5) volatile __PWM6PRLbits_t PWM6PRLbits;

__at(0x0DA6) __sfr PWM6PRH;
__at(0x0DA6) volatile __PWM6PRHbits_t PWM6PRHbits;

__at(0x0DA7) __sfr PWM6OF;

__at(0x0DA7) __sfr PWM6OFL;
__at(0x0DA7) volatile __PWM6OFLbits_t PWM6OFLbits;

__at(0x0DA8) __sfr PWM6OFH;
__at(0x0DA8) volatile __PWM6OFHbits_t PWM6OFHbits;

__at(0x0DA9) __sfr PWM6TMR;

__at(0x0DA9) __sfr PWM6TMRL;
__at(0x0DA9) volatile __PWM6TMRLbits_t PWM6TMRLbits;

__at(0x0DAA) __sfr PWM6TMRH;
__at(0x0DAA) volatile __PWM6TMRHbits_t PWM6TMRHbits;

__at(0x0DAB) __sfr PWM6CON;
__at(0x0DAB) volatile __PWM6CONbits_t PWM6CONbits;

__at(0x0DAC) __sfr PWM6INTCON;
__at(0x0DAC) volatile __PWM6INTCONbits_t PWM6INTCONbits;

__at(0x0DAC) __sfr PWM6INTE;
__at(0x0DAC) volatile __PWM6INTEbits_t PWM6INTEbits;

__at(0x0DAD) __sfr PWM6INTF;
__at(0x0DAD) volatile __PWM6INTFbits_t PWM6INTFbits;

__at(0x0DAD) __sfr PWM6INTFLG;
__at(0x0DAD) volatile __PWM6INTFLGbits_t PWM6INTFLGbits;

__at(0x0DAE) __sfr PWM6CLKCON;
__at(0x0DAE) volatile __PWM6CLKCONbits_t PWM6CLKCONbits;

__at(0x0DAF) __sfr PWM6LDCON;
__at(0x0DAF) volatile __PWM6LDCONbits_t PWM6LDCONbits;

__at(0x0DB0) __sfr PWM6OFCON;
__at(0x0DB0) volatile __PWM6OFCONbits_t PWM6OFCONbits;

__at(0x0E0F) __sfr PPSLOCK;
__at(0x0E0F) volatile __PPSLOCKbits_t PPSLOCKbits;

__at(0x0E10) __sfr INTPPS;

__at(0x0E11) __sfr T0CKIPPS;

__at(0x0E12) __sfr T1CKIPPS;

__at(0x0E13) __sfr T1GPPS;

__at(0x0E14) __sfr CCP1PPS;

__at(0x0E15) __sfr CCP2PPS;

__at(0x0E16) __sfr COG1INPPS;

__at(0x0E17) __sfr COG2INPPS;

__at(0x0E19) __sfr T2CKIPPS;

__at(0x0E1A) __sfr T3CKIPPS;

__at(0x0E1B) __sfr T3GPPS;

__at(0x0E1C) __sfr T4CKIPPS;

__at(0x0E1D) __sfr T5CKIPPS;

__at(0x0E1E) __sfr T5GPPS;

__at(0x0E1F) __sfr T6CKIPPS;

__at(0x0E20) __sfr SSPCLKPPS;

__at(0x0E21) __sfr SSPDATPPS;

__at(0x0E22) __sfr SSPSSPPS;

__at(0x0E24) __sfr RXPPS;

__at(0x0E25) __sfr CKPPS;

__at(0x0E28) __sfr CLCIN0PPS;

__at(0x0E29) __sfr CLCIN1PPS;

__at(0x0E2A) __sfr CLCIN2PPS;

__at(0x0E2B) __sfr CLCIN3PPS;

__at(0x0E2C) __sfr PRG1RPPS;

__at(0x0E2D) __sfr PRG1FPPS;

__at(0x0E2E) __sfr PRG2RPPS;

__at(0x0E2F) __sfr PRG2FPPS;

__at(0x0E30) __sfr MD1CHPPS;

__at(0x0E31) __sfr MD1CLPPS;

__at(0x0E32) __sfr MD1MODPPS;

__at(0x0E33) __sfr MD2CHPPS;

__at(0x0E34) __sfr MD2CLPPS;

__at(0x0E35) __sfr MD2MODPPS;

__at(0x0E90) __sfr RA0PPS;

__at(0x0E91) __sfr RA1PPS;

__at(0x0E92) __sfr RA2PPS;

__at(0x0E94) __sfr RA4PPS;

__at(0x0E95) __sfr RA5PPS;

__at(0x0E9C) __sfr RB4PPS;

__at(0x0E9D) __sfr RB5PPS;

__at(0x0E9E) __sfr RB6PPS;

__at(0x0E9F) __sfr RB7PPS;

__at(0x0EA0) __sfr RC0PPS;

__at(0x0EA1) __sfr RC1PPS;

__at(0x0EA2) __sfr RC2PPS;

__at(0x0EA3) __sfr RC3PPS;

__at(0x0EA4) __sfr RC4PPS;

__at(0x0EA5) __sfr RC5PPS;

__at(0x0EA6) __sfr RC6PPS;

__at(0x0EA7) __sfr RC7PPS;

__at(0x0F0F) __sfr CLCDATA;
__at(0x0F0F) volatile __CLCDATAbits_t CLCDATAbits;

__at(0x0F10) __sfr CLC1CON;
__at(0x0F10) volatile __CLC1CONbits_t CLC1CONbits;

__at(0x0F11) __sfr CLC1POL;
__at(0x0F11) volatile __CLC1POLbits_t CLC1POLbits;

__at(0x0F12) __sfr CLC1SEL0;
__at(0x0F12) volatile __CLC1SEL0bits_t CLC1SEL0bits;

__at(0x0F13) __sfr CLC1SEL1;
__at(0x0F13) volatile __CLC1SEL1bits_t CLC1SEL1bits;

__at(0x0F14) __sfr CLC1SEL2;
__at(0x0F14) volatile __CLC1SEL2bits_t CLC1SEL2bits;

__at(0x0F15) __sfr CLC1SEL3;
__at(0x0F15) volatile __CLC1SEL3bits_t CLC1SEL3bits;

__at(0x0F16) __sfr CLC1GLS0;
__at(0x0F16) volatile __CLC1GLS0bits_t CLC1GLS0bits;

__at(0x0F17) __sfr CLC1GLS1;
__at(0x0F17) volatile __CLC1GLS1bits_t CLC1GLS1bits;

__at(0x0F18) __sfr CLC1GLS2;
__at(0x0F18) volatile __CLC1GLS2bits_t CLC1GLS2bits;

__at(0x0F19) __sfr CLC1GLS3;
__at(0x0F19) volatile __CLC1GLS3bits_t CLC1GLS3bits;

__at(0x0F1A) __sfr CLC2CON;
__at(0x0F1A) volatile __CLC2CONbits_t CLC2CONbits;

__at(0x0F1B) __sfr CLC2POL;
__at(0x0F1B) volatile __CLC2POLbits_t CLC2POLbits;

__at(0x0F1C) __sfr CLC2SEL0;
__at(0x0F1C) volatile __CLC2SEL0bits_t CLC2SEL0bits;

__at(0x0F1D) __sfr CLC2SEL1;
__at(0x0F1D) volatile __CLC2SEL1bits_t CLC2SEL1bits;

__at(0x0F1E) __sfr CLC2SEL2;
__at(0x0F1E) volatile __CLC2SEL2bits_t CLC2SEL2bits;

__at(0x0F1F) __sfr CLC2SEL3;
__at(0x0F1F) volatile __CLC2SEL3bits_t CLC2SEL3bits;

__at(0x0F20) __sfr CLC2GLS0;
__at(0x0F20) volatile __CLC2GLS0bits_t CLC2GLS0bits;

__at(0x0F21) __sfr CLC2GLS1;
__at(0x0F21) volatile __CLC2GLS1bits_t CLC2GLS1bits;

__at(0x0F22) __sfr CLC2GLS2;
__at(0x0F22) volatile __CLC2GLS2bits_t CLC2GLS2bits;

__at(0x0F23) __sfr CLC2GLS3;
__at(0x0F23) volatile __CLC2GLS3bits_t CLC2GLS3bits;

__at(0x0F24) __sfr CLC3CON;
__at(0x0F24) volatile __CLC3CONbits_t CLC3CONbits;

__at(0x0F25) __sfr CLC3POL;
__at(0x0F25) volatile __CLC3POLbits_t CLC3POLbits;

__at(0x0F26) __sfr CLC3SEL0;
__at(0x0F26) volatile __CLC3SEL0bits_t CLC3SEL0bits;

__at(0x0F27) __sfr CLC3SEL1;
__at(0x0F27) volatile __CLC3SEL1bits_t CLC3SEL1bits;

__at(0x0F28) __sfr CLC3SEL2;
__at(0x0F28) volatile __CLC3SEL2bits_t CLC3SEL2bits;

__at(0x0F29) __sfr CLC3SEL3;
__at(0x0F29) volatile __CLC3SEL3bits_t CLC3SEL3bits;

__at(0x0F2A) __sfr CLC3GLS0;
__at(0x0F2A) volatile __CLC3GLS0bits_t CLC3GLS0bits;

__at(0x0F2B) __sfr CLC3GLS1;
__at(0x0F2B) volatile __CLC3GLS1bits_t CLC3GLS1bits;

__at(0x0F2C) __sfr CLC3GLS2;
__at(0x0F2C) volatile __CLC3GLS2bits_t CLC3GLS2bits;

__at(0x0F2D) __sfr CLC3GLS3;
__at(0x0F2D) volatile __CLC3GLS3bits_t CLC3GLS3bits;

__at(0x0FE4) __sfr STATUS_SHAD;
__at(0x0FE4) volatile __STATUS_SHADbits_t STATUS_SHADbits;

__at(0x0FE5) __sfr WREG_SHAD;

__at(0x0FE6) __sfr BSR_SHAD;

__at(0x0FE7) __sfr PCLATH_SHAD;

__at(0x0FE8) __sfr FSR0L_SHAD;

__at(0x0FE9) __sfr FSR0H_SHAD;

__at(0x0FEA) __sfr FSR1L_SHAD;

__at(0x0FEB) __sfr FSR1H_SHAD;

__at(0x0FED) __sfr STKPTR;

__at(0x0FEE) __sfr TOSL;

__at(0x0FEF) __sfr TOSH;
