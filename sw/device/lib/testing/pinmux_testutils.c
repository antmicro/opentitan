// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/lib/testing/pinmux_testutils.h"

#include "sw/device/lib/arch/device.h"
#include "sw/device/lib/base/macros.h"
#include "sw/device/lib/base/status.h"
#include "sw/device/lib/dif/dif_base.h"
#include "sw/device/lib/dif/dif_gpio.h"
#include "sw/device/lib/dif/dif_pinmux.h"
#include "sw/device/lib/runtime/hart.h"
#include "sw/device/lib/testing/test_framework/check.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

void pinmux_testutils_init(dif_pinmux_t *pinmux) {
  // Set up SW straps on IOC0-IOC2, for GPIOs 22-24
  CHECK_DIF_OK(dif_pinmux_input_select(pinmux,
                                       kOpentitanPinmuxPeripheralInGpioGpio22,
                                       kOpentitanPinmuxInselIoc0));
  CHECK_DIF_OK(dif_pinmux_input_select(pinmux,
                                       kOpentitanPinmuxPeripheralInGpioGpio23,
                                       kOpentitanPinmuxInselIoc1));
  CHECK_DIF_OK(dif_pinmux_input_select(pinmux,
                                       kOpentitanPinmuxPeripheralInGpioGpio24,
                                       kOpentitanPinmuxInselIoc2));
  CHECK_DIF_OK(dif_pinmux_output_select(pinmux, kOpentitanPinmuxMioOutIoc0,
                                        kOpentitanPinmuxOutselGpioGpio22));
  CHECK_DIF_OK(dif_pinmux_output_select(pinmux, kOpentitanPinmuxMioOutIoc1,
                                        kOpentitanPinmuxOutselGpioGpio23));
  CHECK_DIF_OK(dif_pinmux_output_select(pinmux, kOpentitanPinmuxMioOutIoc2,
                                        kOpentitanPinmuxOutselGpioGpio24));

  // Configure UART0 RX input to connect to MIO pad IOC3
  CHECK_DIF_OK(dif_pinmux_input_select(pinmux,
                                       kOpentitanPinmuxPeripheralInUart0Rx,
                                       kOpentitanPinmuxInselIoc3));
  CHECK_DIF_OK(dif_pinmux_output_select(pinmux, kOpentitanPinmuxMioOutIoc3,
                                        kOpentitanPinmuxOutselConstantHighZ));
  // Configure UART0 TX output to connect to MIO pad IOC4
  CHECK_DIF_OK(dif_pinmux_output_select(pinmux, kOpentitanPinmuxMioOutIoc4,
                                        kOpentitanPinmuxOutselUart0Tx));

#if !OT_IS_ENGLISH_BREAKFAST
  // Enable pull-ups on UART0 RX
  // Pull-ups are available only on certain platforms.
  if (kDeviceType == kDeviceSimDV) {
    dif_pinmux_pad_attr_t out_attr;
    dif_pinmux_pad_attr_t in_attr = {
        .slew_rate = 0,
        .drive_strength = 0,
        .flags = kDifPinmuxPadAttrPullResistorEnable |
                 kDifPinmuxPadAttrPullResistorUp};

    CHECK_DIF_OK(dif_pinmux_pad_write_attrs(pinmux, kOpentitanMuxedPadsIoc3,
                                            kDifPinmuxPadKindMio, in_attr,
                                            &out_attr));
  };

  // Configure UART1 RX input to connect to MIO pad IOB4
  CHECK_DIF_OK(dif_pinmux_input_select(pinmux,
                                       kOpentitanPinmuxPeripheralInUart1Rx,
                                       kOpentitanPinmuxInselIob4));
  CHECK_DIF_OK(dif_pinmux_output_select(pinmux, kOpentitanPinmuxMioOutIob4,
                                        kOpentitanPinmuxOutselConstantHighZ));
  // Configure UART1 TX output to connect to MIO pad IOB5
  CHECK_DIF_OK(dif_pinmux_output_select(pinmux, kOpentitanPinmuxMioOutIob5,
                                        kOpentitanPinmuxOutselUart1Tx));
#endif

  // Configure USBDEV SENSE outputs to be high-Z (IOC7)
  CHECK_DIF_OK(dif_pinmux_output_select(pinmux, kOpentitanPinmuxMioOutIoc7,
                                        kOpentitanPinmuxOutselConstantHighZ));
}

// Mapping of Chip IOs to the GPIO peripheral.
//
// Depending on the simulation platform, there may be a limitation to how chip
// IOs are allocated to the GPIO peripheral, even for testing. The DV testbench
// does not have this limitation, and is able to allocate as many chip IOs as
// the number of GPIOs supported by the peripheral. At this time, these pin
// assignments matches DV (see `hw/top_earlgrey/dv/env/chip_if.sv`).
//
// The pinout spreadsheet allocates fewer pins to GPIOs than what the GPIO IP
// supports. This oversubscription is intentional to maximize testing.
const dif_pinmux_index_t kPinmuxTestutilsGpioInselPins[kDifGpioNumPins] = {
    kOpentitanPinmuxInselIoa0,  kOpentitanPinmuxInselIoa1,
    kOpentitanPinmuxInselIoa2,  kOpentitanPinmuxInselIoa3,
    kOpentitanPinmuxInselIoa4,  kOpentitanPinmuxInselIoa5,
    kOpentitanPinmuxInselIoa6,  kOpentitanPinmuxInselIoa7,
    kOpentitanPinmuxInselIoa8,  kOpentitanPinmuxInselIob6,
    kOpentitanPinmuxInselIob7,  kOpentitanPinmuxInselIob8,
    kOpentitanPinmuxInselIob9,  kOpentitanPinmuxInselIob10,
    kOpentitanPinmuxInselIob11, kOpentitanPinmuxInselIob12,
    kOpentitanPinmuxInselIoc9,  kOpentitanPinmuxInselIoc10,
    kOpentitanPinmuxInselIoc11, kOpentitanPinmuxInselIoc12,
    kOpentitanPinmuxInselIor0,  kOpentitanPinmuxInselIor1,
    kOpentitanPinmuxInselIor2,  kOpentitanPinmuxInselIor3,
    kOpentitanPinmuxInselIor4,  kOpentitanPinmuxInselIor5,
    kOpentitanPinmuxInselIor6,  kOpentitanPinmuxInselIor7,
    kOpentitanPinmuxInselIor10, kOpentitanPinmuxInselIor11,
    kOpentitanPinmuxInselIor12, kOpentitanPinmuxInselIor13};

const dif_pinmux_index_t kPinmuxTestutilsGpioMioOutPins[kDifGpioNumPins] = {
    kOpentitanPinmuxMioOutIoa0,  kOpentitanPinmuxMioOutIoa1,
    kOpentitanPinmuxMioOutIoa2,  kOpentitanPinmuxMioOutIoa3,
    kOpentitanPinmuxMioOutIoa4,  kOpentitanPinmuxMioOutIoa5,
    kOpentitanPinmuxMioOutIoa6,  kOpentitanPinmuxMioOutIoa7,
    kOpentitanPinmuxMioOutIoa8,  kOpentitanPinmuxMioOutIob6,
    kOpentitanPinmuxMioOutIob7,  kOpentitanPinmuxMioOutIob8,
    kOpentitanPinmuxMioOutIob9,  kOpentitanPinmuxMioOutIob10,
    kOpentitanPinmuxMioOutIob11, kOpentitanPinmuxMioOutIob12,
    kOpentitanPinmuxMioOutIoc9,  kOpentitanPinmuxMioOutIoc10,
    kOpentitanPinmuxMioOutIoc11, kOpentitanPinmuxMioOutIoc12,
    kOpentitanPinmuxMioOutIor0,  kOpentitanPinmuxMioOutIor1,
    kOpentitanPinmuxMioOutIor2,  kOpentitanPinmuxMioOutIor3,
    kOpentitanPinmuxMioOutIor4,  kOpentitanPinmuxMioOutIor5,
    kOpentitanPinmuxMioOutIor6,  kOpentitanPinmuxMioOutIor7,
    kOpentitanPinmuxMioOutIor10, kOpentitanPinmuxMioOutIor11,
    kOpentitanPinmuxMioOutIor12, kOpentitanPinmuxMioOutIor13};

uint32_t pinmux_testutils_get_testable_gpios_mask(void) {
  if (kDeviceType == kDeviceFpgaCw310) {
    // Only IOA2 to IOA8 are available for use as GPIOs.
    return 0x1fc;
  } else {
    return 0xffffffff;
  }
}

uint32_t pinmux_testutils_read_strap_pin(dif_pinmux_t *pinmux, dif_gpio_t *gpio,
                                         dif_gpio_pin_t io,
                                         opentitan_muxed_pads_t pad) {
  // Turn off the pull enable on the pad and read the IO.
  dif_pinmux_pad_attr_t attr = {.flags = 0};
  dif_pinmux_pad_attr_t attr_out;
  CHECK_DIF_OK(dif_pinmux_pad_write_attrs(pinmux, pad, kDifPinmuxPadKindMio,
                                          attr, &attr_out));
  bool state;
  // The value read is unmodified by the internal pull resistors and represents
  // the the upper bit of the 4 possible states [Strong0, Weak0, Weak1,
  // Strong1].
  CHECK_DIF_OK(dif_gpio_read(gpio, io, &state));
  uint32_t result = state ? 2 : 0;

  // Based on the previous read, enable the opposite pull resistor.  If the
  // external signal is weak, the internal pull resistor will win; if the
  // external signal is strong, the external value will win.
  attr.flags = kDifPinmuxPadAttrPullResistorEnable |
               (state ? 0 : kDifPinmuxPadAttrPullResistorUp);
  CHECK_DIF_OK(dif_pinmux_pad_write_attrs(pinmux, pad, kDifPinmuxPadKindMio,
                                          attr, &attr_out));
  // Combine the result of the contest between the external signal in internal
  // pull resistors.  This represents the lower bit of the 4 possible states.
  CHECK_DIF_OK(dif_gpio_read(gpio, io, &state));
  result += state ? 1 : 0;
  return result;
}

uint32_t pinmux_testutils_read_straps(dif_pinmux_t *pinmux, dif_gpio_t *gpio) {
  uint32_t strap = 0;
  strap |= pinmux_testutils_read_strap_pin(pinmux, gpio, 22,
                                           kOpentitanMuxedPadsIoc0);
  strap |= pinmux_testutils_read_strap_pin(pinmux, gpio, 23,
                                           kOpentitanMuxedPadsIoc1)
           << 2;
  strap |= pinmux_testutils_read_strap_pin(pinmux, gpio, 24,
                                           kOpentitanMuxedPadsIoc2)
           << 4;
  return strap;
}

void pinmux_testutils_configure_pads(const dif_pinmux_t *pinmux,
                                     const pinmux_pad_attributes_t *attrs,
                                     size_t num_attrs) {
  for (size_t i = 0; i < num_attrs; ++i) {
    dif_pinmux_pad_attr_t desired_attr, actual_attr;
    CHECK_DIF_OK(dif_pinmux_pad_get_attrs(pinmux, attrs[i].pad, attrs[i].kind,
                                          &desired_attr));
    desired_attr.flags = attrs[i].flags;
    CHECK_DIF_OK(dif_pinmux_pad_write_attrs(pinmux, attrs[i].pad, attrs[i].kind,
                                            desired_attr, &actual_attr));
  }
}
