# nRF51 Empty 📦

Base project for the nRF51 Bluetooth Smart SoC on Mac OS X. Includes the [S130 SoftDevice](https://www.nordicsemi.com/eng/Products/S130-SoftDevice).

Targets the nRF51 DK (PCA10028 - nRF51422). But should work with other kits and the nRF51822 SoC.

Most of this was made copying from the examples in the SDK, but I wanted a base template I could for my own projects. I don't fully understand the Makefile, but it seems to work.

## Setup

- Make sure you have a copy of the [NRF51 SDK 11](https://developer.nordicsemi.com/nRF5_SDK/nRF5_SDK_v11.x.x/) in the parent directory named `RF5_SDK_11`.
- You will need [GCC ARM Embedded](https://launchpad.net/gcc-arm-embedded/+download) installed.
- To flash the board you need [J-Link](https://www.segger.com/jlink-software.html).
- Change the first few lines in the Makefile for your project and for the paths on your system.

## Usage

- Code goes in `./src/` (Sample code blinks LED_1).
- Complied files end up in `./_build/`.

### Building

```
make clean
make
```

### Flashing / Programming

```
./nrfjprog.sh --flash-softdevice ../nRF5_SDK_11/components/softdevice/s130/hex/s130_nrf51_2.0.0_softdevice.hex
./nrfjprog.sh --flash ./_build/blank.hex
```
