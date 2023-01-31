// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// ------------------- W A R N I N G: A U T O - G E N E R A T E D   C O D E !! -------------------//
// PLEASE DO NOT HAND-EDIT THIS FILE. IT HAS BEEN AUTO-GENERATED WITH THE FOLLOWING COMMAND:
//
// util/topgen.py -t hw/top_custom_gf12/data/top_custom_gf12.hjson \
//                -o hw/top_custom_gf12/ \
//                --rnd_cnst_seed 4881560218908238235

package top_custom_gf12_pkg;
  /**
   * Peripheral base address for uart0 in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_UART0_BASE_ADDR = 32'h40000000;

  /**
   * Peripheral size in bytes for uart0 in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_UART0_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for gpio in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_GPIO_BASE_ADDR = 32'h40040000;

  /**
   * Peripheral size in bytes for gpio in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_GPIO_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for i2c0 in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_I2C0_BASE_ADDR = 32'h40080000;

  /**
   * Peripheral size in bytes for i2c0 in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_I2C0_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for rv_timer in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RV_TIMER_BASE_ADDR = 32'h40100000;

  /**
   * Peripheral size in bytes for rv_timer in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RV_TIMER_SIZE_BYTES = 32'h200;

  /**
   * Peripheral base address for core device on otp_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_OTP_CTRL_CORE_BASE_ADDR = 32'h40130000;

  /**
   * Peripheral size in bytes for core device on otp_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_OTP_CTRL_CORE_SIZE_BYTES = 32'h2000;

  /**
   * Peripheral base address for prim device on otp_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_OTP_CTRL_PRIM_BASE_ADDR = 32'h40132000;

  /**
   * Peripheral size in bytes for prim device on otp_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_OTP_CTRL_PRIM_SIZE_BYTES = 32'h20;

  /**
   * Peripheral base address for lc_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_LC_CTRL_BASE_ADDR = 32'h40140000;

  /**
   * Peripheral size in bytes for lc_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_LC_CTRL_SIZE_BYTES = 32'h100;

  /**
   * Peripheral base address for alert_handler in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_ALERT_HANDLER_BASE_ADDR = 32'h40150000;

  /**
   * Peripheral size in bytes for alert_handler in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_ALERT_HANDLER_SIZE_BYTES = 32'h400;

  /**
   * Peripheral base address for spi_host0 in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SPI_HOST0_BASE_ADDR = 32'h40300000;

  /**
   * Peripheral size in bytes for spi_host0 in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SPI_HOST0_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for pwrmgr_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_PWRMGR_AON_BASE_ADDR = 32'h40400000;

  /**
   * Peripheral size in bytes for pwrmgr_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_PWRMGR_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for rstmgr_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RSTMGR_AON_BASE_ADDR = 32'h40410000;

  /**
   * Peripheral size in bytes for rstmgr_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RSTMGR_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for clkmgr_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_CLKMGR_AON_BASE_ADDR = 32'h40420000;

  /**
   * Peripheral size in bytes for clkmgr_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_CLKMGR_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for sysrst_ctrl_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SYSRST_CTRL_AON_BASE_ADDR = 32'h40430000;

  /**
   * Peripheral size in bytes for sysrst_ctrl_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SYSRST_CTRL_AON_SIZE_BYTES = 32'h100;

  /**
   * Peripheral base address for pinmux_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_PINMUX_AON_BASE_ADDR = 32'h40460000;

  /**
   * Peripheral size in bytes for pinmux_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_PINMUX_AON_SIZE_BYTES = 32'h800;

  /**
   * Peripheral base address for aon_timer_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_AON_TIMER_AON_BASE_ADDR = 32'h40470000;

  /**
   * Peripheral size in bytes for aon_timer_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_AON_TIMER_AON_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for ast in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_AST_BASE_ADDR = 32'h40480000;

  /**
   * Peripheral size in bytes for ast in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_AST_SIZE_BYTES = 32'h400;

  /**
   * Peripheral base address for sensor_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SENSOR_CTRL_BASE_ADDR = 32'h40490000;

  /**
   * Peripheral size in bytes for sensor_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SENSOR_CTRL_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for regs device on sram_ctrl_ret_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_REGS_BASE_ADDR = 32'h40500000;

  /**
   * Peripheral size in bytes for regs device on sram_ctrl_ret_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES = 32'h20;

  /**
   * Peripheral base address for ram device on sram_ctrl_ret_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_RAM_BASE_ADDR = 32'h40600000;

  /**
   * Peripheral size in bytes for ram device on sram_ctrl_ret_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for core device on flash_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_FLASH_CTRL_CORE_BASE_ADDR = 32'h41000000;

  /**
   * Peripheral size in bytes for core device on flash_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_FLASH_CTRL_CORE_SIZE_BYTES = 32'h200;

  /**
   * Peripheral base address for prim device on flash_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_FLASH_CTRL_PRIM_BASE_ADDR = 32'h41008000;

  /**
   * Peripheral size in bytes for prim device on flash_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_FLASH_CTRL_PRIM_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for mem device on flash_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_FLASH_CTRL_MEM_BASE_ADDR = 32'h20000000;

  /**
   * Peripheral size in bytes for mem device on flash_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_FLASH_CTRL_MEM_SIZE_BYTES = 32'h40000;

  /**
   * Peripheral base address for regs device on rv_dm in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RV_DM_REGS_BASE_ADDR = 32'h41200000;

  /**
   * Peripheral size in bytes for regs device on rv_dm in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RV_DM_REGS_SIZE_BYTES = 32'h4;

  /**
   * Peripheral base address for mem device on rv_dm in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RV_DM_MEM_BASE_ADDR = 32'h10000;

  /**
   * Peripheral size in bytes for mem device on rv_dm in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RV_DM_MEM_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for rv_plic in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RV_PLIC_BASE_ADDR = 32'h48000000;

  /**
   * Peripheral size in bytes for rv_plic in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RV_PLIC_SIZE_BYTES = 32'h8000000;

  /**
   * Peripheral base address for kmac in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_KMAC_BASE_ADDR = 32'h41120000;

  /**
   * Peripheral size in bytes for kmac in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_KMAC_SIZE_BYTES = 32'h2;

  /**
   * Peripheral base address for regs device on sram_ctrl_main in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_REGS_BASE_ADDR = 32'h411C0000;

  /**
   * Peripheral size in bytes for regs device on sram_ctrl_main in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_REGS_SIZE_BYTES = 32'h20;

  /**
   * Peripheral base address for ram device on sram_ctrl_main in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_RAM_BASE_ADDR = 32'h10000000;

  /**
   * Peripheral size in bytes for ram device on sram_ctrl_main in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_RAM_SIZE_BYTES = 32'h20000;

  /**
   * Peripheral base address for regs device on rom_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_ROM_CTRL_REGS_BASE_ADDR = 32'h411E0000;

  /**
   * Peripheral size in bytes for regs device on rom_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_ROM_CTRL_REGS_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for rom device on rom_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_ROM_CTRL_ROM_BASE_ADDR = 32'h8000;

  /**
   * Peripheral size in bytes for rom device on rom_ctrl in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_ROM_CTRL_ROM_SIZE_BYTES = 32'h8000;

  /**
   * Peripheral base address for cfg device on rv_core_ibex in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RV_CORE_IBEX_CFG_BASE_ADDR = 32'h411F0000;

  /**
   * Peripheral size in bytes for cfg device on rv_core_ibex in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RV_CORE_IBEX_CFG_SIZE_BYTES = 32'h100;

  /**
   * Memory base address for ram_ret_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RAM_RET_AON_BASE_ADDR = 32'h40600000;

  /**
   * Memory size for ram_ret_aon in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RAM_RET_AON_SIZE_BYTES = 32'h1000;

  /**
   * Memory base address for eflash in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_EFLASH_BASE_ADDR = 32'h20000000;

  /**
   * Memory size for eflash in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_EFLASH_SIZE_BYTES = 32'h40000;

  /**
   * Memory base address for ram_main in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RAM_MAIN_BASE_ADDR = 32'h10000000;

  /**
   * Memory size for ram_main in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_RAM_MAIN_SIZE_BYTES = 32'h20000;

  /**
   * Memory base address for rom in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_ROM_BASE_ADDR = 32'h8000;

  /**
   * Memory size for rom in top custom_gf12.
   */
  parameter int unsigned TOP_CUSTOM_GF12_ROM_SIZE_BYTES = 32'h8000;


  // Enumeration of alert modules
  typedef enum int unsigned {
    TopCustomGf12AlertPeripheralUart0 = 0,
    TopCustomGf12AlertPeripheralGpio = 1,
    TopCustomGf12AlertPeripheralI2c0 = 2,
    TopCustomGf12AlertPeripheralRvTimer = 3,
    TopCustomGf12AlertPeripheralOtpCtrl = 4,
    TopCustomGf12AlertPeripheralLcCtrl = 5,
    TopCustomGf12AlertPeripheralSpiHost0 = 6,
    TopCustomGf12AlertPeripheralPwrmgrAon = 7,
    TopCustomGf12AlertPeripheralRstmgrAon = 8,
    TopCustomGf12AlertPeripheralClkmgrAon = 9,
    TopCustomGf12AlertPeripheralSysrstCtrlAon = 10,
    TopCustomGf12AlertPeripheralPinmuxAon = 11,
    TopCustomGf12AlertPeripheralAonTimerAon = 12,
    TopCustomGf12AlertPeripheralSensorCtrl = 13,
    TopCustomGf12AlertPeripheralSramCtrlRetAon = 14,
    TopCustomGf12AlertPeripheralFlashCtrl = 15,
    TopCustomGf12AlertPeripheralRvDm = 16,
    TopCustomGf12AlertPeripheralRvPlic = 17,
    TopCustomGf12AlertPeripheralSramCtrlMain = 18,
    TopCustomGf12AlertPeripheralRomCtrl = 19,
    TopCustomGf12AlertPeripheralRvCoreIbex = 20,
    TopEarlgreyAlertPeripheralCount
  } alert_peripheral_e;

  // Enumeration of alerts
  typedef enum int unsigned {
    TopCustomGf12AlertIdUart0FatalFault = 0,
    TopCustomGf12AlertIdGpioFatalFault = 1,
    TopCustomGf12AlertIdI2c0FatalFault = 2,
    TopCustomGf12AlertIdRvTimerFatalFault = 3,
    TopCustomGf12AlertIdOtpCtrlFatalMacroError = 4,
    TopCustomGf12AlertIdOtpCtrlFatalCheckError = 5,
    TopCustomGf12AlertIdOtpCtrlFatalBusIntegError = 6,
    TopCustomGf12AlertIdOtpCtrlFatalPrimOtpAlert = 7,
    TopCustomGf12AlertIdOtpCtrlRecovPrimOtpAlert = 8,
    TopCustomGf12AlertIdLcCtrlFatalProgError = 9,
    TopCustomGf12AlertIdLcCtrlFatalStateError = 10,
    TopCustomGf12AlertIdLcCtrlFatalBusIntegError = 11,
    TopCustomGf12AlertIdSpiHost0FatalFault = 12,
    TopCustomGf12AlertIdPwrmgrAonFatalFault = 13,
    TopCustomGf12AlertIdRstmgrAonFatalFault = 14,
    TopCustomGf12AlertIdRstmgrAonFatalCnstyFault = 15,
    TopCustomGf12AlertIdClkmgrAonRecovFault = 16,
    TopCustomGf12AlertIdClkmgrAonFatalFault = 17,
    TopCustomGf12AlertIdSysrstCtrlAonFatalFault = 18,
    TopCustomGf12AlertIdPinmuxAonFatalFault = 19,
    TopCustomGf12AlertIdAonTimerAonFatalFault = 20,
    TopCustomGf12AlertIdSensorCtrlRecovAlert = 21,
    TopCustomGf12AlertIdSensorCtrlFatalAlert = 22,
    TopCustomGf12AlertIdSramCtrlRetAonFatalError = 23,
    TopCustomGf12AlertIdFlashCtrlRecovErr = 24,
    TopCustomGf12AlertIdFlashCtrlFatalStdErr = 25,
    TopCustomGf12AlertIdFlashCtrlFatalErr = 26,
    TopCustomGf12AlertIdFlashCtrlFatalPrimFlashAlert = 27,
    TopCustomGf12AlertIdFlashCtrlRecovPrimFlashAlert = 28,
    TopCustomGf12AlertIdRvDmFatalFault = 29,
    TopCustomGf12AlertIdRvPlicFatalFault = 30,
    TopCustomGf12AlertIdSramCtrlMainFatalError = 31,
    TopCustomGf12AlertIdRomCtrlFatal = 32,
    TopCustomGf12AlertIdRvCoreIbexFatalSwErr = 33,
    TopCustomGf12AlertIdRvCoreIbexRecovSwErr = 34,
    TopCustomGf12AlertIdRvCoreIbexFatalHwErr = 35,
    TopCustomGf12AlertIdRvCoreIbexRecovHwErr = 36,
    TopEarlgreyAlertIdCount
  } alert_id_e;

  // Enumeration of IO power domains.
  // Only used in ASIC target.
  typedef enum logic [2:0] {
    IoBankVcc = 0,
    IoBankAvcc = 1,
    IoBankVioa = 2,
    IoBankViob = 3,
    IoBankCount = 4
  } pwr_dom_e;

  // Enumeration for MIO signals on the top-level.
  typedef enum int unsigned {
    MioInGpioGpio0 = 0,
    MioInGpioGpio1 = 1,
    MioInGpioGpio2 = 2,
    MioInGpioGpio3 = 3,
    MioInGpioGpio4 = 4,
    MioInGpioGpio5 = 5,
    MioInGpioGpio6 = 6,
    MioInGpioGpio7 = 7,
    MioInGpioGpio8 = 8,
    MioInGpioGpio9 = 9,
    MioInGpioGpio10 = 10,
    MioInGpioGpio11 = 11,
    MioInGpioGpio12 = 12,
    MioInGpioGpio13 = 13,
    MioInGpioGpio14 = 14,
    MioInGpioGpio15 = 15,
    MioInGpioGpio16 = 16,
    MioInGpioGpio17 = 17,
    MioInGpioGpio18 = 18,
    MioInGpioGpio19 = 19,
    MioInGpioGpio20 = 20,
    MioInGpioGpio21 = 21,
    MioInGpioGpio22 = 22,
    MioInGpioGpio23 = 23,
    MioInGpioGpio24 = 24,
    MioInGpioGpio25 = 25,
    MioInGpioGpio26 = 26,
    MioInGpioGpio27 = 27,
    MioInGpioGpio28 = 28,
    MioInGpioGpio29 = 29,
    MioInGpioGpio30 = 30,
    MioInGpioGpio31 = 31,
    MioInI2c0Sda = 32,
    MioInI2c0Scl = 33,
    MioInUart0Rx = 34,
    MioInFlashCtrlTck = 35,
    MioInFlashCtrlTms = 36,
    MioInFlashCtrlTdi = 37,
    MioInSysrstCtrlAonAcPresent = 38,
    MioInSysrstCtrlAonKey0In = 39,
    MioInSysrstCtrlAonKey1In = 40,
    MioInSysrstCtrlAonKey2In = 41,
    MioInSysrstCtrlAonPwrbIn = 42,
    MioInSysrstCtrlAonLidOpen = 43,
    MioInCount = 44
  } mio_in_e;

  typedef enum {
    MioOutGpioGpio0 = 0,
    MioOutGpioGpio1 = 1,
    MioOutGpioGpio2 = 2,
    MioOutGpioGpio3 = 3,
    MioOutGpioGpio4 = 4,
    MioOutGpioGpio5 = 5,
    MioOutGpioGpio6 = 6,
    MioOutGpioGpio7 = 7,
    MioOutGpioGpio8 = 8,
    MioOutGpioGpio9 = 9,
    MioOutGpioGpio10 = 10,
    MioOutGpioGpio11 = 11,
    MioOutGpioGpio12 = 12,
    MioOutGpioGpio13 = 13,
    MioOutGpioGpio14 = 14,
    MioOutGpioGpio15 = 15,
    MioOutGpioGpio16 = 16,
    MioOutGpioGpio17 = 17,
    MioOutGpioGpio18 = 18,
    MioOutGpioGpio19 = 19,
    MioOutGpioGpio20 = 20,
    MioOutGpioGpio21 = 21,
    MioOutGpioGpio22 = 22,
    MioOutGpioGpio23 = 23,
    MioOutGpioGpio24 = 24,
    MioOutGpioGpio25 = 25,
    MioOutGpioGpio26 = 26,
    MioOutGpioGpio27 = 27,
    MioOutGpioGpio28 = 28,
    MioOutGpioGpio29 = 29,
    MioOutGpioGpio30 = 30,
    MioOutGpioGpio31 = 31,
    MioOutI2c0Sda = 32,
    MioOutI2c0Scl = 33,
    MioOutUart0Tx = 34,
    MioOutFlashCtrlTdo = 35,
    MioOutSensorCtrlAstDebugOut0 = 36,
    MioOutSensorCtrlAstDebugOut1 = 37,
    MioOutSensorCtrlAstDebugOut2 = 38,
    MioOutSensorCtrlAstDebugOut3 = 39,
    MioOutSensorCtrlAstDebugOut4 = 40,
    MioOutSensorCtrlAstDebugOut5 = 41,
    MioOutSensorCtrlAstDebugOut6 = 42,
    MioOutSensorCtrlAstDebugOut7 = 43,
    MioOutSensorCtrlAstDebugOut8 = 44,
    MioOutOtpCtrlTest0 = 45,
    MioOutSysrstCtrlAonBatDisable = 46,
    MioOutSysrstCtrlAonKey0Out = 47,
    MioOutSysrstCtrlAonKey1Out = 48,
    MioOutSysrstCtrlAonKey2Out = 49,
    MioOutSysrstCtrlAonPwrbOut = 50,
    MioOutSysrstCtrlAonZ3Wakeup = 51,
    MioOutCount = 52
  } mio_out_e;

  // Enumeration for DIO signals, used on both the top and chip-levels.
  typedef enum int unsigned {
    DioSpiHost0Sd0 = 0,
    DioSpiHost0Sd1 = 1,
    DioSpiHost0Sd2 = 2,
    DioSpiHost0Sd3 = 3,
    DioSysrstCtrlAonEcRstL = 4,
    DioSysrstCtrlAonFlashWpL = 5,
    DioSpiHost0Sck = 6,
    DioSpiHost0Csb = 7,
    DioCount = 8
  } dio_e;

  // Enumeration for the types of pads.
  typedef enum {
    MioPad,
    DioPad
  } pad_type_e;

  // Raw MIO/DIO input array indices on chip-level.
  // TODO: Does not account for target specific stubbed/added pads.
  // Need to make a target-specific package for those.
  typedef enum int unsigned {
    MioPadIoa0 = 0,
    MioPadIoa1 = 1,
    MioPadIoa2 = 2,
    MioPadIoa3 = 3,
    MioPadIoa4 = 4,
    MioPadIoa5 = 5,
    MioPadIoa6 = 6,
    MioPadIoa7 = 7,
    MioPadIoa8 = 8,
    MioPadIob0 = 9,
    MioPadIob1 = 10,
    MioPadIob2 = 11,
    MioPadIob3 = 12,
    MioPadIob4 = 13,
    MioPadIob5 = 14,
    MioPadIob6 = 15,
    MioPadIob7 = 16,
    MioPadIob8 = 17,
    MioPadIob9 = 18,
    MioPadIob10 = 19,
    MioPadIob11 = 20,
    MioPadIob12 = 21,
    MioPadIoc0 = 22,
    MioPadIoc1 = 23,
    MioPadIoc2 = 24,
    MioPadIoc3 = 25,
    MioPadIoc4 = 26,
    MioPadIoc5 = 27,
    MioPadIoc6 = 28,
    MioPadIoc7 = 29,
    MioPadIoc8 = 30,
    MioPadIoc9 = 31,
    MioPadIoc10 = 32,
    MioPadIoc11 = 33,
    MioPadIor0 = 34,
    MioPadIor1 = 35,
    MioPadIor2 = 36,
    MioPadIor3 = 37,
    MioPadIor4 = 38,
    MioPadIor5 = 39,
    MioPadIor6 = 40,
    MioPadIor7 = 41,
    MioPadCount
  } mio_pad_e;

  typedef enum int unsigned {
    DioPadPorN = 0,
    DioPadUsbP = 1,
    DioPadUsbN = 2,
    DioPadCc1 = 3,
    DioPadCc2 = 4,
    DioPadFlashTestVolt = 5,
    DioPadFlashTestMode0 = 6,
    DioPadFlashTestMode1 = 7,
    DioPadOtpExtVolt = 8,
    DioPadSpiHostD0 = 9,
    DioPadSpiHostD1 = 10,
    DioPadSpiHostD2 = 11,
    DioPadSpiHostD3 = 12,
    DioPadSpiHostClk = 13,
    DioPadSpiHostCsL = 14,
    DioPadIor8 = 15,
    DioPadIor9 = 16,
    DioPadCount
  } dio_pad_e;

  // List of peripheral instantiated in this chip.
  typedef enum {
    PeripheralAlertHandler,
    PeripheralAonTimerAon,
    PeripheralAst,
    PeripheralClkmgrAon,
    PeripheralFlashCtrl,
    PeripheralGpio,
    PeripheralI2c0,
    PeripheralKmac,
    PeripheralLcCtrl,
    PeripheralOtpCtrl,
    PeripheralPinmuxAon,
    PeripheralPwrmgrAon,
    PeripheralRomCtrl,
    PeripheralRstmgrAon,
    PeripheralRvCoreIbex,
    PeripheralRvDm,
    PeripheralRvPlic,
    PeripheralRvTimer,
    PeripheralSensorCtrl,
    PeripheralSpiHost0,
    PeripheralSramCtrlMain,
    PeripheralSramCtrlRetAon,
    PeripheralSysrstCtrlAon,
    PeripheralUart0,
    PeripheralCount
  } peripheral_e;

  // TODO: Enumeration for PLIC Interrupt source peripheral.
  // TODO: Enumeration for PLIC Interrupt Ids.

endpackage
