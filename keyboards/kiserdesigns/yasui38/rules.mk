# This is a teensy 2.0
BOOTLOADER = halfkay
# running this MCU
MCU = atmega32u4
# Processor frequency.
F_CPU = 16000000
# Target architecture (see library "Board Types" documentation).
ARCH = AVR8
# Input clock frequency.
F_USB = $(F_CPU)
# Interrupt driven control endpoint task(+60)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
# Boot Section Size in *bytes*
#   Teensy halfKay   512
OPT_DEFS += -DBOOTLOADER_SIZE=512
# Build Options
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = no        # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)
CONSOLE_ENABLE = yes        # Console for debug(+400)
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes           # Nkey Rollover
BACKLIGHT_ENABLE = no       # There are no leds
MIDI_ENABLE = no            # No MIDI controls
AUDIO_ENABLE = no           # We don't have audio
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # We don't have BT
RGBLIGHT_ENABLE = no        # We don't have underglow
