    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; Debounce_Clock
Debounce_Clock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Debounce_Clock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Debounce_Clock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Debounce_Clock__CFG2_SRC_SEL_MASK EQU 0x07
Debounce_Clock__INDEX EQU 0x00
Debounce_Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Debounce_Clock__PM_ACT_MSK EQU 0x01
Debounce_Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Debounce_Clock__PM_STBY_MSK EQU 0x01

; EZI2C_I2C_Prim
EZI2C_I2C_Prim__ADR EQU CYREG_I2C_ADR
EZI2C_I2C_Prim__CFG EQU CYREG_I2C_CFG
EZI2C_I2C_Prim__CLK_DIV EQU CYREG_I2C_CLK_DIV
EZI2C_I2C_Prim__CSR EQU CYREG_I2C_CSR
EZI2C_I2C_Prim__D EQU CYREG_I2C_D
EZI2C_I2C_Prim__MCSR EQU CYREG_I2C_MCSR
EZI2C_I2C_Prim__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
EZI2C_I2C_Prim__PM_ACT_MSK EQU 0x04
EZI2C_I2C_Prim__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
EZI2C_I2C_Prim__PM_STBY_MSK EQU 0x04
EZI2C_I2C_Prim__XCFG EQU CYREG_I2C_XCFG

; LCD_LCDPort
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT2_PC0
LCD_LCDPort__0__PORT EQU 2
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT2_PC1
LCD_LCDPort__1__PORT EQU 2
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT2_PC2
LCD_LCDPort__2__PORT EQU 2
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT2_PC3
LCD_LCDPort__3__PORT EQU 2
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT2_PC4
LCD_LCDPort__4__PORT EQU 2
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT2_PC5
LCD_LCDPort__5__PORT EQU 2
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT2_PC6
LCD_LCDPort__6__PORT EQU 2
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT2_AG
LCD_LCDPort__AMUX EQU CYREG_PRT2_AMUX
LCD_LCDPort__BIE EQU CYREG_PRT2_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT2_BYP
LCD_LCDPort__CTL EQU CYREG_PRT2_CTL
LCD_LCDPort__DM0 EQU CYREG_PRT2_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT2_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT2_DM2
LCD_LCDPort__DR EQU CYREG_PRT2_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT2_INP_DIS
LCD_LCDPort__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LCD_LCDPort__LCD_EN EQU CYREG_PRT2_LCD_EN
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 2
LCD_LCDPort__PRT EQU CYREG_PRT2_PRT
LCD_LCDPort__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT2_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SLW EQU CYREG_PRT2_SLW

; EZI2C_isr
EZI2C_isr__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
EZI2C_isr__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
EZI2C_isr__INTC_MASK EQU 0x01
EZI2C_isr__INTC_NUMBER EQU 0
EZI2C_isr__INTC_PRIOR_NUM EQU 7
EZI2C_isr__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
EZI2C_isr__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
EZI2C_isr__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; SCL_EZI2C
SCL_EZI2C__0__MASK EQU 0x01
SCL_EZI2C__0__PC EQU CYREG_PRT12_PC0
SCL_EZI2C__0__PORT EQU 12
SCL_EZI2C__0__SHIFT EQU 0
SCL_EZI2C__AG EQU CYREG_PRT12_AG
SCL_EZI2C__BIE EQU CYREG_PRT12_BIE
SCL_EZI2C__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SCL_EZI2C__BYP EQU CYREG_PRT12_BYP
SCL_EZI2C__DM0 EQU CYREG_PRT12_DM0
SCL_EZI2C__DM1 EQU CYREG_PRT12_DM1
SCL_EZI2C__DM2 EQU CYREG_PRT12_DM2
SCL_EZI2C__DR EQU CYREG_PRT12_DR
SCL_EZI2C__INP_DIS EQU CYREG_PRT12_INP_DIS
SCL_EZI2C__MASK EQU 0x01
SCL_EZI2C__PORT EQU 12
SCL_EZI2C__PRT EQU CYREG_PRT12_PRT
SCL_EZI2C__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SCL_EZI2C__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SCL_EZI2C__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SCL_EZI2C__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SCL_EZI2C__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SCL_EZI2C__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SCL_EZI2C__PS EQU CYREG_PRT12_PS
SCL_EZI2C__SHIFT EQU 0
SCL_EZI2C__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SCL_EZI2C__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SCL_EZI2C__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SCL_EZI2C__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SCL_EZI2C__SLW EQU CYREG_PRT12_SLW

; SDA_EZI2C
SDA_EZI2C__0__MASK EQU 0x02
SDA_EZI2C__0__PC EQU CYREG_PRT12_PC1
SDA_EZI2C__0__PORT EQU 12
SDA_EZI2C__0__SHIFT EQU 1
SDA_EZI2C__AG EQU CYREG_PRT12_AG
SDA_EZI2C__BIE EQU CYREG_PRT12_BIE
SDA_EZI2C__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SDA_EZI2C__BYP EQU CYREG_PRT12_BYP
SDA_EZI2C__DM0 EQU CYREG_PRT12_DM0
SDA_EZI2C__DM1 EQU CYREG_PRT12_DM1
SDA_EZI2C__DM2 EQU CYREG_PRT12_DM2
SDA_EZI2C__DR EQU CYREG_PRT12_DR
SDA_EZI2C__INP_DIS EQU CYREG_PRT12_INP_DIS
SDA_EZI2C__MASK EQU 0x02
SDA_EZI2C__PORT EQU 12
SDA_EZI2C__PRT EQU CYREG_PRT12_PRT
SDA_EZI2C__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SDA_EZI2C__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SDA_EZI2C__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SDA_EZI2C__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SDA_EZI2C__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SDA_EZI2C__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SDA_EZI2C__PS EQU CYREG_PRT12_PS
SDA_EZI2C__SHIFT EQU 1
SDA_EZI2C__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SDA_EZI2C__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SDA_EZI2C__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SDA_EZI2C__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SDA_EZI2C__SLW EQU CYREG_PRT12_SLW

; Pin_12_4
Pin_12_4__0__MASK EQU 0x10
Pin_12_4__0__PC EQU CYREG_PRT12_PC4
Pin_12_4__0__PORT EQU 12
Pin_12_4__0__SHIFT EQU 4
Pin_12_4__AG EQU CYREG_PRT12_AG
Pin_12_4__BIE EQU CYREG_PRT12_BIE
Pin_12_4__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Pin_12_4__BYP EQU CYREG_PRT12_BYP
Pin_12_4__DM0 EQU CYREG_PRT12_DM0
Pin_12_4__DM1 EQU CYREG_PRT12_DM1
Pin_12_4__DM2 EQU CYREG_PRT12_DM2
Pin_12_4__DR EQU CYREG_PRT12_DR
Pin_12_4__INP_DIS EQU CYREG_PRT12_INP_DIS
Pin_12_4__MASK EQU 0x10
Pin_12_4__PORT EQU 12
Pin_12_4__PRT EQU CYREG_PRT12_PRT
Pin_12_4__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Pin_12_4__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Pin_12_4__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Pin_12_4__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Pin_12_4__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Pin_12_4__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Pin_12_4__PS EQU CYREG_PRT12_PS
Pin_12_4__SHIFT EQU 4
Pin_12_4__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Pin_12_4__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Pin_12_4__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Pin_12_4__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Pin_12_4__SLW EQU CYREG_PRT12_SLW

; Pin_12_7
Pin_12_7__0__MASK EQU 0x80
Pin_12_7__0__PC EQU CYREG_PRT12_PC7
Pin_12_7__0__PORT EQU 12
Pin_12_7__0__SHIFT EQU 7
Pin_12_7__AG EQU CYREG_PRT12_AG
Pin_12_7__BIE EQU CYREG_PRT12_BIE
Pin_12_7__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Pin_12_7__BYP EQU CYREG_PRT12_BYP
Pin_12_7__DM0 EQU CYREG_PRT12_DM0
Pin_12_7__DM1 EQU CYREG_PRT12_DM1
Pin_12_7__DM2 EQU CYREG_PRT12_DM2
Pin_12_7__DR EQU CYREG_PRT12_DR
Pin_12_7__INP_DIS EQU CYREG_PRT12_INP_DIS
Pin_12_7__MASK EQU 0x80
Pin_12_7__PORT EQU 12
Pin_12_7__PRT EQU CYREG_PRT12_PRT
Pin_12_7__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Pin_12_7__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Pin_12_7__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Pin_12_7__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Pin_12_7__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Pin_12_7__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Pin_12_7__PS EQU CYREG_PRT12_PS
Pin_12_7__SHIFT EQU 7
Pin_12_7__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Pin_12_7__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Pin_12_7__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Pin_12_7__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Pin_12_7__SLW EQU CYREG_PRT12_SLW

; LED3
LED3__0__MASK EQU 0x04
LED3__0__PC EQU CYREG_PRT6_PC2
LED3__0__PORT EQU 6
LED3__0__SHIFT EQU 2
LED3__AG EQU CYREG_PRT6_AG
LED3__AMUX EQU CYREG_PRT6_AMUX
LED3__BIE EQU CYREG_PRT6_BIE
LED3__BIT_MASK EQU CYREG_PRT6_BIT_MASK
LED3__BYP EQU CYREG_PRT6_BYP
LED3__CTL EQU CYREG_PRT6_CTL
LED3__DM0 EQU CYREG_PRT6_DM0
LED3__DM1 EQU CYREG_PRT6_DM1
LED3__DM2 EQU CYREG_PRT6_DM2
LED3__DR EQU CYREG_PRT6_DR
LED3__INP_DIS EQU CYREG_PRT6_INP_DIS
LED3__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
LED3__LCD_EN EQU CYREG_PRT6_LCD_EN
LED3__MASK EQU 0x04
LED3__PORT EQU 6
LED3__PRT EQU CYREG_PRT6_PRT
LED3__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
LED3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
LED3__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
LED3__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
LED3__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
LED3__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
LED3__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
LED3__PS EQU CYREG_PRT6_PS
LED3__SHIFT EQU 2
LED3__SLW EQU CYREG_PRT6_SLW

; LED4
LED4__0__MASK EQU 0x08
LED4__0__PC EQU CYREG_PRT6_PC3
LED4__0__PORT EQU 6
LED4__0__SHIFT EQU 3
LED4__AG EQU CYREG_PRT6_AG
LED4__AMUX EQU CYREG_PRT6_AMUX
LED4__BIE EQU CYREG_PRT6_BIE
LED4__BIT_MASK EQU CYREG_PRT6_BIT_MASK
LED4__BYP EQU CYREG_PRT6_BYP
LED4__CTL EQU CYREG_PRT6_CTL
LED4__DM0 EQU CYREG_PRT6_DM0
LED4__DM1 EQU CYREG_PRT6_DM1
LED4__DM2 EQU CYREG_PRT6_DM2
LED4__DR EQU CYREG_PRT6_DR
LED4__INP_DIS EQU CYREG_PRT6_INP_DIS
LED4__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
LED4__LCD_EN EQU CYREG_PRT6_LCD_EN
LED4__MASK EQU 0x08
LED4__PORT EQU 6
LED4__PRT EQU CYREG_PRT6_PRT
LED4__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
LED4__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
LED4__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
LED4__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
LED4__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
LED4__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
LED4__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
LED4__PS EQU CYREG_PRT6_PS
LED4__SHIFT EQU 3
LED4__SLW EQU CYREG_PRT6_SLW

; SW2
SW2__0__MASK EQU 0x02
SW2__0__PC EQU CYREG_PRT6_PC1
SW2__0__PORT EQU 6
SW2__0__SHIFT EQU 1
SW2__AG EQU CYREG_PRT6_AG
SW2__AMUX EQU CYREG_PRT6_AMUX
SW2__BIE EQU CYREG_PRT6_BIE
SW2__BIT_MASK EQU CYREG_PRT6_BIT_MASK
SW2__BYP EQU CYREG_PRT6_BYP
SW2__CTL EQU CYREG_PRT6_CTL
SW2__DM0 EQU CYREG_PRT6_DM0
SW2__DM1 EQU CYREG_PRT6_DM1
SW2__DM2 EQU CYREG_PRT6_DM2
SW2__DR EQU CYREG_PRT6_DR
SW2__INP_DIS EQU CYREG_PRT6_INP_DIS
SW2__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
SW2__LCD_EN EQU CYREG_PRT6_LCD_EN
SW2__MASK EQU 0x02
SW2__PORT EQU 6
SW2__PRT EQU CYREG_PRT6_PRT
SW2__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
SW2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
SW2__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
SW2__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
SW2__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
SW2__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
SW2__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
SW2__PS EQU CYREG_PRT6_PS
SW2__SHIFT EQU 1
SW2__SLW EQU CYREG_PRT6_SLW

; SW3
SW3__0__MASK EQU 0x20
SW3__0__PC EQU CYREG_PRT15_PC5
SW3__0__PORT EQU 15
SW3__0__SHIFT EQU 5
SW3__AG EQU CYREG_PRT15_AG
SW3__AMUX EQU CYREG_PRT15_AMUX
SW3__BIE EQU CYREG_PRT15_BIE
SW3__BIT_MASK EQU CYREG_PRT15_BIT_MASK
SW3__BYP EQU CYREG_PRT15_BYP
SW3__CTL EQU CYREG_PRT15_CTL
SW3__DM0 EQU CYREG_PRT15_DM0
SW3__DM1 EQU CYREG_PRT15_DM1
SW3__DM2 EQU CYREG_PRT15_DM2
SW3__DR EQU CYREG_PRT15_DR
SW3__INP_DIS EQU CYREG_PRT15_INP_DIS
SW3__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
SW3__LCD_EN EQU CYREG_PRT15_LCD_EN
SW3__MASK EQU 0x20
SW3__PORT EQU 15
SW3__PRT EQU CYREG_PRT15_PRT
SW3__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
SW3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
SW3__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
SW3__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
SW3__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
SW3__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
SW3__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
SW3__PS EQU CYREG_PRT15_PS
SW3__SHIFT EQU 5
SW3__SLW EQU CYREG_PRT15_SLW

; Miscellaneous
; -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 0
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_MEMBER_5A EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_DIE_PANTHER EQU 2
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_DIE_PANTHER
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x0E13C069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5A
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REV_PANTHER_PRODUCTION
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_DATA_CACHE_ENABLED EQU 0
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_REQXRES EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DEBUG_ENABLE_MASK EQU 0x01
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DBG_DBE
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x1000
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x4000
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0 EQU 5
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1 EQU 5
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2 EQU 5
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3 EQU 5
CYDEV_VIO3_MV EQU 5000
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END