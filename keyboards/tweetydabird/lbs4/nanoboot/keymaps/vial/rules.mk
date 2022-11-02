# Copyright 2022 Markus Knutsson (@TweetyDaBird)
# SPDX-License-Identifier: GPL-2.0-or-later

# Using nanoBoot (a tiny 512kB HID bootloader) gives roughly 4000kB more usable memory vs Caterina.
BOOTLOADER = qmk-hid
BOOTLOADER_SIZE = 512

# Link Time Optimization
LTO_ENABLE = yes			# Optimize size at compile (takes longer time)

# Additional rules for VIAL
VIA_ENABLE = yes
VIAL_ENABLE = yes

ENCODER_MAP_ENABLE = yes

QMK_SETTINGS = no
KEY_OVERRIDE_ENABLE = no