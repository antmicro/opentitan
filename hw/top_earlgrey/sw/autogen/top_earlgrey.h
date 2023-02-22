// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENTITAN_HW_TOP_EARLGREY_SW_AUTOGEN_TOP_EARLGREY_H_
#define OPENTITAN_HW_TOP_EARLGREY_SW_AUTOGEN_TOP_EARLGREY_H_

/**
 * @file
 * @brief Top-specific Definitions
 *
 * This file contains preprocessor and type definitions for use within the
 * device C/C++ codebase.
 *
 * These definitions are for information that depends on the top-specific chip
 * configuration, which includes:
 * - Device Memory Information (for Peripherals and Memory)
 * - PLIC Interrupt ID Names and Source Mappings
 * - Alert ID Names and Source Mappings
 * - Pinmux Pin/Select Names
 * - Power Manager Wakeups
 */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Peripheral base address for uart0 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_UART0_BASE_ADDR 0x40000000u

/**
 * Peripheral size for uart0 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_UART0_BASE_ADDR and
 * `OPENTITAN_UART0_BASE_ADDR + OPENTITAN_UART0_SIZE_BYTES`.
 */
#define OPENTITAN_UART0_SIZE_BYTES 0x40u

/**
 * Peripheral base address for uart1 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_UART1_BASE_ADDR 0x40010000u

/**
 * Peripheral size for uart1 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_UART1_BASE_ADDR and
 * `OPENTITAN_UART1_BASE_ADDR + OPENTITAN_UART1_SIZE_BYTES`.
 */
#define OPENTITAN_UART1_SIZE_BYTES 0x40u

/**
 * Peripheral base address for uart2 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_UART2_BASE_ADDR 0x40020000u

/**
 * Peripheral size for uart2 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_UART2_BASE_ADDR and
 * `OPENTITAN_UART2_BASE_ADDR + OPENTITAN_UART2_SIZE_BYTES`.
 */
#define OPENTITAN_UART2_SIZE_BYTES 0x40u

/**
 * Peripheral base address for uart3 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_UART3_BASE_ADDR 0x40030000u

/**
 * Peripheral size for uart3 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_UART3_BASE_ADDR and
 * `OPENTITAN_UART3_BASE_ADDR + OPENTITAN_UART3_SIZE_BYTES`.
 */
#define OPENTITAN_UART3_SIZE_BYTES 0x40u

/**
 * Peripheral base address for gpio in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_GPIO_BASE_ADDR 0x40040000u

/**
 * Peripheral size for gpio in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_GPIO_BASE_ADDR and
 * `OPENTITAN_GPIO_BASE_ADDR + OPENTITAN_GPIO_SIZE_BYTES`.
 */
#define OPENTITAN_GPIO_SIZE_BYTES 0x40u

/**
 * Peripheral base address for spi_device in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SPI_DEVICE_BASE_ADDR 0x40050000u

/**
 * Peripheral size for spi_device in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SPI_DEVICE_BASE_ADDR and
 * `OPENTITAN_SPI_DEVICE_BASE_ADDR + OPENTITAN_SPI_DEVICE_SIZE_BYTES`.
 */
#define OPENTITAN_SPI_DEVICE_SIZE_BYTES 0x2000u

/**
 * Peripheral base address for i2c0 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_I2C0_BASE_ADDR 0x40080000u

/**
 * Peripheral size for i2c0 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_I2C0_BASE_ADDR and
 * `OPENTITAN_I2C0_BASE_ADDR + OPENTITAN_I2C0_SIZE_BYTES`.
 */
#define OPENTITAN_I2C0_SIZE_BYTES 0x80u

/**
 * Peripheral base address for i2c1 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_I2C1_BASE_ADDR 0x40090000u

/**
 * Peripheral size for i2c1 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_I2C1_BASE_ADDR and
 * `OPENTITAN_I2C1_BASE_ADDR + OPENTITAN_I2C1_SIZE_BYTES`.
 */
#define OPENTITAN_I2C1_SIZE_BYTES 0x80u

/**
 * Peripheral base address for i2c2 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_I2C2_BASE_ADDR 0x400A0000u

/**
 * Peripheral size for i2c2 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_I2C2_BASE_ADDR and
 * `OPENTITAN_I2C2_BASE_ADDR + OPENTITAN_I2C2_SIZE_BYTES`.
 */
#define OPENTITAN_I2C2_SIZE_BYTES 0x80u

/**
 * Peripheral base address for pattgen in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_PATTGEN_BASE_ADDR 0x400E0000u

/**
 * Peripheral size for pattgen in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_PATTGEN_BASE_ADDR and
 * `OPENTITAN_PATTGEN_BASE_ADDR + OPENTITAN_PATTGEN_SIZE_BYTES`.
 */
#define OPENTITAN_PATTGEN_SIZE_BYTES 0x40u

/**
 * Peripheral base address for rv_timer in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RV_TIMER_BASE_ADDR 0x40100000u

/**
 * Peripheral size for rv_timer in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RV_TIMER_BASE_ADDR and
 * `OPENTITAN_RV_TIMER_BASE_ADDR + OPENTITAN_RV_TIMER_SIZE_BYTES`.
 */
#define OPENTITAN_RV_TIMER_SIZE_BYTES 0x200u

/**
 * Peripheral base address for core device on otp_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_OTP_CTRL_CORE_BASE_ADDR 0x40130000u

/**
 * Peripheral size for core device on otp_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_OTP_CTRL_CORE_BASE_ADDR and
 * `OPENTITAN_OTP_CTRL_CORE_BASE_ADDR + OPENTITAN_OTP_CTRL_CORE_SIZE_BYTES`.
 */
#define OPENTITAN_OTP_CTRL_CORE_SIZE_BYTES 0x2000u

/**
 * Peripheral base address for prim device on otp_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_OTP_CTRL_PRIM_BASE_ADDR 0x40132000u

/**
 * Peripheral size for prim device on otp_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_OTP_CTRL_PRIM_BASE_ADDR and
 * `OPENTITAN_OTP_CTRL_PRIM_BASE_ADDR + OPENTITAN_OTP_CTRL_PRIM_SIZE_BYTES`.
 */
#define OPENTITAN_OTP_CTRL_PRIM_SIZE_BYTES 0x20u

/**
 * Peripheral base address for lc_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_LC_CTRL_BASE_ADDR 0x40140000u

/**
 * Peripheral size for lc_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_LC_CTRL_BASE_ADDR and
 * `OPENTITAN_LC_CTRL_BASE_ADDR + OPENTITAN_LC_CTRL_SIZE_BYTES`.
 */
#define OPENTITAN_LC_CTRL_SIZE_BYTES 0x100u

/**
 * Peripheral base address for alert_handler in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_ALERT_HANDLER_BASE_ADDR 0x40150000u

/**
 * Peripheral size for alert_handler in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_ALERT_HANDLER_BASE_ADDR and
 * `OPENTITAN_ALERT_HANDLER_BASE_ADDR + OPENTITAN_ALERT_HANDLER_SIZE_BYTES`.
 */
#define OPENTITAN_ALERT_HANDLER_SIZE_BYTES 0x800u

/**
 * Peripheral base address for spi_host0 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SPI_HOST0_BASE_ADDR 0x40300000u

/**
 * Peripheral size for spi_host0 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SPI_HOST0_BASE_ADDR and
 * `OPENTITAN_SPI_HOST0_BASE_ADDR + OPENTITAN_SPI_HOST0_SIZE_BYTES`.
 */
#define OPENTITAN_SPI_HOST0_SIZE_BYTES 0x40u

/**
 * Peripheral base address for spi_host1 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SPI_HOST1_BASE_ADDR 0x40310000u

/**
 * Peripheral size for spi_host1 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SPI_HOST1_BASE_ADDR and
 * `OPENTITAN_SPI_HOST1_BASE_ADDR + OPENTITAN_SPI_HOST1_SIZE_BYTES`.
 */
#define OPENTITAN_SPI_HOST1_SIZE_BYTES 0x40u

/**
 * Peripheral base address for usbdev in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_USBDEV_BASE_ADDR 0x40320000u

/**
 * Peripheral size for usbdev in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_USBDEV_BASE_ADDR and
 * `OPENTITAN_USBDEV_BASE_ADDR + OPENTITAN_USBDEV_SIZE_BYTES`.
 */
#define OPENTITAN_USBDEV_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for pwrmgr_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_PWRMGR_AON_BASE_ADDR 0x40400000u

/**
 * Peripheral size for pwrmgr_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_PWRMGR_AON_BASE_ADDR and
 * `OPENTITAN_PWRMGR_AON_BASE_ADDR + OPENTITAN_PWRMGR_AON_SIZE_BYTES`.
 */
#define OPENTITAN_PWRMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rstmgr_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RSTMGR_AON_BASE_ADDR 0x40410000u

/**
 * Peripheral size for rstmgr_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RSTMGR_AON_BASE_ADDR and
 * `OPENTITAN_RSTMGR_AON_BASE_ADDR + OPENTITAN_RSTMGR_AON_SIZE_BYTES`.
 */
#define OPENTITAN_RSTMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for clkmgr_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_CLKMGR_AON_BASE_ADDR 0x40420000u

/**
 * Peripheral size for clkmgr_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_CLKMGR_AON_BASE_ADDR and
 * `OPENTITAN_CLKMGR_AON_BASE_ADDR + OPENTITAN_CLKMGR_AON_SIZE_BYTES`.
 */
#define OPENTITAN_CLKMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for sysrst_ctrl_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SYSRST_CTRL_AON_BASE_ADDR 0x40430000u

/**
 * Peripheral size for sysrst_ctrl_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SYSRST_CTRL_AON_BASE_ADDR and
 * `OPENTITAN_SYSRST_CTRL_AON_BASE_ADDR + OPENTITAN_SYSRST_CTRL_AON_SIZE_BYTES`.
 */
#define OPENTITAN_SYSRST_CTRL_AON_SIZE_BYTES 0x100u

/**
 * Peripheral base address for adc_ctrl_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_ADC_CTRL_AON_BASE_ADDR 0x40440000u

/**
 * Peripheral size for adc_ctrl_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_ADC_CTRL_AON_BASE_ADDR and
 * `OPENTITAN_ADC_CTRL_AON_BASE_ADDR + OPENTITAN_ADC_CTRL_AON_SIZE_BYTES`.
 */
#define OPENTITAN_ADC_CTRL_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for pwm_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_PWM_AON_BASE_ADDR 0x40450000u

/**
 * Peripheral size for pwm_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_PWM_AON_BASE_ADDR and
 * `OPENTITAN_PWM_AON_BASE_ADDR + OPENTITAN_PWM_AON_SIZE_BYTES`.
 */
#define OPENTITAN_PWM_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for pinmux_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_PINMUX_AON_BASE_ADDR 0x40460000u

/**
 * Peripheral size for pinmux_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_PINMUX_AON_BASE_ADDR and
 * `OPENTITAN_PINMUX_AON_BASE_ADDR + OPENTITAN_PINMUX_AON_SIZE_BYTES`.
 */
#define OPENTITAN_PINMUX_AON_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for aon_timer_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_AON_TIMER_AON_BASE_ADDR 0x40470000u

/**
 * Peripheral size for aon_timer_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_AON_TIMER_AON_BASE_ADDR and
 * `OPENTITAN_AON_TIMER_AON_BASE_ADDR + OPENTITAN_AON_TIMER_AON_SIZE_BYTES`.
 */
#define OPENTITAN_AON_TIMER_AON_SIZE_BYTES 0x40u

/**
 * Peripheral base address for ast in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_AST_BASE_ADDR 0x40480000u

/**
 * Peripheral size for ast in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_AST_BASE_ADDR and
 * `OPENTITAN_AST_BASE_ADDR + OPENTITAN_AST_SIZE_BYTES`.
 */
#define OPENTITAN_AST_SIZE_BYTES 0x400u

/**
 * Peripheral base address for sensor_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SENSOR_CTRL_BASE_ADDR 0x40490000u

/**
 * Peripheral size for sensor_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SENSOR_CTRL_BASE_ADDR and
 * `OPENTITAN_SENSOR_CTRL_BASE_ADDR + OPENTITAN_SENSOR_CTRL_SIZE_BYTES`.
 */
#define OPENTITAN_SENSOR_CTRL_SIZE_BYTES 0x40u

/**
 * Peripheral base address for regs device on sram_ctrl_ret_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SRAM_CTRL_RET_AON_REGS_BASE_ADDR 0x40500000u

/**
 * Peripheral size for regs device on sram_ctrl_ret_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SRAM_CTRL_RET_AON_REGS_BASE_ADDR and
 * `OPENTITAN_SRAM_CTRL_RET_AON_REGS_BASE_ADDR + OPENTITAN_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES`.
 */
#define OPENTITAN_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES 0x20u

/**
 * Peripheral base address for ram device on sram_ctrl_ret_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SRAM_CTRL_RET_AON_RAM_BASE_ADDR 0x40600000u

/**
 * Peripheral size for ram device on sram_ctrl_ret_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SRAM_CTRL_RET_AON_RAM_BASE_ADDR and
 * `OPENTITAN_SRAM_CTRL_RET_AON_RAM_BASE_ADDR + OPENTITAN_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES`.
 */
#define OPENTITAN_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for core device on flash_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_FLASH_CTRL_CORE_BASE_ADDR 0x41000000u

/**
 * Peripheral size for core device on flash_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_FLASH_CTRL_CORE_BASE_ADDR and
 * `OPENTITAN_FLASH_CTRL_CORE_BASE_ADDR + OPENTITAN_FLASH_CTRL_CORE_SIZE_BYTES`.
 */
#define OPENTITAN_FLASH_CTRL_CORE_SIZE_BYTES 0x200u

/**
 * Peripheral base address for prim device on flash_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_FLASH_CTRL_PRIM_BASE_ADDR 0x41008000u

/**
 * Peripheral size for prim device on flash_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_FLASH_CTRL_PRIM_BASE_ADDR and
 * `OPENTITAN_FLASH_CTRL_PRIM_BASE_ADDR + OPENTITAN_FLASH_CTRL_PRIM_SIZE_BYTES`.
 */
#define OPENTITAN_FLASH_CTRL_PRIM_SIZE_BYTES 0x80u

/**
 * Peripheral base address for mem device on flash_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_FLASH_CTRL_MEM_BASE_ADDR 0x20000000u

/**
 * Peripheral size for mem device on flash_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_FLASH_CTRL_MEM_BASE_ADDR and
 * `OPENTITAN_FLASH_CTRL_MEM_BASE_ADDR + OPENTITAN_FLASH_CTRL_MEM_SIZE_BYTES`.
 */
#define OPENTITAN_FLASH_CTRL_MEM_SIZE_BYTES 0x100000u

/**
 * Peripheral base address for regs device on rv_dm in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RV_DM_REGS_BASE_ADDR 0x41200000u

/**
 * Peripheral size for regs device on rv_dm in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RV_DM_REGS_BASE_ADDR and
 * `OPENTITAN_RV_DM_REGS_BASE_ADDR + OPENTITAN_RV_DM_REGS_SIZE_BYTES`.
 */
#define OPENTITAN_RV_DM_REGS_SIZE_BYTES 0x4u

/**
 * Peripheral base address for mem device on rv_dm in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RV_DM_MEM_BASE_ADDR 0x10000u

/**
 * Peripheral size for mem device on rv_dm in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RV_DM_MEM_BASE_ADDR and
 * `OPENTITAN_RV_DM_MEM_BASE_ADDR + OPENTITAN_RV_DM_MEM_SIZE_BYTES`.
 */
#define OPENTITAN_RV_DM_MEM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for rv_plic in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RV_PLIC_BASE_ADDR 0x48000000u

/**
 * Peripheral size for rv_plic in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RV_PLIC_BASE_ADDR and
 * `OPENTITAN_RV_PLIC_BASE_ADDR + OPENTITAN_RV_PLIC_SIZE_BYTES`.
 */
#define OPENTITAN_RV_PLIC_SIZE_BYTES 0x8000000u

/**
 * Peripheral base address for aes in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_AES_BASE_ADDR 0x41100000u

/**
 * Peripheral size for aes in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_AES_BASE_ADDR and
 * `OPENTITAN_AES_BASE_ADDR + OPENTITAN_AES_SIZE_BYTES`.
 */
#define OPENTITAN_AES_SIZE_BYTES 0x100u

/**
 * Peripheral base address for hmac in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_HMAC_BASE_ADDR 0x41110000u

/**
 * Peripheral size for hmac in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_HMAC_BASE_ADDR and
 * `OPENTITAN_HMAC_BASE_ADDR + OPENTITAN_HMAC_SIZE_BYTES`.
 */
#define OPENTITAN_HMAC_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for kmac in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_KMAC_BASE_ADDR 0x41120000u

/**
 * Peripheral size for kmac in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_KMAC_BASE_ADDR and
 * `OPENTITAN_KMAC_BASE_ADDR + OPENTITAN_KMAC_SIZE_BYTES`.
 */
#define OPENTITAN_KMAC_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for otbn in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_OTBN_BASE_ADDR 0x41130000u

/**
 * Peripheral size for otbn in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_OTBN_BASE_ADDR and
 * `OPENTITAN_OTBN_BASE_ADDR + OPENTITAN_OTBN_SIZE_BYTES`.
 */
#define OPENTITAN_OTBN_SIZE_BYTES 0x10000u

/**
 * Peripheral base address for keymgr in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_KEYMGR_BASE_ADDR 0x41140000u

/**
 * Peripheral size for keymgr in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_KEYMGR_BASE_ADDR and
 * `OPENTITAN_KEYMGR_BASE_ADDR + OPENTITAN_KEYMGR_SIZE_BYTES`.
 */
#define OPENTITAN_KEYMGR_SIZE_BYTES 0x100u

/**
 * Peripheral base address for csrng in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_CSRNG_BASE_ADDR 0x41150000u

/**
 * Peripheral size for csrng in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_CSRNG_BASE_ADDR and
 * `OPENTITAN_CSRNG_BASE_ADDR + OPENTITAN_CSRNG_SIZE_BYTES`.
 */
#define OPENTITAN_CSRNG_SIZE_BYTES 0x80u

/**
 * Peripheral base address for entropy_src in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_ENTROPY_SRC_BASE_ADDR 0x41160000u

/**
 * Peripheral size for entropy_src in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_ENTROPY_SRC_BASE_ADDR and
 * `OPENTITAN_ENTROPY_SRC_BASE_ADDR + OPENTITAN_ENTROPY_SRC_SIZE_BYTES`.
 */
#define OPENTITAN_ENTROPY_SRC_SIZE_BYTES 0x100u

/**
 * Peripheral base address for edn0 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_EDN0_BASE_ADDR 0x41170000u

/**
 * Peripheral size for edn0 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_EDN0_BASE_ADDR and
 * `OPENTITAN_EDN0_BASE_ADDR + OPENTITAN_EDN0_SIZE_BYTES`.
 */
#define OPENTITAN_EDN0_SIZE_BYTES 0x80u

/**
 * Peripheral base address for edn1 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_EDN1_BASE_ADDR 0x41180000u

/**
 * Peripheral size for edn1 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_EDN1_BASE_ADDR and
 * `OPENTITAN_EDN1_BASE_ADDR + OPENTITAN_EDN1_SIZE_BYTES`.
 */
#define OPENTITAN_EDN1_SIZE_BYTES 0x80u

/**
 * Peripheral base address for regs device on sram_ctrl_main in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SRAM_CTRL_MAIN_REGS_BASE_ADDR 0x411C0000u

/**
 * Peripheral size for regs device on sram_ctrl_main in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SRAM_CTRL_MAIN_REGS_BASE_ADDR and
 * `OPENTITAN_SRAM_CTRL_MAIN_REGS_BASE_ADDR + OPENTITAN_SRAM_CTRL_MAIN_REGS_SIZE_BYTES`.
 */
#define OPENTITAN_SRAM_CTRL_MAIN_REGS_SIZE_BYTES 0x20u

/**
 * Peripheral base address for ram device on sram_ctrl_main in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SRAM_CTRL_MAIN_RAM_BASE_ADDR 0x10000000u

/**
 * Peripheral size for ram device on sram_ctrl_main in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SRAM_CTRL_MAIN_RAM_BASE_ADDR and
 * `OPENTITAN_SRAM_CTRL_MAIN_RAM_BASE_ADDR + OPENTITAN_SRAM_CTRL_MAIN_RAM_SIZE_BYTES`.
 */
#define OPENTITAN_SRAM_CTRL_MAIN_RAM_SIZE_BYTES 0x20000u

/**
 * Peripheral base address for regs device on rom_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_ROM_CTRL_REGS_BASE_ADDR 0x411E0000u

/**
 * Peripheral size for regs device on rom_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_ROM_CTRL_REGS_BASE_ADDR and
 * `OPENTITAN_ROM_CTRL_REGS_BASE_ADDR + OPENTITAN_ROM_CTRL_REGS_SIZE_BYTES`.
 */
#define OPENTITAN_ROM_CTRL_REGS_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rom device on rom_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_ROM_CTRL_ROM_BASE_ADDR 0x8000u

/**
 * Peripheral size for rom device on rom_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_ROM_CTRL_ROM_BASE_ADDR and
 * `OPENTITAN_ROM_CTRL_ROM_BASE_ADDR + OPENTITAN_ROM_CTRL_ROM_SIZE_BYTES`.
 */
#define OPENTITAN_ROM_CTRL_ROM_SIZE_BYTES 0x8000u

/**
 * Peripheral base address for cfg device on rv_core_ibex in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RV_CORE_IBEX_CFG_BASE_ADDR 0x411F0000u

/**
 * Peripheral size for cfg device on rv_core_ibex in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RV_CORE_IBEX_CFG_BASE_ADDR and
 * `OPENTITAN_RV_CORE_IBEX_CFG_BASE_ADDR + OPENTITAN_RV_CORE_IBEX_CFG_SIZE_BYTES`.
 */
#define OPENTITAN_RV_CORE_IBEX_CFG_SIZE_BYTES 0x100u


/**
 * Memory base address for ram_ret_aon in top earlgrey.
 */
#define OPENTITAN_RAM_RET_AON_BASE_ADDR 0x40600000u

/**
 * Memory size for ram_ret_aon in top earlgrey.
 */
#define OPENTITAN_RAM_RET_AON_SIZE_BYTES 0x1000u

/**
 * Memory base address for eflash in top earlgrey.
 */
#define OPENTITAN_EFLASH_BASE_ADDR 0x20000000u

/**
 * Memory size for eflash in top earlgrey.
 */
#define OPENTITAN_EFLASH_SIZE_BYTES 0x100000u

/**
 * Memory base address for ram_main in top earlgrey.
 */
#define OPENTITAN_RAM_MAIN_BASE_ADDR 0x10000000u

/**
 * Memory size for ram_main in top earlgrey.
 */
#define OPENTITAN_RAM_MAIN_SIZE_BYTES 0x20000u

/**
 * Memory base address for rom in top earlgrey.
 */
#define OPENTITAN_ROM_BASE_ADDR 0x8000u

/**
 * Memory size for rom in top earlgrey.
 */
#define OPENTITAN_ROM_SIZE_BYTES 0x8000u


/**
 * PLIC Interrupt Source Peripheral.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * interrupt.
 */
typedef enum opentitan_plic_peripheral {
  kOpentitanPlicPeripheralUnknown = 0, /**< Unknown Peripheral */
  kOpentitanPlicPeripheralUart0 = 1, /**< uart0 */
  kOpentitanPlicPeripheralUart1 = 2, /**< uart1 */
  kOpentitanPlicPeripheralUart2 = 3, /**< uart2 */
  kOpentitanPlicPeripheralUart3 = 4, /**< uart3 */
  kOpentitanPlicPeripheralGpio = 5, /**< gpio */
  kOpentitanPlicPeripheralSpiDevice = 6, /**< spi_device */
  kOpentitanPlicPeripheralI2c0 = 7, /**< i2c0 */
  kOpentitanPlicPeripheralI2c1 = 8, /**< i2c1 */
  kOpentitanPlicPeripheralI2c2 = 9, /**< i2c2 */
  kOpentitanPlicPeripheralPattgen = 10, /**< pattgen */
  kOpentitanPlicPeripheralRvTimer = 11, /**< rv_timer */
  kOpentitanPlicPeripheralOtpCtrl = 12, /**< otp_ctrl */
  kOpentitanPlicPeripheralAlertHandler = 13, /**< alert_handler */
  kOpentitanPlicPeripheralSpiHost0 = 14, /**< spi_host0 */
  kOpentitanPlicPeripheralSpiHost1 = 15, /**< spi_host1 */
  kOpentitanPlicPeripheralUsbdev = 16, /**< usbdev */
  kOpentitanPlicPeripheralPwrmgrAon = 17, /**< pwrmgr_aon */
  kOpentitanPlicPeripheralSysrstCtrlAon = 18, /**< sysrst_ctrl_aon */
  kOpentitanPlicPeripheralAdcCtrlAon = 19, /**< adc_ctrl_aon */
  kOpentitanPlicPeripheralAonTimerAon = 20, /**< aon_timer_aon */
  kOpentitanPlicPeripheralSensorCtrl = 21, /**< sensor_ctrl */
  kOpentitanPlicPeripheralFlashCtrl = 22, /**< flash_ctrl */
  kOpentitanPlicPeripheralHmac = 23, /**< hmac */
  kOpentitanPlicPeripheralKmac = 24, /**< kmac */
  kOpentitanPlicPeripheralOtbn = 25, /**< otbn */
  kOpentitanPlicPeripheralKeymgr = 26, /**< keymgr */
  kOpentitanPlicPeripheralCsrng = 27, /**< csrng */
  kOpentitanPlicPeripheralEntropySrc = 28, /**< entropy_src */
  kOpentitanPlicPeripheralEdn0 = 29, /**< edn0 */
  kOpentitanPlicPeripheralEdn1 = 30, /**< edn1 */
  kOpentitanPlicPeripheralLast = 30, /**< \internal Final PLIC peripheral */
} opentitan_plic_peripheral_t;

/**
 * PLIC Interrupt Source.
 *
 * Enumeration of all PLIC interrupt sources. The interrupt sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum opentitan_plic_irq_id {
  kOpentitanPlicIrqIdNone = 0, /**< No Interrupt */
  kOpentitanPlicIrqIdUart0TxWatermark = 1, /**< uart0_tx_watermark */
  kOpentitanPlicIrqIdUart0RxWatermark = 2, /**< uart0_rx_watermark */
  kOpentitanPlicIrqIdUart0TxEmpty = 3, /**< uart0_tx_empty */
  kOpentitanPlicIrqIdUart0RxOverflow = 4, /**< uart0_rx_overflow */
  kOpentitanPlicIrqIdUart0RxFrameErr = 5, /**< uart0_rx_frame_err */
  kOpentitanPlicIrqIdUart0RxBreakErr = 6, /**< uart0_rx_break_err */
  kOpentitanPlicIrqIdUart0RxTimeout = 7, /**< uart0_rx_timeout */
  kOpentitanPlicIrqIdUart0RxParityErr = 8, /**< uart0_rx_parity_err */
  kOpentitanPlicIrqIdUart1TxWatermark = 9, /**< uart1_tx_watermark */
  kOpentitanPlicIrqIdUart1RxWatermark = 10, /**< uart1_rx_watermark */
  kOpentitanPlicIrqIdUart1TxEmpty = 11, /**< uart1_tx_empty */
  kOpentitanPlicIrqIdUart1RxOverflow = 12, /**< uart1_rx_overflow */
  kOpentitanPlicIrqIdUart1RxFrameErr = 13, /**< uart1_rx_frame_err */
  kOpentitanPlicIrqIdUart1RxBreakErr = 14, /**< uart1_rx_break_err */
  kOpentitanPlicIrqIdUart1RxTimeout = 15, /**< uart1_rx_timeout */
  kOpentitanPlicIrqIdUart1RxParityErr = 16, /**< uart1_rx_parity_err */
  kOpentitanPlicIrqIdUart2TxWatermark = 17, /**< uart2_tx_watermark */
  kOpentitanPlicIrqIdUart2RxWatermark = 18, /**< uart2_rx_watermark */
  kOpentitanPlicIrqIdUart2TxEmpty = 19, /**< uart2_tx_empty */
  kOpentitanPlicIrqIdUart2RxOverflow = 20, /**< uart2_rx_overflow */
  kOpentitanPlicIrqIdUart2RxFrameErr = 21, /**< uart2_rx_frame_err */
  kOpentitanPlicIrqIdUart2RxBreakErr = 22, /**< uart2_rx_break_err */
  kOpentitanPlicIrqIdUart2RxTimeout = 23, /**< uart2_rx_timeout */
  kOpentitanPlicIrqIdUart2RxParityErr = 24, /**< uart2_rx_parity_err */
  kOpentitanPlicIrqIdUart3TxWatermark = 25, /**< uart3_tx_watermark */
  kOpentitanPlicIrqIdUart3RxWatermark = 26, /**< uart3_rx_watermark */
  kOpentitanPlicIrqIdUart3TxEmpty = 27, /**< uart3_tx_empty */
  kOpentitanPlicIrqIdUart3RxOverflow = 28, /**< uart3_rx_overflow */
  kOpentitanPlicIrqIdUart3RxFrameErr = 29, /**< uart3_rx_frame_err */
  kOpentitanPlicIrqIdUart3RxBreakErr = 30, /**< uart3_rx_break_err */
  kOpentitanPlicIrqIdUart3RxTimeout = 31, /**< uart3_rx_timeout */
  kOpentitanPlicIrqIdUart3RxParityErr = 32, /**< uart3_rx_parity_err */
  kOpentitanPlicIrqIdGpioGpio0 = 33, /**< gpio_gpio 0 */
  kOpentitanPlicIrqIdGpioGpio1 = 34, /**< gpio_gpio 1 */
  kOpentitanPlicIrqIdGpioGpio2 = 35, /**< gpio_gpio 2 */
  kOpentitanPlicIrqIdGpioGpio3 = 36, /**< gpio_gpio 3 */
  kOpentitanPlicIrqIdGpioGpio4 = 37, /**< gpio_gpio 4 */
  kOpentitanPlicIrqIdGpioGpio5 = 38, /**< gpio_gpio 5 */
  kOpentitanPlicIrqIdGpioGpio6 = 39, /**< gpio_gpio 6 */
  kOpentitanPlicIrqIdGpioGpio7 = 40, /**< gpio_gpio 7 */
  kOpentitanPlicIrqIdGpioGpio8 = 41, /**< gpio_gpio 8 */
  kOpentitanPlicIrqIdGpioGpio9 = 42, /**< gpio_gpio 9 */
  kOpentitanPlicIrqIdGpioGpio10 = 43, /**< gpio_gpio 10 */
  kOpentitanPlicIrqIdGpioGpio11 = 44, /**< gpio_gpio 11 */
  kOpentitanPlicIrqIdGpioGpio12 = 45, /**< gpio_gpio 12 */
  kOpentitanPlicIrqIdGpioGpio13 = 46, /**< gpio_gpio 13 */
  kOpentitanPlicIrqIdGpioGpio14 = 47, /**< gpio_gpio 14 */
  kOpentitanPlicIrqIdGpioGpio15 = 48, /**< gpio_gpio 15 */
  kOpentitanPlicIrqIdGpioGpio16 = 49, /**< gpio_gpio 16 */
  kOpentitanPlicIrqIdGpioGpio17 = 50, /**< gpio_gpio 17 */
  kOpentitanPlicIrqIdGpioGpio18 = 51, /**< gpio_gpio 18 */
  kOpentitanPlicIrqIdGpioGpio19 = 52, /**< gpio_gpio 19 */
  kOpentitanPlicIrqIdGpioGpio20 = 53, /**< gpio_gpio 20 */
  kOpentitanPlicIrqIdGpioGpio21 = 54, /**< gpio_gpio 21 */
  kOpentitanPlicIrqIdGpioGpio22 = 55, /**< gpio_gpio 22 */
  kOpentitanPlicIrqIdGpioGpio23 = 56, /**< gpio_gpio 23 */
  kOpentitanPlicIrqIdGpioGpio24 = 57, /**< gpio_gpio 24 */
  kOpentitanPlicIrqIdGpioGpio25 = 58, /**< gpio_gpio 25 */
  kOpentitanPlicIrqIdGpioGpio26 = 59, /**< gpio_gpio 26 */
  kOpentitanPlicIrqIdGpioGpio27 = 60, /**< gpio_gpio 27 */
  kOpentitanPlicIrqIdGpioGpio28 = 61, /**< gpio_gpio 28 */
  kOpentitanPlicIrqIdGpioGpio29 = 62, /**< gpio_gpio 29 */
  kOpentitanPlicIrqIdGpioGpio30 = 63, /**< gpio_gpio 30 */
  kOpentitanPlicIrqIdGpioGpio31 = 64, /**< gpio_gpio 31 */
  kOpentitanPlicIrqIdSpiDeviceGenericRxFull = 65, /**< spi_device_generic_rx_full */
  kOpentitanPlicIrqIdSpiDeviceGenericRxWatermark = 66, /**< spi_device_generic_rx_watermark */
  kOpentitanPlicIrqIdSpiDeviceGenericTxWatermark = 67, /**< spi_device_generic_tx_watermark */
  kOpentitanPlicIrqIdSpiDeviceGenericRxError = 68, /**< spi_device_generic_rx_error */
  kOpentitanPlicIrqIdSpiDeviceGenericRxOverflow = 69, /**< spi_device_generic_rx_overflow */
  kOpentitanPlicIrqIdSpiDeviceGenericTxUnderflow = 70, /**< spi_device_generic_tx_underflow */
  kOpentitanPlicIrqIdSpiDeviceUploadCmdfifoNotEmpty = 71, /**< spi_device_upload_cmdfifo_not_empty */
  kOpentitanPlicIrqIdSpiDeviceUploadPayloadNotEmpty = 72, /**< spi_device_upload_payload_not_empty */
  kOpentitanPlicIrqIdSpiDeviceUploadPayloadOverflow = 73, /**< spi_device_upload_payload_overflow */
  kOpentitanPlicIrqIdSpiDeviceReadbufWatermark = 74, /**< spi_device_readbuf_watermark */
  kOpentitanPlicIrqIdSpiDeviceReadbufFlip = 75, /**< spi_device_readbuf_flip */
  kOpentitanPlicIrqIdSpiDeviceTpmHeaderNotEmpty = 76, /**< spi_device_tpm_header_not_empty */
  kOpentitanPlicIrqIdI2c0FmtThreshold = 77, /**< i2c0_fmt_threshold */
  kOpentitanPlicIrqIdI2c0RxThreshold = 78, /**< i2c0_rx_threshold */
  kOpentitanPlicIrqIdI2c0FmtOverflow = 79, /**< i2c0_fmt_overflow */
  kOpentitanPlicIrqIdI2c0RxOverflow = 80, /**< i2c0_rx_overflow */
  kOpentitanPlicIrqIdI2c0Nak = 81, /**< i2c0_nak */
  kOpentitanPlicIrqIdI2c0SclInterference = 82, /**< i2c0_scl_interference */
  kOpentitanPlicIrqIdI2c0SdaInterference = 83, /**< i2c0_sda_interference */
  kOpentitanPlicIrqIdI2c0StretchTimeout = 84, /**< i2c0_stretch_timeout */
  kOpentitanPlicIrqIdI2c0SdaUnstable = 85, /**< i2c0_sda_unstable */
  kOpentitanPlicIrqIdI2c0CmdComplete = 86, /**< i2c0_cmd_complete */
  kOpentitanPlicIrqIdI2c0TxStretch = 87, /**< i2c0_tx_stretch */
  kOpentitanPlicIrqIdI2c0TxOverflow = 88, /**< i2c0_tx_overflow */
  kOpentitanPlicIrqIdI2c0AcqFull = 89, /**< i2c0_acq_full */
  kOpentitanPlicIrqIdI2c0UnexpStop = 90, /**< i2c0_unexp_stop */
  kOpentitanPlicIrqIdI2c0HostTimeout = 91, /**< i2c0_host_timeout */
  kOpentitanPlicIrqIdI2c1FmtThreshold = 92, /**< i2c1_fmt_threshold */
  kOpentitanPlicIrqIdI2c1RxThreshold = 93, /**< i2c1_rx_threshold */
  kOpentitanPlicIrqIdI2c1FmtOverflow = 94, /**< i2c1_fmt_overflow */
  kOpentitanPlicIrqIdI2c1RxOverflow = 95, /**< i2c1_rx_overflow */
  kOpentitanPlicIrqIdI2c1Nak = 96, /**< i2c1_nak */
  kOpentitanPlicIrqIdI2c1SclInterference = 97, /**< i2c1_scl_interference */
  kOpentitanPlicIrqIdI2c1SdaInterference = 98, /**< i2c1_sda_interference */
  kOpentitanPlicIrqIdI2c1StretchTimeout = 99, /**< i2c1_stretch_timeout */
  kOpentitanPlicIrqIdI2c1SdaUnstable = 100, /**< i2c1_sda_unstable */
  kOpentitanPlicIrqIdI2c1CmdComplete = 101, /**< i2c1_cmd_complete */
  kOpentitanPlicIrqIdI2c1TxStretch = 102, /**< i2c1_tx_stretch */
  kOpentitanPlicIrqIdI2c1TxOverflow = 103, /**< i2c1_tx_overflow */
  kOpentitanPlicIrqIdI2c1AcqFull = 104, /**< i2c1_acq_full */
  kOpentitanPlicIrqIdI2c1UnexpStop = 105, /**< i2c1_unexp_stop */
  kOpentitanPlicIrqIdI2c1HostTimeout = 106, /**< i2c1_host_timeout */
  kOpentitanPlicIrqIdI2c2FmtThreshold = 107, /**< i2c2_fmt_threshold */
  kOpentitanPlicIrqIdI2c2RxThreshold = 108, /**< i2c2_rx_threshold */
  kOpentitanPlicIrqIdI2c2FmtOverflow = 109, /**< i2c2_fmt_overflow */
  kOpentitanPlicIrqIdI2c2RxOverflow = 110, /**< i2c2_rx_overflow */
  kOpentitanPlicIrqIdI2c2Nak = 111, /**< i2c2_nak */
  kOpentitanPlicIrqIdI2c2SclInterference = 112, /**< i2c2_scl_interference */
  kOpentitanPlicIrqIdI2c2SdaInterference = 113, /**< i2c2_sda_interference */
  kOpentitanPlicIrqIdI2c2StretchTimeout = 114, /**< i2c2_stretch_timeout */
  kOpentitanPlicIrqIdI2c2SdaUnstable = 115, /**< i2c2_sda_unstable */
  kOpentitanPlicIrqIdI2c2CmdComplete = 116, /**< i2c2_cmd_complete */
  kOpentitanPlicIrqIdI2c2TxStretch = 117, /**< i2c2_tx_stretch */
  kOpentitanPlicIrqIdI2c2TxOverflow = 118, /**< i2c2_tx_overflow */
  kOpentitanPlicIrqIdI2c2AcqFull = 119, /**< i2c2_acq_full */
  kOpentitanPlicIrqIdI2c2UnexpStop = 120, /**< i2c2_unexp_stop */
  kOpentitanPlicIrqIdI2c2HostTimeout = 121, /**< i2c2_host_timeout */
  kOpentitanPlicIrqIdPattgenDoneCh0 = 122, /**< pattgen_done_ch0 */
  kOpentitanPlicIrqIdPattgenDoneCh1 = 123, /**< pattgen_done_ch1 */
  kOpentitanPlicIrqIdRvTimerTimerExpiredHart0Timer0 = 124, /**< rv_timer_timer_expired_hart0_timer0 */
  kOpentitanPlicIrqIdOtpCtrlOtpOperationDone = 125, /**< otp_ctrl_otp_operation_done */
  kOpentitanPlicIrqIdOtpCtrlOtpError = 126, /**< otp_ctrl_otp_error */
  kOpentitanPlicIrqIdAlertHandlerClassa = 127, /**< alert_handler_classa */
  kOpentitanPlicIrqIdAlertHandlerClassb = 128, /**< alert_handler_classb */
  kOpentitanPlicIrqIdAlertHandlerClassc = 129, /**< alert_handler_classc */
  kOpentitanPlicIrqIdAlertHandlerClassd = 130, /**< alert_handler_classd */
  kOpentitanPlicIrqIdSpiHost0Error = 131, /**< spi_host0_error */
  kOpentitanPlicIrqIdSpiHost0SpiEvent = 132, /**< spi_host0_spi_event */
  kOpentitanPlicIrqIdSpiHost1Error = 133, /**< spi_host1_error */
  kOpentitanPlicIrqIdSpiHost1SpiEvent = 134, /**< spi_host1_spi_event */
  kOpentitanPlicIrqIdUsbdevPktReceived = 135, /**< usbdev_pkt_received */
  kOpentitanPlicIrqIdUsbdevPktSent = 136, /**< usbdev_pkt_sent */
  kOpentitanPlicIrqIdUsbdevDisconnected = 137, /**< usbdev_disconnected */
  kOpentitanPlicIrqIdUsbdevHostLost = 138, /**< usbdev_host_lost */
  kOpentitanPlicIrqIdUsbdevLinkReset = 139, /**< usbdev_link_reset */
  kOpentitanPlicIrqIdUsbdevLinkSuspend = 140, /**< usbdev_link_suspend */
  kOpentitanPlicIrqIdUsbdevLinkResume = 141, /**< usbdev_link_resume */
  kOpentitanPlicIrqIdUsbdevAvEmpty = 142, /**< usbdev_av_empty */
  kOpentitanPlicIrqIdUsbdevRxFull = 143, /**< usbdev_rx_full */
  kOpentitanPlicIrqIdUsbdevAvOverflow = 144, /**< usbdev_av_overflow */
  kOpentitanPlicIrqIdUsbdevLinkInErr = 145, /**< usbdev_link_in_err */
  kOpentitanPlicIrqIdUsbdevRxCrcErr = 146, /**< usbdev_rx_crc_err */
  kOpentitanPlicIrqIdUsbdevRxPidErr = 147, /**< usbdev_rx_pid_err */
  kOpentitanPlicIrqIdUsbdevRxBitstuffErr = 148, /**< usbdev_rx_bitstuff_err */
  kOpentitanPlicIrqIdUsbdevFrame = 149, /**< usbdev_frame */
  kOpentitanPlicIrqIdUsbdevPowered = 150, /**< usbdev_powered */
  kOpentitanPlicIrqIdUsbdevLinkOutErr = 151, /**< usbdev_link_out_err */
  kOpentitanPlicIrqIdPwrmgrAonWakeup = 152, /**< pwrmgr_aon_wakeup */
  kOpentitanPlicIrqIdSysrstCtrlAonEventDetected = 153, /**< sysrst_ctrl_aon_event_detected */
  kOpentitanPlicIrqIdAdcCtrlAonMatchDone = 154, /**< adc_ctrl_aon_match_done */
  kOpentitanPlicIrqIdAonTimerAonWkupTimerExpired = 155, /**< aon_timer_aon_wkup_timer_expired */
  kOpentitanPlicIrqIdAonTimerAonWdogTimerBark = 156, /**< aon_timer_aon_wdog_timer_bark */
  kOpentitanPlicIrqIdSensorCtrlIoStatusChange = 157, /**< sensor_ctrl_io_status_change */
  kOpentitanPlicIrqIdSensorCtrlInitStatusChange = 158, /**< sensor_ctrl_init_status_change */
  kOpentitanPlicIrqIdFlashCtrlProgEmpty = 159, /**< flash_ctrl_prog_empty */
  kOpentitanPlicIrqIdFlashCtrlProgLvl = 160, /**< flash_ctrl_prog_lvl */
  kOpentitanPlicIrqIdFlashCtrlRdFull = 161, /**< flash_ctrl_rd_full */
  kOpentitanPlicIrqIdFlashCtrlRdLvl = 162, /**< flash_ctrl_rd_lvl */
  kOpentitanPlicIrqIdFlashCtrlOpDone = 163, /**< flash_ctrl_op_done */
  kOpentitanPlicIrqIdFlashCtrlCorrErr = 164, /**< flash_ctrl_corr_err */
  kOpentitanPlicIrqIdHmacHmacDone = 165, /**< hmac_hmac_done */
  kOpentitanPlicIrqIdHmacFifoEmpty = 166, /**< hmac_fifo_empty */
  kOpentitanPlicIrqIdHmacHmacErr = 167, /**< hmac_hmac_err */
  kOpentitanPlicIrqIdKmacKmacDone = 168, /**< kmac_kmac_done */
  kOpentitanPlicIrqIdKmacFifoEmpty = 169, /**< kmac_fifo_empty */
  kOpentitanPlicIrqIdKmacKmacErr = 170, /**< kmac_kmac_err */
  kOpentitanPlicIrqIdOtbnDone = 171, /**< otbn_done */
  kOpentitanPlicIrqIdKeymgrOpDone = 172, /**< keymgr_op_done */
  kOpentitanPlicIrqIdCsrngCsCmdReqDone = 173, /**< csrng_cs_cmd_req_done */
  kOpentitanPlicIrqIdCsrngCsEntropyReq = 174, /**< csrng_cs_entropy_req */
  kOpentitanPlicIrqIdCsrngCsHwInstExc = 175, /**< csrng_cs_hw_inst_exc */
  kOpentitanPlicIrqIdCsrngCsFatalErr = 176, /**< csrng_cs_fatal_err */
  kOpentitanPlicIrqIdEntropySrcEsEntropyValid = 177, /**< entropy_src_es_entropy_valid */
  kOpentitanPlicIrqIdEntropySrcEsHealthTestFailed = 178, /**< entropy_src_es_health_test_failed */
  kOpentitanPlicIrqIdEntropySrcEsObserveFifoReady = 179, /**< entropy_src_es_observe_fifo_ready */
  kOpentitanPlicIrqIdEntropySrcEsFatalErr = 180, /**< entropy_src_es_fatal_err */
  kOpentitanPlicIrqIdEdn0EdnCmdReqDone = 181, /**< edn0_edn_cmd_req_done */
  kOpentitanPlicIrqIdEdn0EdnFatalErr = 182, /**< edn0_edn_fatal_err */
  kOpentitanPlicIrqIdEdn1EdnCmdReqDone = 183, /**< edn1_edn_cmd_req_done */
  kOpentitanPlicIrqIdEdn1EdnFatalErr = 184, /**< edn1_edn_fatal_err */
  kOpentitanPlicIrqIdLast = 184, /**< \internal The Last Valid Interrupt ID. */
} opentitan_plic_irq_id_t;

/**
 * PLIC Interrupt Source to Peripheral Map
 *
 * This array is a mapping from `opentitan_plic_irq_id_t` to
 * `opentitan_plic_peripheral_t`.
 */
extern const opentitan_plic_peripheral_t
    opentitan_plic_interrupt_for_peripheral[185];

/**
 * PLIC Interrupt Target.
 *
 * Enumeration used to determine which set of IE, CC, threshold registers to
 * access for a given interrupt target.
 */
typedef enum opentitan_plic_target {
  kOpentitanPlicTargetIbex0 = 0, /**< Ibex Core 0 */
  kOpentitanPlicTargetLast = 0, /**< \internal Final PLIC target */
} opentitan_plic_target_t;

/**
 * Alert Handler Source Peripheral.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * alert.
 */
typedef enum opentitan_alert_peripheral {
  kOpentitanAlertPeripheralUart0 = 0, /**< uart0 */
  kOpentitanAlertPeripheralUart1 = 1, /**< uart1 */
  kOpentitanAlertPeripheralUart2 = 2, /**< uart2 */
  kOpentitanAlertPeripheralUart3 = 3, /**< uart3 */
  kOpentitanAlertPeripheralGpio = 4, /**< gpio */
  kOpentitanAlertPeripheralSpiDevice = 5, /**< spi_device */
  kOpentitanAlertPeripheralI2c0 = 6, /**< i2c0 */
  kOpentitanAlertPeripheralI2c1 = 7, /**< i2c1 */
  kOpentitanAlertPeripheralI2c2 = 8, /**< i2c2 */
  kOpentitanAlertPeripheralPattgen = 9, /**< pattgen */
  kOpentitanAlertPeripheralRvTimer = 10, /**< rv_timer */
  kOpentitanAlertPeripheralOtpCtrl = 11, /**< otp_ctrl */
  kOpentitanAlertPeripheralLcCtrl = 12, /**< lc_ctrl */
  kOpentitanAlertPeripheralSpiHost0 = 13, /**< spi_host0 */
  kOpentitanAlertPeripheralSpiHost1 = 14, /**< spi_host1 */
  kOpentitanAlertPeripheralUsbdev = 15, /**< usbdev */
  kOpentitanAlertPeripheralPwrmgrAon = 16, /**< pwrmgr_aon */
  kOpentitanAlertPeripheralRstmgrAon = 17, /**< rstmgr_aon */
  kOpentitanAlertPeripheralClkmgrAon = 18, /**< clkmgr_aon */
  kOpentitanAlertPeripheralSysrstCtrlAon = 19, /**< sysrst_ctrl_aon */
  kOpentitanAlertPeripheralAdcCtrlAon = 20, /**< adc_ctrl_aon */
  kOpentitanAlertPeripheralPwmAon = 21, /**< pwm_aon */
  kOpentitanAlertPeripheralPinmuxAon = 22, /**< pinmux_aon */
  kOpentitanAlertPeripheralAonTimerAon = 23, /**< aon_timer_aon */
  kOpentitanAlertPeripheralSensorCtrl = 24, /**< sensor_ctrl */
  kOpentitanAlertPeripheralSramCtrlRetAon = 25, /**< sram_ctrl_ret_aon */
  kOpentitanAlertPeripheralFlashCtrl = 26, /**< flash_ctrl */
  kOpentitanAlertPeripheralRvDm = 27, /**< rv_dm */
  kOpentitanAlertPeripheralRvPlic = 28, /**< rv_plic */
  kOpentitanAlertPeripheralAes = 29, /**< aes */
  kOpentitanAlertPeripheralHmac = 30, /**< hmac */
  kOpentitanAlertPeripheralKmac = 31, /**< kmac */
  kOpentitanAlertPeripheralOtbn = 32, /**< otbn */
  kOpentitanAlertPeripheralKeymgr = 33, /**< keymgr */
  kOpentitanAlertPeripheralCsrng = 34, /**< csrng */
  kOpentitanAlertPeripheralEntropySrc = 35, /**< entropy_src */
  kOpentitanAlertPeripheralEdn0 = 36, /**< edn0 */
  kOpentitanAlertPeripheralEdn1 = 37, /**< edn1 */
  kOpentitanAlertPeripheralSramCtrlMain = 38, /**< sram_ctrl_main */
  kOpentitanAlertPeripheralRomCtrl = 39, /**< rom_ctrl */
  kOpentitanAlertPeripheralRvCoreIbex = 40, /**< rv_core_ibex */
  kOpentitanAlertPeripheralLast = 40, /**< \internal Final Alert peripheral */
} opentitan_alert_peripheral_t;

/**
 * Alert Handler Alert Source.
 *
 * Enumeration of all Alert Handler Alert Sources. The alert sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum opentitan_alert_id {
  kOpentitanAlertIdUart0FatalFault = 0, /**< uart0_fatal_fault */
  kOpentitanAlertIdUart1FatalFault = 1, /**< uart1_fatal_fault */
  kOpentitanAlertIdUart2FatalFault = 2, /**< uart2_fatal_fault */
  kOpentitanAlertIdUart3FatalFault = 3, /**< uart3_fatal_fault */
  kOpentitanAlertIdGpioFatalFault = 4, /**< gpio_fatal_fault */
  kOpentitanAlertIdSpiDeviceFatalFault = 5, /**< spi_device_fatal_fault */
  kOpentitanAlertIdI2c0FatalFault = 6, /**< i2c0_fatal_fault */
  kOpentitanAlertIdI2c1FatalFault = 7, /**< i2c1_fatal_fault */
  kOpentitanAlertIdI2c2FatalFault = 8, /**< i2c2_fatal_fault */
  kOpentitanAlertIdPattgenFatalFault = 9, /**< pattgen_fatal_fault */
  kOpentitanAlertIdRvTimerFatalFault = 10, /**< rv_timer_fatal_fault */
  kOpentitanAlertIdOtpCtrlFatalMacroError = 11, /**< otp_ctrl_fatal_macro_error */
  kOpentitanAlertIdOtpCtrlFatalCheckError = 12, /**< otp_ctrl_fatal_check_error */
  kOpentitanAlertIdOtpCtrlFatalBusIntegError = 13, /**< otp_ctrl_fatal_bus_integ_error */
  kOpentitanAlertIdOtpCtrlFatalPrimOtpAlert = 14, /**< otp_ctrl_fatal_prim_otp_alert */
  kOpentitanAlertIdOtpCtrlRecovPrimOtpAlert = 15, /**< otp_ctrl_recov_prim_otp_alert */
  kOpentitanAlertIdLcCtrlFatalProgError = 16, /**< lc_ctrl_fatal_prog_error */
  kOpentitanAlertIdLcCtrlFatalStateError = 17, /**< lc_ctrl_fatal_state_error */
  kOpentitanAlertIdLcCtrlFatalBusIntegError = 18, /**< lc_ctrl_fatal_bus_integ_error */
  kOpentitanAlertIdSpiHost0FatalFault = 19, /**< spi_host0_fatal_fault */
  kOpentitanAlertIdSpiHost1FatalFault = 20, /**< spi_host1_fatal_fault */
  kOpentitanAlertIdUsbdevFatalFault = 21, /**< usbdev_fatal_fault */
  kOpentitanAlertIdPwrmgrAonFatalFault = 22, /**< pwrmgr_aon_fatal_fault */
  kOpentitanAlertIdRstmgrAonFatalFault = 23, /**< rstmgr_aon_fatal_fault */
  kOpentitanAlertIdRstmgrAonFatalCnstyFault = 24, /**< rstmgr_aon_fatal_cnsty_fault */
  kOpentitanAlertIdClkmgrAonRecovFault = 25, /**< clkmgr_aon_recov_fault */
  kOpentitanAlertIdClkmgrAonFatalFault = 26, /**< clkmgr_aon_fatal_fault */
  kOpentitanAlertIdSysrstCtrlAonFatalFault = 27, /**< sysrst_ctrl_aon_fatal_fault */
  kOpentitanAlertIdAdcCtrlAonFatalFault = 28, /**< adc_ctrl_aon_fatal_fault */
  kOpentitanAlertIdPwmAonFatalFault = 29, /**< pwm_aon_fatal_fault */
  kOpentitanAlertIdPinmuxAonFatalFault = 30, /**< pinmux_aon_fatal_fault */
  kOpentitanAlertIdAonTimerAonFatalFault = 31, /**< aon_timer_aon_fatal_fault */
  kOpentitanAlertIdSensorCtrlRecovAlert = 32, /**< sensor_ctrl_recov_alert */
  kOpentitanAlertIdSensorCtrlFatalAlert = 33, /**< sensor_ctrl_fatal_alert */
  kOpentitanAlertIdSramCtrlRetAonFatalError = 34, /**< sram_ctrl_ret_aon_fatal_error */
  kOpentitanAlertIdFlashCtrlRecovErr = 35, /**< flash_ctrl_recov_err */
  kOpentitanAlertIdFlashCtrlFatalStdErr = 36, /**< flash_ctrl_fatal_std_err */
  kOpentitanAlertIdFlashCtrlFatalErr = 37, /**< flash_ctrl_fatal_err */
  kOpentitanAlertIdFlashCtrlFatalPrimFlashAlert = 38, /**< flash_ctrl_fatal_prim_flash_alert */
  kOpentitanAlertIdFlashCtrlRecovPrimFlashAlert = 39, /**< flash_ctrl_recov_prim_flash_alert */
  kOpentitanAlertIdRvDmFatalFault = 40, /**< rv_dm_fatal_fault */
  kOpentitanAlertIdRvPlicFatalFault = 41, /**< rv_plic_fatal_fault */
  kOpentitanAlertIdAesRecovCtrlUpdateErr = 42, /**< aes_recov_ctrl_update_err */
  kOpentitanAlertIdAesFatalFault = 43, /**< aes_fatal_fault */
  kOpentitanAlertIdHmacFatalFault = 44, /**< hmac_fatal_fault */
  kOpentitanAlertIdKmacRecovOperationErr = 45, /**< kmac_recov_operation_err */
  kOpentitanAlertIdKmacFatalFaultErr = 46, /**< kmac_fatal_fault_err */
  kOpentitanAlertIdOtbnFatal = 47, /**< otbn_fatal */
  kOpentitanAlertIdOtbnRecov = 48, /**< otbn_recov */
  kOpentitanAlertIdKeymgrRecovOperationErr = 49, /**< keymgr_recov_operation_err */
  kOpentitanAlertIdKeymgrFatalFaultErr = 50, /**< keymgr_fatal_fault_err */
  kOpentitanAlertIdCsrngRecovAlert = 51, /**< csrng_recov_alert */
  kOpentitanAlertIdCsrngFatalAlert = 52, /**< csrng_fatal_alert */
  kOpentitanAlertIdEntropySrcRecovAlert = 53, /**< entropy_src_recov_alert */
  kOpentitanAlertIdEntropySrcFatalAlert = 54, /**< entropy_src_fatal_alert */
  kOpentitanAlertIdEdn0RecovAlert = 55, /**< edn0_recov_alert */
  kOpentitanAlertIdEdn0FatalAlert = 56, /**< edn0_fatal_alert */
  kOpentitanAlertIdEdn1RecovAlert = 57, /**< edn1_recov_alert */
  kOpentitanAlertIdEdn1FatalAlert = 58, /**< edn1_fatal_alert */
  kOpentitanAlertIdSramCtrlMainFatalError = 59, /**< sram_ctrl_main_fatal_error */
  kOpentitanAlertIdRomCtrlFatal = 60, /**< rom_ctrl_fatal */
  kOpentitanAlertIdRvCoreIbexFatalSwErr = 61, /**< rv_core_ibex_fatal_sw_err */
  kOpentitanAlertIdRvCoreIbexRecovSwErr = 62, /**< rv_core_ibex_recov_sw_err */
  kOpentitanAlertIdRvCoreIbexFatalHwErr = 63, /**< rv_core_ibex_fatal_hw_err */
  kOpentitanAlertIdRvCoreIbexRecovHwErr = 64, /**< rv_core_ibex_recov_hw_err */
  kOpentitanAlertIdLast = 64, /**< \internal The Last Valid Alert ID. */
} opentitan_alert_id_t;

/**
 * Alert Handler Alert Source to Peripheral Map
 *
 * This array is a mapping from `opentitan_alert_id_t` to
 * `opentitan_alert_peripheral_t`.
 */
extern const opentitan_alert_peripheral_t
    opentitan_alert_for_peripheral[65];

#define PINMUX_MIO_PERIPH_INSEL_IDX_OFFSET 2

// PERIPH_INSEL ranges from 0 to NUM_MIO_PADS + 2 -1}
//  0 and 1 are tied to value 0 and 1
#define NUM_MIO_PADS 47
#define NUM_DIO_PADS 16

#define PINMUX_PERIPH_OUTSEL_IDX_OFFSET 3

/**
 * Pinmux Peripheral Input.
 */
typedef enum opentitan_pinmux_peripheral_in {
  kOpentitanPinmuxPeripheralInGpioGpio0 = 0, /**< Peripheral Input 0 */
  kOpentitanPinmuxPeripheralInGpioGpio1 = 1, /**< Peripheral Input 1 */
  kOpentitanPinmuxPeripheralInGpioGpio2 = 2, /**< Peripheral Input 2 */
  kOpentitanPinmuxPeripheralInGpioGpio3 = 3, /**< Peripheral Input 3 */
  kOpentitanPinmuxPeripheralInGpioGpio4 = 4, /**< Peripheral Input 4 */
  kOpentitanPinmuxPeripheralInGpioGpio5 = 5, /**< Peripheral Input 5 */
  kOpentitanPinmuxPeripheralInGpioGpio6 = 6, /**< Peripheral Input 6 */
  kOpentitanPinmuxPeripheralInGpioGpio7 = 7, /**< Peripheral Input 7 */
  kOpentitanPinmuxPeripheralInGpioGpio8 = 8, /**< Peripheral Input 8 */
  kOpentitanPinmuxPeripheralInGpioGpio9 = 9, /**< Peripheral Input 9 */
  kOpentitanPinmuxPeripheralInGpioGpio10 = 10, /**< Peripheral Input 10 */
  kOpentitanPinmuxPeripheralInGpioGpio11 = 11, /**< Peripheral Input 11 */
  kOpentitanPinmuxPeripheralInGpioGpio12 = 12, /**< Peripheral Input 12 */
  kOpentitanPinmuxPeripheralInGpioGpio13 = 13, /**< Peripheral Input 13 */
  kOpentitanPinmuxPeripheralInGpioGpio14 = 14, /**< Peripheral Input 14 */
  kOpentitanPinmuxPeripheralInGpioGpio15 = 15, /**< Peripheral Input 15 */
  kOpentitanPinmuxPeripheralInGpioGpio16 = 16, /**< Peripheral Input 16 */
  kOpentitanPinmuxPeripheralInGpioGpio17 = 17, /**< Peripheral Input 17 */
  kOpentitanPinmuxPeripheralInGpioGpio18 = 18, /**< Peripheral Input 18 */
  kOpentitanPinmuxPeripheralInGpioGpio19 = 19, /**< Peripheral Input 19 */
  kOpentitanPinmuxPeripheralInGpioGpio20 = 20, /**< Peripheral Input 20 */
  kOpentitanPinmuxPeripheralInGpioGpio21 = 21, /**< Peripheral Input 21 */
  kOpentitanPinmuxPeripheralInGpioGpio22 = 22, /**< Peripheral Input 22 */
  kOpentitanPinmuxPeripheralInGpioGpio23 = 23, /**< Peripheral Input 23 */
  kOpentitanPinmuxPeripheralInGpioGpio24 = 24, /**< Peripheral Input 24 */
  kOpentitanPinmuxPeripheralInGpioGpio25 = 25, /**< Peripheral Input 25 */
  kOpentitanPinmuxPeripheralInGpioGpio26 = 26, /**< Peripheral Input 26 */
  kOpentitanPinmuxPeripheralInGpioGpio27 = 27, /**< Peripheral Input 27 */
  kOpentitanPinmuxPeripheralInGpioGpio28 = 28, /**< Peripheral Input 28 */
  kOpentitanPinmuxPeripheralInGpioGpio29 = 29, /**< Peripheral Input 29 */
  kOpentitanPinmuxPeripheralInGpioGpio30 = 30, /**< Peripheral Input 30 */
  kOpentitanPinmuxPeripheralInGpioGpio31 = 31, /**< Peripheral Input 31 */
  kOpentitanPinmuxPeripheralInI2c0Sda = 32, /**< Peripheral Input 32 */
  kOpentitanPinmuxPeripheralInI2c0Scl = 33, /**< Peripheral Input 33 */
  kOpentitanPinmuxPeripheralInI2c1Sda = 34, /**< Peripheral Input 34 */
  kOpentitanPinmuxPeripheralInI2c1Scl = 35, /**< Peripheral Input 35 */
  kOpentitanPinmuxPeripheralInI2c2Sda = 36, /**< Peripheral Input 36 */
  kOpentitanPinmuxPeripheralInI2c2Scl = 37, /**< Peripheral Input 37 */
  kOpentitanPinmuxPeripheralInSpiHost1Sd0 = 38, /**< Peripheral Input 38 */
  kOpentitanPinmuxPeripheralInSpiHost1Sd1 = 39, /**< Peripheral Input 39 */
  kOpentitanPinmuxPeripheralInSpiHost1Sd2 = 40, /**< Peripheral Input 40 */
  kOpentitanPinmuxPeripheralInSpiHost1Sd3 = 41, /**< Peripheral Input 41 */
  kOpentitanPinmuxPeripheralInUart0Rx = 42, /**< Peripheral Input 42 */
  kOpentitanPinmuxPeripheralInUart1Rx = 43, /**< Peripheral Input 43 */
  kOpentitanPinmuxPeripheralInUart2Rx = 44, /**< Peripheral Input 44 */
  kOpentitanPinmuxPeripheralInUart3Rx = 45, /**< Peripheral Input 45 */
  kOpentitanPinmuxPeripheralInSpiDeviceTpmCsb = 46, /**< Peripheral Input 46 */
  kOpentitanPinmuxPeripheralInFlashCtrlTck = 47, /**< Peripheral Input 47 */
  kOpentitanPinmuxPeripheralInFlashCtrlTms = 48, /**< Peripheral Input 48 */
  kOpentitanPinmuxPeripheralInFlashCtrlTdi = 49, /**< Peripheral Input 49 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonAcPresent = 50, /**< Peripheral Input 50 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonKey0In = 51, /**< Peripheral Input 51 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonKey1In = 52, /**< Peripheral Input 52 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonKey2In = 53, /**< Peripheral Input 53 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonPwrbIn = 54, /**< Peripheral Input 54 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonLidOpen = 55, /**< Peripheral Input 55 */
  kOpentitanPinmuxPeripheralInUsbdevSense = 56, /**< Peripheral Input 56 */
  kOpentitanPinmuxPeripheralInLast = 56, /**< \internal Last valid peripheral input */
} opentitan_pinmux_peripheral_in_t;

/**
 * Pinmux MIO Input Selector.
 */
typedef enum opentitan_pinmux_insel {
  kOpentitanPinmuxInselConstantZero = 0, /**< Tie constantly to zero */
  kOpentitanPinmuxInselConstantOne = 1, /**< Tie constantly to one */
  kOpentitanPinmuxInselIoa0 = 2, /**< MIO Pad 0 */
  kOpentitanPinmuxInselIoa1 = 3, /**< MIO Pad 1 */
  kOpentitanPinmuxInselIoa2 = 4, /**< MIO Pad 2 */
  kOpentitanPinmuxInselIoa3 = 5, /**< MIO Pad 3 */
  kOpentitanPinmuxInselIoa4 = 6, /**< MIO Pad 4 */
  kOpentitanPinmuxInselIoa5 = 7, /**< MIO Pad 5 */
  kOpentitanPinmuxInselIoa6 = 8, /**< MIO Pad 6 */
  kOpentitanPinmuxInselIoa7 = 9, /**< MIO Pad 7 */
  kOpentitanPinmuxInselIoa8 = 10, /**< MIO Pad 8 */
  kOpentitanPinmuxInselIob0 = 11, /**< MIO Pad 9 */
  kOpentitanPinmuxInselIob1 = 12, /**< MIO Pad 10 */
  kOpentitanPinmuxInselIob2 = 13, /**< MIO Pad 11 */
  kOpentitanPinmuxInselIob3 = 14, /**< MIO Pad 12 */
  kOpentitanPinmuxInselIob4 = 15, /**< MIO Pad 13 */
  kOpentitanPinmuxInselIob5 = 16, /**< MIO Pad 14 */
  kOpentitanPinmuxInselIob6 = 17, /**< MIO Pad 15 */
  kOpentitanPinmuxInselIob7 = 18, /**< MIO Pad 16 */
  kOpentitanPinmuxInselIob8 = 19, /**< MIO Pad 17 */
  kOpentitanPinmuxInselIob9 = 20, /**< MIO Pad 18 */
  kOpentitanPinmuxInselIob10 = 21, /**< MIO Pad 19 */
  kOpentitanPinmuxInselIob11 = 22, /**< MIO Pad 20 */
  kOpentitanPinmuxInselIob12 = 23, /**< MIO Pad 21 */
  kOpentitanPinmuxInselIoc0 = 24, /**< MIO Pad 22 */
  kOpentitanPinmuxInselIoc1 = 25, /**< MIO Pad 23 */
  kOpentitanPinmuxInselIoc2 = 26, /**< MIO Pad 24 */
  kOpentitanPinmuxInselIoc3 = 27, /**< MIO Pad 25 */
  kOpentitanPinmuxInselIoc4 = 28, /**< MIO Pad 26 */
  kOpentitanPinmuxInselIoc5 = 29, /**< MIO Pad 27 */
  kOpentitanPinmuxInselIoc6 = 30, /**< MIO Pad 28 */
  kOpentitanPinmuxInselIoc7 = 31, /**< MIO Pad 29 */
  kOpentitanPinmuxInselIoc8 = 32, /**< MIO Pad 30 */
  kOpentitanPinmuxInselIoc9 = 33, /**< MIO Pad 31 */
  kOpentitanPinmuxInselIoc10 = 34, /**< MIO Pad 32 */
  kOpentitanPinmuxInselIoc11 = 35, /**< MIO Pad 33 */
  kOpentitanPinmuxInselIoc12 = 36, /**< MIO Pad 34 */
  kOpentitanPinmuxInselIor0 = 37, /**< MIO Pad 35 */
  kOpentitanPinmuxInselIor1 = 38, /**< MIO Pad 36 */
  kOpentitanPinmuxInselIor2 = 39, /**< MIO Pad 37 */
  kOpentitanPinmuxInselIor3 = 40, /**< MIO Pad 38 */
  kOpentitanPinmuxInselIor4 = 41, /**< MIO Pad 39 */
  kOpentitanPinmuxInselIor5 = 42, /**< MIO Pad 40 */
  kOpentitanPinmuxInselIor6 = 43, /**< MIO Pad 41 */
  kOpentitanPinmuxInselIor7 = 44, /**< MIO Pad 42 */
  kOpentitanPinmuxInselIor10 = 45, /**< MIO Pad 43 */
  kOpentitanPinmuxInselIor11 = 46, /**< MIO Pad 44 */
  kOpentitanPinmuxInselIor12 = 47, /**< MIO Pad 45 */
  kOpentitanPinmuxInselIor13 = 48, /**< MIO Pad 46 */
  kOpentitanPinmuxInselLast = 48, /**< \internal Last valid insel value */
} opentitan_pinmux_insel_t;

/**
 * Pinmux MIO Output.
 */
typedef enum opentitan_pinmux_mio_out {
  kOpentitanPinmuxMioOutIoa0 = 0, /**< MIO Pad 0 */
  kOpentitanPinmuxMioOutIoa1 = 1, /**< MIO Pad 1 */
  kOpentitanPinmuxMioOutIoa2 = 2, /**< MIO Pad 2 */
  kOpentitanPinmuxMioOutIoa3 = 3, /**< MIO Pad 3 */
  kOpentitanPinmuxMioOutIoa4 = 4, /**< MIO Pad 4 */
  kOpentitanPinmuxMioOutIoa5 = 5, /**< MIO Pad 5 */
  kOpentitanPinmuxMioOutIoa6 = 6, /**< MIO Pad 6 */
  kOpentitanPinmuxMioOutIoa7 = 7, /**< MIO Pad 7 */
  kOpentitanPinmuxMioOutIoa8 = 8, /**< MIO Pad 8 */
  kOpentitanPinmuxMioOutIob0 = 9, /**< MIO Pad 9 */
  kOpentitanPinmuxMioOutIob1 = 10, /**< MIO Pad 10 */
  kOpentitanPinmuxMioOutIob2 = 11, /**< MIO Pad 11 */
  kOpentitanPinmuxMioOutIob3 = 12, /**< MIO Pad 12 */
  kOpentitanPinmuxMioOutIob4 = 13, /**< MIO Pad 13 */
  kOpentitanPinmuxMioOutIob5 = 14, /**< MIO Pad 14 */
  kOpentitanPinmuxMioOutIob6 = 15, /**< MIO Pad 15 */
  kOpentitanPinmuxMioOutIob7 = 16, /**< MIO Pad 16 */
  kOpentitanPinmuxMioOutIob8 = 17, /**< MIO Pad 17 */
  kOpentitanPinmuxMioOutIob9 = 18, /**< MIO Pad 18 */
  kOpentitanPinmuxMioOutIob10 = 19, /**< MIO Pad 19 */
  kOpentitanPinmuxMioOutIob11 = 20, /**< MIO Pad 20 */
  kOpentitanPinmuxMioOutIob12 = 21, /**< MIO Pad 21 */
  kOpentitanPinmuxMioOutIoc0 = 22, /**< MIO Pad 22 */
  kOpentitanPinmuxMioOutIoc1 = 23, /**< MIO Pad 23 */
  kOpentitanPinmuxMioOutIoc2 = 24, /**< MIO Pad 24 */
  kOpentitanPinmuxMioOutIoc3 = 25, /**< MIO Pad 25 */
  kOpentitanPinmuxMioOutIoc4 = 26, /**< MIO Pad 26 */
  kOpentitanPinmuxMioOutIoc5 = 27, /**< MIO Pad 27 */
  kOpentitanPinmuxMioOutIoc6 = 28, /**< MIO Pad 28 */
  kOpentitanPinmuxMioOutIoc7 = 29, /**< MIO Pad 29 */
  kOpentitanPinmuxMioOutIoc8 = 30, /**< MIO Pad 30 */
  kOpentitanPinmuxMioOutIoc9 = 31, /**< MIO Pad 31 */
  kOpentitanPinmuxMioOutIoc10 = 32, /**< MIO Pad 32 */
  kOpentitanPinmuxMioOutIoc11 = 33, /**< MIO Pad 33 */
  kOpentitanPinmuxMioOutIoc12 = 34, /**< MIO Pad 34 */
  kOpentitanPinmuxMioOutIor0 = 35, /**< MIO Pad 35 */
  kOpentitanPinmuxMioOutIor1 = 36, /**< MIO Pad 36 */
  kOpentitanPinmuxMioOutIor2 = 37, /**< MIO Pad 37 */
  kOpentitanPinmuxMioOutIor3 = 38, /**< MIO Pad 38 */
  kOpentitanPinmuxMioOutIor4 = 39, /**< MIO Pad 39 */
  kOpentitanPinmuxMioOutIor5 = 40, /**< MIO Pad 40 */
  kOpentitanPinmuxMioOutIor6 = 41, /**< MIO Pad 41 */
  kOpentitanPinmuxMioOutIor7 = 42, /**< MIO Pad 42 */
  kOpentitanPinmuxMioOutIor10 = 43, /**< MIO Pad 43 */
  kOpentitanPinmuxMioOutIor11 = 44, /**< MIO Pad 44 */
  kOpentitanPinmuxMioOutIor12 = 45, /**< MIO Pad 45 */
  kOpentitanPinmuxMioOutIor13 = 46, /**< MIO Pad 46 */
  kOpentitanPinmuxMioOutLast = 46, /**< \internal Last valid mio output */
} opentitan_pinmux_mio_out_t;

/**
 * Pinmux Peripheral Output Selector.
 */
typedef enum opentitan_pinmux_outsel {
  kOpentitanPinmuxOutselConstantZero = 0, /**< Tie constantly to zero */
  kOpentitanPinmuxOutselConstantOne = 1, /**< Tie constantly to one */
  kOpentitanPinmuxOutselConstantHighZ = 2, /**< Tie constantly to high-Z */
  kOpentitanPinmuxOutselGpioGpio0 = 3, /**< Peripheral Output 0 */
  kOpentitanPinmuxOutselGpioGpio1 = 4, /**< Peripheral Output 1 */
  kOpentitanPinmuxOutselGpioGpio2 = 5, /**< Peripheral Output 2 */
  kOpentitanPinmuxOutselGpioGpio3 = 6, /**< Peripheral Output 3 */
  kOpentitanPinmuxOutselGpioGpio4 = 7, /**< Peripheral Output 4 */
  kOpentitanPinmuxOutselGpioGpio5 = 8, /**< Peripheral Output 5 */
  kOpentitanPinmuxOutselGpioGpio6 = 9, /**< Peripheral Output 6 */
  kOpentitanPinmuxOutselGpioGpio7 = 10, /**< Peripheral Output 7 */
  kOpentitanPinmuxOutselGpioGpio8 = 11, /**< Peripheral Output 8 */
  kOpentitanPinmuxOutselGpioGpio9 = 12, /**< Peripheral Output 9 */
  kOpentitanPinmuxOutselGpioGpio10 = 13, /**< Peripheral Output 10 */
  kOpentitanPinmuxOutselGpioGpio11 = 14, /**< Peripheral Output 11 */
  kOpentitanPinmuxOutselGpioGpio12 = 15, /**< Peripheral Output 12 */
  kOpentitanPinmuxOutselGpioGpio13 = 16, /**< Peripheral Output 13 */
  kOpentitanPinmuxOutselGpioGpio14 = 17, /**< Peripheral Output 14 */
  kOpentitanPinmuxOutselGpioGpio15 = 18, /**< Peripheral Output 15 */
  kOpentitanPinmuxOutselGpioGpio16 = 19, /**< Peripheral Output 16 */
  kOpentitanPinmuxOutselGpioGpio17 = 20, /**< Peripheral Output 17 */
  kOpentitanPinmuxOutselGpioGpio18 = 21, /**< Peripheral Output 18 */
  kOpentitanPinmuxOutselGpioGpio19 = 22, /**< Peripheral Output 19 */
  kOpentitanPinmuxOutselGpioGpio20 = 23, /**< Peripheral Output 20 */
  kOpentitanPinmuxOutselGpioGpio21 = 24, /**< Peripheral Output 21 */
  kOpentitanPinmuxOutselGpioGpio22 = 25, /**< Peripheral Output 22 */
  kOpentitanPinmuxOutselGpioGpio23 = 26, /**< Peripheral Output 23 */
  kOpentitanPinmuxOutselGpioGpio24 = 27, /**< Peripheral Output 24 */
  kOpentitanPinmuxOutselGpioGpio25 = 28, /**< Peripheral Output 25 */
  kOpentitanPinmuxOutselGpioGpio26 = 29, /**< Peripheral Output 26 */
  kOpentitanPinmuxOutselGpioGpio27 = 30, /**< Peripheral Output 27 */
  kOpentitanPinmuxOutselGpioGpio28 = 31, /**< Peripheral Output 28 */
  kOpentitanPinmuxOutselGpioGpio29 = 32, /**< Peripheral Output 29 */
  kOpentitanPinmuxOutselGpioGpio30 = 33, /**< Peripheral Output 30 */
  kOpentitanPinmuxOutselGpioGpio31 = 34, /**< Peripheral Output 31 */
  kOpentitanPinmuxOutselI2c0Sda = 35, /**< Peripheral Output 32 */
  kOpentitanPinmuxOutselI2c0Scl = 36, /**< Peripheral Output 33 */
  kOpentitanPinmuxOutselI2c1Sda = 37, /**< Peripheral Output 34 */
  kOpentitanPinmuxOutselI2c1Scl = 38, /**< Peripheral Output 35 */
  kOpentitanPinmuxOutselI2c2Sda = 39, /**< Peripheral Output 36 */
  kOpentitanPinmuxOutselI2c2Scl = 40, /**< Peripheral Output 37 */
  kOpentitanPinmuxOutselSpiHost1Sd0 = 41, /**< Peripheral Output 38 */
  kOpentitanPinmuxOutselSpiHost1Sd1 = 42, /**< Peripheral Output 39 */
  kOpentitanPinmuxOutselSpiHost1Sd2 = 43, /**< Peripheral Output 40 */
  kOpentitanPinmuxOutselSpiHost1Sd3 = 44, /**< Peripheral Output 41 */
  kOpentitanPinmuxOutselUart0Tx = 45, /**< Peripheral Output 42 */
  kOpentitanPinmuxOutselUart1Tx = 46, /**< Peripheral Output 43 */
  kOpentitanPinmuxOutselUart2Tx = 47, /**< Peripheral Output 44 */
  kOpentitanPinmuxOutselUart3Tx = 48, /**< Peripheral Output 45 */
  kOpentitanPinmuxOutselPattgenPda0Tx = 49, /**< Peripheral Output 46 */
  kOpentitanPinmuxOutselPattgenPcl0Tx = 50, /**< Peripheral Output 47 */
  kOpentitanPinmuxOutselPattgenPda1Tx = 51, /**< Peripheral Output 48 */
  kOpentitanPinmuxOutselPattgenPcl1Tx = 52, /**< Peripheral Output 49 */
  kOpentitanPinmuxOutselSpiHost1Sck = 53, /**< Peripheral Output 50 */
  kOpentitanPinmuxOutselSpiHost1Csb = 54, /**< Peripheral Output 51 */
  kOpentitanPinmuxOutselFlashCtrlTdo = 55, /**< Peripheral Output 52 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut0 = 56, /**< Peripheral Output 53 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut1 = 57, /**< Peripheral Output 54 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut2 = 58, /**< Peripheral Output 55 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut3 = 59, /**< Peripheral Output 56 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut4 = 60, /**< Peripheral Output 57 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut5 = 61, /**< Peripheral Output 58 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut6 = 62, /**< Peripheral Output 59 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut7 = 63, /**< Peripheral Output 60 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut8 = 64, /**< Peripheral Output 61 */
  kOpentitanPinmuxOutselPwmAonPwm0 = 65, /**< Peripheral Output 62 */
  kOpentitanPinmuxOutselPwmAonPwm1 = 66, /**< Peripheral Output 63 */
  kOpentitanPinmuxOutselPwmAonPwm2 = 67, /**< Peripheral Output 64 */
  kOpentitanPinmuxOutselPwmAonPwm3 = 68, /**< Peripheral Output 65 */
  kOpentitanPinmuxOutselPwmAonPwm4 = 69, /**< Peripheral Output 66 */
  kOpentitanPinmuxOutselPwmAonPwm5 = 70, /**< Peripheral Output 67 */
  kOpentitanPinmuxOutselOtpCtrlTest0 = 71, /**< Peripheral Output 68 */
  kOpentitanPinmuxOutselSysrstCtrlAonBatDisable = 72, /**< Peripheral Output 69 */
  kOpentitanPinmuxOutselSysrstCtrlAonKey0Out = 73, /**< Peripheral Output 70 */
  kOpentitanPinmuxOutselSysrstCtrlAonKey1Out = 74, /**< Peripheral Output 71 */
  kOpentitanPinmuxOutselSysrstCtrlAonKey2Out = 75, /**< Peripheral Output 72 */
  kOpentitanPinmuxOutselSysrstCtrlAonPwrbOut = 76, /**< Peripheral Output 73 */
  kOpentitanPinmuxOutselSysrstCtrlAonZ3Wakeup = 77, /**< Peripheral Output 74 */
  kOpentitanPinmuxOutselLast = 77, /**< \internal Last valid outsel value */
} opentitan_pinmux_outsel_t;

/**
 * Dedicated Pad Selects
 */
typedef enum opentitan_direct_pads {
  kOpentitanDirectPadsUsbdevUsbDp = 0, /**<  */
  kOpentitanDirectPadsUsbdevUsbDn = 1, /**<  */
  kOpentitanDirectPadsSpiHost0Sd0 = 2, /**<  */
  kOpentitanDirectPadsSpiHost0Sd1 = 3, /**<  */
  kOpentitanDirectPadsSpiHost0Sd2 = 4, /**<  */
  kOpentitanDirectPadsSpiHost0Sd3 = 5, /**<  */
  kOpentitanDirectPadsSpiDeviceSd0 = 6, /**<  */
  kOpentitanDirectPadsSpiDeviceSd1 = 7, /**<  */
  kOpentitanDirectPadsSpiDeviceSd2 = 8, /**<  */
  kOpentitanDirectPadsSpiDeviceSd3 = 9, /**<  */
  kOpentitanDirectPadsSysrstCtrlAonEcRstL = 10, /**<  */
  kOpentitanDirectPadsSysrstCtrlAonFlashWpL = 11, /**<  */
  kOpentitanDirectPadsSpiDeviceSck = 12, /**<  */
  kOpentitanDirectPadsSpiDeviceCsb = 13, /**<  */
  kOpentitanDirectPadsSpiHost0Sck = 14, /**<  */
  kOpentitanDirectPadsSpiHost0Csb = 15, /**<  */
  kOpentitanDirectPadsLast = 15, /**< \internal Last valid direct pad */
} opentitan_direct_pads_t;

/**
 * Muxed Pad Selects
 */
typedef enum opentitan_muxed_pads {
  kOpentitanMuxedPadsIoa0 = 0, /**<  */
  kOpentitanMuxedPadsIoa1 = 1, /**<  */
  kOpentitanMuxedPadsIoa2 = 2, /**<  */
  kOpentitanMuxedPadsIoa3 = 3, /**<  */
  kOpentitanMuxedPadsIoa4 = 4, /**<  */
  kOpentitanMuxedPadsIoa5 = 5, /**<  */
  kOpentitanMuxedPadsIoa6 = 6, /**<  */
  kOpentitanMuxedPadsIoa7 = 7, /**<  */
  kOpentitanMuxedPadsIoa8 = 8, /**<  */
  kOpentitanMuxedPadsIob0 = 9, /**<  */
  kOpentitanMuxedPadsIob1 = 10, /**<  */
  kOpentitanMuxedPadsIob2 = 11, /**<  */
  kOpentitanMuxedPadsIob3 = 12, /**<  */
  kOpentitanMuxedPadsIob4 = 13, /**<  */
  kOpentitanMuxedPadsIob5 = 14, /**<  */
  kOpentitanMuxedPadsIob6 = 15, /**<  */
  kOpentitanMuxedPadsIob7 = 16, /**<  */
  kOpentitanMuxedPadsIob8 = 17, /**<  */
  kOpentitanMuxedPadsIob9 = 18, /**<  */
  kOpentitanMuxedPadsIob10 = 19, /**<  */
  kOpentitanMuxedPadsIob11 = 20, /**<  */
  kOpentitanMuxedPadsIob12 = 21, /**<  */
  kOpentitanMuxedPadsIoc0 = 22, /**<  */
  kOpentitanMuxedPadsIoc1 = 23, /**<  */
  kOpentitanMuxedPadsIoc2 = 24, /**<  */
  kOpentitanMuxedPadsIoc3 = 25, /**<  */
  kOpentitanMuxedPadsIoc4 = 26, /**<  */
  kOpentitanMuxedPadsIoc5 = 27, /**<  */
  kOpentitanMuxedPadsIoc6 = 28, /**<  */
  kOpentitanMuxedPadsIoc7 = 29, /**<  */
  kOpentitanMuxedPadsIoc8 = 30, /**<  */
  kOpentitanMuxedPadsIoc9 = 31, /**<  */
  kOpentitanMuxedPadsIoc10 = 32, /**<  */
  kOpentitanMuxedPadsIoc11 = 33, /**<  */
  kOpentitanMuxedPadsIoc12 = 34, /**<  */
  kOpentitanMuxedPadsIor0 = 35, /**<  */
  kOpentitanMuxedPadsIor1 = 36, /**<  */
  kOpentitanMuxedPadsIor2 = 37, /**<  */
  kOpentitanMuxedPadsIor3 = 38, /**<  */
  kOpentitanMuxedPadsIor4 = 39, /**<  */
  kOpentitanMuxedPadsIor5 = 40, /**<  */
  kOpentitanMuxedPadsIor6 = 41, /**<  */
  kOpentitanMuxedPadsIor7 = 42, /**<  */
  kOpentitanMuxedPadsIor10 = 43, /**<  */
  kOpentitanMuxedPadsIor11 = 44, /**<  */
  kOpentitanMuxedPadsIor12 = 45, /**<  */
  kOpentitanMuxedPadsIor13 = 46, /**<  */
  kOpentitanMuxedPadsLast = 46, /**< \internal Last valid muxed pad */
} opentitan_muxed_pads_t;

/**
 * Power Manager Wakeup Signals
 */
typedef enum opentitan_power_manager_wake_ups {
  kOpentitanPowerManagerWakeUpsSysrstCtrlAonWkupReq = 0, /**<  */
  kOpentitanPowerManagerWakeUpsAdcCtrlAonWkupReq = 1, /**<  */
  kOpentitanPowerManagerWakeUpsPinmuxAonPinWkupReq = 2, /**<  */
  kOpentitanPowerManagerWakeUpsPinmuxAonUsbWkupReq = 3, /**<  */
  kOpentitanPowerManagerWakeUpsAonTimerAonWkupReq = 4, /**<  */
  kOpentitanPowerManagerWakeUpsSensorCtrlWkupReq = 5, /**<  */
  kOpentitanPowerManagerWakeUpsLast = 5, /**< \internal Last valid pwrmgr wakeup signal */
} opentitan_power_manager_wake_ups_t;

/**
 * Reset Manager Software Controlled Resets
 */
typedef enum opentitan_reset_manager_sw_resets {
  kOpentitanResetManagerSwResetsSpiDevice = 0, /**<  */
  kOpentitanResetManagerSwResetsSpiHost0 = 1, /**<  */
  kOpentitanResetManagerSwResetsSpiHost1 = 2, /**<  */
  kOpentitanResetManagerSwResetsUsb = 3, /**<  */
  kOpentitanResetManagerSwResetsUsbAon = 4, /**<  */
  kOpentitanResetManagerSwResetsI2c0 = 5, /**<  */
  kOpentitanResetManagerSwResetsI2c1 = 6, /**<  */
  kOpentitanResetManagerSwResetsI2c2 = 7, /**<  */
  kOpentitanResetManagerSwResetsLast = 7, /**< \internal Last valid rstmgr software reset request */
} opentitan_reset_manager_sw_resets_t;

/**
 * Power Manager Reset Request Signals
 */
typedef enum opentitan_power_manager_reset_requests {
  kOpentitanPowerManagerResetRequestsSysrstCtrlAonRstReq = 0, /**<  */
  kOpentitanPowerManagerResetRequestsAonTimerAonAonTimerRstReq = 1, /**<  */
  kOpentitanPowerManagerResetRequestsLast = 1, /**< \internal Last valid pwrmgr reset_request signal */
} opentitan_power_manager_reset_requests_t;

/**
 * Clock Manager Software-Controlled ("Gated") Clocks.
 *
 * The Software has full control over these clocks.
 */
typedef enum opentitan_gateable_clocks {
  kOpentitanGateableClocksIoDiv4Peri = 0, /**< Clock clk_io_div4_peri in group peri */
  kOpentitanGateableClocksIoDiv2Peri = 1, /**< Clock clk_io_div2_peri in group peri */
  kOpentitanGateableClocksIoPeri = 2, /**< Clock clk_io_peri in group peri */
  kOpentitanGateableClocksUsbPeri = 3, /**< Clock clk_usb_peri in group peri */
  kOpentitanGateableClocksLast = 3, /**< \internal Last Valid Gateable Clock */
} opentitan_gateable_clocks_t;

/**
 * Clock Manager Software-Hinted Clocks.
 *
 * The Software has partial control over these clocks. It can ask them to stop,
 * but the clock manager is in control of whether the clock actually is stopped.
 */
typedef enum opentitan_hintable_clocks {
  kOpentitanHintableClocksMainAes = 0, /**< Clock clk_main_aes in group trans */
  kOpentitanHintableClocksMainHmac = 1, /**< Clock clk_main_hmac in group trans */
  kOpentitanHintableClocksMainKmac = 2, /**< Clock clk_main_kmac in group trans */
  kOpentitanHintableClocksMainOtbn = 3, /**< Clock clk_main_otbn in group trans */
  kOpentitanHintableClocksLast = 3, /**< \internal Last Valid Hintable Clock */
} opentitan_hintable_clocks_t;

/**
 * MMIO Region
 *
 * MMIO region excludes any memory that is separate from the module
 * configuration space, i.e. ROM, main SRAM, and flash are excluded but
 * retention SRAM, spi_device memory, or usbdev memory are included.
 */
#define OPENTITAN_MMIO_BASE_ADDR 0x40000000u
#define OPENTITAN_MMIO_SIZE_BYTES 0x10000000u

// Header Extern Guard
#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // OPENTITAN_HW_TOP_EARLGREY_SW_AUTOGEN_TOP_EARLGREY_H_
