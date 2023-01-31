// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENTITAN_SW_DEVICE_LIB_TESTING_JSON_PINMUX_H_
#define OPENTITAN_SW_DEVICE_LIB_TESTING_JSON_PINMUX_H_
#include "sw/device/lib/ujson/ujson_derive.h"
#ifdef __cplusplus
extern "C" {
#endif

// Note: these definitions rely on constants from top_earlgrey.h
// and therefore this library cannot be used with the `ujson_rust`
// bazel rule.  Instead, these constants are imported into rust
// by way of a bindgen rule and recreated as Rust datatypes with
// appropriate aliases to be used by other `ujson` libraries.
#ifndef RUST_PREPROCESSOR_EMIT
#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"
#endif
// clang-format off

#define OPENTITAN_PINMUX_PERIPHERAL_IN(_, value) \
    value(_, GpioGpio0, kOpentitanPinmuxPeripheralInGpioGpio0) \
    value(_, GpioGpio1, kOpentitanPinmuxPeripheralInGpioGpio1) \
    value(_, GpioGpio2, kOpentitanPinmuxPeripheralInGpioGpio2) \
    value(_, GpioGpio3, kOpentitanPinmuxPeripheralInGpioGpio3) \
    value(_, GpioGpio4, kOpentitanPinmuxPeripheralInGpioGpio4) \
    value(_, GpioGpio5, kOpentitanPinmuxPeripheralInGpioGpio5) \
    value(_, GpioGpio6, kOpentitanPinmuxPeripheralInGpioGpio6) \
    value(_, GpioGpio7, kOpentitanPinmuxPeripheralInGpioGpio7) \
    value(_, GpioGpio8, kOpentitanPinmuxPeripheralInGpioGpio8) \
    value(_, GpioGpio9, kOpentitanPinmuxPeripheralInGpioGpio9) \
    value(_, GpioGpio10, kOpentitanPinmuxPeripheralInGpioGpio10) \
    value(_, GpioGpio11, kOpentitanPinmuxPeripheralInGpioGpio11) \
    value(_, GpioGpio12, kOpentitanPinmuxPeripheralInGpioGpio12) \
    value(_, GpioGpio13, kOpentitanPinmuxPeripheralInGpioGpio13) \
    value(_, GpioGpio14, kOpentitanPinmuxPeripheralInGpioGpio14) \
    value(_, GpioGpio15, kOpentitanPinmuxPeripheralInGpioGpio15) \
    value(_, GpioGpio16, kOpentitanPinmuxPeripheralInGpioGpio16) \
    value(_, GpioGpio17, kOpentitanPinmuxPeripheralInGpioGpio17) \
    value(_, GpioGpio18, kOpentitanPinmuxPeripheralInGpioGpio18) \
    value(_, GpioGpio19, kOpentitanPinmuxPeripheralInGpioGpio19) \
    value(_, GpioGpio20, kOpentitanPinmuxPeripheralInGpioGpio20) \
    value(_, GpioGpio21, kOpentitanPinmuxPeripheralInGpioGpio21) \
    value(_, GpioGpio22, kOpentitanPinmuxPeripheralInGpioGpio22) \
    value(_, GpioGpio23, kOpentitanPinmuxPeripheralInGpioGpio23) \
    value(_, GpioGpio24, kOpentitanPinmuxPeripheralInGpioGpio24) \
    value(_, GpioGpio25, kOpentitanPinmuxPeripheralInGpioGpio25) \
    value(_, GpioGpio26, kOpentitanPinmuxPeripheralInGpioGpio26) \
    value(_, GpioGpio27, kOpentitanPinmuxPeripheralInGpioGpio27) \
    value(_, GpioGpio28, kOpentitanPinmuxPeripheralInGpioGpio28) \
    value(_, GpioGpio29, kOpentitanPinmuxPeripheralInGpioGpio29) \
    value(_, GpioGpio30, kOpentitanPinmuxPeripheralInGpioGpio30) \
    value(_, GpioGpio31, kOpentitanPinmuxPeripheralInGpioGpio31) \
    value(_, I2c0Sda, kOpentitanPinmuxPeripheralInI2c0Sda) \
    value(_, I2c0Scl, kOpentitanPinmuxPeripheralInI2c0Scl) \
    value(_, I2c1Sda, kOpentitanPinmuxPeripheralInI2c1Sda) \
    value(_, I2c1Scl, kOpentitanPinmuxPeripheralInI2c1Scl) \
    value(_, I2c2Sda, kOpentitanPinmuxPeripheralInI2c2Sda) \
    value(_, I2c2Scl, kOpentitanPinmuxPeripheralInI2c2Scl) \
    value(_, SpiHost1Sd0, kOpentitanPinmuxPeripheralInSpiHost1Sd0) \
    value(_, SpiHost1Sd1, kOpentitanPinmuxPeripheralInSpiHost1Sd1) \
    value(_, SpiHost1Sd2, kOpentitanPinmuxPeripheralInSpiHost1Sd2) \
    value(_, SpiHost1Sd3, kOpentitanPinmuxPeripheralInSpiHost1Sd3) \
    value(_, Uart0Rx, kOpentitanPinmuxPeripheralInUart0Rx) \
    value(_, Uart1Rx, kOpentitanPinmuxPeripheralInUart1Rx) \
    value(_, Uart2Rx, kOpentitanPinmuxPeripheralInUart2Rx) \
    value(_, Uart3Rx, kOpentitanPinmuxPeripheralInUart3Rx) \
    value(_, SpiDeviceTpmCsb, kOpentitanPinmuxPeripheralInSpiDeviceTpmCsb) \
    value(_, FlashCtrlTck, kOpentitanPinmuxPeripheralInFlashCtrlTck) \
    value(_, FlashCtrlTms, kOpentitanPinmuxPeripheralInFlashCtrlTms) \
    value(_, FlashCtrlTdi, kOpentitanPinmuxPeripheralInFlashCtrlTdi) \
    value(_, SysrstCtrlAonAcPresent, kOpentitanPinmuxPeripheralInSysrstCtrlAonAcPresent) \
    value(_, SysrstCtrlAonKey0In, kOpentitanPinmuxPeripheralInSysrstCtrlAonKey0In) \
    value(_, SysrstCtrlAonKey1In, kOpentitanPinmuxPeripheralInSysrstCtrlAonKey1In) \
    value(_, SysrstCtrlAonKey2In, kOpentitanPinmuxPeripheralInSysrstCtrlAonKey2In) \
    value(_, SysrstCtrlAonPwrbIn, kOpentitanPinmuxPeripheralInSysrstCtrlAonPwrbIn) \
    value(_, SysrstCtrlAonLidOpen, kOpentitanPinmuxPeripheralInSysrstCtrlAonLidOpen) \
    value(_, UsbdevSense, kOpentitanPinmuxPeripheralInUsbdevSense) \
    value(_, End, kOpentitanPinmuxPeripheralInLast + 1)
C_ONLY(UJSON_SERDE_ENUM(PinmuxPeripheralIn, pinmux_peripheral_in_t, OPENTITAN_PINMUX_PERIPHERAL_IN, WITH_UNKNOWN));

#define OPENTITAN_PINMUX_INSEL(_, value) \
    value(_, ConstantZero, kOpentitanPinmuxInselConstantZero) \
    value(_, ConstantOne, kOpentitanPinmuxInselConstantOne) \
    value(_, Ioa0, kOpentitanPinmuxInselIoa0) \
    value(_, Ioa1, kOpentitanPinmuxInselIoa1) \
    value(_, Ioa2, kOpentitanPinmuxInselIoa2) \
    value(_, Ioa3, kOpentitanPinmuxInselIoa3) \
    value(_, Ioa4, kOpentitanPinmuxInselIoa4) \
    value(_, Ioa5, kOpentitanPinmuxInselIoa5) \
    value(_, Ioa6, kOpentitanPinmuxInselIoa6) \
    value(_, Ioa7, kOpentitanPinmuxInselIoa7) \
    value(_, Ioa8, kOpentitanPinmuxInselIoa8) \
    value(_, Iob0, kOpentitanPinmuxInselIob0) \
    value(_, Iob1, kOpentitanPinmuxInselIob1) \
    value(_, Iob2, kOpentitanPinmuxInselIob2) \
    value(_, Iob3, kOpentitanPinmuxInselIob3) \
    value(_, Iob4, kOpentitanPinmuxInselIob4) \
    value(_, Iob5, kOpentitanPinmuxInselIob5) \
    value(_, Iob6, kOpentitanPinmuxInselIob6) \
    value(_, Iob7, kOpentitanPinmuxInselIob7) \
    value(_, Iob8, kOpentitanPinmuxInselIob8) \
    value(_, Iob9, kOpentitanPinmuxInselIob9) \
    value(_, Iob10, kOpentitanPinmuxInselIob10) \
    value(_, Iob11, kOpentitanPinmuxInselIob11) \
    value(_, Iob12, kOpentitanPinmuxInselIob12) \
    value(_, Ioc0, kOpentitanPinmuxInselIoc0) \
    value(_, Ioc1, kOpentitanPinmuxInselIoc1) \
    value(_, Ioc2, kOpentitanPinmuxInselIoc2) \
    value(_, Ioc3, kOpentitanPinmuxInselIoc3) \
    value(_, Ioc4, kOpentitanPinmuxInselIoc4) \
    value(_, Ioc5, kOpentitanPinmuxInselIoc5) \
    value(_, Ioc6, kOpentitanPinmuxInselIoc6) \
    value(_, Ioc7, kOpentitanPinmuxInselIoc7) \
    value(_, Ioc8, kOpentitanPinmuxInselIoc8) \
    value(_, Ioc9, kOpentitanPinmuxInselIoc9) \
    value(_, Ioc10, kOpentitanPinmuxInselIoc10) \
    value(_, Ioc11, kOpentitanPinmuxInselIoc11) \
    value(_, Ioc12, kOpentitanPinmuxInselIoc12) \
    value(_, Ior0, kOpentitanPinmuxInselIor0) \
    value(_, Ior1, kOpentitanPinmuxInselIor1) \
    value(_, Ior2, kOpentitanPinmuxInselIor2) \
    value(_, Ior3, kOpentitanPinmuxInselIor3) \
    value(_, Ior4, kOpentitanPinmuxInselIor4) \
    value(_, Ior5, kOpentitanPinmuxInselIor5) \
    value(_, Ior6, kOpentitanPinmuxInselIor6) \
    value(_, Ior7, kOpentitanPinmuxInselIor7) \
    value(_, Ior10, kOpentitanPinmuxInselIor10) \
    value(_, Ior11, kOpentitanPinmuxInselIor11) \
    value(_, Ior12, kOpentitanPinmuxInselIor12) \
    value(_, Ior13, kOpentitanPinmuxInselIor13) \
    value(_, End, kOpentitanPinmuxInselLast + 1)
C_ONLY(UJSON_SERDE_ENUM(PinmuxInsel, pinmux_insel_t, OPENTITAN_PINMUX_INSEL, WITH_UNKNOWN));

#define OPENTITAN_PINMUX_MIO_OUT(_, value) \
    value(_, Ioa0, kOpentitanPinmuxMioOutIoa0) \
    value(_, Ioa1, kOpentitanPinmuxMioOutIoa1) \
    value(_, Ioa2, kOpentitanPinmuxMioOutIoa2) \
    value(_, Ioa3, kOpentitanPinmuxMioOutIoa3) \
    value(_, Ioa4, kOpentitanPinmuxMioOutIoa4) \
    value(_, Ioa5, kOpentitanPinmuxMioOutIoa5) \
    value(_, Ioa6, kOpentitanPinmuxMioOutIoa6) \
    value(_, Ioa7, kOpentitanPinmuxMioOutIoa7) \
    value(_, Ioa8, kOpentitanPinmuxMioOutIoa8) \
    value(_, Iob0, kOpentitanPinmuxMioOutIob0) \
    value(_, Iob1, kOpentitanPinmuxMioOutIob1) \
    value(_, Iob2, kOpentitanPinmuxMioOutIob2) \
    value(_, Iob3, kOpentitanPinmuxMioOutIob3) \
    value(_, Iob4, kOpentitanPinmuxMioOutIob4) \
    value(_, Iob5, kOpentitanPinmuxMioOutIob5) \
    value(_, Iob6, kOpentitanPinmuxMioOutIob6) \
    value(_, Iob7, kOpentitanPinmuxMioOutIob7) \
    value(_, Iob8, kOpentitanPinmuxMioOutIob8) \
    value(_, Iob9, kOpentitanPinmuxMioOutIob9) \
    value(_, Iob10, kOpentitanPinmuxMioOutIob10) \
    value(_, Iob11, kOpentitanPinmuxMioOutIob11) \
    value(_, Iob12, kOpentitanPinmuxMioOutIob12) \
    value(_, Ioc0, kOpentitanPinmuxMioOutIoc0) \
    value(_, Ioc1, kOpentitanPinmuxMioOutIoc1) \
    value(_, Ioc2, kOpentitanPinmuxMioOutIoc2) \
    value(_, Ioc3, kOpentitanPinmuxMioOutIoc3) \
    value(_, Ioc4, kOpentitanPinmuxMioOutIoc4) \
    value(_, Ioc5, kOpentitanPinmuxMioOutIoc5) \
    value(_, Ioc6, kOpentitanPinmuxMioOutIoc6) \
    value(_, Ioc7, kOpentitanPinmuxMioOutIoc7) \
    value(_, Ioc8, kOpentitanPinmuxMioOutIoc8) \
    value(_, Ioc9, kOpentitanPinmuxMioOutIoc9) \
    value(_, Ioc10, kOpentitanPinmuxMioOutIoc10) \
    value(_, Ioc11, kOpentitanPinmuxMioOutIoc11) \
    value(_, Ioc12, kOpentitanPinmuxMioOutIoc12) \
    value(_, Ior0, kOpentitanPinmuxMioOutIor0) \
    value(_, Ior1, kOpentitanPinmuxMioOutIor1) \
    value(_, Ior2, kOpentitanPinmuxMioOutIor2) \
    value(_, Ior3, kOpentitanPinmuxMioOutIor3) \
    value(_, Ior4, kOpentitanPinmuxMioOutIor4) \
    value(_, Ior5, kOpentitanPinmuxMioOutIor5) \
    value(_, Ior6, kOpentitanPinmuxMioOutIor6) \
    value(_, Ior7, kOpentitanPinmuxMioOutIor7) \
    value(_, Ior10, kOpentitanPinmuxMioOutIor10) \
    value(_, Ior11, kOpentitanPinmuxMioOutIor11) \
    value(_, Ior12, kOpentitanPinmuxMioOutIor12) \
    value(_, Ior13, kOpentitanPinmuxMioOutIor13) \
    value(_, End, kOpentitanPinmuxMioOutLast + 1)
C_ONLY(UJSON_SERDE_ENUM(PinmuxMioOut, pinmux_mio_out_t, OPENTITAN_PINMUX_MIO_OUT, WITH_UNKNOWN));

#define OPENTITAN_PINMUX_OUTSEL(_, value) \
    value(_, ConstantZero, kOpentitanPinmuxOutselConstantZero) \
    value(_, ConstantOne, kOpentitanPinmuxOutselConstantOne) \
    value(_, ConstantHighZ, kOpentitanPinmuxOutselConstantHighZ) \
    value(_, GpioGpio0, kOpentitanPinmuxOutselGpioGpio0) \
    value(_, GpioGpio1, kOpentitanPinmuxOutselGpioGpio1) \
    value(_, GpioGpio2, kOpentitanPinmuxOutselGpioGpio2) \
    value(_, GpioGpio3, kOpentitanPinmuxOutselGpioGpio3) \
    value(_, GpioGpio4, kOpentitanPinmuxOutselGpioGpio4) \
    value(_, GpioGpio5, kOpentitanPinmuxOutselGpioGpio5) \
    value(_, GpioGpio6, kOpentitanPinmuxOutselGpioGpio6) \
    value(_, GpioGpio7, kOpentitanPinmuxOutselGpioGpio7) \
    value(_, GpioGpio8, kOpentitanPinmuxOutselGpioGpio8) \
    value(_, GpioGpio9, kOpentitanPinmuxOutselGpioGpio9) \
    value(_, GpioGpio10, kOpentitanPinmuxOutselGpioGpio10) \
    value(_, GpioGpio11, kOpentitanPinmuxOutselGpioGpio11) \
    value(_, GpioGpio12, kOpentitanPinmuxOutselGpioGpio12) \
    value(_, GpioGpio13, kOpentitanPinmuxOutselGpioGpio13) \
    value(_, GpioGpio14, kOpentitanPinmuxOutselGpioGpio14) \
    value(_, GpioGpio15, kOpentitanPinmuxOutselGpioGpio15) \
    value(_, GpioGpio16, kOpentitanPinmuxOutselGpioGpio16) \
    value(_, GpioGpio17, kOpentitanPinmuxOutselGpioGpio17) \
    value(_, GpioGpio18, kOpentitanPinmuxOutselGpioGpio18) \
    value(_, GpioGpio19, kOpentitanPinmuxOutselGpioGpio19) \
    value(_, GpioGpio20, kOpentitanPinmuxOutselGpioGpio20) \
    value(_, GpioGpio21, kOpentitanPinmuxOutselGpioGpio21) \
    value(_, GpioGpio22, kOpentitanPinmuxOutselGpioGpio22) \
    value(_, GpioGpio23, kOpentitanPinmuxOutselGpioGpio23) \
    value(_, GpioGpio24, kOpentitanPinmuxOutselGpioGpio24) \
    value(_, GpioGpio25, kOpentitanPinmuxOutselGpioGpio25) \
    value(_, GpioGpio26, kOpentitanPinmuxOutselGpioGpio26) \
    value(_, GpioGpio27, kOpentitanPinmuxOutselGpioGpio27) \
    value(_, GpioGpio28, kOpentitanPinmuxOutselGpioGpio28) \
    value(_, GpioGpio29, kOpentitanPinmuxOutselGpioGpio29) \
    value(_, GpioGpio30, kOpentitanPinmuxOutselGpioGpio30) \
    value(_, GpioGpio31, kOpentitanPinmuxOutselGpioGpio31) \
    value(_, I2c0Sda, kOpentitanPinmuxOutselI2c0Sda) \
    value(_, I2c0Scl, kOpentitanPinmuxOutselI2c0Scl) \
    value(_, I2c1Sda, kOpentitanPinmuxOutselI2c1Sda) \
    value(_, I2c1Scl, kOpentitanPinmuxOutselI2c1Scl) \
    value(_, I2c2Sda, kOpentitanPinmuxOutselI2c2Sda) \
    value(_, I2c2Scl, kOpentitanPinmuxOutselI2c2Scl) \
    value(_, SpiHost1Sd0, kOpentitanPinmuxOutselSpiHost1Sd0) \
    value(_, SpiHost1Sd1, kOpentitanPinmuxOutselSpiHost1Sd1) \
    value(_, SpiHost1Sd2, kOpentitanPinmuxOutselSpiHost1Sd2) \
    value(_, SpiHost1Sd3, kOpentitanPinmuxOutselSpiHost1Sd3) \
    value(_, Uart0Tx, kOpentitanPinmuxOutselUart0Tx) \
    value(_, Uart1Tx, kOpentitanPinmuxOutselUart1Tx) \
    value(_, Uart2Tx, kOpentitanPinmuxOutselUart2Tx) \
    value(_, Uart3Tx, kOpentitanPinmuxOutselUart3Tx) \
    value(_, PattgenPda0Tx, kOpentitanPinmuxOutselPattgenPda0Tx) \
    value(_, PattgenPcl0Tx, kOpentitanPinmuxOutselPattgenPcl0Tx) \
    value(_, PattgenPda1Tx, kOpentitanPinmuxOutselPattgenPda1Tx) \
    value(_, PattgenPcl1Tx, kOpentitanPinmuxOutselPattgenPcl1Tx) \
    value(_, SpiHost1Sck, kOpentitanPinmuxOutselSpiHost1Sck) \
    value(_, SpiHost1Csb, kOpentitanPinmuxOutselSpiHost1Csb) \
    value(_, FlashCtrlTdo, kOpentitanPinmuxOutselFlashCtrlTdo) \
    value(_, SensorCtrlAstDebugOut0, kOpentitanPinmuxOutselSensorCtrlAstDebugOut0) \
    value(_, SensorCtrlAstDebugOut1, kOpentitanPinmuxOutselSensorCtrlAstDebugOut1) \
    value(_, SensorCtrlAstDebugOut2, kOpentitanPinmuxOutselSensorCtrlAstDebugOut2) \
    value(_, SensorCtrlAstDebugOut3, kOpentitanPinmuxOutselSensorCtrlAstDebugOut3) \
    value(_, SensorCtrlAstDebugOut4, kOpentitanPinmuxOutselSensorCtrlAstDebugOut4) \
    value(_, SensorCtrlAstDebugOut5, kOpentitanPinmuxOutselSensorCtrlAstDebugOut5) \
    value(_, SensorCtrlAstDebugOut6, kOpentitanPinmuxOutselSensorCtrlAstDebugOut6) \
    value(_, SensorCtrlAstDebugOut7, kOpentitanPinmuxOutselSensorCtrlAstDebugOut7) \
    value(_, SensorCtrlAstDebugOut8, kOpentitanPinmuxOutselSensorCtrlAstDebugOut8) \
    value(_, PwmAonPwm0, kOpentitanPinmuxOutselPwmAonPwm0) \
    value(_, PwmAonPwm1, kOpentitanPinmuxOutselPwmAonPwm1) \
    value(_, PwmAonPwm2, kOpentitanPinmuxOutselPwmAonPwm2) \
    value(_, PwmAonPwm3, kOpentitanPinmuxOutselPwmAonPwm3) \
    value(_, PwmAonPwm4, kOpentitanPinmuxOutselPwmAonPwm4) \
    value(_, PwmAonPwm5, kOpentitanPinmuxOutselPwmAonPwm5) \
    value(_, OtpCtrlTest0, kOpentitanPinmuxOutselOtpCtrlTest0) \
    value(_, SysrstCtrlAonBatDisable, kOpentitanPinmuxOutselSysrstCtrlAonBatDisable) \
    value(_, SysrstCtrlAonKey0Out, kOpentitanPinmuxOutselSysrstCtrlAonKey0Out) \
    value(_, SysrstCtrlAonKey1Out, kOpentitanPinmuxOutselSysrstCtrlAonKey1Out) \
    value(_, SysrstCtrlAonKey2Out, kOpentitanPinmuxOutselSysrstCtrlAonKey2Out) \
    value(_, SysrstCtrlAonPwrbOut, kOpentitanPinmuxOutselSysrstCtrlAonPwrbOut) \
    value(_, SysrstCtrlAonZ3Wakeup, kOpentitanPinmuxOutselSysrstCtrlAonZ3Wakeup) \
    value(_, End, kOpentitanPinmuxOutselLast + 1)
C_ONLY(UJSON_SERDE_ENUM(PinmuxOutsel, pinmux_outsel_t, OPENTITAN_PINMUX_OUTSEL, WITH_UNKNOWN));

#define OPENTITAN_DIRECT_PADS(_, value) \
    value(_, UsbdevUsbDp, kOpentitanDirectPadsUsbdevUsbDp) \
    value(_, UsbdevUsbDn, kOpentitanDirectPadsUsbdevUsbDn) \
    value(_, SpiHost0Sd0, kOpentitanDirectPadsSpiHost0Sd0) \
    value(_, SpiHost0Sd1, kOpentitanDirectPadsSpiHost0Sd1) \
    value(_, SpiHost0Sd2, kOpentitanDirectPadsSpiHost0Sd2) \
    value(_, SpiHost0Sd3, kOpentitanDirectPadsSpiHost0Sd3) \
    value(_, SpiDeviceSd0, kOpentitanDirectPadsSpiDeviceSd0) \
    value(_, SpiDeviceSd1, kOpentitanDirectPadsSpiDeviceSd1) \
    value(_, SpiDeviceSd2, kOpentitanDirectPadsSpiDeviceSd2) \
    value(_, SpiDeviceSd3, kOpentitanDirectPadsSpiDeviceSd3) \
    value(_, SysrstCtrlAonEcRstL, kOpentitanDirectPadsSysrstCtrlAonEcRstL) \
    value(_, SysrstCtrlAonFlashWpL, kOpentitanDirectPadsSysrstCtrlAonFlashWpL) \
    value(_, SpiDeviceSck, kOpentitanDirectPadsSpiDeviceSck) \
    value(_, SpiDeviceCsb, kOpentitanDirectPadsSpiDeviceCsb) \
    value(_, SpiHost0Sck, kOpentitanDirectPadsSpiHost0Sck) \
    value(_, SpiHost0Csb, kOpentitanDirectPadsSpiHost0Csb) \
    value(_, End, kOpentitanDirectPadsLast + 1)
C_ONLY(UJSON_SERDE_ENUM(DirectPads, direct_pads_t, OPENTITAN_DIRECT_PADS, WITH_UNKNOWN));

#define OPENTITAN_MUXED_PADS(_, value) \
    value(_, Ioa0, kOpentitanMuxedPadsIoa0) \
    value(_, Ioa1, kOpentitanMuxedPadsIoa1) \
    value(_, Ioa2, kOpentitanMuxedPadsIoa2) \
    value(_, Ioa3, kOpentitanMuxedPadsIoa3) \
    value(_, Ioa4, kOpentitanMuxedPadsIoa4) \
    value(_, Ioa5, kOpentitanMuxedPadsIoa5) \
    value(_, Ioa6, kOpentitanMuxedPadsIoa6) \
    value(_, Ioa7, kOpentitanMuxedPadsIoa7) \
    value(_, Ioa8, kOpentitanMuxedPadsIoa8) \
    value(_, Iob0, kOpentitanMuxedPadsIob0) \
    value(_, Iob1, kOpentitanMuxedPadsIob1) \
    value(_, Iob2, kOpentitanMuxedPadsIob2) \
    value(_, Iob3, kOpentitanMuxedPadsIob3) \
    value(_, Iob4, kOpentitanMuxedPadsIob4) \
    value(_, Iob5, kOpentitanMuxedPadsIob5) \
    value(_, Iob6, kOpentitanMuxedPadsIob6) \
    value(_, Iob7, kOpentitanMuxedPadsIob7) \
    value(_, Iob8, kOpentitanMuxedPadsIob8) \
    value(_, Iob9, kOpentitanMuxedPadsIob9) \
    value(_, Iob10, kOpentitanMuxedPadsIob10) \
    value(_, Iob11, kOpentitanMuxedPadsIob11) \
    value(_, Iob12, kOpentitanMuxedPadsIob12) \
    value(_, Ioc0, kOpentitanMuxedPadsIoc0) \
    value(_, Ioc1, kOpentitanMuxedPadsIoc1) \
    value(_, Ioc2, kOpentitanMuxedPadsIoc2) \
    value(_, Ioc3, kOpentitanMuxedPadsIoc3) \
    value(_, Ioc4, kOpentitanMuxedPadsIoc4) \
    value(_, Ioc5, kOpentitanMuxedPadsIoc5) \
    value(_, Ioc6, kOpentitanMuxedPadsIoc6) \
    value(_, Ioc7, kOpentitanMuxedPadsIoc7) \
    value(_, Ioc8, kOpentitanMuxedPadsIoc8) \
    value(_, Ioc9, kOpentitanMuxedPadsIoc9) \
    value(_, Ioc10, kOpentitanMuxedPadsIoc10) \
    value(_, Ioc11, kOpentitanMuxedPadsIoc11) \
    value(_, Ioc12, kOpentitanMuxedPadsIoc12) \
    value(_, Ior0, kOpentitanMuxedPadsIor0) \
    value(_, Ior1, kOpentitanMuxedPadsIor1) \
    value(_, Ior2, kOpentitanMuxedPadsIor2) \
    value(_, Ior3, kOpentitanMuxedPadsIor3) \
    value(_, Ior4, kOpentitanMuxedPadsIor4) \
    value(_, Ior5, kOpentitanMuxedPadsIor5) \
    value(_, Ior6, kOpentitanMuxedPadsIor6) \
    value(_, Ior7, kOpentitanMuxedPadsIor7) \
    value(_, Ior10, kOpentitanMuxedPadsIor10) \
    value(_, Ior11, kOpentitanMuxedPadsIor11) \
    value(_, Ior12, kOpentitanMuxedPadsIor12) \
    value(_, Ior13, kOpentitanMuxedPadsIor13) \
    value(_, End, kOpentitanMuxedPadsLast + 1)
C_ONLY(UJSON_SERDE_ENUM(MuxedPads, muxed_pads_t, OPENTITAN_MUXED_PADS, WITH_UNKNOWN));

// clang-format on
#ifdef __cplusplus
}
#endif
#endif  // OPENTITAN_SW_DEVICE_LIB_TESTING_JSON_PINMUX_H_
