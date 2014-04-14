/*******************************************************************************
* File Name: ISR_Write.h
* Version 1.60
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
#if !defined(__ISR_Write_INTC_H__)
#define __ISR_Write_INTC_H__


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void ISR_Write_Start(void);
void ISR_Write_StartEx(cyisraddress address);
void ISR_Write_Stop(void) ;

CY_ISR_PROTO(ISR_Write_Interrupt);

void ISR_Write_SetVector(cyisraddress address) ;
cyisraddress ISR_Write_GetVector(void) ;

void ISR_Write_SetPriority(uint8 priority) ;
uint8 ISR_Write_GetPriority(void) ;

void ISR_Write_Enable(void) ;
uint8 ISR_Write_GetState(void) ;
void ISR_Write_Disable(void) ;

void ISR_Write_SetPending(void) ;
void ISR_Write_ClearPending(void) ;


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the ISR_Write ISR. */
#define ISR_Write_INTC_VECTOR            ((reg32 *) ISR_Write__INTC_VECT)

/* Address of the ISR_Write ISR priority. */
#define ISR_Write_INTC_PRIOR             ((reg8 *) ISR_Write__INTC_PRIOR_REG)

/* Priority of the ISR_Write interrupt. */
#define ISR_Write_INTC_PRIOR_NUMBER      ISR_Write__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable ISR_Write interrupt. */
#define ISR_Write_INTC_SET_EN            ((reg32 *) ISR_Write__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the ISR_Write interrupt. */
#define ISR_Write_INTC_CLR_EN            ((reg32 *) ISR_Write__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the ISR_Write interrupt state to pending. */
#define ISR_Write_INTC_SET_PD            ((reg32 *) ISR_Write__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the ISR_Write interrupt. */
#define ISR_Write_INTC_CLR_PD            ((reg32 *) ISR_Write__INTC_CLR_PD_REG)



/* __ISR_Write_INTC_H__ */
#endif
