# Jumper T16 Doom
This is a port of Doom Generic to the Jumper T16 Radio.
Head over to the releases section and grab a binary you can flash it using dfu-util on linux.
other stm32 DFU Flahers should work.

dfu-util -a 0 -s 0x08000000:leave -D T16Doom.bin

# Controls
SYS is shoot / Enter.
RTN is Escape / Pause.
MDL is use / Open Door.
right stick is move.
Trim4 is Weapon Select.

TELE is Calibrate Stick.

Calibration Process is as follows:
  stick bottom Left then press TELE
  stick top right then press TELE
  stick center then press TELE

# Doom Wad
The Code by default loads doom1.wad from the root of the fat32 sdcard that is inserted in the radio.

# Building
Building is done with a makefile and requires the gcc arm toolchain.
I personally use stm32-for-vscode extension to manage the arm toolchain and building.

# A major help with this project
https://github.com/ozkl/doomgeneric
https://github.com/bane9/STM32DISCOVERY_DOOM
