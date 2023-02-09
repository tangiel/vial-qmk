# Copyright 2022 Markus Knutsson (@TweetyDaBird)
# SPDX-License-Identifier: GPL-2.0-or-later

# Needed for VIAL compatability (all are needed)
VIA_ENABLE = yes
VIAL_ENABLE = yes
ENCODER_MAP_ENABLE = yes

# Optimize for size (takes longer time but necessary for VIAL)
LTO_ENABLE = yes

# Reduce size by disabling
TAP_DANCE_ENABLE = no
QMK_SETTINGS = no
KEY_OVERRIDE_ENABLE = no
COMBO_ENABLE = no
AUTO_SHIFT_ENABLE = no
