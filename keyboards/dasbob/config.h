// Copyright 2022 grooovebob (@grooovebob)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define DIRECT_PINS { \
    { GP13, GP28, GP12, GP29, GP0 }, \
    { GP22, GP14, GP26, GP4,  GP27}, \
    { GP21, GP23, GP7, GP20, GP6 }, \
    { GP16, GP9, GP8, NO_PIN, NO_PIN } \
}

#define DIRECT_PINS_RIGHT {  \
    { GP0, GP29, GP12, GP28, GP13 }, \
    { GP27, GP4, GP26, GP14, GP22}, \
    { GP6, GP20, GP7, GP23, GP21 }, \
    { GP8, GP9, GP16, NO_PIN, NO_PIN } \
}


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Serial Config */
#define USE_SERIAL
#define SERIAL_USART_TX_PIN GP1
#define MASTER_LEFT

/* I2C Pin mapping */
//#define I2C1_SDA_PIN GP7
//#define I2C1_SCL_PIN GP6
//#define I2C1_CLOCK_SPEED 400000
//#define I2C_DRIVER I2CD2

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_UNMOD 8
#define MK_C_INTERVAL_UNMOD 16
#define MK_C_OFFSET_0 2
#define MK_C_INTERVAL_0 16
#define MK_C_OFFSET_1 16
#define MK_C_INTERVAL_1 16
#define MK_C_OFFSET_2 32
#define MK_C_INTERVAL_2 16

#define MK_W_OFFSET_UNMOD 1
#define MK_W_INTERVAL_UNMOD 40
#define MK_W_OFFSET_0 1
#define MK_W_INTERVAL_0 80
#define MK_W_OFFSET_1 1
#define MK_W_INTERVAL_1 60
#define MK_W_OFFSET_2 1
#define MK_W_INTERVAL_2 10

#define COMBO_TERM 30

#define CAPS_WORD_INVERT_ON_SHIFT


// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define USB_VBUS_PIN 19
#define AUDIO_PWM_DRIVER PWMD2
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_B
#define AUDIO_STATE_TIMER GPTD4
#define AUDIO_PIN GP5
