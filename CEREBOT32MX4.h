/*
 * File         : CEREBOT32MX4.h
 * Project      : CEREBOT32MX4 Adapter
 * Revision History:
		2017/5/20:
			- initial release

 * Author      : Jose Guerra Carmenate 
				 Leonardo González Reyes
 * Description  :
 * 				Esta biblioteca contiene definiciones y herramientas para 
 * 				facilitar el trabajo con la placa de desarrollo 
 * 				Diligent Cerebot32MX4 (con PIC32MX460F512L)
 */
/** PORT_JA REGISTERS MAPS **/
//PORT->JA
#define CEREBOT_PORTJA_01_bit RE0_bit
#define CEREBOT_PORTJA_02_bit RE1_bit
#define CEREBOt_PORTJA_03_bit RE2_bit
#define CEREBOT_PORTJA_04_bit RE3_bit
#define CEREBOT_PORTJA_07_bit RE4_bit
#define CEREBOT_PORTJA_08_bit RE5_bit
#define CEREBOT_PORTJA_09_bit RE6_bit
#define CEREBOT_PORTJA_10_bit RE7_bit
//TRIS->JA
#define CEREBOT_TRISJA_01_bit TRISE0_bit
#define CEREBOT_TRISJA_02_bit TRISE1_bit
#define CEREBOT_TRISJA_03_bit TRISE2_bit
#define CEREBOT_TRISJA_04_bit TRISE3_bit
#define CEREBOT_TRISJA_07_bit TRISE4_bit
#define CEREBOT_TRISJA_08_bit TRISE5_bit
#define CEREBOT_TRISJA_09_bit TRISE6_bit
#define CEREBOT_TRISJA_10_bit TRISE7_bit
//LAT->JA
#define CEREBOT_LATJA_01_bit LATE0_bit
#define CEREBOT_LATJA_02_bit LATE1_bit
#define CEREBOT_LATJA_03_bit LATE2_bit
#define CEREBOT_LATJA_04_bit LATE3_bit
#define CEREBOT_LATJA_07_bit LATE4_bit
#define CEREBOT_LATJA_08_bit LATE5_bit
#define CEREBOT_LATJA_09_bit LATE6_bit
#define CEREBOT_LATJA_10_bit LATE7_bit
//ODC->JA
#define CEREBOT_ODCJA_01_bit ODCE0_bit
#define CEREBOT_ODCJA_02_bit ODCE1_bit
#define CEREBOT_ODCJA_03_bit ODCE2_bit
#define CEREBOT_ODCJA_04_bit ODCE3_bit
#define CEREBOT_ODCJA_07_bit ODCE4_bit
#define CEREBOT_ODCJA_08_bit ODCE5_bit
#define CEREBOT_ODCJA_09_bit ODCE6_bit
#define CEREBOT_ODCJA_10_bit ODCE7_bit


/** PORT_JB REGISTERS MAPS **/
//PORT->JB
#define CEREBOT_PORTJB_01_bit RG9_bit
#define CEREBOT_PORTJB_02_bit RG8_bit
#define CEREBOt_PORTJB_03_bit RG7_bit
#define CEREBOT_PORTJB_04_bit RG6_bit
#define CEREBOT_PORTJB_07_bit RB15_bit
#define CEREBOT_PORTJB_08_bit RD5_bit
#define CEREBOT_PORTJB_09_bit RD4_bit
#define CEREBOT_PORTJB_10_bit RB14_bit
//TRIS->JB
#define CEREBOT_TRISJB_01_bit TRISG9_bit
#define CEREBOT_TRISJB_02_bit TRISG8_bit
#define CEREBOT_TRISJB_03_bit TRISG7_bit
#define CEREBOT_TRISJB_04_bit TRISG6_bit
#define CEREBOT_TRISJB_07_bit TRISB15_bit	//AN15
#define CEREBOT_TRISJB_08_bit TRISD5_bit
#define CEREBOT_TRISJB_09_bit TRISD4_bit
#define CEREBOT_TRISJB_10_bit TRISB14_bit	//AN14
//LAT->JB
#define CEREBOT_LATJB_01_bit LATG9_bit
#define CEREBOT_LATJB_02_bit LATG8_bit
#define CEREBOT_LATJB_03_bit LATG7_bit
#define CEREBOT_LATJB_04_bit LATG6_bit
#define CEREBOT_LATJB_07_bit LATB15_bit
#define CEREBOT_LATJB_08_bit LATD5_bit
#define CEREBOT_LATJB_09_bit LATD4_bit
#define CEREBOT_LATJB_10_bit LATB14_bit
//ODC->JB
#define CEREBOT_ODCJB_01_bit ODCG9_bit
#define CEREBOT_ODCJB_02_bit ODCG8_bit
#define CEREBOT_ODCJB_03_bit ODCG7_bit
#define CEREBOT_ODCJB_04_bit ODCG6_bit
#define CEREBOT_ODCJB_07_bit ODCB15_bit
#define CEREBOT_ODCJB_08_bit ODCD5_bit
#define CEREBOT_ODCJB_09_bit ODCD4_bit
#define CEREBOT_ODCJB_10_bit ODCB14_bit

/** PORT_JC REGISTERS MAPS **/
/**
 * NOTE:
  JC-01 --> Compartido con servo S1
  JC-02 --> Compartido con servo S2
  JC-03 --> Compartido con servo S3
  JC-04 --> Compartido con servo S4
  JC-07 --> Compartido con servo S5
  JC-08 --> Compartido con servo S6
  JC-09 --> Compartido con servo S7
  JC-10 --> Compartido con servo S8  
  */
//PORT->JC
#define CEREBOT_PORTJC_01_bit RG12_bit
#define CEREBOT_PORTJC_02_bit RG13_bit
#define CEREBOt_PORTJC_03_bit RG14_bit
#define CEREBOT_PORTJC_04_bit RG15_bit
#define CEREBOT_PORTJC_07_bit RG0_bit
#define CEREBOT_PORTJC_08_bit RG1_bit
#define CEREBOT_PORTJC_09_bit RF0_bit
#define CEREBOT_PORTJC_10_bit RF1_bit
//TRIS->JC
#define CEREBOT_TRISJC_01_bit TRISG12_bit
#define CEREBOT_TRISJC_02_bit TRISG13_bit
#define CEREBOT_TRISJC_03_bit TRISG14_bit
#define CEREBOT_TRISJC_04_bit TRISG15_bit
#define CEREBOT_TRISJC_07_bit TRISG0_bit
#define CEREBOT_TRISJC_08_bit TRISG1_bit
#define CEREBOT_TRISJC_09_bit TRISF0_bit
#define CEREBOT_TRISJC_10_bit TRISF1_bit
//LAT->JC
#define CEREBOT_LATJC_01_bit LATG12_bit
#define CEREBOT_LATJC_02_bit LATG13_bit
#define CEREBOT_LATJC_03_bit LATG14_bit
#define CEREBOT_LATJC_04_bit LATG15_bit
#define CEREBOT_LATJC_07_bit LATG0_bit
#define CEREBOT_LATJC_08_bit LATG1_bit
#define CEREBOT_LATJC_09_bit LATF0_bit
#define CEREBOT_LATJC_10_bit LATF1_bit
//ODC->JC
#define CEREBOT_ODCJC_01_bit ODCG12_bit
#define CEREBOT_ODCJC_02_bit ODCG13_bit
#define CEREBOT_ODCJC_03_bit ODCG14_bit
#define CEREBOT_ODCJC_04_bit ODCG15_bit
#define CEREBOT_ODCJC_07_bit ODCG0_bit
#define CEREBOT_ODCJC_08_bit ODCG1_bit
#define CEREBOT_ODCJC_09_bit ODCF0_bit
#define CEREBOT_ODCJC_10_bit ODCF1_bit

/** PORT_JD REGISTERS MAPS **/
//PORT->JD
#define CEREBOT_PORTJD_01_bit RD7_bit
#define CEREBOT_PORTJD_02_bit RD1_bit
#define CEREBOt_PORTJD_03_bit RD9_bit 	//Shared with SPI Port1 Connector,J1
#define CEREBOT_PORTJD_04_bit RC1_bit
#define CEREBOT_PORTJD_07_bit RD6_bit
#define CEREBOT_PORTJD_08_bit RD2_bit
#define CEREBOT_PORTJD_09_bit RD10_bit	//Shared with SPI Port1 Connector,J1
#define CEREBOT_PORTJD_10_bit RC2_bit
//TRIS->JD
#define CEREBOT_TRISJD_01_bit TRISD7_bit
#define CEREBOT_TRISJD_02_bit TRISD1_bit
#define CEREBOT_TRISJD_03_bit TRISD9_bit
#define CEREBOT_TRISJD_04_bit TRISC1_bit
#define CEREBOT_TRISJD_07_bit TRISD6_bit
#define CEREBOT_TRISJD_08_bit TRISD2_bit
#define CEREBOT_TRISJD_09_bit TRISD10_bit
#define CEREBOT_TRISJD_10_bit TRISC2_bit
//LAT->JD
#define CEREBOT_LATJD_01_bit LATD7_bit
#define CEREBOT_LATJD_02_bit LATD1_bit
#define CEREBOT_LATJD_03_bit LATD9_bit
#define CEREBOT_LATJD_04_bit LATC1_bit
#define CEREBOT_LATJD_07_bit LATD6_bit
#define CEREBOT_LATJD_08_bit LATD2_bit
#define CEREBOT_LATJD_09_bit LATD10_bit
#define CEREBOT_LATJD_10_bit LATC2_bit
//ODC->JD
#define CEREBOT_ODCJD_01_bit ODCD7_bit
#define CEREBOT_ODCJD_02_bit ODCD1_bit
#define CEREBOT_ODCJD_03_bit ODCD9_bit
#define CEREBOT_ODCJD_04_bit ODCC1_bit
#define CEREBOT_ODCJD_07_bit ODCD6_bit
#define CEREBOT_ODCJD_08_bit ODCD2_bit
#define CEREBOT_ODCJD_09_bit ODCD10_bit
#define CEREBOT_ODCJD_10_bit ODCC2_bit

/** PORT_JE REGISTERS MAPS **/
//PORT->JE
#define CEREBOT_PORTJE_01_bit RD14_bit
#define CEREBOT_PORTJE_02_bit RD15_bit
#define CEREBOt_PORTJE_03_bit RF2_bit
#define CEREBOT_PORTJE_04_bit RF8_bit
#define CEREBOT_PORTJE_07_bit RD13_bit
#define CEREBOT_PORTJE_08_bit RD3_bit
#define CEREBOT_PORTJE_09_bit RD11_bit
#define CEREBOT_PORTJE_10_bit RC3_bit
//TRIS->JE
#define CEREBOT_TRISJE_01_bit TRISD14_bit
#define CEREBOT_TRISJE_02_bit TRISD15_bit
#define CEREBOT_TRISJE_03_bit TRISF2_bit
#define CEREBOT_TRISJE_04_bit TRISF8_bit
#define CEREBOT_TRISJE_07_bit TRISD13_bit
#define CEREBOT_TRISJE_08_bit TRISD3_bit
#define CEREBOT_TRISJE_09_bit TRISD11_bit
#define CEREBOT_TRISJE_10_bit TRISC3_bit
//LAT->JE
#define CEREBOT_LATJE_01_bit LATD14_bit
#define CEREBOT_LATJE_02_bit LATD15_bit
#define CEREBOT_LATJE_03_bit LATF2_bit
#define CEREBOT_LATJE_04_bit LATF8_bit
#define CEREBOT_LATJE_07_bit LATD13_bit
#define CEREBOT_LATJE_08_bit LATD3_bit
#define CEREBOT_LATJE_09_bit LATD11_bit
#define CEREBOT_LATJE_10_bit LATC3_bit
//ODC->JE
#define CEREBOT_ODCJE_01_bit ODCD14_bit
#define CEREBOT_ODCJE_02_bit ODCD15_bit
#define CEREBOT_ODCJE_03_bit ODCF2_bit
#define CEREBOT_ODCJE_04_bit ODCF8_bit
#define CEREBOT_ODCJE_07_bit ODCD13_bit
#define CEREBOT_ODCJE_08_bit ODCD3_bit
#define CEREBOT_ODCJE_09_bit ODCD11_bit
#define CEREBOT_ODCJE_10_bit ODCC3_bit

/** PORT_JF REGISTERS MAPS **/
//PORT->JF
#define CEREBOT_PORTJF_01_bit RA2_bit	//Shared with I2C daisy chain #2,J6
#define CEREBOT_PORTJF_02_bit RA3_bit	//Shared with I2C daisy chain #2,J6
#define CEREBOt_PORTJF_03_bit RA6_bit	//Shared with BTN1
#define CEREBOT_PORTJF_04_bit RA7_bit	//Shared with BTN2
//TRIS->JF
#define CEREBOT_TRISJF_01_bit TRISA2_bit
#define CEREBOT_TRISJF_02_bit TRISA3_bit
#define CEREBOT_TRISJF_03_bit TRISA6_bit
#define CEREBOT_TRISJF_04_bit TRISA7_bit
//LAT->JF
#define CEREBOT_LATJF_01_bit LATA2_bit
#define CEREBOT_LATJF_02_bit LATA3_bit
#define CEREBOT_LATJF_03_bit LATA6_bit
#define CEREBOT_LATJF_04_bit LATA7_bit
//ODC->JF
#define CEREBOT_ODCJF_01_bit ODCA2_bit
#define CEREBOT_ODCJF_02_bit ODCA3_bit
#define CEREBOT_ODCJF_03_bit ODCA6_bit
#define CEREBOT_ODCJF_04_bit ODCA7_bit

/** PORT_JH REGISTERS MAPS **/
//PORT->JH
#define CEREBOT_PORTJH_01_bit RF12_bit
#define CEREBOT_PORTJH_02_bit RF13_bit
#define CEREBOt_PORTJH_03_bit RF4_bit
#define CEREBOT_PORTJH_04_bit RF5_bit
#define CEREBOT_PORTJH_07_bit RE8_bit
#define CEREBOT_PORTJH_08_bit RD0_bit	//Shared with SPI Port1 Connector,J1
#define CEREBOT_PORTJH_09_bit RD8_bit
#define CEREBOT_PORTJH_10_bit RE9_bit	//Shared with USB OC_SENSE via JP5
//TRIS->JH
#define CEREBOT_TRISJH_01_bit TRISF12_bit
#define CEREBOT_TRISJH_02_bit TRISF13_bit
#define CEREBOT_TRISJH_03_bit TRISF4_bit
#define CEREBOT_TRISJH_04_bit TRISF5_bit
#define CEREBOT_TRISJH_07_bit TRISE8_bit
#define CEREBOT_TRISJH_08_bit TRISD0_bit
#define CEREBOT_TRISJH_09_bit TRISD8_bit
#define CEREBOT_TRISJH_10_bit TRISE9_bit
//LAT->JH
#define CEREBOT_LATJH_01_bit LATF12_bit
#define CEREBOT_LATJH_02_bit LATF13_bit
#define CEREBOT_LATJH_03_bit LATF4_bit
#define CEREBOT_LATJH_04_bit LATF5_bit
#define CEREBOT_LATJH_07_bit LATE8_bit
#define CEREBOT_LATJH_08_bit LATD0_bit
#define CEREBOT_LATJH_09_bit LATD8_bit
#define CEREBOT_LATJH_10_bit LATE9_bit
//ODC->JH
#define CEREBOT_ODCJH_01_bit ODCF12_bit
#define CEREBOT_ODCJH_02_bit ODCF13_bit
#define CEREBOT_ODCJH_03_bit ODCF4_bit
#define CEREBOT_ODCJH_04_bit ODCF5_bit
#define CEREBOT_ODCJH_07_bit ODCE8_bit
#define CEREBOT_ODCJH_08_bit ODCD0_bit
#define CEREBOT_ODCJH_09_bit ODCD8_bit
#define CEREBOT_ODCJH_10_bit ODCE9_bit

/** PORT_JJ REGISTERS MAPS **/
//PORT->JJ
#define CEREBOT_PORTJJ_01_bit RB0_bit	//AN0
#define CEREBOT_PORTJJ_02_bit RB1_bit	//AN1
#define CEREBOt_PORTJJ_03_bit RB2_bit	//AN2
#define CEREBOT_PORTJJ_04_bit RB3_bit	//AN3
#define CEREBOT_PORTJJ_07_bit RB4_bit	//AN4
#define CEREBOT_PORTJJ_08_bit RB5_bit	//AN5//Selected by J16
#define CEREBOT_PORTJJ_09_bit RB8_bit	//AN8
#define CEREBOT_PORTJJ_10_bit RB9_bit	//AN9
//TRIS->JJ
#define CEREBOT_TRISJJ_01_bit TRISB0_bit
#define CEREBOT_TRISJJ_02_bit TRISB1_bit
#define CEREBOT_TRISJJ_03_bit TRISB2_bit
#define CEREBOT_TRISJJ_04_bit TRISB3_bit
#define CEREBOT_TRISJJ_07_bit TRISB4_bit
#define CEREBOT_TRISJJ_08_bit TRISB5_bit
#define CEREBOT_TRISJJ_09_bit TRISB8_bit
#define CEREBOT_TRISJJ_10_bit TRISB9_bit
//LAT->JJ
#define CEREBOT_LATJJ_01_bit LATB0_bit
#define CEREBOT_LATJJ_02_bit LATB1_bit
#define CEREBOT_LATJJ_03_bit LATB2_bit
#define CEREBOT_LATJJ_04_bit LATB3_bit
#define CEREBOT_LATJJ_07_bit LATB4_bit
#define CEREBOT_LATJJ_08_bit LATB5_bit
#define CEREBOT_LATJJ_09_bit LATB8_bit
#define CEREBOT_LATJJ_10_bit LATB9_bit
//ODC->JJ
#define CEREBOT_ODCJJ_01_bit ODCB0_bit
#define CEREBOT_ODCJJ_02_bit ODCB1_bit
#define CEREBOT_ODCJJ_03_bit ODCB2_bit
#define CEREBOT_ODCJJ_04_bit ODCB3_bit
#define CEREBOT_ODCJJ_07_bit ODCB4_bit
#define CEREBOT_ODCJJ_08_bit ODCB5_bit
#define CEREBOT_ODCJJ_09_bit ODCB8_bit
#define CEREBOT_ODCJJ_10_bit ODCB9_bit

/** PORT_JK REGISTERS MAPS **/
//PORT->JK
#define CEREBOT_PORTJK_01_bit RB10_bit	//AN10//Shared with LED1
#define CEREBOT_PORTJK_02_bit RB11_bit	//AN11//Shared with LED2
#define CEREBOt_PORTJK_03_bit RB12_bit	//AN12//Shared with LED3
#define CEREBOT_PORTJK_04_bit RB13_bit	//AN13//Shared with LED4
#define CEREBOT_PORTJK_07_bit RA9_bit
#define CEREBOT_PORTJK_08_bit RA10_bit
#define CEREBOT_PORTJK_09_bit RD12_bit
#define CEREBOT_PORTJK_10_bit RC4_bit
//TRIS->JK
#define CEREBOT_TRISJK_01_bit TRISB10_bit
#define CEREBOT_TRISJK_02_bit TRISB11_bit
#define CEREBOT_TRISJK_03_bit TRISB12_bit
#define CEREBOT_TRISJK_04_bit TRISB13_bit
#define CEREBOT_TRISJK_07_bit TRISA9_bit
#define CEREBOT_TRISJK_08_bit TRISA10_bit
#define CEREBOT_TRISJK_09_bit TRISD12_bit
#define CEREBOT_TRISJK_10_bit TRISC4_bit
//LAT->JK
#define CEREBOT_LATJK_01_bit LATB10_bit
#define CEREBOT_LATJK_02_bit LATB11_bit
#define CEREBOT_LATJK_03_bit LATB12_bit
#define CEREBOT_LATJK_04_bit LATB13_bit
#define CEREBOT_LATJK_07_bit LATA9_bit
#define CEREBOT_LATJK_08_bit LATA10_bit
#define CEREBOT_LATJK_09_bit LATD12_bit
#define CEREBOT_LATJK_10_bit LATC4_bit
//ODC->JK
#define CEREBOT_ODCJK_01_bit ODCB10_bit
#define CEREBOT_ODCJK_02_bit ODCB11_bit
#define CEREBOT_ODCJK_03_bit ODCB12_bit
#define CEREBOT_ODCJK_04_bit ODCB13_bit
#define CEREBOT_ODCJK_07_bit ODCA9_bit
#define CEREBOT_ODCJK_08_bit ODCA10_bit
#define CEREBOT_ODCJK_09_bit ODCD12_bit
#define CEREBOT_ODCJK_10_bit ODCC4_bit






