/*******************************************************************************
* File Name: SCL_EZI2C.h  
* Version 1.70
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_PINS_SCL_EZI2C_H) /* Pins SCL_EZI2C_H */
#define CY_PINS_SCL_EZI2C_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SCL_EZI2C_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_70 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SCL_EZI2C__PORT == 15 && (SCL_EZI2C__MASK & 0xC0))

/***************************************
*        Function Prototypes             
***************************************/    

void    SCL_EZI2C_Write(uint8 value) ;
void    SCL_EZI2C_SetDriveMode(uint8 mode) ;
uint8   SCL_EZI2C_ReadDataReg(void) ;
uint8   SCL_EZI2C_Read(void) ;
uint8   SCL_EZI2C_ClearInterrupt(void) ;

/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define SCL_EZI2C_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define SCL_EZI2C_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define SCL_EZI2C_DM_RES_UP          PIN_DM_RES_UP
#define SCL_EZI2C_DM_RES_DWN         PIN_DM_RES_DWN
#define SCL_EZI2C_DM_OD_LO           PIN_DM_OD_LO
#define SCL_EZI2C_DM_OD_HI           PIN_DM_OD_HI
#define SCL_EZI2C_DM_STRONG          PIN_DM_STRONG
#define SCL_EZI2C_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define SCL_EZI2C_MASK               SCL_EZI2C__MASK
#define SCL_EZI2C_SHIFT              SCL_EZI2C__SHIFT
#define SCL_EZI2C_WIDTH              1u

/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SCL_EZI2C_PS                     (* (reg8 *) SCL_EZI2C__PS)
/* Data Register */
#define SCL_EZI2C_DR                     (* (reg8 *) SCL_EZI2C__DR)
/* Port Number */
#define SCL_EZI2C_PRT_NUM                (* (reg8 *) SCL_EZI2C__PRT) 
/* Connect to Analog Globals */                                                  
#define SCL_EZI2C_AG                     (* (reg8 *) SCL_EZI2C__AG)                       
/* Analog MUX bux enable */
#define SCL_EZI2C_AMUX                   (* (reg8 *) SCL_EZI2C__AMUX) 
/* Bidirectional Enable */                                                        
#define SCL_EZI2C_BIE                    (* (reg8 *) SCL_EZI2C__BIE)
/* Bit-mask for Aliased Register Access */
#define SCL_EZI2C_BIT_MASK               (* (reg8 *) SCL_EZI2C__BIT_MASK)
/* Bypass Enable */
#define SCL_EZI2C_BYP                    (* (reg8 *) SCL_EZI2C__BYP)
/* Port wide control signals */                                                   
#define SCL_EZI2C_CTL                    (* (reg8 *) SCL_EZI2C__CTL)
/* Drive Modes */
#define SCL_EZI2C_DM0                    (* (reg8 *) SCL_EZI2C__DM0) 
#define SCL_EZI2C_DM1                    (* (reg8 *) SCL_EZI2C__DM1)
#define SCL_EZI2C_DM2                    (* (reg8 *) SCL_EZI2C__DM2) 
/* Input Buffer Disable Override */
#define SCL_EZI2C_INP_DIS                (* (reg8 *) SCL_EZI2C__INP_DIS)
/* LCD Common or Segment Drive */
#define SCL_EZI2C_LCD_COM_SEG            (* (reg8 *) SCL_EZI2C__LCD_COM_SEG)
/* Enable Segment LCD */
#define SCL_EZI2C_LCD_EN                 (* (reg8 *) SCL_EZI2C__LCD_EN)
/* Slew Rate Control */
#define SCL_EZI2C_SLW                    (* (reg8 *) SCL_EZI2C__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SCL_EZI2C_PRTDSI__CAPS_SEL       (* (reg8 *) SCL_EZI2C__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SCL_EZI2C_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SCL_EZI2C__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SCL_EZI2C_PRTDSI__OE_SEL0        (* (reg8 *) SCL_EZI2C__PRTDSI__OE_SEL0) 
#define SCL_EZI2C_PRTDSI__OE_SEL1        (* (reg8 *) SCL_EZI2C__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SCL_EZI2C_PRTDSI__OUT_SEL0       (* (reg8 *) SCL_EZI2C__PRTDSI__OUT_SEL0) 
#define SCL_EZI2C_PRTDSI__OUT_SEL1       (* (reg8 *) SCL_EZI2C__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SCL_EZI2C_PRTDSI__SYNC_OUT       (* (reg8 *) SCL_EZI2C__PRTDSI__SYNC_OUT) 


#if defined(SCL_EZI2C__INTSTAT)  /* Interrupt Registers */

    #define SCL_EZI2C_INTSTAT                (* (reg8 *) SCL_EZI2C__INTSTAT)
    #define SCL_EZI2C_SNAP                   (* (reg8 *) SCL_EZI2C__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins SCL_EZI2C_H */

#endif
/* [] END OF FILE */
