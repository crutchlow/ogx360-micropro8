// Copyright 2021, Ryan Wendland, ogx360
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef _MAIN_H_
#define _MAIN_H_

#include "usbd/usbd_xid.h"
#include "usbh/usbh_xinput.h"

#ifndef MAX_GAMEPADS
#define MAX_GAMEPADS 4
#endif

#define USB_HOST_RESET_PIN 9
#define ARDUINO_LED_PIN 17
#define I2C_ADDRESS 0x3C
#define VCC_READ_PIN A0

#ifndef SB_DEFAULT_SENSITIVITY
#define SB_DEFAULT_SENSITIVITY 400
#endif

typedef struct
{
   xid_type_t type;
   usbd_duke_t duke;
   usbd_steelbattalion_t sb;
} usbd_controller_t;

void master_init();
void master_task();


#endif 
