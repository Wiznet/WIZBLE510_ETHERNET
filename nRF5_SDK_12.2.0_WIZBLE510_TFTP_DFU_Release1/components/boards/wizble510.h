/* Copyright (c) 2014 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */
#ifndef WIZBLE510_H
#define WIZBLE510_H

#define BSP_BUTTON_3   24
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define RX_PIN_NUMBER  25
#define TX_PIN_NUMBER  26
#define CTS_PIN_NUMBER 0xFF
#define RTS_PIN_NUMBER 0xFF
#define HWFC           false

#define SPIM0_SCK_PIN   10  // SPI clock GPIO pin number.
#define SPIM0_MOSI_PIN  8  // SPI Master Out Slave In GPIO pin number.
#define SPIM0_MISO_PIN  9  // SPI Master In Slave Out GPIO pin number.
#define SPIM0_SS_PIN    11  // SPI Slave Select GPIO pin number.

#define NRF_IO_2        2
#define NRF_IO_3        3
#define NRF_IO_4        4
#define NRF_IO_5        5
#define NRF_IO_12      12
#define NRF_IO_13      13
#define NRF_IO_14      14
#define NRF_IO_15      15
#define NRF_IO_16      16
#define NRF_IO_22      22
#define NRF_IO_23      23
#define NRF_IO_24      24

// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 0,                                \
                                 .rc_temp_ctiv  = 0,                                \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}

#endif // PCA10040_H
