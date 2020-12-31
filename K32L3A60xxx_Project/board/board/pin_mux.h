/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
    kPIN_MUX_DirectionInput = 0U,        /* Input direction */
    kPIN_MUX_DirectionOutput = 1U,       /* Output direction */
    kPIN_MUX_DirectionInputOrOutput = 2U /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins_cm4(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTA0 (coord B10), BUTTON_NMI
  @{ */
#define BOARD_INITBUTTONSPINS_SW2_PERIPHERAL GPIOA                  /*!<@brief Device name: GPIOA */
#define BOARD_INITBUTTONSPINS_SW2_SIGNAL GPIO                       /*!<@brief GPIOA signal: GPIO */
#define BOARD_INITBUTTONSPINS_SW2_GPIO GPIOA                        /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITBUTTONSPINS_SW2_GPIO_PIN 0U                       /*!<@brief PORTA pin index: 0 */
#define BOARD_INITBUTTONSPINS_SW2_PORT PORTA                        /*!<@brief PORT device name: PORTA */
#define BOARD_INITBUTTONSPINS_SW2_PIN 0U                            /*!<@brief PORTA pin index: 0 */
#define BOARD_INITBUTTONSPINS_SW2_CHANNEL 0                         /*!<@brief GPIOA GPIO channel: 0 */
#define BOARD_INITBUTTONSPINS_SW2_PIN_NAME PTA0                     /*!<@brief Pin name */
#define BOARD_INITBUTTONSPINS_SW2_LABEL "BUTTON_NMI"                /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_SW2_NAME "SW2"                        /*!<@brief Identifier name */
#define BOARD_INITBUTTONSPINS_SW2_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                    /* @} */

/*! @name PORTE8 (coord P16), BUTTON_LLWUP23
  @{ */
#define BOARD_INITBUTTONSPINS_SW3_PERIPHERAL GPIOE                  /*!<@brief Device name: GPIOE */
#define BOARD_INITBUTTONSPINS_SW3_SIGNAL GPIO                       /*!<@brief GPIOE signal: GPIO */
#define BOARD_INITBUTTONSPINS_SW3_FGPIO FGPIOE                      /*!<@brief FGPIO device name: FGPIOE */
#define BOARD_INITBUTTONSPINS_SW3_GPIO GPIOE                        /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITBUTTONSPINS_SW3_GPIO_PIN 8U                       /*!<@brief PORTE pin index: 8 */
#define BOARD_INITBUTTONSPINS_SW3_PORT PORTE                        /*!<@brief PORT device name: PORTE */
#define BOARD_INITBUTTONSPINS_SW3_PIN 8U                            /*!<@brief PORTE pin index: 8 */
#define BOARD_INITBUTTONSPINS_SW3_CHANNEL 8                         /*!<@brief GPIOE GPIO channel: 8 */
#define BOARD_INITBUTTONSPINS_SW3_PIN_NAME PTE8                     /*!<@brief Pin name */
#define BOARD_INITBUTTONSPINS_SW3_LABEL "BUTTON_LLWUP23"            /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_SW3_NAME "SW3"                        /*!<@brief Identifier name */
#define BOARD_INITBUTTONSPINS_SW3_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                    /* @} */

/*! @name PORTE9 (coord N16), BUTTON_LLWUP24
  @{ */
#define BOARD_INITBUTTONSPINS_SW4_PERIPHERAL GPIOE                  /*!<@brief Device name: GPIOE */
#define BOARD_INITBUTTONSPINS_SW4_SIGNAL GPIO                       /*!<@brief GPIOE signal: GPIO */
#define BOARD_INITBUTTONSPINS_SW4_FGPIO FGPIOE                      /*!<@brief FGPIO device name: FGPIOE */
#define BOARD_INITBUTTONSPINS_SW4_GPIO GPIOE                        /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITBUTTONSPINS_SW4_GPIO_PIN 9U                       /*!<@brief PORTE pin index: 9 */
#define BOARD_INITBUTTONSPINS_SW4_PORT PORTE                        /*!<@brief PORT device name: PORTE */
#define BOARD_INITBUTTONSPINS_SW4_PIN 9U                            /*!<@brief PORTE pin index: 9 */
#define BOARD_INITBUTTONSPINS_SW4_CHANNEL 9                         /*!<@brief GPIOE GPIO channel: 9 */
#define BOARD_INITBUTTONSPINS_SW4_PIN_NAME PTE9                     /*!<@brief Pin name */
#define BOARD_INITBUTTONSPINS_SW4_LABEL "BUTTON_LLWUP24"            /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_SW4_NAME "SW4"                        /*!<@brief Identifier name */
#define BOARD_INITBUTTONSPINS_SW4_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                    /* @} */

/*! @name PORTE12 (coord L12), BUTTON_LLWUP26
  @{ */
#define BOARD_INITBUTTONSPINS_SW5_PERIPHERAL GPIOE                  /*!<@brief Device name: GPIOE */
#define BOARD_INITBUTTONSPINS_SW5_SIGNAL GPIO                       /*!<@brief GPIOE signal: GPIO */
#define BOARD_INITBUTTONSPINS_SW5_FGPIO FGPIOE                      /*!<@brief FGPIO device name: FGPIOE */
#define BOARD_INITBUTTONSPINS_SW5_GPIO GPIOE                        /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITBUTTONSPINS_SW5_GPIO_PIN 12U                      /*!<@brief PORTE pin index: 12 */
#define BOARD_INITBUTTONSPINS_SW5_PORT PORTE                        /*!<@brief PORT device name: PORTE */
#define BOARD_INITBUTTONSPINS_SW5_PIN 12U                           /*!<@brief PORTE pin index: 12 */
#define BOARD_INITBUTTONSPINS_SW5_CHANNEL 12                        /*!<@brief GPIOE GPIO channel: 12 */
#define BOARD_INITBUTTONSPINS_SW5_PIN_NAME PTE12                    /*!<@brief Pin name */
#define BOARD_INITBUTTONSPINS_SW5_LABEL "BUTTON_LLWUP26"            /*!<@brief Label */
#define BOARD_INITBUTTONSPINS_SW5_NAME "SW5"                        /*!<@brief Identifier name */
#define BOARD_INITBUTTONSPINS_SW5_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                    /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitButtonsPins(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTA22 (coord B6), Q6[2]/LED_BLUE
  @{ */
#define BOARD_INITLEDSPINS_RGB_BLUE_PERIPHERAL GPIOA                   /*!<@brief Device name: GPIOA */
#define BOARD_INITLEDSPINS_RGB_BLUE_SIGNAL GPIO                        /*!<@brief GPIOA signal: GPIO */
#define BOARD_INITLEDSPINS_RGB_BLUE_GPIO GPIOA                         /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITLEDSPINS_RGB_BLUE_GPIO_PIN 22U                       /*!<@brief PORTA pin index: 22 */
#define BOARD_INITLEDSPINS_RGB_BLUE_PORT PORTA                         /*!<@brief PORT device name: PORTA */
#define BOARD_INITLEDSPINS_RGB_BLUE_PIN 22U                            /*!<@brief PORTA pin index: 22 */
#define BOARD_INITLEDSPINS_RGB_BLUE_CHANNEL 22                         /*!<@brief GPIOA GPIO channel: 22 */
#define BOARD_INITLEDSPINS_RGB_BLUE_PIN_NAME PTA22                     /*!<@brief Pin name */
#define BOARD_INITLEDSPINS_RGB_BLUE_LABEL "Q6[2]/LED_BLUE"             /*!<@brief Label */
#define BOARD_INITLEDSPINS_RGB_BLUE_NAME "RGB_BLUE"                    /*!<@brief Identifier name */
#define BOARD_INITLEDSPINS_RGB_BLUE_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                       /* @} */

/*! @name PORTA23 (coord E6), Q7[5]/LED_GREEN
  @{ */
#define BOARD_INITLEDSPINS_RGB_GREEN_PERIPHERAL GPIOA                   /*!<@brief Device name: GPIOA */
#define BOARD_INITLEDSPINS_RGB_GREEN_SIGNAL GPIO                        /*!<@brief GPIOA signal: GPIO */
#define BOARD_INITLEDSPINS_RGB_GREEN_GPIO GPIOA                         /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITLEDSPINS_RGB_GREEN_GPIO_PIN 23U                       /*!<@brief PORTA pin index: 23 */
#define BOARD_INITLEDSPINS_RGB_GREEN_PORT PORTA                         /*!<@brief PORT device name: PORTA */
#define BOARD_INITLEDSPINS_RGB_GREEN_PIN 23U                            /*!<@brief PORTA pin index: 23 */
#define BOARD_INITLEDSPINS_RGB_GREEN_CHANNEL 23                         /*!<@brief GPIOA GPIO channel: 23 */
#define BOARD_INITLEDSPINS_RGB_GREEN_PIN_NAME PTA23                     /*!<@brief Pin name */
#define BOARD_INITLEDSPINS_RGB_GREEN_LABEL "Q7[5]/LED_GREEN"            /*!<@brief Label */
#define BOARD_INITLEDSPINS_RGB_GREEN_NAME "RGB_GREEN"                   /*!<@brief Identifier name */
#define BOARD_INITLEDSPINS_RGB_GREEN_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                        /* @} */

/*! @name PORTA24 (coord D6), Q7[2]/LED_RED
  @{ */
#define BOARD_INITLEDSPINS_RGB_RED_PERIPHERAL GPIOA                   /*!<@brief Device name: GPIOA */
#define BOARD_INITLEDSPINS_RGB_RED_SIGNAL GPIO                        /*!<@brief GPIOA signal: GPIO */
#define BOARD_INITLEDSPINS_RGB_RED_GPIO GPIOA                         /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITLEDSPINS_RGB_RED_GPIO_PIN 24U                       /*!<@brief PORTA pin index: 24 */
#define BOARD_INITLEDSPINS_RGB_RED_PORT PORTA                         /*!<@brief PORT device name: PORTA */
#define BOARD_INITLEDSPINS_RGB_RED_PIN 24U                            /*!<@brief PORTA pin index: 24 */
#define BOARD_INITLEDSPINS_RGB_RED_CHANNEL 24                         /*!<@brief GPIOA GPIO channel: 24 */
#define BOARD_INITLEDSPINS_RGB_RED_PIN_NAME PTA24                     /*!<@brief Pin name */
#define BOARD_INITLEDSPINS_RGB_RED_LABEL "Q7[2]/LED_RED"              /*!<@brief Label */
#define BOARD_INITLEDSPINS_RGB_RED_NAME "RGB_RED"                     /*!<@brief Identifier name */
#define BOARD_INITLEDSPINS_RGB_RED_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                      /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLEDsPins(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTC7 (coord N2), U40[1]/K32L_UART0_RX
  @{ */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_PERIPHERAL LPUART0           /*!<@brief Device name: LPUART0 */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_SIGNAL RX                    /*!<@brief LPUART0 signal: RX */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_PORT PORTC                   /*!<@brief PORT device name: PORTC */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_PIN 7U                       /*!<@brief PORTC pin index: 7 */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_PIN_NAME LPUART0_RX          /*!<@brief Pin name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_LABEL "U40[1]/K32L_UART0_RX" /*!<@brief Label */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_RX_NAME "DEBUG_UART0_RX"        /*!<@brief Identifier name */
                                                                             /* @} */

/*! @name PORTC8 (coord P3), U11[1]/K32L_UART0_TX
  @{ */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_PERIPHERAL LPUART0           /*!<@brief Device name: LPUART0 */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_SIGNAL TX                    /*!<@brief LPUART0 signal: TX */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_PORT PORTC                   /*!<@brief PORT device name: PORTC */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_PIN 8U                       /*!<@brief PORTC pin index: 8 */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_PIN_NAME LPUART0_TX          /*!<@brief Pin name */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_LABEL "U11[1]/K32L_UART0_TX" /*!<@brief Label */
#define BOARD_INITDEBUG_UARTPINS_DEBUG_UART0_TX_NAME "DEBUG_UART0_TX"        /*!<@brief Identifier name */
                                                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitDEBUG_UARTPins(void); /* Function assigned for the Cortex-M4F */

/*! @name EXTAL32 (coord E16), Y1[1]/EXTAL_32KHZ
  @{ */
#define BOARD_INITOSCPINS_EXTAL32_PERIPHERAL RTC            /*!<@brief Device name: RTC */
#define BOARD_INITOSCPINS_EXTAL32_SIGNAL EXTAL32            /*!<@brief RTC signal: EXTAL32 */
#define BOARD_INITOSCPINS_EXTAL32_PIN_NAME EXTAL32          /*!<@brief Pin name */
#define BOARD_INITOSCPINS_EXTAL32_LABEL "Y1[1]/EXTAL_32KHZ" /*!<@brief Label */
#define BOARD_INITOSCPINS_EXTAL32_NAME "EXTAL32"            /*!<@brief Identifier name */
                                                            /* @} */

/*! @name XTAL32 (coord E17), Y1[2]/XTAL_32KHZ
  @{ */
#define BOARD_INITOSCPINS_XTAL32_PERIPHERAL RTC           /*!<@brief Device name: RTC */
#define BOARD_INITOSCPINS_XTAL32_SIGNAL XTAL32            /*!<@brief RTC signal: XTAL32 */
#define BOARD_INITOSCPINS_XTAL32_PIN_NAME XTAL32          /*!<@brief Pin name */
#define BOARD_INITOSCPINS_XTAL32_LABEL "Y1[2]/XTAL_32KHZ" /*!<@brief Label */
#define BOARD_INITOSCPINS_XTAL32_NAME "XTAL32"            /*!<@brief Identifier name */
                                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitOSCPins(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTE30 (coord G17), U14[4]/ACCEL_I2C3_SCL
  @{ */
#define BOARD_INITACCELPINS_ACCEL_SCL_PERIPHERAL LPI2C3             /*!<@brief Device name: LPI2C3 */
#define BOARD_INITACCELPINS_ACCEL_SCL_SIGNAL SCL                    /*!<@brief LPI2C3 signal: SCL */
#define BOARD_INITACCELPINS_ACCEL_SCL_PORT PORTE                    /*!<@brief PORT device name: PORTE */
#define BOARD_INITACCELPINS_ACCEL_SCL_PIN 30U                       /*!<@brief PORTE pin index: 30 */
#define BOARD_INITACCELPINS_ACCEL_SCL_PIN_NAME LPI2C3_SCL           /*!<@brief Pin name */
#define BOARD_INITACCELPINS_ACCEL_SCL_LABEL "U14[4]/ACCEL_I2C3_SCL" /*!<@brief Label */
#define BOARD_INITACCELPINS_ACCEL_SCL_NAME "ACCEL_SCL"              /*!<@brief Identifier name */
                                                                    /* @} */

/*! @name PORTE29 (coord G15), U14[6]/ACCEL_I2C3_SDA
  @{ */
#define BOARD_INITACCELPINS_ACCEL_SDA_PERIPHERAL LPI2C3             /*!<@brief Device name: LPI2C3 */
#define BOARD_INITACCELPINS_ACCEL_SDA_SIGNAL SDA                    /*!<@brief LPI2C3 signal: SDA */
#define BOARD_INITACCELPINS_ACCEL_SDA_PORT PORTE                    /*!<@brief PORT device name: PORTE */
#define BOARD_INITACCELPINS_ACCEL_SDA_PIN 29U                       /*!<@brief PORTE pin index: 29 */
#define BOARD_INITACCELPINS_ACCEL_SDA_PIN_NAME LPI2C3_SDA           /*!<@brief Pin name */
#define BOARD_INITACCELPINS_ACCEL_SDA_LABEL "U14[6]/ACCEL_I2C3_SDA" /*!<@brief Label */
#define BOARD_INITACCELPINS_ACCEL_SDA_NAME "ACCEL_SDA"              /*!<@brief Identifier name */
                                                                    /* @} */

/*! @name PORTE1 (coord R16), U14[11]/ACCEL_INT1
  @{ */
#define BOARD_INITACCELPINS_ACCEL_INT1_PERIPHERAL GPIOE                  /*!<@brief Device name: GPIOE */
#define BOARD_INITACCELPINS_ACCEL_INT1_SIGNAL GPIO                       /*!<@brief GPIOE signal: GPIO */
#define BOARD_INITACCELPINS_ACCEL_INT1_FGPIO FGPIOE                      /*!<@brief FGPIO device name: FGPIOE */
#define BOARD_INITACCELPINS_ACCEL_INT1_GPIO GPIOE                        /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITACCELPINS_ACCEL_INT1_GPIO_PIN 1U                       /*!<@brief PORTE pin index: 1 */
#define BOARD_INITACCELPINS_ACCEL_INT1_PORT PORTE                        /*!<@brief PORT device name: PORTE */
#define BOARD_INITACCELPINS_ACCEL_INT1_PIN 1U                            /*!<@brief PORTE pin index: 1 */
#define BOARD_INITACCELPINS_ACCEL_INT1_CHANNEL 1                         /*!<@brief GPIOE GPIO channel: 1 */
#define BOARD_INITACCELPINS_ACCEL_INT1_PIN_NAME PTE1                     /*!<@brief Pin name */
#define BOARD_INITACCELPINS_ACCEL_INT1_LABEL "U14[11]/ACCEL_INT1"        /*!<@brief Label */
#define BOARD_INITACCELPINS_ACCEL_INT1_NAME "ACCEL_INT1"                 /*!<@brief Identifier name */
#define BOARD_INITACCELPINS_ACCEL_INT1_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                         /* @} */

/*! @name PORTE22 (coord J16), U14[9]/ACCEL_INT2
  @{ */
#define BOARD_INITACCELPINS_ACCEL_INT2_PERIPHERAL GPIOE                  /*!<@brief Device name: GPIOE */
#define BOARD_INITACCELPINS_ACCEL_INT2_SIGNAL GPIO                       /*!<@brief GPIOE signal: GPIO */
#define BOARD_INITACCELPINS_ACCEL_INT2_FGPIO FGPIOE                      /*!<@brief FGPIO device name: FGPIOE */
#define BOARD_INITACCELPINS_ACCEL_INT2_GPIO GPIOE                        /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITACCELPINS_ACCEL_INT2_GPIO_PIN 22U                      /*!<@brief PORTE pin index: 22 */
#define BOARD_INITACCELPINS_ACCEL_INT2_PORT PORTE                        /*!<@brief PORT device name: PORTE */
#define BOARD_INITACCELPINS_ACCEL_INT2_PIN 22U                           /*!<@brief PORTE pin index: 22 */
#define BOARD_INITACCELPINS_ACCEL_INT2_CHANNEL 22                        /*!<@brief GPIOE GPIO channel: 22 */
#define BOARD_INITACCELPINS_ACCEL_INT2_PIN_NAME PTE22                    /*!<@brief Pin name */
#define BOARD_INITACCELPINS_ACCEL_INT2_LABEL "U14[9]/ACCEL_INT2"         /*!<@brief Label */
#define BOARD_INITACCELPINS_ACCEL_INT2_NAME "ACCEL_INT2"                 /*!<@brief Identifier name */
#define BOARD_INITACCELPINS_ACCEL_INT2_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                         /* @} */

/*! @name PORTE27 (coord H14), U14[16]/ACCEL_RST
  @{ */
#define BOARD_INITACCELPINS_ACCEL_RST_PERIPHERAL GPIOE                   /*!<@brief Device name: GPIOE */
#define BOARD_INITACCELPINS_ACCEL_RST_SIGNAL GPIO                        /*!<@brief GPIOE signal: GPIO */
#define BOARD_INITACCELPINS_ACCEL_RST_FGPIO FGPIOE                       /*!<@brief FGPIO device name: FGPIOE */
#define BOARD_INITACCELPINS_ACCEL_RST_GPIO GPIOE                         /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITACCELPINS_ACCEL_RST_GPIO_PIN 27U                       /*!<@brief PORTE pin index: 27 */
#define BOARD_INITACCELPINS_ACCEL_RST_PORT PORTE                         /*!<@brief PORT device name: PORTE */
#define BOARD_INITACCELPINS_ACCEL_RST_PIN 27U                            /*!<@brief PORTE pin index: 27 */
#define BOARD_INITACCELPINS_ACCEL_RST_CHANNEL 27                         /*!<@brief GPIOE GPIO channel: 27 */
#define BOARD_INITACCELPINS_ACCEL_RST_PIN_NAME PTE27                     /*!<@brief Pin name */
#define BOARD_INITACCELPINS_ACCEL_RST_LABEL "U14[16]/ACCEL_RST"          /*!<@brief Label */
#define BOARD_INITACCELPINS_ACCEL_RST_NAME "ACCEL_RST"                   /*!<@brief Identifier name */
#define BOARD_INITACCELPINS_ACCEL_RST_DIRECTION kPIN_MUX_DirectionOutput /*!<@brief Direction */
                                                                         /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitACCELPins(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTB9 (coord F4), J4[6]/J47[2]/ARDUINO_A2/ADC0_SE3
  @{ */
/*!
 * @brief Device name: GPIOB */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_PERIPHERAL GPIOB
/*!
 * @brief GPIOB signal: GPIO */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_SIGNAL GPIO
/*!
 * @brief GPIO device name: GPIOB */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_GPIO GPIOB
/*!
 * @brief PORTB pin index: 9 */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_GPIO_PIN 9U
/*!
 * @brief PORT device name: PORTB */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_PORT PORTB
/*!
 * @brief PORTB pin index: 9 */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_PIN 9U
/*!
 * @brief GPIOB GPIO channel: 9 */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_CHANNEL 9
/*!
 * @brief Pin name */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_PIN_NAME PTB9
/*!
 * @brief Label */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_LABEL "J4[6]/J47[2]/ARDUINO_A2/ADC0_SE3"
/*!
 * @brief Identifier name */
#define BOARD_INITLIGHT_SENSORPINS_SNS_LIGHT_ADC_NAME "SNS_LIGHT_ADC"
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitLIGHT_SENSORPins(void); /* Function assigned for the Cortex-M4F */

/*! @name USB0_DM (coord T12), J8[2]/K32L_USB_DN
  @{ */
#define BOARD_INITUSBPINS_USB0_DM_PERIPHERAL USB0           /*!<@brief Device name: USB0 */
#define BOARD_INITUSBPINS_USB0_DM_SIGNAL DM                 /*!<@brief USB0 signal: DM */
#define BOARD_INITUSBPINS_USB0_DM_PIN_NAME USB0_DM          /*!<@brief Pin name */
#define BOARD_INITUSBPINS_USB0_DM_LABEL "J8[2]/K32L_USB_DN" /*!<@brief Label */
#define BOARD_INITUSBPINS_USB0_DM_NAME "USB0_DM"            /*!<@brief Identifier name */
                                                            /* @} */

/*! @name USB0_DP (coord T11), J8[3]/K32L_USB_DP
  @{ */
#define BOARD_INITUSBPINS_USB0_DP_PERIPHERAL USB0           /*!<@brief Device name: USB0 */
#define BOARD_INITUSBPINS_USB0_DP_SIGNAL DP                 /*!<@brief USB0 signal: DP */
#define BOARD_INITUSBPINS_USB0_DP_PIN_NAME USB0_DP          /*!<@brief Pin name */
#define BOARD_INITUSBPINS_USB0_DP_LABEL "J8[3]/K32L_USB_DP" /*!<@brief Label */
#define BOARD_INITUSBPINS_USB0_DP_NAME "USB0_DP"            /*!<@brief Identifier name */
                                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitUSBPins(void); /* Function assigned for the Cortex-M4F */

/*! @name PORTD11 (coord R11), J9[P1]/SDHC0_D2
  @{ */
#define BOARD_INITSDHCPINS_SDHC0_D2_PERIPHERAL USDHC0       /*!<@brief Device name: USDHC0 */
#define BOARD_INITSDHCPINS_SDHC0_D2_SIGNAL DATA             /*!<@brief USDHC0 signal: DATA */
#define BOARD_INITSDHCPINS_SDHC0_D2_PORT PORTD              /*!<@brief PORT device name: PORTD */
#define BOARD_INITSDHCPINS_SDHC0_D2_PIN 11U                 /*!<@brief PORTD pin index: 11 */
#define BOARD_INITSDHCPINS_SDHC0_D2_CHANNEL 2               /*!<@brief USDHC0 DATA channel: 2 */
#define BOARD_INITSDHCPINS_SDHC0_D2_PIN_NAME SDHC0_D2       /*!<@brief Pin name */
#define BOARD_INITSDHCPINS_SDHC0_D2_LABEL "J9[P1]/SDHC0_D2" /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_D2_NAME "SDHC0_D2"         /*!<@brief Identifier name */
                                                            /* @} */

/*! @name PORTD10 (coord P11), J9[P2]/SDHC0_D3
  @{ */
#define BOARD_INITSDHCPINS_SDHC0_D3_PERIPHERAL USDHC0       /*!<@brief Device name: USDHC0 */
#define BOARD_INITSDHCPINS_SDHC0_D3_SIGNAL DATA             /*!<@brief USDHC0 signal: DATA */
#define BOARD_INITSDHCPINS_SDHC0_D3_PORT PORTD              /*!<@brief PORT device name: PORTD */
#define BOARD_INITSDHCPINS_SDHC0_D3_PIN 10U                 /*!<@brief PORTD pin index: 10 */
#define BOARD_INITSDHCPINS_SDHC0_D3_CHANNEL 3               /*!<@brief USDHC0 DATA channel: 3 */
#define BOARD_INITSDHCPINS_SDHC0_D3_PIN_NAME SDHC0_D3       /*!<@brief Pin name */
#define BOARD_INITSDHCPINS_SDHC0_D3_LABEL "J9[P2]/SDHC0_D3" /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_D3_NAME "SDHC0_D3"         /*!<@brief Identifier name */
                                                            /* @} */

/*! @name PORTD9 (coord U11), J9[P3]/SDHC0_CMD
  @{ */
#define BOARD_INITSDHCPINS_SDHC0_CMD_PERIPHERAL USDHC0        /*!<@brief Device name: USDHC0 */
#define BOARD_INITSDHCPINS_SDHC0_CMD_SIGNAL CMD               /*!<@brief USDHC0 signal: CMD */
#define BOARD_INITSDHCPINS_SDHC0_CMD_PORT PORTD               /*!<@brief PORT device name: PORTD */
#define BOARD_INITSDHCPINS_SDHC0_CMD_PIN 9U                   /*!<@brief PORTD pin index: 9 */
#define BOARD_INITSDHCPINS_SDHC0_CMD_PIN_NAME SDHC0_CMD       /*!<@brief Pin name */
#define BOARD_INITSDHCPINS_SDHC0_CMD_LABEL "J9[P3]/SDHC0_CMD" /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_CMD_NAME "SDHC0_CMD"         /*!<@brief Identifier name */
                                                              /* @} */

/*! @name PORTD8 (coord T9), J9[P5]/SDHC0_DCLK
  @{ */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_PERIPHERAL USDHC0         /*!<@brief Device name: USDHC0 */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_SIGNAL DCLK               /*!<@brief USDHC0 signal: DCLK */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_PORT PORTD                /*!<@brief PORT device name: PORTD */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_PIN 8U                    /*!<@brief PORTD pin index: 8 */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_PIN_NAME SDHC0_DCLK       /*!<@brief Pin name */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_LABEL "J9[P5]/SDHC0_DCLK" /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_DCLK_NAME "SDHC0_DCLK"         /*!<@brief Identifier name */
                                                                /* @} */

/*! @name PORTD7 (coord P10), J9[P7]/SDHC0_D0
  @{ */
#define BOARD_INITSDHCPINS_SDHC0_D0_PERIPHERAL USDHC0       /*!<@brief Device name: USDHC0 */
#define BOARD_INITSDHCPINS_SDHC0_D0_SIGNAL DATA             /*!<@brief USDHC0 signal: DATA */
#define BOARD_INITSDHCPINS_SDHC0_D0_PORT PORTD              /*!<@brief PORT device name: PORTD */
#define BOARD_INITSDHCPINS_SDHC0_D0_PIN 7U                  /*!<@brief PORTD pin index: 7 */
#define BOARD_INITSDHCPINS_SDHC0_D0_CHANNEL 0               /*!<@brief USDHC0 DATA channel: 0 */
#define BOARD_INITSDHCPINS_SDHC0_D0_PIN_NAME SDHC0_D0       /*!<@brief Pin name */
#define BOARD_INITSDHCPINS_SDHC0_D0_LABEL "J9[P7]/SDHC0_D0" /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_D0_NAME "SDHC0_D0"         /*!<@brief Identifier name */
                                                            /* @} */

/*! @name PORTD6 (coord U9), J9[P8]/SDHC0_D1
  @{ */
#define BOARD_INITSDHCPINS_SDHC0_D1_PERIPHERAL USDHC0       /*!<@brief Device name: USDHC0 */
#define BOARD_INITSDHCPINS_SDHC0_D1_SIGNAL DATA             /*!<@brief USDHC0 signal: DATA */
#define BOARD_INITSDHCPINS_SDHC0_D1_PORT PORTD              /*!<@brief PORT device name: PORTD */
#define BOARD_INITSDHCPINS_SDHC0_D1_PIN 6U                  /*!<@brief PORTD pin index: 6 */
#define BOARD_INITSDHCPINS_SDHC0_D1_CHANNEL 1               /*!<@brief USDHC0 DATA channel: 1 */
#define BOARD_INITSDHCPINS_SDHC0_D1_PIN_NAME SDHC0_D1       /*!<@brief Pin name */
#define BOARD_INITSDHCPINS_SDHC0_D1_LABEL "J9[P8]/SDHC0_D1" /*!<@brief Label */
#define BOARD_INITSDHCPINS_SDHC0_D1_NAME "SDHC0_D1"         /*!<@brief Identifier name */
                                                            /* @} */

/*! @name PORTC27 (coord P6), J9[G1]/SD_DETECT
  @{ */
#define BOARD_INITSDHCPINS_SD_DETECT_PERIPHERAL GPIOC                  /*!<@brief Device name: GPIOC */
#define BOARD_INITSDHCPINS_SD_DETECT_SIGNAL GPIO                       /*!<@brief GPIOC signal: GPIO */
#define BOARD_INITSDHCPINS_SD_DETECT_GPIO GPIOC                        /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITSDHCPINS_SD_DETECT_GPIO_PIN 27U                      /*!<@brief PORTC pin index: 27 */
#define BOARD_INITSDHCPINS_SD_DETECT_PORT PORTC                        /*!<@brief PORT device name: PORTC */
#define BOARD_INITSDHCPINS_SD_DETECT_PIN 27U                           /*!<@brief PORTC pin index: 27 */
#define BOARD_INITSDHCPINS_SD_DETECT_CHANNEL 27                        /*!<@brief GPIOC GPIO channel: 27 */
#define BOARD_INITSDHCPINS_SD_DETECT_PIN_NAME PTC27                    /*!<@brief Pin name */
#define BOARD_INITSDHCPINS_SD_DETECT_LABEL "J9[G1]/SD_DETECT"          /*!<@brief Label */
#define BOARD_INITSDHCPINS_SD_DETECT_NAME "SD_DETECT"                  /*!<@brief Identifier name */
#define BOARD_INITSDHCPINS_SD_DETECT_DIRECTION kPIN_MUX_DirectionInput /*!<@brief Direction */
                                                                       /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitSDHCPins(void); /* Function assigned for the Cortex-M4F */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
