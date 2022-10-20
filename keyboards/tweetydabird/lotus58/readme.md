# Lotus 58 Glow

![lotus58](https://i.imgur.com/WWgpp0S.jpg)

Starting with simple tweaks to the Lily58 Glow before ordering a set of PCB's it quickly spiraled out of control, and I ended up with what wasn't quite a Lily58 anymore, and although very similar in layout, it is no longer compatible with plate and case design. 

Because of this, it was renamed Lotus58, referencing another flower much like the lily in the name Lily58.

## General Specifications

- Layout very similar to the original Lily58 family
- Per key RGB and RGB underglow
- Kaihl Hot-swap sockets for MX compatible switches
- Can be used as a standalone Gamepad for either hand
- Optional 0.91" OLED Screens and rotary encoders (one each per side)
- All components through-hole and easily soldered for beginners (SMD option for diodes)
- Designed with a sandwich-style plate/case as part of the design

* Keyboard Maintainer: [Markus Knutsson](https://github.com/TweetyDaBird)
* Hardware Supported: [LittleBigScroll 4 PCB](https://github.com/TweetyDaBird/Lotus58), Pro Micro or pin-compatible
* Hardware Availability: https://lectronz.com/stores/tweetys-wild-thinking

## Make example for this keyboard (after setting up your build environment):

    make tweetydabird/lotus58:vial

Flashing example for this keyboard:

    make tweetydabird/lotus58:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top outer key for each hand and plug in the keyboard
* **Physical reset button**: Briefly short the two pads on the top right of the PCB, next to the USB cable
* **Keycode**: Assign the keycode to a button
