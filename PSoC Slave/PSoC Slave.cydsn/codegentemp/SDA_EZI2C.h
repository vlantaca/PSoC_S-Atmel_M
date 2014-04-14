/*******************************************************************************
* File Name: SDA_EZI2C.h  
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

#if !defined(CY_PINS_SDA_EZI2C_H) /* Pins SDA_EZI2C_H */
#define CY_PINS_SDA_EZI2C_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SDA_EZI2C_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_70 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SDA_EZI2C__PORT == 15 && (SDA_EZI2C__MASK & 0xC0))

/***************************************
*        Function Prototypes             
***************************************/    

void    SDA_EZI2C_Write(uint8 value) ;
void    SDA_EZI2C_SetDriveMode(uint8 mode) ;
uint8   SDA_EZI2C_ReadDataReg(void) ;
uint8   SDA_EZI2C_Read(void) ;
uint8   SDA_EZI2C_ClearInterrupt(void) ;

/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define SDA_EZI2C_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define SDA_EZI2C_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define SDA_EZI2C_DM_RES_UP          PIN_DM_RES_UP
#define SDA_EZI2C_DM_RES_DWN         PIN_DM_RES_DWN
#define SDA_EZI2C_DM_OD_LO           PIN_DM_OD_LO
#define SDA_EZI2C_DM_OD_HI           PIN_DM_OD_HI
#define SDA_EZI2C_DM_STRONG          PIN_DM_STRONG
#define SDA_EZI2C_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define SDA_EZI2C_MASK               SDA_EZI2C__MASK
#define SDA_EZI2C_SHIFT              SDA_EZI2C__SHIFT
#define SDA_EZI2C_WIDTH              1u

/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SDA_EZI2C_PS                     (* (reg8 *) SDA_EZI2C__PS)
/* Data Register */
#define SDA_EZI2C_DR                     (* (reg8 *) SDA_EZI2C__DR)
/* Port Number */
#define SDA_EZI2C_PRT_NUM                (* (reg8 *) SDA_EZI2C__PRT) 
/* Connect to Analog Globals */                                                  
#define SDA_EZI2C_AG                     (* (reg8 *) SDA_EZI2C__AG)                       
/* Analog MUX bux enable */
#define SDA_EZI2C_AMUX                   (* (reg8 *) SDA_EZI2C__AMUX) 
/* Bidirectional Enable */                                                        
#define SDA_EZI2C_BIE                    (* (reg8 *) SDA_EZI2C__BIE)
/* Bit-mask for Aliased Register Access */
#define SDA_EZI2C_BIT_MASK               (* (reg8 *) SDA_EZI2C__BIT_MASK)
/* Bypass Enable */
#define SDA_EZI2C_BYP                    (* (reg8 *) SDA_EZI2C__BYP)
/* Port wide control signals */                                                   
#define SDA_EZI2C_CTL                    (* (reg8 *) SDA_EZI2C__CTL)
/* Drive Modes */
#define SDA_EZI2C_DM0                    (* (reg8 *) SDA_EZI2C__DM0) 
#define SDA_EZI2C_DM1                    (* (reg8 *) SDA_EZI2C__DM1)
#define SDA_EZI2C_DM2                    (* (reg8 *) SDA_EZI2C__DM2) 
/* Input Buffer Disable Override */
#define SDA_EZI2C_INP_DIS                (* (reg8 *) SDA_EZI2C__INP_DIS)
/* LCD Common or Segment Drive */
#define SDA_EZI2C_LCD_COM_SEG            (* (reg8 *) SDA_EZI2C__LCD_COM_SEG)
/* Enable Segment LCD */
#define SDA_EZI2C_LCD_EN                 (* (reg8 *) SDA_EZI2C__LCD_EN)
/* Slew Rate Control */
#define SDA_EZI2C_SLW                    (* (reg8 *) SDA_EZI2C__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SDA_EZI2C_PRTDSI__CAPS_SEL       (* (reg8 *) SDA_EZI2C__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SDA_EZI2C_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SDA_EZI2C__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SDA_EZI2C_PRTDSI__OE_SEL0        (* (reg8 *) SDA_EZI2C__PRTDSI__OE_SEL0) 
#define SDA_EZI2C_PRTDSI__OE_SEL1        (* (reg8 *) SDA_EZI2C__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SDA_EZI2C_PRTDSI__OUT_SEL0       (* (reg8 *) SDA_EZI2C__PRTDSI__OUT_SEL0) 
#define SDA_EZI2C_PRTDSI__OUT_SEL1       (* (reg8 *) SDA_EZI2C__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SDA_EZI2C_PRTDSI__SYNC_OUT       (* (reg8 *) SDA_EZI2C__PRTDSI__SYNC_OUT) 


#if defined(SDA_EZI2C__INTSTAT)  /* Interrupt Registers */

    #define SDA_EZI2C_INTSTAT                (* (reg8 *) SDA_EZI2C__INTSTAT)
    #define SDA_EZI2C_SNAP                   (* (reg8 *) SDA_EZI2C__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins SDA_EZI2C_H */

#endif
/* [] END OF FILE */
