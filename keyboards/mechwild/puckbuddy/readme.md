# PuckBuddy

Forked from MechWild. Goal here was to implement Alt Tab encoder scrolling (with the window preview) on the Puckbuddy. I would not reccomend the keymap: alttabpad at this time. Using this keymap Vial, the scrolling is really jumpy. It was slowed down with TAP_CODE_DELAY in config.h, but the results are slow and not great. Instead, another keymap, novialencoders, was created. The encoder customizations are disabled within Vial. Instead they are written directly into the keymap.


![PuckBuddy](https://i.imgur.com/iSVAHJzh.png)

A macropad with a Cirque Glidepoint Trackpad in the middle, powered by the STM32 Blackpill.

* Keyboard Maintainer: [Kyle McCreery](https://github.com/kylemccreery)
* Hardware Supported: PuckBuddy v1.0
* Hardware Availability: [PuckBuddy on MechWild](https://mechwild.com/product/puckbuddy/)

Make example for this keyboard (after setting up your build environment):

    make mechwild/puckbuddy:default

Flashing example for this keyboard:

    make mechwild/puckbuddy:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (assigned to the top left key) and plug in the keyboard while holding it.
* **Physical reset button**: Press and hold the boot0 button on the blackpill, tap  and release the nrst button on the blackpill, then release the boot0 button.
* **Keycode in layout**: Press the key mapped to `RESET` if it is available. By default this is the top right key on layer 1.
