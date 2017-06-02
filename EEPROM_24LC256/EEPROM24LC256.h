/*
 * File         : EEPROM24LC256.h
 * Project      : EEPROM onboard Library
 * Revision History:
 *                2017/05/23:
 *                        - initial release
 *
 * Author       : José Guerra Carmenate 
 * 
 * Description  : This library provides you a comfortable work with the module EEPROM(24LC256) 
 *          present on Digilent CEREBOT32MX4 board.
 * Routines: 
        - On_Board_EEPROM_Init
        - On_Board_EEPROM_Read
        - On_Board_EEPROM_Write
        - On_Board_EEPROM_Wait
 */
#ifndef __Lib_OnBoard_EEPROM
#define __Lib_OnBoard_EEPROM
static const unsigned char WRITE = 0,
                           READ = 1;
static const unsigned char OnBoard_EEPROM_device_address = 0b10100000;
 
 /*************************************************************
  * Prototype: 
  *                void OnBoard_EEPROM_Init( unsigned long scl )
  * Description:
  *                Call the routine I2C1_Init( scl )
  * Parameters:
  *     scl: requested serial clock rate for I2C1 module.
  * Returns:
  *         nothing
  * Example:
  *                // Initialize the I2C1 module with clock_rate of 10000
  *                On_Board_EEPROM_Init(10000);
  *************************************************************/
void OnBoard_EEPROM_Init( unsigned long scl );

/*************************************************************
  * Prototype: 
  *                unsigned short OnBoard_EEPROM_Read( unsigned int read_address )
  * Description:
  *                Read the word stored in read_address from the onboard EEPROM
  * Parameters:
  *     read_address: the word address
  * Returns:
  *         The word stored in the 'read_address' address on the onboard EEPROM 
  * Example:
  *                // read de word in the address 0x077A and save this in recv
  *                recv = OnBoard_EEPROM_Read(0x077A);
  * Note:
  *         - To use this routine is necessary initialize the EEPROM 
  *         module with the OnBoard_EEPROM_Init routine
  *************************************************************/
unsigned short OnBoard_EEPROM_Read( unsigned int read_address );


/*************************************************************
  * Prototype: 
  *                void OnBoard_EEPROM_Write( unsigned int write_address, unsigned char write_word )
  * Description:
  *         Write the word 'write_word' in the address 'write_addres' on the onboard EEPROM.
  * Parameters:
  *     - write_address: address when the 'write_word' by stored.
  *         - write_word   : word that be stored.
  * Returns:
  *         nothing
  * Example:
  *                // write the word '0b10100110' in the address'0x045B' on the onboard EEPROM
  *                OnBoard_EEPROM_Write( 0x045B, 0b10100110 )
  * Note:
  *         - To use this routine is necessary initialize the EEPROM 
  *         module with the OnBoard_EEPROM_Init routine
  *************************************************************/
void OnBoard_EEPROM_Write( unsigned int write_address, unsigned char write_word );

/*************************************************************
  * Prototype: 
  *                void OnBoard_EEPROM_Wait(  )
  * Description:
  *         Wait the end of writing process on the EEPROM
  * Parameters:
  *                nothing
  * Returns:
  *         nothing
  * Example:
  *                // write the word '0b10100110' in the address'0x045B' on the onboard EEPROM
  *                OnBoard_EEPROM_Wait( );
  * Note:
  *         - To use this routine is necessary initialize the EEPROM 
  *         module with the OnBoard_EEPROM_Init routine
  *************************************************************/
void OnBoard_EEPROM_Wait( );
#endif