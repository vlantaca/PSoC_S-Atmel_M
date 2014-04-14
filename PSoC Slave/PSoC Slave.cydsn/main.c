/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <device.h>

#define EZI2C_SLAVE_ADDR    (0x08u) /* Slave address of the EZI2C */
#define BUFFER_SIZE         (0x04u)
#define BUFFER_RW_AREA_SIZE (0x02u)

/* Denotes the offset inside the EZI2C buffer */
#define SLAVE_ADDR_SIZE         (0x01u)

/* EZI2C buffer */
uint8   ezi2cBuffer[BUFFER_SIZE];

/* I2C buffer with the data read from EZI2C */
uint8   i2cBufferRead[BUFFER_SIZE];

/* I2C buffer with the data to be written to EZI2C */
uint8   i2cBufferWrite[SLAVE_ADDR_SIZE + BUFFER_SIZE];

#define ACTION_SELECT_NONE      (0x00u)     /* Do nothing       */
#define ACTION_SELECT_WRITE     (0x01u)     /* Write to EZI2C   */
#define ACTION_SELECT_READ      (0x02u)     /* Read from EZI2C  */

/* Initialize action variable */
volatile uint8 actionSelect = ACTION_SELECT_NONE;


void main(){
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Debounce_Clock_Start();
    Debounce_Clock_Enable();
    EZI2C_Start();
    LCD_Start();
    
    /* Enable global interrupts. */
    CyGlobalIntEnable; 
    
    /* Initialize EZI2C buffer's read only data */
    ezi2cBuffer[BUFFER_RW_AREA_SIZE     ] = 0xFFu;
    ezi2cBuffer[BUFFER_RW_AREA_SIZE + 1u] = 0xFFu;
    
    EZI2C_SetBuffer1(BUFFER_SIZE, BUFFER_RW_AREA_SIZE, (void *) ezi2cBuffer);
    
    /* Start ISRs */
    //ISR_Write_StartEx(ISR_WriteSW1_Interrupt);
    //ISR_Read_StartEx(ISR_ReadSW2_Interrupt);

    for(;;){
        /* Place your application code here. */
        
        /*
        LCD_Position(1u,0u);
        LCD_PrintString("RD: ");
        int i = 0;
        for(i=0; i <4u; i++){
            LCD_PrintInt8(i2cBufferRead[i]);
            LCD_PrintString(" ");
        }
        */
    }
}





/*******************************************************************************
* Function Name: ISR_WriteSW1_Interrupt
********************************************************************************
* Summary:
*  The Interrupt Service Routine for SW1 event.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
CY_ISR(ISR_WriteSW1_Interrupt)
{
    /* Clear pin interrupt request bit */
    SW1_Write_ClearInterrupt();

    /* Select read action */
    actionSelect = ACTION_SELECT_WRITE;
}


/*******************************************************************************
* Function Name: ISR_ReadSW2_Interrupt
********************************************************************************
* Summary:
*  The Interrupt Service Routine for SW2 event.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
CY_ISR(ISR_ReadSW2_Interrupt)
{
    /* Clear pin interrupt request bit */
    SW2_Read_ClearInterrupt();

    /* Select read action */
    actionSelect = ACTION_SELECT_READ;
}



/* [] END OF FILE */
