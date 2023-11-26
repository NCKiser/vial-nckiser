# XT 65 Split Keyboard

![XT 65 Split](https://assets.bigcartel.com/product_images/371798743/Screenshot+2023-11-08+124338.png)

*A 65% split board using an RJ45 interconnect*
* Keyboard Maintainer: [NCKiser](https://github.com/NCKiser)
* Hardware Supported: XT 65 Split, rp2040
* Hardware Availability: kiserdesigns.com

Make example for this keyboard (after setting up your build environment):

    make kiserdesigns/xt65split:default

Flashing example for this keyboard:

    make kiserdesigns/xt65split:default:flash
    
See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
## Bootloader
Enter the bootloader in 3 ways:
* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (the top left key labeled "Del" in the picture) and plug in the keyboard
* **Physical reset button**: Briefly double-tap the reset button on the back of the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
