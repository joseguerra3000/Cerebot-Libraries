/*
 * File         : EEPROM_24LC256.c
 * Project      : EEPROM onboard Library routine Implementations 
 * Revision History:
 *                2017/05/23:
 *                        - initial release
 *
 * Author       : José Guerra Carmenate 
 * 
 * Description  : This library provides you a comfortable work with the module EEPROM(24LC256) 
 *                                 present on Digilent CEREBOT32MX4 board.
 * Routines: 
 *        - On_Board_EEPROM_Init
 *        - On_Board_EEPROM_Read
 *        - On_Board_EEPROM_Write
 *        - On_Board_EEPROM_Wait
 */
#include "EEPROM24LC256.h"
void OnBoard_EEPROM_Init( unsigned long scl ){
        I2C1_Init(scl);
}

unsigned short OnBoard_EEPROM_Read( unsigned int read_address ){
        unsigned short word;
        
        OnBoard_EEPROM_Wait();
        I2C1_Start();
        I2C1_Write( OnBoard_EEPROM_device_address|WRITE );         //EEPROM address
        I2C1_Write( (unsigned char)(read_address>>8) );
        I2C1_Write( (unsigned char)( read_address ) );
        I2C1_Restart();
        I2C1_Write( OnBoard_EEPROM_device_address|READ );
        word =  I2C1_Read( _I2C_NACK );
        I2C1_Stop();
        return word;
}

void OnBoard_EEPROM_Write( unsigned int write_address, unsigned char write_word ){
        OnBoard_EEPROM_Wait();
        I2C1_Start();
        I2C1_Write( OnBoard_EEPROM_device_address|WRITE );
        I2C1_Write( (unsigned char)(write_address>>8) );
        I2C1_Write( (unsigned char)(write_address) );
        I2C1_Write( write_word );
        I2C1_Stop();
}

void OnBoard_EEPROM_Wait( ){
        do{
           I2C1_Start();
        }while( I2C1_Write( OnBoard_EEPROM_device_address|WRITE ) != 0 );
        I2C_Stop();
}
