/*******************************************************************************
* File Name: LED4.c  
* Version 1.70
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include "cytypes.h"
#include "LED4.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LED4__PORT == 15 && (LED4__MASK & 0xC0))

/*******************************************************************************
* Function Name: LED4_Write
********************************************************************************
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  void 
*  
*******************************************************************************/
void LED4_Write(uint8 value) 
{
    uint8 staticBits = LED4_DR & ~LED4_MASK;
    LED4_DR = staticBits | ((value << LED4_SHIFT) & LED4_MASK);
}


/*******************************************************************************
* Function Name: LED4_SetDriveMode
********************************************************************************
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  void
*
*******************************************************************************/
void LED4_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(LED4_0, mode);
}


/*******************************************************************************
* Function Name: LED4_Read
********************************************************************************
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  void 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro LED4_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 LED4_Read(void) 
{
    return (LED4_PS & LED4_MASK) >> LED4_SHIFT;
}


/*******************************************************************************
* Function Name: LED4_ReadDataReg
********************************************************************************
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  void 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 LED4_ReadDataReg(void) 
{
    return (LED4_DR & LED4_MASK) >> LED4_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(LED4_INTSTAT) 

    /*******************************************************************************
    * Function Name: LED4_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  void 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 LED4_ClearInterrupt(void) 
    {
        return (LED4_INTSTAT & LED4_MASK) >> LED4_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif
/* [] END OF FILE */ 
