/* This file has been prepared for Doxygen automatic documentation generation.*/
/*! \file *********************************************************************
 *
 * \brief  XMEGA TWI driver example source.
 *
 *      This file contains an example application that demonstrates the TWI
 *      master and slave driver. It shows how to set up one TWI module as both
 *      master and slave, and communicate with itself.
 *
 *      The recommended test setup for this application is to connect 10K
 *      pull-up resistors on PC0 (SDA) and PC1 (SCL). Connect a 10-pin cable
 *      between the PORTD and SWITCHES, and PORTE and LEDS.
 *
 * \par Application note:
 *      AVR1308: Using the XMEGA TWI
 *
 * \par Documentation
 *      For comprehensive code documentation, supported compilers, compiler
 *      settings and supported devices see readme.html
 *
 * \author
 *      Atmel Corporation: http://www.atmel.com \n
 *      Support email: avr@atmel.com
 *
 * $Revision: 2660 $
 * $Date: 2009-08-11 12:28:58 +0200 (ti, 11 aug 2009) $  \n
 *
 * Copyright (c) 2008, Atmel Corporation All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. The name of ATMEL may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE EXPRESSLY AND
 * SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *****************************************************************************/
#include "avr_compiler.h"
#include "twi_master_driver.h"
#include "twi_slave_driver.h"
#include <util/delay.h>

/*! Defining an example slave address. */
//#define SLAVE_ADDRESS    0b00101000
//#define SLAVE_ADDRESS    0b00101000
#define SLAVE_ADDRESS 0b00001000

/*! Defining number of bytes in buffer. */
#define NUM_BYTES        4

/*! CPU speed 2MHz, BAUDRATE 100kHz and Baudrate Register Settings */
#define CPU_SPEED   2000000
#define BAUDRATE	100000
#define TWI_BAUDSETTING TWI_BAUD(CPU_SPEED, BAUDRATE)


/* Global variables */
TWI_Master_t twiMaster;    /*!< TWI master module. */
TWI_Slave_t twiSlave;      /*!< TWI slave module. */


/*! Buffer with test data to send.*/
uint8_t sendBuffer[NUM_BYTES] = {0xCA, 0xFE, 0xBA, 0xBE};

/*! Simple function that invert the received value in the sendbuffer. This
 *  function is used in the driver and passed on as a pointer to the driver.
 */
void TWIC_SlaveProcessData(void){
	uint8_t bufIndex = twiSlave.bytesReceived;
	twiSlave.sendData[bufIndex] = (~twiSlave.receivedData[bufIndex]);
}


/*! /brief Example code
 *
 *  Example code that reads the key pressed and show a value from the buffer,
 *  sends the value to the slave and read back the processed value which will
 *  be inverted and displayed after key release.
 */
int main(void){
	/* Initialize PORTE for output and PORTD for inverted input. */
	//PORTCFG.MPCMASK = 0xFF;
    //PORTCFG_MPCMASK
	
	PORTA_DIR = 0xFF; // Set PORTA to be an output for LEDS
	
	// Enable internal pull-up on PC0, PC1.. Uncomment if you don't have external pullups
	//PORTCFG.MPCMASK = 0x03; // Configure several PINxCTRL registers at the same time
	//PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_OPC_gm) | PORT_OPC_PULLUP_gc; //Enable pull-up to get a defined level on the switches

	/* Initialize TWI master. */
	TWI_MasterInit(&twiMaster,
	               &TWIC,
	               TWI_MASTER_INTLVL_LO_gc,
	               TWI_BAUDSETTING);

	/* Initialize TWI slave. */
	TWI_SlaveInitializeDriver(&twiSlave, &TWIC, TWIC_SlaveProcessData);
	TWI_SlaveInitializeModule(&twiSlave,
	                          SLAVE_ADDRESS,
	                          TWI_SLAVE_INTLVL_LO_gc);

	/* Enable LO interrupt level. */
	PMIC.CTRL |= PMIC_LOLVLEN_bm;
	sei();
	
	PORTA_DIR = 0x00;
	PORTD_DIR = 0xFF;
	int action = 0x00;
	
	while(1){
		
		while (!((PORTA_IN == 0x01) || (PORTA_IN == 0x02))){
			if (PORTA_IN == 0x01){
				action = 0x01;
				PORTD_OUT = 0x10;
			}
			if (PORTA_IN == 0x02){
				action = 0x02;
				PORTD_OUT = 0x20;
			}
		}; // wait for user to press a button
		
		while (((PORTA_IN & 0x01) == 0x01 || (PORTA_IN & 0x02) == 0x02 )){} // wait for user to release a button
		PORTD_OUT = 0x00;



		if (action == 0x02){ // signal to read
			TWI_MasterWriteRead(&twiMaster,
						SLAVE_ADDRESS,
						&sendBuffer[0],
						0,
						2);
			
			
			//TWI_MasterRead(&twiMaster, SLAVE_ADDRESS, 4); // read 2 bytes when user clears PORTA pins
			while (twiMaster.status != TWIM_STATUS_READY) {} // Wait until transaction is complete.

		}else if (action == 0x01){ // signal to write
			TWI_MasterWriteRead(&twiMaster,
								SLAVE_ADDRESS,
								&sendBuffer[0],
								2,
								0);

			while (twiMaster.status != TWIM_STATUS_READY) {} // Wait until transaction is complete.
		}else{
			continue;
		}
		
		
		PORTA_OUT = 0x00;
	} /* execution loop */
}

/*! TWIC Master Interrupt vector. */
ISR(TWIC_TWIM_vect){
	TWI_MasterInterruptHandler(&twiMaster);
}

/*! TWIC Slave Interrupt vector. */
ISR(TWIC_TWIS_vect){
	TWI_SlaveInterruptHandler(&twiSlave);
}

