// Copyright (c) 2019, XMOS Ltd, All rights reserved

#ifndef I2S_DRIVER_H_
#define I2S_DRIVER_H_

#include "soc.h"

soc_peripheral_t i2s_driver_init(
        int device_id,
        int rx_desc_count,
        int rx_buf_size,
        int tx_desc_count,
        void *app_data,
        int isr_core,
        rtos_irq_isr_t isr);

#endif /* I2S_DRIVER_H_ */
