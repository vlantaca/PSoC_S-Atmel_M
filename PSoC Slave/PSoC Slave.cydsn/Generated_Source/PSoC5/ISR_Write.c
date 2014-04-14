/*******************************************************************************
* File Name: ISR_Write.c  
* Version 1.60
*
*  Description:
*   API for controlling the state of an interrupt.
*
*
*  Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/


#include <CYDEVICE.H>
#include <CYDEVICE_TRM.H>
#include <CYLIB.H>
#include <ISR_Write.H>


/*******************************************************************************
*  Place your includes, defines and code here 
********************************************************************************/
/* `#START ISR_Write_intc` */

/* `#END` */

#ifndef CYINT_IRQ_BASE
#define CYINT_IRQ_BASE	16
#endif
#ifndef CYINT_VECT_TABLE
#define CYINT_VECT_TABLE    ((cyisraddress **) CYREG_NVIC_VECT_OFFSET)
#endif

/* Declared in startup, used to set unused interrupts to. */
CY_ISR_PROTO(IntDefaultHandler);

/*******************************************************************************
* Function Name: ISR_Write_Start
********************************************************************************
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   void.
*
*
* Return:
*   void.
*
*******************************************************************************/
void ISR_Write_Start(void)
{
    /* For all we know the interrupt is active. */
    ISR_Write_Disable();

    /* Set the ISR to point to the ISR_Write Interrupt. */
    ISR_Write_SetVector(ISR_Write_Interrupt);

    /* Set the priority. */
    ISR_Write_SetPriority(ISR_Write_INTC_PRIOR_NUMBER);

    /* Enable it. */
    ISR_Write_Enable();
}

/*******************************************************************************
* Function Name: ISR_Write_StartEx
********************************************************************************
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   address: Address of the ISR to set in the interrupt vector table.
*
*
* Return:
*   void.
*
*******************************************************************************/
void ISR_Write_StartEx(cyisraddress address)
{
    /* For all we know the interrupt is active. */
    ISR_Write_Disable();

    /* Set the ISR to point to the ISR_Write Interrupt. */
    ISR_Write_SetVector(address);

    /* Set the priority. */
    ISR_Write_SetPriority(ISR_Write_INTC_PRIOR_NUMBER);

    /* Enable it. */
    ISR_Write_Enable();
}

/*******************************************************************************
* Function Name: ISR_Write_Stop
********************************************************************************
* Summary:
*   Disables and removes the interrupt.
*
* Parameters:  
*
*
* Return:
*   void.
*
*******************************************************************************/
void ISR_Write_Stop(void) 
{
    /* Disable this interrupt. */
    ISR_Write_Disable();

    /* Set the ISR to point to the passive one. */
    ISR_Write_SetVector(IntDefaultHandler);
}

/*******************************************************************************
* Function Name: ISR_Write_Interrupt
********************************************************************************
* Summary:
*   The default Interrupt Service Routine for ISR_Write.
*
*   Add custom code between the coments to keep the next version of this file
*   from over writting your code.
*
*
*
* Parameters:  
*
*
* Return:
*   void.
*
*******************************************************************************/
CY_ISR(ISR_Write_Interrupt)
{
    /*  Place your Interrupt code here. */
    /* `#START ISR_Write_Interrupt` */

    /* `#END` */
}

/*******************************************************************************
* Function Name: ISR_Write_SetVector
********************************************************************************
* Summary:
*   Change the ISR vector for the Interrupt. Note calling ISR_Write_Start
*   will override any effect this method would have had. To set the vector before
*   the component has been started use ISR_Write_StartEx instead.
*
*
* Parameters:
*   address: Address of the ISR to set in the interrupt vector table.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void ISR_Write_SetVector(cyisraddress address) 
{
    cyisraddress * ramVectorTable;

    ramVectorTable = (cyisraddress *) *CYINT_VECT_TABLE;

    ramVectorTable[CYINT_IRQ_BASE + ISR_Write__INTC_NUMBER] = address;
}

/*******************************************************************************
* Function Name: ISR_Write_GetVector
********************************************************************************
* Summary:
*   Gets the "address" of the current ISR vector for the Interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   Address of the ISR in the interrupt vector table.
*
*
*******************************************************************************/
cyisraddress ISR_Write_GetVector(void) 
{
    cyisraddress * ramVectorTable;

    ramVectorTable = (cyisraddress *) *CYINT_VECT_TABLE;

    return ramVectorTable[CYINT_IRQ_BASE + ISR_Write__INTC_NUMBER];
}

/*******************************************************************************
* Function Name: ISR_Write_SetPriority
********************************************************************************
* Summary:
*   Sets the Priority of the Interrupt. Note calling ISR_Write_Start
*   or ISR_Write_StartEx will override any effect this method would have had. 
*	This method should only be called after ISR_Write_Start or 
*	ISR_Write_StartEx has been called. To set the initial
*	priority for the component use the cydwr file in the tool.
*
*
* Parameters:
*   priority: Priority of the interrupt. 0 - 7, 0 being the highest.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void ISR_Write_SetPriority(uint8 priority) 
{
    *ISR_Write_INTC_PRIOR = priority << 5;
}

/*******************************************************************************
* Function Name: ISR_Write_GetPriority
********************************************************************************
* Summary:
*   Gets the Priority of the Interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   Priority of the interrupt. 0 - 7, 0 being the highest.
*
*
*******************************************************************************/
uint8 ISR_Write_GetPriority(void) 
{
    uint8 priority;


    priority = *ISR_Write_INTC_PRIOR >> 5;

    return priority;
}

/*******************************************************************************
* Function Name: ISR_Write_Enable
********************************************************************************
* Summary:
*   Enables the interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void ISR_Write_Enable(void) 
{
    /* Enable the general interrupt. */
    *ISR_Write_INTC_SET_EN = ISR_Write__INTC_MASK;
}

/*******************************************************************************
* Function Name: ISR_Write_GetState
********************************************************************************
* Summary:
*   Gets the state (enabled, disabled) of the Interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   1 if enabled, 0 if disabled.
*
*
*******************************************************************************/
uint8 ISR_Write_GetState(void) 
{
    /* Get the state of the general interrupt. */
    return (*ISR_Write_INTC_SET_EN & ISR_Write__INTC_MASK) ? 1:0;
}

/*******************************************************************************
* Function Name: ISR_Write_Disable
********************************************************************************
* Summary:
*   Disables the Interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void ISR_Write_Disable(void) 
{
    /* Disable the general interrupt. */
    *ISR_Write_INTC_CLR_EN = ISR_Write__INTC_MASK;
}

/*******************************************************************************
* Function Name: ISR_Write_SetPending
********************************************************************************
* Summary:
*   Causes the Interrupt to enter the pending state, a software method of
*   generating the interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void ISR_Write_SetPending(void) 
{
    *ISR_Write_INTC_SET_PD = ISR_Write__INTC_MASK;
}

/*******************************************************************************
* Function Name: ISR_Write_ClearPending
********************************************************************************
* Summary:
*   Clears a pending interrupt.
*
* Parameters:
*   void.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void ISR_Write_ClearPending(void) 
{
    *ISR_Write_INTC_CLR_PD = ISR_Write__INTC_MASK;
}
