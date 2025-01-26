#pragma once

/* Configure Split Keyboard communication */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

/* Change Debounce time from 5ms to 10ms for less noise with asym_defer_pk*/
#define DEBOUNCE 10

/* Change Mouse acceleration */
#define MOUSEKEY_INERTIA
#define MOUSEKEY_DELAY 100
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_TIME_TO_MAX 32
#define MOUSEKEY_MAX_SPEED 48
#define MOUSEKEY_FRICTION 24
#define MOUSEKEY_MOVE_DELTA 1

/* Change Tapping Term increment */
#define TAPPING_TERM 200
#define DYNAMIC_TAPPING_TERM_INCREMENT 50

/* Change emulated EEPROM size*/
#define WEAR_LEVELING_RP2040_FLASH_SIZE (2*1024*1024)
#define WEAR_LEVELING_RP2040_FLASH_BASE (2*1024*1024-65536)
#define WEAR_LEVELING_LOGICAL_SIZE (65536/2)
#define WEAR_LEVELING_BACKING_SIZE 65536
#define BACKING_STORE_WRITE_SIZE 2