// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENTITAN_HW_TOP_CUSTOM_GF12_SW_AUTOGEN_TOP_CUSTOM_GF12_H_
#define OPENTITAN_HW_TOP_CUSTOM_GF12_SW_AUTOGEN_TOP_CUSTOM_GF12_H_

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
 * Peripheral base address for uart0 in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_UART0_BASE_ADDR 0x40000000u

/**
 * Peripheral size for uart0 in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_UART0_BASE_ADDR and
 * `TOP_CUSTOM_GF12_UART0_BASE_ADDR + TOP_CUSTOM_GF12_UART0_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_UART0_SIZE_BYTES 0x40u

/**
 * Peripheral base address for gpio in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_GPIO_BASE_ADDR 0x40040000u

/**
 * Peripheral size for gpio in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_GPIO_BASE_ADDR and
 * `TOP_CUSTOM_GF12_GPIO_BASE_ADDR + TOP_CUSTOM_GF12_GPIO_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_GPIO_SIZE_BYTES 0x40u

/**
 * Peripheral base address for i2c0 in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_I2C0_BASE_ADDR 0x40080000u

/**
 * Peripheral size for i2c0 in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_I2C0_BASE_ADDR and
 * `TOP_CUSTOM_GF12_I2C0_BASE_ADDR + TOP_CUSTOM_GF12_I2C0_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_I2C0_SIZE_BYTES 0x80u

/**
 * Peripheral base address for pattgen in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_PATTGEN_BASE_ADDR 0x400E0000u

/**
 * Peripheral size for pattgen in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_PATTGEN_BASE_ADDR and
 * `TOP_CUSTOM_GF12_PATTGEN_BASE_ADDR + TOP_CUSTOM_GF12_PATTGEN_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_PATTGEN_SIZE_BYTES 0x40u

/**
 * Peripheral base address for rv_timer in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_RV_TIMER_BASE_ADDR 0x40100000u

/**
 * Peripheral size for rv_timer in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_RV_TIMER_BASE_ADDR and
 * `TOP_CUSTOM_GF12_RV_TIMER_BASE_ADDR + TOP_CUSTOM_GF12_RV_TIMER_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_RV_TIMER_SIZE_BYTES 0x200u

/**
 * Peripheral base address for core device on otp_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_OTP_CTRL_CORE_BASE_ADDR 0x40130000u

/**
 * Peripheral size for core device on otp_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_OTP_CTRL_CORE_BASE_ADDR and
 * `TOP_CUSTOM_GF12_OTP_CTRL_CORE_BASE_ADDR + TOP_CUSTOM_GF12_OTP_CTRL_CORE_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_OTP_CTRL_CORE_SIZE_BYTES 0x2000u

/**
 * Peripheral base address for prim device on otp_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_OTP_CTRL_PRIM_BASE_ADDR 0x40132000u

/**
 * Peripheral size for prim device on otp_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_OTP_CTRL_PRIM_BASE_ADDR and
 * `TOP_CUSTOM_GF12_OTP_CTRL_PRIM_BASE_ADDR + TOP_CUSTOM_GF12_OTP_CTRL_PRIM_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_OTP_CTRL_PRIM_SIZE_BYTES 0x20u

/**
 * Peripheral base address for lc_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_LC_CTRL_BASE_ADDR 0x40140000u

/**
 * Peripheral size for lc_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_LC_CTRL_BASE_ADDR and
 * `TOP_CUSTOM_GF12_LC_CTRL_BASE_ADDR + TOP_CUSTOM_GF12_LC_CTRL_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_LC_CTRL_SIZE_BYTES 0x100u

/**
 * Peripheral base address for alert_handler in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_ALERT_HANDLER_BASE_ADDR 0x40150000u

/**
 * Peripheral size for alert_handler in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_ALERT_HANDLER_BASE_ADDR and
 * `TOP_CUSTOM_GF12_ALERT_HANDLER_BASE_ADDR + TOP_CUSTOM_GF12_ALERT_HANDLER_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_ALERT_HANDLER_SIZE_BYTES 0x800u

/**
 * Peripheral base address for spi_host0 in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_SPI_HOST0_BASE_ADDR 0x40300000u

/**
 * Peripheral size for spi_host0 in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_SPI_HOST0_BASE_ADDR and
 * `TOP_CUSTOM_GF12_SPI_HOST0_BASE_ADDR + TOP_CUSTOM_GF12_SPI_HOST0_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_SPI_HOST0_SIZE_BYTES 0x40u

/**
 * Peripheral base address for pwrmgr_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_PWRMGR_AON_BASE_ADDR 0x40400000u

/**
 * Peripheral size for pwrmgr_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_PWRMGR_AON_BASE_ADDR and
 * `TOP_CUSTOM_GF12_PWRMGR_AON_BASE_ADDR + TOP_CUSTOM_GF12_PWRMGR_AON_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_PWRMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rstmgr_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_RSTMGR_AON_BASE_ADDR 0x40410000u

/**
 * Peripheral size for rstmgr_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_RSTMGR_AON_BASE_ADDR and
 * `TOP_CUSTOM_GF12_RSTMGR_AON_BASE_ADDR + TOP_CUSTOM_GF12_RSTMGR_AON_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_RSTMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for clkmgr_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_CLKMGR_AON_BASE_ADDR 0x40420000u

/**
 * Peripheral size for clkmgr_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_CLKMGR_AON_BASE_ADDR and
 * `TOP_CUSTOM_GF12_CLKMGR_AON_BASE_ADDR + TOP_CUSTOM_GF12_CLKMGR_AON_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_CLKMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for sysrst_ctrl_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_SYSRST_CTRL_AON_BASE_ADDR 0x40430000u

/**
 * Peripheral size for sysrst_ctrl_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_SYSRST_CTRL_AON_BASE_ADDR and
 * `TOP_CUSTOM_GF12_SYSRST_CTRL_AON_BASE_ADDR + TOP_CUSTOM_GF12_SYSRST_CTRL_AON_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_SYSRST_CTRL_AON_SIZE_BYTES 0x100u

/**
 * Peripheral base address for pinmux_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_PINMUX_AON_BASE_ADDR 0x40460000u

/**
 * Peripheral size for pinmux_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_PINMUX_AON_BASE_ADDR and
 * `TOP_CUSTOM_GF12_PINMUX_AON_BASE_ADDR + TOP_CUSTOM_GF12_PINMUX_AON_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_PINMUX_AON_SIZE_BYTES 0x800u

/**
 * Peripheral base address for aon_timer_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_AON_TIMER_AON_BASE_ADDR 0x40470000u

/**
 * Peripheral size for aon_timer_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_AON_TIMER_AON_BASE_ADDR and
 * `TOP_CUSTOM_GF12_AON_TIMER_AON_BASE_ADDR + TOP_CUSTOM_GF12_AON_TIMER_AON_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_AON_TIMER_AON_SIZE_BYTES 0x40u

/**
 * Peripheral base address for ast in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_AST_BASE_ADDR 0x40480000u

/**
 * Peripheral size for ast in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_AST_BASE_ADDR and
 * `TOP_CUSTOM_GF12_AST_BASE_ADDR + TOP_CUSTOM_GF12_AST_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_AST_SIZE_BYTES 0x400u

/**
 * Peripheral base address for sensor_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_SENSOR_CTRL_BASE_ADDR 0x40490000u

/**
 * Peripheral size for sensor_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_SENSOR_CTRL_BASE_ADDR and
 * `TOP_CUSTOM_GF12_SENSOR_CTRL_BASE_ADDR + TOP_CUSTOM_GF12_SENSOR_CTRL_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_SENSOR_CTRL_SIZE_BYTES 0x40u

/**
 * Peripheral base address for regs device on sram_ctrl_ret_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_REGS_BASE_ADDR 0x40500000u

/**
 * Peripheral size for regs device on sram_ctrl_ret_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_REGS_BASE_ADDR and
 * `TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_REGS_BASE_ADDR + TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES 0x20u

/**
 * Peripheral base address for ram device on sram_ctrl_ret_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_RAM_BASE_ADDR 0x40600000u

/**
 * Peripheral size for ram device on sram_ctrl_ret_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_RAM_BASE_ADDR and
 * `TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_RAM_BASE_ADDR + TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for core device on flash_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_FLASH_CTRL_CORE_BASE_ADDR 0x41000000u

/**
 * Peripheral size for core device on flash_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_FLASH_CTRL_CORE_BASE_ADDR and
 * `TOP_CUSTOM_GF12_FLASH_CTRL_CORE_BASE_ADDR + TOP_CUSTOM_GF12_FLASH_CTRL_CORE_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_FLASH_CTRL_CORE_SIZE_BYTES 0x200u

/**
 * Peripheral base address for prim device on flash_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_FLASH_CTRL_PRIM_BASE_ADDR 0x41008000u

/**
 * Peripheral size for prim device on flash_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_FLASH_CTRL_PRIM_BASE_ADDR and
 * `TOP_CUSTOM_GF12_FLASH_CTRL_PRIM_BASE_ADDR + TOP_CUSTOM_GF12_FLASH_CTRL_PRIM_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_FLASH_CTRL_PRIM_SIZE_BYTES 0x80u

/**
 * Peripheral base address for mem device on flash_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_FLASH_CTRL_MEM_BASE_ADDR 0x20000000u

/**
 * Peripheral size for mem device on flash_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_FLASH_CTRL_MEM_BASE_ADDR and
 * `TOP_CUSTOM_GF12_FLASH_CTRL_MEM_BASE_ADDR + TOP_CUSTOM_GF12_FLASH_CTRL_MEM_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_FLASH_CTRL_MEM_SIZE_BYTES 0x100000u

/**
 * Peripheral base address for regs device on rv_dm in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_RV_DM_REGS_BASE_ADDR 0x41200000u

/**
 * Peripheral size for regs device on rv_dm in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_RV_DM_REGS_BASE_ADDR and
 * `TOP_CUSTOM_GF12_RV_DM_REGS_BASE_ADDR + TOP_CUSTOM_GF12_RV_DM_REGS_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_RV_DM_REGS_SIZE_BYTES 0x4u

/**
 * Peripheral base address for mem device on rv_dm in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_RV_DM_MEM_BASE_ADDR 0x10000u

/**
 * Peripheral size for mem device on rv_dm in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_RV_DM_MEM_BASE_ADDR and
 * `TOP_CUSTOM_GF12_RV_DM_MEM_BASE_ADDR + TOP_CUSTOM_GF12_RV_DM_MEM_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_RV_DM_MEM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for rv_plic in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_RV_PLIC_BASE_ADDR 0x48000000u

/**
 * Peripheral size for rv_plic in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_RV_PLIC_BASE_ADDR and
 * `TOP_CUSTOM_GF12_RV_PLIC_BASE_ADDR + TOP_CUSTOM_GF12_RV_PLIC_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_RV_PLIC_SIZE_BYTES 0x8000000u

/**
 * Peripheral base address for otbn in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_OTBN_BASE_ADDR 0x41130000u

/**
 * Peripheral size for otbn in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_OTBN_BASE_ADDR and
 * `TOP_CUSTOM_GF12_OTBN_BASE_ADDR + TOP_CUSTOM_GF12_OTBN_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_OTBN_SIZE_BYTES 0x10000u

/**
 * Peripheral base address for edn0 in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_EDN0_BASE_ADDR 0x41170000u

/**
 * Peripheral size for edn0 in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_EDN0_BASE_ADDR and
 * `TOP_CUSTOM_GF12_EDN0_BASE_ADDR + TOP_CUSTOM_GF12_EDN0_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_EDN0_SIZE_BYTES 0x80u

/**
 * Peripheral base address for edn1 in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_EDN1_BASE_ADDR 0x41180000u

/**
 * Peripheral size for edn1 in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_EDN1_BASE_ADDR and
 * `TOP_CUSTOM_GF12_EDN1_BASE_ADDR + TOP_CUSTOM_GF12_EDN1_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_EDN1_SIZE_BYTES 0x80u

/**
 * Peripheral base address for regs device on sram_ctrl_main in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_REGS_BASE_ADDR 0x411C0000u

/**
 * Peripheral size for regs device on sram_ctrl_main in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_REGS_BASE_ADDR and
 * `TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_REGS_BASE_ADDR + TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_REGS_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_REGS_SIZE_BYTES 0x20u

/**
 * Peripheral base address for ram device on sram_ctrl_main in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_RAM_BASE_ADDR 0x10000000u

/**
 * Peripheral size for ram device on sram_ctrl_main in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_RAM_BASE_ADDR and
 * `TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_RAM_BASE_ADDR + TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_RAM_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_SRAM_CTRL_MAIN_RAM_SIZE_BYTES 0x20000u

/**
 * Peripheral base address for regs device on rom_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_ROM_CTRL_REGS_BASE_ADDR 0x411E0000u

/**
 * Peripheral size for regs device on rom_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_ROM_CTRL_REGS_BASE_ADDR and
 * `TOP_CUSTOM_GF12_ROM_CTRL_REGS_BASE_ADDR + TOP_CUSTOM_GF12_ROM_CTRL_REGS_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_ROM_CTRL_REGS_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rom device on rom_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_ROM_CTRL_ROM_BASE_ADDR 0x8000u

/**
 * Peripheral size for rom device on rom_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_ROM_CTRL_ROM_BASE_ADDR and
 * `TOP_CUSTOM_GF12_ROM_CTRL_ROM_BASE_ADDR + TOP_CUSTOM_GF12_ROM_CTRL_ROM_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_ROM_CTRL_ROM_SIZE_BYTES 0x8000u

/**
 * Peripheral base address for cfg device on rv_core_ibex in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_CUSTOM_GF12_RV_CORE_IBEX_CFG_BASE_ADDR 0x411F0000u

/**
 * Peripheral size for cfg device on rv_core_ibex in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_CUSTOM_GF12_RV_CORE_IBEX_CFG_BASE_ADDR and
 * `TOP_CUSTOM_GF12_RV_CORE_IBEX_CFG_BASE_ADDR + TOP_CUSTOM_GF12_RV_CORE_IBEX_CFG_SIZE_BYTES`.
 */
#define TOP_CUSTOM_GF12_RV_CORE_IBEX_CFG_SIZE_BYTES 0x100u


/**
 * Memory base address for ram_ret_aon in top custom_gf12.
 */
#define TOP_CUSTOM_GF12_RAM_RET_AON_BASE_ADDR 0x40600000u

/**
 * Memory size for ram_ret_aon in top custom_gf12.
 */
#define TOP_CUSTOM_GF12_RAM_RET_AON_SIZE_BYTES 0x1000u

/**
 * Memory base address for eflash in top custom_gf12.
 */
#define TOP_CUSTOM_GF12_EFLASH_BASE_ADDR 0x20000000u

/**
 * Memory size for eflash in top custom_gf12.
 */
#define TOP_CUSTOM_GF12_EFLASH_SIZE_BYTES 0x100000u

/**
 * Memory base address for ram_main in top custom_gf12.
 */
#define TOP_CUSTOM_GF12_RAM_MAIN_BASE_ADDR 0x10000000u

/**
 * Memory size for ram_main in top custom_gf12.
 */
#define TOP_CUSTOM_GF12_RAM_MAIN_SIZE_BYTES 0x20000u

/**
 * Memory base address for rom in top custom_gf12.
 */
#define TOP_CUSTOM_GF12_ROM_BASE_ADDR 0x8000u

/**
 * Memory size for rom in top custom_gf12.
 */
#define TOP_CUSTOM_GF12_ROM_SIZE_BYTES 0x8000u


/**
 * PLIC Interrupt Source Peripheral.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * interrupt.
 */
typedef enum top_custom_gf12_plic_peripheral {
  kTopCustomGf12PlicPeripheralUnknown = 0, /**< Unknown Peripheral */
  kTopCustomGf12PlicPeripheralUart0 = 1, /**< uart0 */
  kTopCustomGf12PlicPeripheralGpio = 2, /**< gpio */
  kTopCustomGf12PlicPeripheralI2c0 = 3, /**< i2c0 */
  kTopCustomGf12PlicPeripheralPattgen = 4, /**< pattgen */
  kTopCustomGf12PlicPeripheralRvTimer = 5, /**< rv_timer */
  kTopCustomGf12PlicPeripheralOtpCtrl = 6, /**< otp_ctrl */
  kTopCustomGf12PlicPeripheralAlertHandler = 7, /**< alert_handler */
  kTopCustomGf12PlicPeripheralSpiHost0 = 8, /**< spi_host0 */
  kTopCustomGf12PlicPeripheralPwrmgrAon = 9, /**< pwrmgr_aon */
  kTopCustomGf12PlicPeripheralSysrstCtrlAon = 10, /**< sysrst_ctrl_aon */
  kTopCustomGf12PlicPeripheralAonTimerAon = 11, /**< aon_timer_aon */
  kTopCustomGf12PlicPeripheralSensorCtrl = 12, /**< sensor_ctrl */
  kTopCustomGf12PlicPeripheralFlashCtrl = 13, /**< flash_ctrl */
  kTopCustomGf12PlicPeripheralOtbn = 14, /**< otbn */
  kTopCustomGf12PlicPeripheralEdn0 = 15, /**< edn0 */
  kTopCustomGf12PlicPeripheralEdn1 = 16, /**< edn1 */
  kTopCustomGf12PlicPeripheralLast = 16, /**< \internal Final PLIC peripheral */
} top_custom_gf12_plic_peripheral_t;

/**
 * PLIC Interrupt Source.
 *
 * Enumeration of all PLIC interrupt sources. The interrupt sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum top_custom_gf12_plic_irq_id {
  kTopCustomGf12PlicIrqIdNone = 0, /**< No Interrupt */
  kTopCustomGf12PlicIrqIdUart0TxWatermark = 1, /**< uart0_tx_watermark */
  kTopCustomGf12PlicIrqIdUart0RxWatermark = 2, /**< uart0_rx_watermark */
  kTopCustomGf12PlicIrqIdUart0TxEmpty = 3, /**< uart0_tx_empty */
  kTopCustomGf12PlicIrqIdUart0RxOverflow = 4, /**< uart0_rx_overflow */
  kTopCustomGf12PlicIrqIdUart0RxFrameErr = 5, /**< uart0_rx_frame_err */
  kTopCustomGf12PlicIrqIdUart0RxBreakErr = 6, /**< uart0_rx_break_err */
  kTopCustomGf12PlicIrqIdUart0RxTimeout = 7, /**< uart0_rx_timeout */
  kTopCustomGf12PlicIrqIdUart0RxParityErr = 8, /**< uart0_rx_parity_err */
  kTopCustomGf12PlicIrqIdGpioGpio0 = 9, /**< gpio_gpio 0 */
  kTopCustomGf12PlicIrqIdGpioGpio1 = 10, /**< gpio_gpio 1 */
  kTopCustomGf12PlicIrqIdGpioGpio2 = 11, /**< gpio_gpio 2 */
  kTopCustomGf12PlicIrqIdGpioGpio3 = 12, /**< gpio_gpio 3 */
  kTopCustomGf12PlicIrqIdGpioGpio4 = 13, /**< gpio_gpio 4 */
  kTopCustomGf12PlicIrqIdGpioGpio5 = 14, /**< gpio_gpio 5 */
  kTopCustomGf12PlicIrqIdGpioGpio6 = 15, /**< gpio_gpio 6 */
  kTopCustomGf12PlicIrqIdGpioGpio7 = 16, /**< gpio_gpio 7 */
  kTopCustomGf12PlicIrqIdGpioGpio8 = 17, /**< gpio_gpio 8 */
  kTopCustomGf12PlicIrqIdGpioGpio9 = 18, /**< gpio_gpio 9 */
  kTopCustomGf12PlicIrqIdGpioGpio10 = 19, /**< gpio_gpio 10 */
  kTopCustomGf12PlicIrqIdGpioGpio11 = 20, /**< gpio_gpio 11 */
  kTopCustomGf12PlicIrqIdGpioGpio12 = 21, /**< gpio_gpio 12 */
  kTopCustomGf12PlicIrqIdGpioGpio13 = 22, /**< gpio_gpio 13 */
  kTopCustomGf12PlicIrqIdGpioGpio14 = 23, /**< gpio_gpio 14 */
  kTopCustomGf12PlicIrqIdGpioGpio15 = 24, /**< gpio_gpio 15 */
  kTopCustomGf12PlicIrqIdGpioGpio16 = 25, /**< gpio_gpio 16 */
  kTopCustomGf12PlicIrqIdGpioGpio17 = 26, /**< gpio_gpio 17 */
  kTopCustomGf12PlicIrqIdGpioGpio18 = 27, /**< gpio_gpio 18 */
  kTopCustomGf12PlicIrqIdGpioGpio19 = 28, /**< gpio_gpio 19 */
  kTopCustomGf12PlicIrqIdGpioGpio20 = 29, /**< gpio_gpio 20 */
  kTopCustomGf12PlicIrqIdGpioGpio21 = 30, /**< gpio_gpio 21 */
  kTopCustomGf12PlicIrqIdGpioGpio22 = 31, /**< gpio_gpio 22 */
  kTopCustomGf12PlicIrqIdGpioGpio23 = 32, /**< gpio_gpio 23 */
  kTopCustomGf12PlicIrqIdGpioGpio24 = 33, /**< gpio_gpio 24 */
  kTopCustomGf12PlicIrqIdGpioGpio25 = 34, /**< gpio_gpio 25 */
  kTopCustomGf12PlicIrqIdGpioGpio26 = 35, /**< gpio_gpio 26 */
  kTopCustomGf12PlicIrqIdGpioGpio27 = 36, /**< gpio_gpio 27 */
  kTopCustomGf12PlicIrqIdGpioGpio28 = 37, /**< gpio_gpio 28 */
  kTopCustomGf12PlicIrqIdGpioGpio29 = 38, /**< gpio_gpio 29 */
  kTopCustomGf12PlicIrqIdGpioGpio30 = 39, /**< gpio_gpio 30 */
  kTopCustomGf12PlicIrqIdGpioGpio31 = 40, /**< gpio_gpio 31 */
  kTopCustomGf12PlicIrqIdI2c0FmtWatermark = 41, /**< i2c0_fmt_watermark */
  kTopCustomGf12PlicIrqIdI2c0RxWatermark = 42, /**< i2c0_rx_watermark */
  kTopCustomGf12PlicIrqIdI2c0FmtOverflow = 43, /**< i2c0_fmt_overflow */
  kTopCustomGf12PlicIrqIdI2c0RxOverflow = 44, /**< i2c0_rx_overflow */
  kTopCustomGf12PlicIrqIdI2c0Nak = 45, /**< i2c0_nak */
  kTopCustomGf12PlicIrqIdI2c0SclInterference = 46, /**< i2c0_scl_interference */
  kTopCustomGf12PlicIrqIdI2c0SdaInterference = 47, /**< i2c0_sda_interference */
  kTopCustomGf12PlicIrqIdI2c0StretchTimeout = 48, /**< i2c0_stretch_timeout */
  kTopCustomGf12PlicIrqIdI2c0SdaUnstable = 49, /**< i2c0_sda_unstable */
  kTopCustomGf12PlicIrqIdI2c0CmdComplete = 50, /**< i2c0_cmd_complete */
  kTopCustomGf12PlicIrqIdI2c0TxStretch = 51, /**< i2c0_tx_stretch */
  kTopCustomGf12PlicIrqIdI2c0TxOverflow = 52, /**< i2c0_tx_overflow */
  kTopCustomGf12PlicIrqIdI2c0AcqFull = 53, /**< i2c0_acq_full */
  kTopCustomGf12PlicIrqIdI2c0UnexpStop = 54, /**< i2c0_unexp_stop */
  kTopCustomGf12PlicIrqIdI2c0HostTimeout = 55, /**< i2c0_host_timeout */
  kTopCustomGf12PlicIrqIdPattgenDoneCh0 = 56, /**< pattgen_done_ch0 */
  kTopCustomGf12PlicIrqIdPattgenDoneCh1 = 57, /**< pattgen_done_ch1 */
  kTopCustomGf12PlicIrqIdRvTimerTimerExpiredHart0Timer0 = 58, /**< rv_timer_timer_expired_hart0_timer0 */
  kTopCustomGf12PlicIrqIdOtpCtrlOtpOperationDone = 59, /**< otp_ctrl_otp_operation_done */
  kTopCustomGf12PlicIrqIdOtpCtrlOtpError = 60, /**< otp_ctrl_otp_error */
  kTopCustomGf12PlicIrqIdAlertHandlerClassa = 61, /**< alert_handler_classa */
  kTopCustomGf12PlicIrqIdAlertHandlerClassb = 62, /**< alert_handler_classb */
  kTopCustomGf12PlicIrqIdAlertHandlerClassc = 63, /**< alert_handler_classc */
  kTopCustomGf12PlicIrqIdAlertHandlerClassd = 64, /**< alert_handler_classd */
  kTopCustomGf12PlicIrqIdSpiHost0Error = 65, /**< spi_host0_error */
  kTopCustomGf12PlicIrqIdSpiHost0SpiEvent = 66, /**< spi_host0_spi_event */
  kTopCustomGf12PlicIrqIdPwrmgrAonWakeup = 67, /**< pwrmgr_aon_wakeup */
  kTopCustomGf12PlicIrqIdSysrstCtrlAonEventDetected = 68, /**< sysrst_ctrl_aon_event_detected */
  kTopCustomGf12PlicIrqIdAonTimerAonWkupTimerExpired = 69, /**< aon_timer_aon_wkup_timer_expired */
  kTopCustomGf12PlicIrqIdAonTimerAonWdogTimerBark = 70, /**< aon_timer_aon_wdog_timer_bark */
  kTopCustomGf12PlicIrqIdSensorCtrlIoStatusChange = 71, /**< sensor_ctrl_io_status_change */
  kTopCustomGf12PlicIrqIdSensorCtrlInitStatusChange = 72, /**< sensor_ctrl_init_status_change */
  kTopCustomGf12PlicIrqIdFlashCtrlProgEmpty = 73, /**< flash_ctrl_prog_empty */
  kTopCustomGf12PlicIrqIdFlashCtrlProgLvl = 74, /**< flash_ctrl_prog_lvl */
  kTopCustomGf12PlicIrqIdFlashCtrlRdFull = 75, /**< flash_ctrl_rd_full */
  kTopCustomGf12PlicIrqIdFlashCtrlRdLvl = 76, /**< flash_ctrl_rd_lvl */
  kTopCustomGf12PlicIrqIdFlashCtrlOpDone = 77, /**< flash_ctrl_op_done */
  kTopCustomGf12PlicIrqIdFlashCtrlCorrErr = 78, /**< flash_ctrl_corr_err */
  kTopCustomGf12PlicIrqIdOtbnDone = 79, /**< otbn_done */
  kTopCustomGf12PlicIrqIdEdn0EdnCmdReqDone = 80, /**< edn0_edn_cmd_req_done */
  kTopCustomGf12PlicIrqIdEdn0EdnFatalErr = 81, /**< edn0_edn_fatal_err */
  kTopCustomGf12PlicIrqIdEdn1EdnCmdReqDone = 82, /**< edn1_edn_cmd_req_done */
  kTopCustomGf12PlicIrqIdEdn1EdnFatalErr = 83, /**< edn1_edn_fatal_err */
  kTopCustomGf12PlicIrqIdLast = 83, /**< \internal The Last Valid Interrupt ID. */
} top_custom_gf12_plic_irq_id_t;

/**
 * PLIC Interrupt Source to Peripheral Map
 *
 * This array is a mapping from `top_custom_gf12_plic_irq_id_t` to
 * `top_custom_gf12_plic_peripheral_t`.
 */
extern const top_custom_gf12_plic_peripheral_t
    top_custom_gf12_plic_interrupt_for_peripheral[84];

/**
 * PLIC Interrupt Target.
 *
 * Enumeration used to determine which set of IE, CC, threshold registers to
 * access for a given interrupt target.
 */
typedef enum top_custom_gf12_plic_target {
  kTopCustomGf12PlicTargetIbex0 = 0, /**< Ibex Core 0 */
  kTopCustomGf12PlicTargetLast = 0, /**< \internal Final PLIC target */
} top_custom_gf12_plic_target_t;

/**
 * Alert Handler Source Peripheral.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * alert.
 */
typedef enum top_custom_gf12_alert_peripheral {
  kTopCustomGf12AlertPeripheralUart0 = 0, /**< uart0 */
  kTopCustomGf12AlertPeripheralGpio = 1, /**< gpio */
  kTopCustomGf12AlertPeripheralI2c0 = 2, /**< i2c0 */
  kTopCustomGf12AlertPeripheralPattgen = 3, /**< pattgen */
  kTopCustomGf12AlertPeripheralRvTimer = 4, /**< rv_timer */
  kTopCustomGf12AlertPeripheralOtpCtrl = 5, /**< otp_ctrl */
  kTopCustomGf12AlertPeripheralLcCtrl = 6, /**< lc_ctrl */
  kTopCustomGf12AlertPeripheralSpiHost0 = 7, /**< spi_host0 */
  kTopCustomGf12AlertPeripheralPwrmgrAon = 8, /**< pwrmgr_aon */
  kTopCustomGf12AlertPeripheralRstmgrAon = 9, /**< rstmgr_aon */
  kTopCustomGf12AlertPeripheralClkmgrAon = 10, /**< clkmgr_aon */
  kTopCustomGf12AlertPeripheralSysrstCtrlAon = 11, /**< sysrst_ctrl_aon */
  kTopCustomGf12AlertPeripheralPinmuxAon = 12, /**< pinmux_aon */
  kTopCustomGf12AlertPeripheralAonTimerAon = 13, /**< aon_timer_aon */
  kTopCustomGf12AlertPeripheralSensorCtrl = 14, /**< sensor_ctrl */
  kTopCustomGf12AlertPeripheralSramCtrlRetAon = 15, /**< sram_ctrl_ret_aon */
  kTopCustomGf12AlertPeripheralFlashCtrl = 16, /**< flash_ctrl */
  kTopCustomGf12AlertPeripheralRvDm = 17, /**< rv_dm */
  kTopCustomGf12AlertPeripheralRvPlic = 18, /**< rv_plic */
  kTopCustomGf12AlertPeripheralOtbn = 19, /**< otbn */
  kTopCustomGf12AlertPeripheralEdn0 = 20, /**< edn0 */
  kTopCustomGf12AlertPeripheralEdn1 = 21, /**< edn1 */
  kTopCustomGf12AlertPeripheralSramCtrlMain = 22, /**< sram_ctrl_main */
  kTopCustomGf12AlertPeripheralRomCtrl = 23, /**< rom_ctrl */
  kTopCustomGf12AlertPeripheralRvCoreIbex = 24, /**< rv_core_ibex */
  kTopCustomGf12AlertPeripheralLast = 24, /**< \internal Final Alert peripheral */
} top_custom_gf12_alert_peripheral_t;

/**
 * Alert Handler Alert Source.
 *
 * Enumeration of all Alert Handler Alert Sources. The alert sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum top_custom_gf12_alert_id {
  kTopCustomGf12AlertIdUart0FatalFault = 0, /**< uart0_fatal_fault */
  kTopCustomGf12AlertIdGpioFatalFault = 1, /**< gpio_fatal_fault */
  kTopCustomGf12AlertIdI2c0FatalFault = 2, /**< i2c0_fatal_fault */
  kTopCustomGf12AlertIdPattgenFatalFault = 3, /**< pattgen_fatal_fault */
  kTopCustomGf12AlertIdRvTimerFatalFault = 4, /**< rv_timer_fatal_fault */
  kTopCustomGf12AlertIdOtpCtrlFatalMacroError = 5, /**< otp_ctrl_fatal_macro_error */
  kTopCustomGf12AlertIdOtpCtrlFatalCheckError = 6, /**< otp_ctrl_fatal_check_error */
  kTopCustomGf12AlertIdOtpCtrlFatalBusIntegError = 7, /**< otp_ctrl_fatal_bus_integ_error */
  kTopCustomGf12AlertIdOtpCtrlFatalPrimOtpAlert = 8, /**< otp_ctrl_fatal_prim_otp_alert */
  kTopCustomGf12AlertIdOtpCtrlRecovPrimOtpAlert = 9, /**< otp_ctrl_recov_prim_otp_alert */
  kTopCustomGf12AlertIdLcCtrlFatalProgError = 10, /**< lc_ctrl_fatal_prog_error */
  kTopCustomGf12AlertIdLcCtrlFatalStateError = 11, /**< lc_ctrl_fatal_state_error */
  kTopCustomGf12AlertIdLcCtrlFatalBusIntegError = 12, /**< lc_ctrl_fatal_bus_integ_error */
  kTopCustomGf12AlertIdSpiHost0FatalFault = 13, /**< spi_host0_fatal_fault */
  kTopCustomGf12AlertIdPwrmgrAonFatalFault = 14, /**< pwrmgr_aon_fatal_fault */
  kTopCustomGf12AlertIdRstmgrAonFatalFault = 15, /**< rstmgr_aon_fatal_fault */
  kTopCustomGf12AlertIdRstmgrAonFatalCnstyFault = 16, /**< rstmgr_aon_fatal_cnsty_fault */
  kTopCustomGf12AlertIdClkmgrAonRecovFault = 17, /**< clkmgr_aon_recov_fault */
  kTopCustomGf12AlertIdClkmgrAonFatalFault = 18, /**< clkmgr_aon_fatal_fault */
  kTopCustomGf12AlertIdSysrstCtrlAonFatalFault = 19, /**< sysrst_ctrl_aon_fatal_fault */
  kTopCustomGf12AlertIdPinmuxAonFatalFault = 20, /**< pinmux_aon_fatal_fault */
  kTopCustomGf12AlertIdAonTimerAonFatalFault = 21, /**< aon_timer_aon_fatal_fault */
  kTopCustomGf12AlertIdSensorCtrlRecovAlert = 22, /**< sensor_ctrl_recov_alert */
  kTopCustomGf12AlertIdSensorCtrlFatalAlert = 23, /**< sensor_ctrl_fatal_alert */
  kTopCustomGf12AlertIdSramCtrlRetAonFatalError = 24, /**< sram_ctrl_ret_aon_fatal_error */
  kTopCustomGf12AlertIdFlashCtrlRecovErr = 25, /**< flash_ctrl_recov_err */
  kTopCustomGf12AlertIdFlashCtrlFatalStdErr = 26, /**< flash_ctrl_fatal_std_err */
  kTopCustomGf12AlertIdFlashCtrlFatalErr = 27, /**< flash_ctrl_fatal_err */
  kTopCustomGf12AlertIdFlashCtrlFatalPrimFlashAlert = 28, /**< flash_ctrl_fatal_prim_flash_alert */
  kTopCustomGf12AlertIdFlashCtrlRecovPrimFlashAlert = 29, /**< flash_ctrl_recov_prim_flash_alert */
  kTopCustomGf12AlertIdRvDmFatalFault = 30, /**< rv_dm_fatal_fault */
  kTopCustomGf12AlertIdRvPlicFatalFault = 31, /**< rv_plic_fatal_fault */
  kTopCustomGf12AlertIdOtbnFatal = 32, /**< otbn_fatal */
  kTopCustomGf12AlertIdOtbnRecov = 33, /**< otbn_recov */
  kTopCustomGf12AlertIdEdn0RecovAlert = 34, /**< edn0_recov_alert */
  kTopCustomGf12AlertIdEdn0FatalAlert = 35, /**< edn0_fatal_alert */
  kTopCustomGf12AlertIdEdn1RecovAlert = 36, /**< edn1_recov_alert */
  kTopCustomGf12AlertIdEdn1FatalAlert = 37, /**< edn1_fatal_alert */
  kTopCustomGf12AlertIdSramCtrlMainFatalError = 38, /**< sram_ctrl_main_fatal_error */
  kTopCustomGf12AlertIdRomCtrlFatal = 39, /**< rom_ctrl_fatal */
  kTopCustomGf12AlertIdRvCoreIbexFatalSwErr = 40, /**< rv_core_ibex_fatal_sw_err */
  kTopCustomGf12AlertIdRvCoreIbexRecovSwErr = 41, /**< rv_core_ibex_recov_sw_err */
  kTopCustomGf12AlertIdRvCoreIbexFatalHwErr = 42, /**< rv_core_ibex_fatal_hw_err */
  kTopCustomGf12AlertIdRvCoreIbexRecovHwErr = 43, /**< rv_core_ibex_recov_hw_err */
  kTopCustomGf12AlertIdLast = 43, /**< \internal The Last Valid Alert ID. */
} top_custom_gf12_alert_id_t;

/**
 * Alert Handler Alert Source to Peripheral Map
 *
 * This array is a mapping from `top_custom_gf12_alert_id_t` to
 * `top_custom_gf12_alert_peripheral_t`.
 */
extern const top_custom_gf12_alert_peripheral_t
    top_custom_gf12_alert_for_peripheral[44];

#define PINMUX_MIO_PERIPH_INSEL_IDX_OFFSET 2

// PERIPH_INSEL ranges from 0 to NUM_MIO_PADS + 2 -1}
//  0 and 1 are tied to value 0 and 1
#define NUM_MIO_PADS 47
#define NUM_DIO_PADS 8

#define PINMUX_PERIPH_OUTSEL_IDX_OFFSET 3

/**
 * Pinmux Peripheral Input.
 */
typedef enum top_custom_gf12_pinmux_peripheral_in {
  kTopCustomGf12PinmuxPeripheralInGpioGpio0 = 0, /**< Peripheral Input 0 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio1 = 1, /**< Peripheral Input 1 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio2 = 2, /**< Peripheral Input 2 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio3 = 3, /**< Peripheral Input 3 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio4 = 4, /**< Peripheral Input 4 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio5 = 5, /**< Peripheral Input 5 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio6 = 6, /**< Peripheral Input 6 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio7 = 7, /**< Peripheral Input 7 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio8 = 8, /**< Peripheral Input 8 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio9 = 9, /**< Peripheral Input 9 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio10 = 10, /**< Peripheral Input 10 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio11 = 11, /**< Peripheral Input 11 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio12 = 12, /**< Peripheral Input 12 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio13 = 13, /**< Peripheral Input 13 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio14 = 14, /**< Peripheral Input 14 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio15 = 15, /**< Peripheral Input 15 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio16 = 16, /**< Peripheral Input 16 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio17 = 17, /**< Peripheral Input 17 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio18 = 18, /**< Peripheral Input 18 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio19 = 19, /**< Peripheral Input 19 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio20 = 20, /**< Peripheral Input 20 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio21 = 21, /**< Peripheral Input 21 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio22 = 22, /**< Peripheral Input 22 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio23 = 23, /**< Peripheral Input 23 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio24 = 24, /**< Peripheral Input 24 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio25 = 25, /**< Peripheral Input 25 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio26 = 26, /**< Peripheral Input 26 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio27 = 27, /**< Peripheral Input 27 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio28 = 28, /**< Peripheral Input 28 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio29 = 29, /**< Peripheral Input 29 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio30 = 30, /**< Peripheral Input 30 */
  kTopCustomGf12PinmuxPeripheralInGpioGpio31 = 31, /**< Peripheral Input 31 */
  kTopCustomGf12PinmuxPeripheralInI2c0Sda = 32, /**< Peripheral Input 32 */
  kTopCustomGf12PinmuxPeripheralInI2c0Scl = 33, /**< Peripheral Input 33 */
  kTopCustomGf12PinmuxPeripheralInUart0Rx = 34, /**< Peripheral Input 34 */
  kTopCustomGf12PinmuxPeripheralInFlashCtrlTck = 35, /**< Peripheral Input 35 */
  kTopCustomGf12PinmuxPeripheralInFlashCtrlTms = 36, /**< Peripheral Input 36 */
  kTopCustomGf12PinmuxPeripheralInFlashCtrlTdi = 37, /**< Peripheral Input 37 */
  kTopCustomGf12PinmuxPeripheralInSysrstCtrlAonAcPresent = 38, /**< Peripheral Input 38 */
  kTopCustomGf12PinmuxPeripheralInSysrstCtrlAonKey0In = 39, /**< Peripheral Input 39 */
  kTopCustomGf12PinmuxPeripheralInSysrstCtrlAonKey1In = 40, /**< Peripheral Input 40 */
  kTopCustomGf12PinmuxPeripheralInSysrstCtrlAonKey2In = 41, /**< Peripheral Input 41 */
  kTopCustomGf12PinmuxPeripheralInSysrstCtrlAonPwrbIn = 42, /**< Peripheral Input 42 */
  kTopCustomGf12PinmuxPeripheralInSysrstCtrlAonLidOpen = 43, /**< Peripheral Input 43 */
  kTopCustomGf12PinmuxPeripheralInLast = 43, /**< \internal Last valid peripheral input */
} top_custom_gf12_pinmux_peripheral_in_t;

/**
 * Pinmux MIO Input Selector.
 */
typedef enum top_custom_gf12_pinmux_insel {
  kTopCustomGf12PinmuxInselConstantZero = 0, /**< Tie constantly to zero */
  kTopCustomGf12PinmuxInselConstantOne = 1, /**< Tie constantly to one */
  kTopCustomGf12PinmuxInselIoa0 = 2, /**< MIO Pad 0 */
  kTopCustomGf12PinmuxInselIoa1 = 3, /**< MIO Pad 1 */
  kTopCustomGf12PinmuxInselIoa2 = 4, /**< MIO Pad 2 */
  kTopCustomGf12PinmuxInselIoa3 = 5, /**< MIO Pad 3 */
  kTopCustomGf12PinmuxInselIoa4 = 6, /**< MIO Pad 4 */
  kTopCustomGf12PinmuxInselIoa5 = 7, /**< MIO Pad 5 */
  kTopCustomGf12PinmuxInselIoa6 = 8, /**< MIO Pad 6 */
  kTopCustomGf12PinmuxInselIoa7 = 9, /**< MIO Pad 7 */
  kTopCustomGf12PinmuxInselIoa8 = 10, /**< MIO Pad 8 */
  kTopCustomGf12PinmuxInselIob0 = 11, /**< MIO Pad 9 */
  kTopCustomGf12PinmuxInselIob1 = 12, /**< MIO Pad 10 */
  kTopCustomGf12PinmuxInselIob2 = 13, /**< MIO Pad 11 */
  kTopCustomGf12PinmuxInselIob3 = 14, /**< MIO Pad 12 */
  kTopCustomGf12PinmuxInselIob4 = 15, /**< MIO Pad 13 */
  kTopCustomGf12PinmuxInselIob5 = 16, /**< MIO Pad 14 */
  kTopCustomGf12PinmuxInselIob6 = 17, /**< MIO Pad 15 */
  kTopCustomGf12PinmuxInselIob7 = 18, /**< MIO Pad 16 */
  kTopCustomGf12PinmuxInselIob8 = 19, /**< MIO Pad 17 */
  kTopCustomGf12PinmuxInselIob9 = 20, /**< MIO Pad 18 */
  kTopCustomGf12PinmuxInselIob10 = 21, /**< MIO Pad 19 */
  kTopCustomGf12PinmuxInselIob11 = 22, /**< MIO Pad 20 */
  kTopCustomGf12PinmuxInselIob12 = 23, /**< MIO Pad 21 */
  kTopCustomGf12PinmuxInselIoc0 = 24, /**< MIO Pad 22 */
  kTopCustomGf12PinmuxInselIoc1 = 25, /**< MIO Pad 23 */
  kTopCustomGf12PinmuxInselIoc2 = 26, /**< MIO Pad 24 */
  kTopCustomGf12PinmuxInselIoc3 = 27, /**< MIO Pad 25 */
  kTopCustomGf12PinmuxInselIoc4 = 28, /**< MIO Pad 26 */
  kTopCustomGf12PinmuxInselIoc5 = 29, /**< MIO Pad 27 */
  kTopCustomGf12PinmuxInselIoc6 = 30, /**< MIO Pad 28 */
  kTopCustomGf12PinmuxInselIoc7 = 31, /**< MIO Pad 29 */
  kTopCustomGf12PinmuxInselIoc8 = 32, /**< MIO Pad 30 */
  kTopCustomGf12PinmuxInselIoc9 = 33, /**< MIO Pad 31 */
  kTopCustomGf12PinmuxInselIoc10 = 34, /**< MIO Pad 32 */
  kTopCustomGf12PinmuxInselIoc11 = 35, /**< MIO Pad 33 */
  kTopCustomGf12PinmuxInselIoc12 = 36, /**< MIO Pad 34 */
  kTopCustomGf12PinmuxInselIor0 = 37, /**< MIO Pad 35 */
  kTopCustomGf12PinmuxInselIor1 = 38, /**< MIO Pad 36 */
  kTopCustomGf12PinmuxInselIor2 = 39, /**< MIO Pad 37 */
  kTopCustomGf12PinmuxInselIor3 = 40, /**< MIO Pad 38 */
  kTopCustomGf12PinmuxInselIor4 = 41, /**< MIO Pad 39 */
  kTopCustomGf12PinmuxInselIor5 = 42, /**< MIO Pad 40 */
  kTopCustomGf12PinmuxInselIor6 = 43, /**< MIO Pad 41 */
  kTopCustomGf12PinmuxInselIor7 = 44, /**< MIO Pad 42 */
  kTopCustomGf12PinmuxInselIor10 = 45, /**< MIO Pad 43 */
  kTopCustomGf12PinmuxInselIor11 = 46, /**< MIO Pad 44 */
  kTopCustomGf12PinmuxInselIor12 = 47, /**< MIO Pad 45 */
  kTopCustomGf12PinmuxInselIor13 = 48, /**< MIO Pad 46 */
  kTopCustomGf12PinmuxInselLast = 48, /**< \internal Last valid insel value */
} top_custom_gf12_pinmux_insel_t;

/**
 * Pinmux MIO Output.
 */
typedef enum top_custom_gf12_pinmux_mio_out {
  kTopCustomGf12PinmuxMioOutIoa0 = 0, /**< MIO Pad 0 */
  kTopCustomGf12PinmuxMioOutIoa1 = 1, /**< MIO Pad 1 */
  kTopCustomGf12PinmuxMioOutIoa2 = 2, /**< MIO Pad 2 */
  kTopCustomGf12PinmuxMioOutIoa3 = 3, /**< MIO Pad 3 */
  kTopCustomGf12PinmuxMioOutIoa4 = 4, /**< MIO Pad 4 */
  kTopCustomGf12PinmuxMioOutIoa5 = 5, /**< MIO Pad 5 */
  kTopCustomGf12PinmuxMioOutIoa6 = 6, /**< MIO Pad 6 */
  kTopCustomGf12PinmuxMioOutIoa7 = 7, /**< MIO Pad 7 */
  kTopCustomGf12PinmuxMioOutIoa8 = 8, /**< MIO Pad 8 */
  kTopCustomGf12PinmuxMioOutIob0 = 9, /**< MIO Pad 9 */
  kTopCustomGf12PinmuxMioOutIob1 = 10, /**< MIO Pad 10 */
  kTopCustomGf12PinmuxMioOutIob2 = 11, /**< MIO Pad 11 */
  kTopCustomGf12PinmuxMioOutIob3 = 12, /**< MIO Pad 12 */
  kTopCustomGf12PinmuxMioOutIob4 = 13, /**< MIO Pad 13 */
  kTopCustomGf12PinmuxMioOutIob5 = 14, /**< MIO Pad 14 */
  kTopCustomGf12PinmuxMioOutIob6 = 15, /**< MIO Pad 15 */
  kTopCustomGf12PinmuxMioOutIob7 = 16, /**< MIO Pad 16 */
  kTopCustomGf12PinmuxMioOutIob8 = 17, /**< MIO Pad 17 */
  kTopCustomGf12PinmuxMioOutIob9 = 18, /**< MIO Pad 18 */
  kTopCustomGf12PinmuxMioOutIob10 = 19, /**< MIO Pad 19 */
  kTopCustomGf12PinmuxMioOutIob11 = 20, /**< MIO Pad 20 */
  kTopCustomGf12PinmuxMioOutIob12 = 21, /**< MIO Pad 21 */
  kTopCustomGf12PinmuxMioOutIoc0 = 22, /**< MIO Pad 22 */
  kTopCustomGf12PinmuxMioOutIoc1 = 23, /**< MIO Pad 23 */
  kTopCustomGf12PinmuxMioOutIoc2 = 24, /**< MIO Pad 24 */
  kTopCustomGf12PinmuxMioOutIoc3 = 25, /**< MIO Pad 25 */
  kTopCustomGf12PinmuxMioOutIoc4 = 26, /**< MIO Pad 26 */
  kTopCustomGf12PinmuxMioOutIoc5 = 27, /**< MIO Pad 27 */
  kTopCustomGf12PinmuxMioOutIoc6 = 28, /**< MIO Pad 28 */
  kTopCustomGf12PinmuxMioOutIoc7 = 29, /**< MIO Pad 29 */
  kTopCustomGf12PinmuxMioOutIoc8 = 30, /**< MIO Pad 30 */
  kTopCustomGf12PinmuxMioOutIoc9 = 31, /**< MIO Pad 31 */
  kTopCustomGf12PinmuxMioOutIoc10 = 32, /**< MIO Pad 32 */
  kTopCustomGf12PinmuxMioOutIoc11 = 33, /**< MIO Pad 33 */
  kTopCustomGf12PinmuxMioOutIoc12 = 34, /**< MIO Pad 34 */
  kTopCustomGf12PinmuxMioOutIor0 = 35, /**< MIO Pad 35 */
  kTopCustomGf12PinmuxMioOutIor1 = 36, /**< MIO Pad 36 */
  kTopCustomGf12PinmuxMioOutIor2 = 37, /**< MIO Pad 37 */
  kTopCustomGf12PinmuxMioOutIor3 = 38, /**< MIO Pad 38 */
  kTopCustomGf12PinmuxMioOutIor4 = 39, /**< MIO Pad 39 */
  kTopCustomGf12PinmuxMioOutIor5 = 40, /**< MIO Pad 40 */
  kTopCustomGf12PinmuxMioOutIor6 = 41, /**< MIO Pad 41 */
  kTopCustomGf12PinmuxMioOutIor7 = 42, /**< MIO Pad 42 */
  kTopCustomGf12PinmuxMioOutIor10 = 43, /**< MIO Pad 43 */
  kTopCustomGf12PinmuxMioOutIor11 = 44, /**< MIO Pad 44 */
  kTopCustomGf12PinmuxMioOutIor12 = 45, /**< MIO Pad 45 */
  kTopCustomGf12PinmuxMioOutIor13 = 46, /**< MIO Pad 46 */
  kTopCustomGf12PinmuxMioOutLast = 46, /**< \internal Last valid mio output */
} top_custom_gf12_pinmux_mio_out_t;

/**
 * Pinmux Peripheral Output Selector.
 */
typedef enum top_custom_gf12_pinmux_outsel {
  kTopCustomGf12PinmuxOutselConstantZero = 0, /**< Tie constantly to zero */
  kTopCustomGf12PinmuxOutselConstantOne = 1, /**< Tie constantly to one */
  kTopCustomGf12PinmuxOutselConstantHighZ = 2, /**< Tie constantly to high-Z */
  kTopCustomGf12PinmuxOutselGpioGpio0 = 3, /**< Peripheral Output 0 */
  kTopCustomGf12PinmuxOutselGpioGpio1 = 4, /**< Peripheral Output 1 */
  kTopCustomGf12PinmuxOutselGpioGpio2 = 5, /**< Peripheral Output 2 */
  kTopCustomGf12PinmuxOutselGpioGpio3 = 6, /**< Peripheral Output 3 */
  kTopCustomGf12PinmuxOutselGpioGpio4 = 7, /**< Peripheral Output 4 */
  kTopCustomGf12PinmuxOutselGpioGpio5 = 8, /**< Peripheral Output 5 */
  kTopCustomGf12PinmuxOutselGpioGpio6 = 9, /**< Peripheral Output 6 */
  kTopCustomGf12PinmuxOutselGpioGpio7 = 10, /**< Peripheral Output 7 */
  kTopCustomGf12PinmuxOutselGpioGpio8 = 11, /**< Peripheral Output 8 */
  kTopCustomGf12PinmuxOutselGpioGpio9 = 12, /**< Peripheral Output 9 */
  kTopCustomGf12PinmuxOutselGpioGpio10 = 13, /**< Peripheral Output 10 */
  kTopCustomGf12PinmuxOutselGpioGpio11 = 14, /**< Peripheral Output 11 */
  kTopCustomGf12PinmuxOutselGpioGpio12 = 15, /**< Peripheral Output 12 */
  kTopCustomGf12PinmuxOutselGpioGpio13 = 16, /**< Peripheral Output 13 */
  kTopCustomGf12PinmuxOutselGpioGpio14 = 17, /**< Peripheral Output 14 */
  kTopCustomGf12PinmuxOutselGpioGpio15 = 18, /**< Peripheral Output 15 */
  kTopCustomGf12PinmuxOutselGpioGpio16 = 19, /**< Peripheral Output 16 */
  kTopCustomGf12PinmuxOutselGpioGpio17 = 20, /**< Peripheral Output 17 */
  kTopCustomGf12PinmuxOutselGpioGpio18 = 21, /**< Peripheral Output 18 */
  kTopCustomGf12PinmuxOutselGpioGpio19 = 22, /**< Peripheral Output 19 */
  kTopCustomGf12PinmuxOutselGpioGpio20 = 23, /**< Peripheral Output 20 */
  kTopCustomGf12PinmuxOutselGpioGpio21 = 24, /**< Peripheral Output 21 */
  kTopCustomGf12PinmuxOutselGpioGpio22 = 25, /**< Peripheral Output 22 */
  kTopCustomGf12PinmuxOutselGpioGpio23 = 26, /**< Peripheral Output 23 */
  kTopCustomGf12PinmuxOutselGpioGpio24 = 27, /**< Peripheral Output 24 */
  kTopCustomGf12PinmuxOutselGpioGpio25 = 28, /**< Peripheral Output 25 */
  kTopCustomGf12PinmuxOutselGpioGpio26 = 29, /**< Peripheral Output 26 */
  kTopCustomGf12PinmuxOutselGpioGpio27 = 30, /**< Peripheral Output 27 */
  kTopCustomGf12PinmuxOutselGpioGpio28 = 31, /**< Peripheral Output 28 */
  kTopCustomGf12PinmuxOutselGpioGpio29 = 32, /**< Peripheral Output 29 */
  kTopCustomGf12PinmuxOutselGpioGpio30 = 33, /**< Peripheral Output 30 */
  kTopCustomGf12PinmuxOutselGpioGpio31 = 34, /**< Peripheral Output 31 */
  kTopCustomGf12PinmuxOutselI2c0Sda = 35, /**< Peripheral Output 32 */
  kTopCustomGf12PinmuxOutselI2c0Scl = 36, /**< Peripheral Output 33 */
  kTopCustomGf12PinmuxOutselUart0Tx = 37, /**< Peripheral Output 34 */
  kTopCustomGf12PinmuxOutselPattgenPda0Tx = 38, /**< Peripheral Output 35 */
  kTopCustomGf12PinmuxOutselPattgenPcl0Tx = 39, /**< Peripheral Output 36 */
  kTopCustomGf12PinmuxOutselPattgenPda1Tx = 40, /**< Peripheral Output 37 */
  kTopCustomGf12PinmuxOutselPattgenPcl1Tx = 41, /**< Peripheral Output 38 */
  kTopCustomGf12PinmuxOutselFlashCtrlTdo = 42, /**< Peripheral Output 39 */
  kTopCustomGf12PinmuxOutselSensorCtrlAstDebugOut0 = 43, /**< Peripheral Output 40 */
  kTopCustomGf12PinmuxOutselSensorCtrlAstDebugOut1 = 44, /**< Peripheral Output 41 */
  kTopCustomGf12PinmuxOutselSensorCtrlAstDebugOut2 = 45, /**< Peripheral Output 42 */
  kTopCustomGf12PinmuxOutselSensorCtrlAstDebugOut3 = 46, /**< Peripheral Output 43 */
  kTopCustomGf12PinmuxOutselSensorCtrlAstDebugOut4 = 47, /**< Peripheral Output 44 */
  kTopCustomGf12PinmuxOutselSensorCtrlAstDebugOut5 = 48, /**< Peripheral Output 45 */
  kTopCustomGf12PinmuxOutselSensorCtrlAstDebugOut6 = 49, /**< Peripheral Output 46 */
  kTopCustomGf12PinmuxOutselSensorCtrlAstDebugOut7 = 50, /**< Peripheral Output 47 */
  kTopCustomGf12PinmuxOutselSensorCtrlAstDebugOut8 = 51, /**< Peripheral Output 48 */
  kTopCustomGf12PinmuxOutselOtpCtrlTest0 = 52, /**< Peripheral Output 49 */
  kTopCustomGf12PinmuxOutselSysrstCtrlAonBatDisable = 53, /**< Peripheral Output 50 */
  kTopCustomGf12PinmuxOutselSysrstCtrlAonKey0Out = 54, /**< Peripheral Output 51 */
  kTopCustomGf12PinmuxOutselSysrstCtrlAonKey1Out = 55, /**< Peripheral Output 52 */
  kTopCustomGf12PinmuxOutselSysrstCtrlAonKey2Out = 56, /**< Peripheral Output 53 */
  kTopCustomGf12PinmuxOutselSysrstCtrlAonPwrbOut = 57, /**< Peripheral Output 54 */
  kTopCustomGf12PinmuxOutselSysrstCtrlAonZ3Wakeup = 58, /**< Peripheral Output 55 */
  kTopCustomGf12PinmuxOutselLast = 58, /**< \internal Last valid outsel value */
} top_custom_gf12_pinmux_outsel_t;

/**
 * Dedicated Pad Selects
 */
typedef enum top_custom_gf12_direct_pads {
  kTopCustomGf12DirectPadsSpiHost0Sd0 = 0, /**<  */
  kTopCustomGf12DirectPadsSpiHost0Sd1 = 1, /**<  */
  kTopCustomGf12DirectPadsSpiHost0Sd2 = 2, /**<  */
  kTopCustomGf12DirectPadsSpiHost0Sd3 = 3, /**<  */
  kTopCustomGf12DirectPadsSysrstCtrlAonEcRstL = 4, /**<  */
  kTopCustomGf12DirectPadsSysrstCtrlAonFlashWpL = 5, /**<  */
  kTopCustomGf12DirectPadsSpiHost0Sck = 6, /**<  */
  kTopCustomGf12DirectPadsSpiHost0Csb = 7, /**<  */
  kTopCustomGf12DirectPadsLast = 7, /**< \internal Last valid direct pad */
} top_custom_gf12_direct_pads_t;

/**
 * Muxed Pad Selects
 */
typedef enum top_custom_gf12_muxed_pads {
  kTopCustomGf12MuxedPadsIoa0 = 0, /**<  */
  kTopCustomGf12MuxedPadsIoa1 = 1, /**<  */
  kTopCustomGf12MuxedPadsIoa2 = 2, /**<  */
  kTopCustomGf12MuxedPadsIoa3 = 3, /**<  */
  kTopCustomGf12MuxedPadsIoa4 = 4, /**<  */
  kTopCustomGf12MuxedPadsIoa5 = 5, /**<  */
  kTopCustomGf12MuxedPadsIoa6 = 6, /**<  */
  kTopCustomGf12MuxedPadsIoa7 = 7, /**<  */
  kTopCustomGf12MuxedPadsIoa8 = 8, /**<  */
  kTopCustomGf12MuxedPadsIob0 = 9, /**<  */
  kTopCustomGf12MuxedPadsIob1 = 10, /**<  */
  kTopCustomGf12MuxedPadsIob2 = 11, /**<  */
  kTopCustomGf12MuxedPadsIob3 = 12, /**<  */
  kTopCustomGf12MuxedPadsIob4 = 13, /**<  */
  kTopCustomGf12MuxedPadsIob5 = 14, /**<  */
  kTopCustomGf12MuxedPadsIob6 = 15, /**<  */
  kTopCustomGf12MuxedPadsIob7 = 16, /**<  */
  kTopCustomGf12MuxedPadsIob8 = 17, /**<  */
  kTopCustomGf12MuxedPadsIob9 = 18, /**<  */
  kTopCustomGf12MuxedPadsIob10 = 19, /**<  */
  kTopCustomGf12MuxedPadsIob11 = 20, /**<  */
  kTopCustomGf12MuxedPadsIob12 = 21, /**<  */
  kTopCustomGf12MuxedPadsIoc0 = 22, /**<  */
  kTopCustomGf12MuxedPadsIoc1 = 23, /**<  */
  kTopCustomGf12MuxedPadsIoc2 = 24, /**<  */
  kTopCustomGf12MuxedPadsIoc3 = 25, /**<  */
  kTopCustomGf12MuxedPadsIoc4 = 26, /**<  */
  kTopCustomGf12MuxedPadsIoc5 = 27, /**<  */
  kTopCustomGf12MuxedPadsIoc6 = 28, /**<  */
  kTopCustomGf12MuxedPadsIoc7 = 29, /**<  */
  kTopCustomGf12MuxedPadsIoc8 = 30, /**<  */
  kTopCustomGf12MuxedPadsIoc9 = 31, /**<  */
  kTopCustomGf12MuxedPadsIoc10 = 32, /**<  */
  kTopCustomGf12MuxedPadsIoc11 = 33, /**<  */
  kTopCustomGf12MuxedPadsIoc12 = 34, /**<  */
  kTopCustomGf12MuxedPadsIor0 = 35, /**<  */
  kTopCustomGf12MuxedPadsIor1 = 36, /**<  */
  kTopCustomGf12MuxedPadsIor2 = 37, /**<  */
  kTopCustomGf12MuxedPadsIor3 = 38, /**<  */
  kTopCustomGf12MuxedPadsIor4 = 39, /**<  */
  kTopCustomGf12MuxedPadsIor5 = 40, /**<  */
  kTopCustomGf12MuxedPadsIor6 = 41, /**<  */
  kTopCustomGf12MuxedPadsIor7 = 42, /**<  */
  kTopCustomGf12MuxedPadsIor10 = 43, /**<  */
  kTopCustomGf12MuxedPadsIor11 = 44, /**<  */
  kTopCustomGf12MuxedPadsIor12 = 45, /**<  */
  kTopCustomGf12MuxedPadsIor13 = 46, /**<  */
  kTopCustomGf12MuxedPadsLast = 46, /**< \internal Last valid muxed pad */
} top_custom_gf12_muxed_pads_t;

/**
 * Power Manager Wakeup Signals
 */
typedef enum top_custom_gf12_power_manager_wake_ups {
  kTopCustomGf12PowerManagerWakeUpsSysrstCtrlAonWkupReq = 0, /**<  */
  kTopCustomGf12PowerManagerWakeUpsPinmuxAonPinWkupReq = 1, /**<  */
  kTopCustomGf12PowerManagerWakeUpsPinmuxAonUsbWkupReq = 2, /**<  */
  kTopCustomGf12PowerManagerWakeUpsAonTimerAonWkupReq = 3, /**<  */
  kTopCustomGf12PowerManagerWakeUpsSensorCtrlWkupReq = 4, /**<  */
  kTopCustomGf12PowerManagerWakeUpsLast = 4, /**< \internal Last valid pwrmgr wakeup signal */
} top_custom_gf12_power_manager_wake_ups_t;

/**
 * Reset Manager Software Controlled Resets
 */
typedef enum top_custom_gf12_reset_manager_sw_resets {
  kTopCustomGf12ResetManagerSwResetsSpiHost0 = 0, /**<  */
  kTopCustomGf12ResetManagerSwResetsUsb = 1, /**<  */
  kTopCustomGf12ResetManagerSwResetsUsbAon = 2, /**<  */
  kTopCustomGf12ResetManagerSwResetsI2c0 = 3, /**<  */
  kTopCustomGf12ResetManagerSwResetsLast = 3, /**< \internal Last valid rstmgr software reset request */
} top_custom_gf12_reset_manager_sw_resets_t;

/**
 * Power Manager Reset Request Signals
 */
typedef enum top_custom_gf12_power_manager_reset_requests {
  kTopCustomGf12PowerManagerResetRequestsSysrstCtrlAonRstReq = 0, /**<  */
  kTopCustomGf12PowerManagerResetRequestsAonTimerAonAonTimerRstReq = 1, /**<  */
  kTopCustomGf12PowerManagerResetRequestsLast = 1, /**< \internal Last valid pwrmgr reset_request signal */
} top_custom_gf12_power_manager_reset_requests_t;

/**
 * Clock Manager Software-Controlled ("Gated") Clocks.
 *
 * The Software has full control over these clocks.
 */
typedef enum top_custom_gf12_gateable_clocks {
  kTopCustomGf12GateableClocksIoDiv4Peri = 0, /**< Clock clk_io_div4_peri in group peri */
  kTopCustomGf12GateableClocksIoPeri = 1, /**< Clock clk_io_peri in group peri */
  kTopCustomGf12GateableClocksUsbPeri = 2, /**< Clock clk_usb_peri in group peri */
  kTopCustomGf12GateableClocksLast = 2, /**< \internal Last Valid Gateable Clock */
} top_custom_gf12_gateable_clocks_t;

/**
 * Clock Manager Software-Hinted Clocks.
 *
 * The Software has partial control over these clocks. It can ask them to stop,
 * but the clock manager is in control of whether the clock actually is stopped.
 */
typedef enum top_custom_gf12_hintable_clocks {
  kTopCustomGf12HintableClocksMainOtbn = 0, /**< Clock clk_main_otbn in group trans */
  kTopCustomGf12HintableClocksLast = 0, /**< \internal Last Valid Hintable Clock */
} top_custom_gf12_hintable_clocks_t;

/**
 * MMIO Region
 *
 * MMIO region excludes any memory that is separate from the module
 * configuration space, i.e. ROM, main SRAM, and flash are excluded but
 * retention SRAM, spi_device memory, or usbdev memory are included.
 */
#define TOP_CUSTOM_GF12_MMIO_BASE_ADDR 0x40000000u
#define TOP_CUSTOM_GF12_MMIO_SIZE_BYTES 0x10000000u

// Header Extern Guard
#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // OPENTITAN_HW_TOP_CUSTOM_GF12_SW_AUTOGEN_TOP_CUSTOM_GF12_H_
