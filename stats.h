#ifndef stats_h
#define stats_h

#include <stdint.h>
#include "util.h"

typedef struct
{
	unsigned int user_spi_flash_dio_to_qio_pre_init:1;
	unsigned int user_rf_cal_sector_set:1;
	unsigned int user_rf_pre_init:1;
} stat_called_t;

extern stat_called_t stat_called;

extern int stat_uart_rx_interrupts;
extern int stat_uart_tx_interrupts;
extern int stat_fast_timer;
extern int stat_slow_timer;
extern int stat_pwm_timer_interrupts;
extern int stat_pc_interrupts;
extern int stat_i2c_init_time_us;
extern int stat_display_init_time_us;

extern int stat_update_uart;
extern int stat_update_longop;
extern int stat_update_command_udp;
extern int stat_update_command_tcp;
extern int stat_update_display;
extern int stat_update_ntp;
extern int stat_update_idle;

void stats_firmware(string_t *dst);
void stats_time(string_t *dst);
void stats_counters(string_t *dst);
void stats_i2c(string_t *dst);
void stats_wlan(string_t *dst);
#endif
