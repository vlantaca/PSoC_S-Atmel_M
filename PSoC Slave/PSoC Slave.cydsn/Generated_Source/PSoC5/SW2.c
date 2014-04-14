/*******************************************************************************
* File Name: SW2.c  
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
#include "SW2.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SW2__PORT == 15 && (SW2__MASK & 0xC0))

/*******************************************************************************
* Function Name: SW2_Write
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
void SW2_Write(uint8 value) 
{
    uint8 staticBits = SW2_DR & ~SW2_MASK;
    SW2_DR = staticBits | ((value << SW2_SHIFT) & SW2_MASK);
}


/*******************************************************************************
* Function Name: SW2_SetDriveMode
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
void SW2_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(SW2_0, mode);
}


/*******************************************************************************
* Function Name: SW2_Read
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
*  Macro SW2_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 SW2_Read(void) 
{
    return (SW2_PS & SW2_MASK) >> SW2_SHIFT;
}


/*******************************************************************************
* Function Name: SW2_ReadDataReg
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
uint8 SW2_ReadDataReg(void) 
{
    return (SW2_DR & SW2_MASK) >> SW2_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(SW2_INTSTAT) 

    /*******************************************************************************
    * Function Name: SW2_ClearInterrupt
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
    uint8 SW2_ClearInterrupt(void) 
    {
        return (SW2_INTSTAT & SW2_MASK) >> SW2_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif
/* [] END OF FILE */ 
