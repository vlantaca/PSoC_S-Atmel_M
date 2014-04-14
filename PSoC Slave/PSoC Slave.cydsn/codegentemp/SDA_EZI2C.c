/*******************************************************************************
* File Name: SDA_EZI2C.c  
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
#include "SDA_EZI2C.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SDA_EZI2C__PORT == 15 && (SDA_EZI2C__MASK & 0xC0))

/*******************************************************************************
* Function Name: SDA_EZI2C_Write
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
void SDA_EZI2C_Write(uint8 value) 
{
    uint8 staticBits = SDA_EZI2C_DR & ~SDA_EZI2C_MASK;
    SDA_EZI2C_DR = staticBits | ((value << SDA_EZI2C_SHIFT) & SDA_EZI2C_MASK);
}


/*******************************************************************************
* Function Name: SDA_EZI2C_SetDriveMode
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
void SDA_EZI2C_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(SDA_EZI2C_0, mode);
}


/*******************************************************************************
* Function Name: SDA_EZI2C_Read
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
*  Macro SDA_EZI2C_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 SDA_EZI2C_Read(void) 
{
    return (SDA_EZI2C_PS & SDA_EZI2C_MASK) >> SDA_EZI2C_SHIFT;
}


/*******************************************************************************
* Function Name: SDA_EZI2C_ReadDataReg
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
uint8 SDA_EZI2C_ReadDataReg(void) 
{
    return (SDA_EZI2C_DR & SDA_EZI2C_MASK) >> SDA_EZI2C_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(SDA_EZI2C_INTSTAT) 

    /*******************************************************************************
    * Function Name: SDA_EZI2C_ClearInterrupt
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
    uint8 SDA_EZI2C_ClearInterrupt(void) 
    {
        return (SDA_EZI2C_INTSTAT & SDA_EZI2C_MASK) >> SDA_EZI2C_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif
/* [] END OF FILE */ 
