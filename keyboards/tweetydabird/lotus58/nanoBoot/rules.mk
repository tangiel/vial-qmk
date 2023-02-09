# Copyright 2022 Markus Knutsson (@TweetyDaBird)
# SPDX-License-Identifier: GPL-2.0-or-later

# Using nanoBoot (a tiny 512kB HID bootloader) gives roughly 4000kB more usable memory vs Caterina.
BOOTLOADER = qmk-hid
BOOTLOADER_SIZE = 512

# Standard ProMicro bootloader
#BOOTLOADER = caterina

# Possible options for Elite C bootloader (Double check! This breaks things if wrong!)
#BOOTLOADER = qmk-dfu
#BOOTLOADER = atmel-dfu
