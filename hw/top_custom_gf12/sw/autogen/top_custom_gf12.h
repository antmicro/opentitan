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
#define OPENTITAN_UART0_BASE_ADDR 0x40000000u

/**
 * Peripheral size for uart0 in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_UART0_BASE_ADDR and
 * `OPENTITAN_UART0_BASE_ADDR + OPENTITAN_UART0_SIZE_BYTES`.
 */
#define OPENTITAN_UART0_SIZE_BYTES 0x40u

/**
 * Peripheral base address for gpio in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_GPIO_BASE_ADDR 0x40040000u

/**
 * Peripheral size for gpio in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_GPIO_BASE_ADDR and
 * `OPENTITAN_GPIO_BASE_ADDR + OPENTITAN_GPIO_SIZE_BYTES`.
 */
#define OPENTITAN_GPIO_SIZE_BYTES 0x40u

/**
 * Peripheral base address for i2c0 in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_I2C0_BASE_ADDR 0x40080000u

/**
 * Peripheral size for i2c0 in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_I2C0_BASE_ADDR and
 * `OPENTITAN_I2C0_BASE_ADDR + OPENTITAN_I2C0_SIZE_BYTES`.
 */
#define OPENTITAN_I2C0_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rv_timer in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RV_TIMER_BASE_ADDR 0x40100000u

/**
 * Peripheral size for rv_timer in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RV_TIMER_BASE_ADDR and
 * `OPENTITAN_RV_TIMER_BASE_ADDR + OPENTITAN_RV_TIMER_SIZE_BYTES`.
 */
#define OPENTITAN_RV_TIMER_SIZE_BYTES 0x200u

/**
 * Peripheral base address for core device on otp_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_OTP_CTRL_CORE_BASE_ADDR 0x40130000u

/**
 * Peripheral size for core device on otp_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_OTP_CTRL_CORE_BASE_ADDR and
 * `OPENTITAN_OTP_CTRL_CORE_BASE_ADDR + OPENTITAN_OTP_CTRL_CORE_SIZE_BYTES`.
 */
#define OPENTITAN_OTP_CTRL_CORE_SIZE_BYTES 0x2000u

/**
 * Peripheral base address for prim device on otp_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_OTP_CTRL_PRIM_BASE_ADDR 0x40132000u

/**
 * Peripheral size for prim device on otp_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_OTP_CTRL_PRIM_BASE_ADDR and
 * `OPENTITAN_OTP_CTRL_PRIM_BASE_ADDR + OPENTITAN_OTP_CTRL_PRIM_SIZE_BYTES`.
 */
#define OPENTITAN_OTP_CTRL_PRIM_SIZE_BYTES 0x20u

/**
 * Peripheral base address for lc_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_LC_CTRL_BASE_ADDR 0x40140000u

/**
 * Peripheral size for lc_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_LC_CTRL_BASE_ADDR and
 * `OPENTITAN_LC_CTRL_BASE_ADDR + OPENTITAN_LC_CTRL_SIZE_BYTES`.
 */
#define OPENTITAN_LC_CTRL_SIZE_BYTES 0x100u

/**
 * Peripheral base address for alert_handler in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_ALERT_HANDLER_BASE_ADDR 0x40150000u

/**
 * Peripheral size for alert_handler in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_ALERT_HANDLER_BASE_ADDR and
 * `OPENTITAN_ALERT_HANDLER_BASE_ADDR + OPENTITAN_ALERT_HANDLER_SIZE_BYTES`.
 */
#define OPENTITAN_ALERT_HANDLER_SIZE_BYTES 0x400u

/**
 * Peripheral base address for spi_host0 in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SPI_HOST0_BASE_ADDR 0x40300000u

/**
 * Peripheral size for spi_host0 in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SPI_HOST0_BASE_ADDR and
 * `OPENTITAN_SPI_HOST0_BASE_ADDR + OPENTITAN_SPI_HOST0_SIZE_BYTES`.
 */
#define OPENTITAN_SPI_HOST0_SIZE_BYTES 0x40u

/**
 * Peripheral base address for pwrmgr_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_PWRMGR_AON_BASE_ADDR 0x40400000u

/**
 * Peripheral size for pwrmgr_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_PWRMGR_AON_BASE_ADDR and
 * `OPENTITAN_PWRMGR_AON_BASE_ADDR + OPENTITAN_PWRMGR_AON_SIZE_BYTES`.
 */
#define OPENTITAN_PWRMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rstmgr_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RSTMGR_AON_BASE_ADDR 0x40410000u

/**
 * Peripheral size for rstmgr_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RSTMGR_AON_BASE_ADDR and
 * `OPENTITAN_RSTMGR_AON_BASE_ADDR + OPENTITAN_RSTMGR_AON_SIZE_BYTES`.
 */
#define OPENTITAN_RSTMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for clkmgr_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_CLKMGR_AON_BASE_ADDR 0x40420000u

/**
 * Peripheral size for clkmgr_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_CLKMGR_AON_BASE_ADDR and
 * `OPENTITAN_CLKMGR_AON_BASE_ADDR + OPENTITAN_CLKMGR_AON_SIZE_BYTES`.
 */
#define OPENTITAN_CLKMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for sysrst_ctrl_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SYSRST_CTRL_AON_BASE_ADDR 0x40430000u

/**
 * Peripheral size for sysrst_ctrl_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SYSRST_CTRL_AON_BASE_ADDR and
 * `OPENTITAN_SYSRST_CTRL_AON_BASE_ADDR + OPENTITAN_SYSRST_CTRL_AON_SIZE_BYTES`.
 */
#define OPENTITAN_SYSRST_CTRL_AON_SIZE_BYTES 0x100u

/**
 * Peripheral base address for pinmux_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_PINMUX_AON_BASE_ADDR 0x40460000u

/**
 * Peripheral size for pinmux_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_PINMUX_AON_BASE_ADDR and
 * `OPENTITAN_PINMUX_AON_BASE_ADDR + OPENTITAN_PINMUX_AON_SIZE_BYTES`.
 */
#define OPENTITAN_PINMUX_AON_SIZE_BYTES 0x800u

/**
 * Peripheral base address for aon_timer_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_AON_TIMER_AON_BASE_ADDR 0x40470000u

/**
 * Peripheral size for aon_timer_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_AON_TIMER_AON_BASE_ADDR and
 * `OPENTITAN_AON_TIMER_AON_BASE_ADDR + OPENTITAN_AON_TIMER_AON_SIZE_BYTES`.
 */
#define OPENTITAN_AON_TIMER_AON_SIZE_BYTES 0x40u

/**
 * Peripheral base address for ast in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_AST_BASE_ADDR 0x40480000u

/**
 * Peripheral size for ast in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_AST_BASE_ADDR and
 * `OPENTITAN_AST_BASE_ADDR + OPENTITAN_AST_SIZE_BYTES`.
 */
#define OPENTITAN_AST_SIZE_BYTES 0x400u

/**
 * Peripheral base address for sensor_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SENSOR_CTRL_BASE_ADDR 0x40490000u

/**
 * Peripheral size for sensor_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SENSOR_CTRL_BASE_ADDR and
 * `OPENTITAN_SENSOR_CTRL_BASE_ADDR + OPENTITAN_SENSOR_CTRL_SIZE_BYTES`.
 */
#define OPENTITAN_SENSOR_CTRL_SIZE_BYTES 0x40u

/**
 * Peripheral base address for regs device on sram_ctrl_ret_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SRAM_CTRL_RET_AON_REGS_BASE_ADDR 0x40500000u

/**
 * Peripheral size for regs device on sram_ctrl_ret_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SRAM_CTRL_RET_AON_REGS_BASE_ADDR and
 * `OPENTITAN_SRAM_CTRL_RET_AON_REGS_BASE_ADDR + OPENTITAN_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES`.
 */
#define OPENTITAN_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES 0x20u

/**
 * Peripheral base address for ram device on sram_ctrl_ret_aon in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SRAM_CTRL_RET_AON_RAM_BASE_ADDR 0x40600000u

/**
 * Peripheral size for ram device on sram_ctrl_ret_aon in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SRAM_CTRL_RET_AON_RAM_BASE_ADDR and
 * `OPENTITAN_SRAM_CTRL_RET_AON_RAM_BASE_ADDR + OPENTITAN_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES`.
 */
#define OPENTITAN_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for core device on flash_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_FLASH_CTRL_CORE_BASE_ADDR 0x41000000u

/**
 * Peripheral size for core device on flash_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_FLASH_CTRL_CORE_BASE_ADDR and
 * `OPENTITAN_FLASH_CTRL_CORE_BASE_ADDR + OPENTITAN_FLASH_CTRL_CORE_SIZE_BYTES`.
 */
#define OPENTITAN_FLASH_CTRL_CORE_SIZE_BYTES 0x200u

/**
 * Peripheral base address for prim device on flash_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_FLASH_CTRL_PRIM_BASE_ADDR 0x41008000u

/**
 * Peripheral size for prim device on flash_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_FLASH_CTRL_PRIM_BASE_ADDR and
 * `OPENTITAN_FLASH_CTRL_PRIM_BASE_ADDR + OPENTITAN_FLASH_CTRL_PRIM_SIZE_BYTES`.
 */
#define OPENTITAN_FLASH_CTRL_PRIM_SIZE_BYTES 0x80u

/**
 * Peripheral base address for mem device on flash_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_FLASH_CTRL_MEM_BASE_ADDR 0x20000000u

/**
 * Peripheral size for mem device on flash_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_FLASH_CTRL_MEM_BASE_ADDR and
 * `OPENTITAN_FLASH_CTRL_MEM_BASE_ADDR + OPENTITAN_FLASH_CTRL_MEM_SIZE_BYTES`.
 */
#define OPENTITAN_FLASH_CTRL_MEM_SIZE_BYTES 0x40000u

/**
 * Peripheral base address for regs device on rv_dm in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RV_DM_REGS_BASE_ADDR 0x41200000u

/**
 * Peripheral size for regs device on rv_dm in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RV_DM_REGS_BASE_ADDR and
 * `OPENTITAN_RV_DM_REGS_BASE_ADDR + OPENTITAN_RV_DM_REGS_SIZE_BYTES`.
 */
#define OPENTITAN_RV_DM_REGS_SIZE_BYTES 0x4u

/**
 * Peripheral base address for mem device on rv_dm in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RV_DM_MEM_BASE_ADDR 0x10000u

/**
 * Peripheral size for mem device on rv_dm in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RV_DM_MEM_BASE_ADDR and
 * `OPENTITAN_RV_DM_MEM_BASE_ADDR + OPENTITAN_RV_DM_MEM_SIZE_BYTES`.
 */
#define OPENTITAN_RV_DM_MEM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for rv_plic in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RV_PLIC_BASE_ADDR 0x48000000u

/**
 * Peripheral size for rv_plic in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RV_PLIC_BASE_ADDR and
 * `OPENTITAN_RV_PLIC_BASE_ADDR + OPENTITAN_RV_PLIC_SIZE_BYTES`.
 */
#define OPENTITAN_RV_PLIC_SIZE_BYTES 0x8000000u

/**
 * Peripheral base address for kmac in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_KMAC_BASE_ADDR 0x41120000u

/**
 * Peripheral size for kmac in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_KMAC_BASE_ADDR and
 * `OPENTITAN_KMAC_BASE_ADDR + OPENTITAN_KMAC_SIZE_BYTES`.
 */
#define OPENTITAN_KMAC_SIZE_BYTES 0x2u

/**
 * Peripheral base address for regs device on sram_ctrl_main in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SRAM_CTRL_MAIN_REGS_BASE_ADDR 0x411C0000u

/**
 * Peripheral size for regs device on sram_ctrl_main in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SRAM_CTRL_MAIN_REGS_BASE_ADDR and
 * `OPENTITAN_SRAM_CTRL_MAIN_REGS_BASE_ADDR + OPENTITAN_SRAM_CTRL_MAIN_REGS_SIZE_BYTES`.
 */
#define OPENTITAN_SRAM_CTRL_MAIN_REGS_SIZE_BYTES 0x20u

/**
 * Peripheral base address for ram device on sram_ctrl_main in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_SRAM_CTRL_MAIN_RAM_BASE_ADDR 0x10000000u

/**
 * Peripheral size for ram device on sram_ctrl_main in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_SRAM_CTRL_MAIN_RAM_BASE_ADDR and
 * `OPENTITAN_SRAM_CTRL_MAIN_RAM_BASE_ADDR + OPENTITAN_SRAM_CTRL_MAIN_RAM_SIZE_BYTES`.
 */
#define OPENTITAN_SRAM_CTRL_MAIN_RAM_SIZE_BYTES 0x20000u

/**
 * Peripheral base address for regs device on rom_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_ROM_CTRL_REGS_BASE_ADDR 0x411E0000u

/**
 * Peripheral size for regs device on rom_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_ROM_CTRL_REGS_BASE_ADDR and
 * `OPENTITAN_ROM_CTRL_REGS_BASE_ADDR + OPENTITAN_ROM_CTRL_REGS_SIZE_BYTES`.
 */
#define OPENTITAN_ROM_CTRL_REGS_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rom device on rom_ctrl in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_ROM_CTRL_ROM_BASE_ADDR 0x8000u

/**
 * Peripheral size for rom device on rom_ctrl in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_ROM_CTRL_ROM_BASE_ADDR and
 * `OPENTITAN_ROM_CTRL_ROM_BASE_ADDR + OPENTITAN_ROM_CTRL_ROM_SIZE_BYTES`.
 */
#define OPENTITAN_ROM_CTRL_ROM_SIZE_BYTES 0x8000u

/**
 * Peripheral base address for cfg device on rv_core_ibex in top custom_gf12.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define OPENTITAN_RV_CORE_IBEX_CFG_BASE_ADDR 0x411F0000u

/**
 * Peripheral size for cfg device on rv_core_ibex in top custom_gf12.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #OPENTITAN_RV_CORE_IBEX_CFG_BASE_ADDR and
 * `OPENTITAN_RV_CORE_IBEX_CFG_BASE_ADDR + OPENTITAN_RV_CORE_IBEX_CFG_SIZE_BYTES`.
 */
#define OPENTITAN_RV_CORE_IBEX_CFG_SIZE_BYTES 0x100u


/**
 * Memory base address for ram_ret_aon in top custom_gf12.
 */
#define OPENTITAN_RAM_RET_AON_BASE_ADDR 0x40600000u

/**
 * Memory size for ram_ret_aon in top custom_gf12.
 */
#define OPENTITAN_RAM_RET_AON_SIZE_BYTES 0x1000u

/**
 * Memory base address for eflash in top custom_gf12.
 */
#define OPENTITAN_EFLASH_BASE_ADDR 0x20000000u

/**
 * Memory size for eflash in top custom_gf12.
 */
#define OPENTITAN_EFLASH_SIZE_BYTES 0x40000u

/**
 * Memory base address for ram_main in top custom_gf12.
 */
#define OPENTITAN_RAM_MAIN_BASE_ADDR 0x10000000u

/**
 * Memory size for ram_main in top custom_gf12.
 */
#define OPENTITAN_RAM_MAIN_SIZE_BYTES 0x20000u

/**
 * Memory base address for rom in top custom_gf12.
 */
#define OPENTITAN_ROM_BASE_ADDR 0x8000u

/**
 * Memory size for rom in top custom_gf12.
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
  kOpentitanPlicPeripheralGpio = 2, /**< gpio */
  kOpentitanPlicPeripheralI2c0 = 3, /**< i2c0 */
  kOpentitanPlicPeripheralRvTimer = 4, /**< rv_timer */
  kOpentitanPlicPeripheralOtpCtrl = 5, /**< otp_ctrl */
  kOpentitanPlicPeripheralAlertHandler = 6, /**< alert_handler */
  kOpentitanPlicPeripheralSpiHost0 = 7, /**< spi_host0 */
  kOpentitanPlicPeripheralPwrmgrAon = 8, /**< pwrmgr_aon */
  kOpentitanPlicPeripheralSysrstCtrlAon = 9, /**< sysrst_ctrl_aon */
  kOpentitanPlicPeripheralAonTimerAon = 10, /**< aon_timer_aon */
  kOpentitanPlicPeripheralSensorCtrl = 11, /**< sensor_ctrl */
  kOpentitanPlicPeripheralFlashCtrl = 12, /**< flash_ctrl */
  kOpentitanPlicPeripheralLast = 12, /**< \internal Final PLIC peripheral */
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
  kOpentitanPlicIrqIdGpioGpio0 = 9, /**< gpio_gpio 0 */
  kOpentitanPlicIrqIdGpioGpio1 = 10, /**< gpio_gpio 1 */
  kOpentitanPlicIrqIdGpioGpio2 = 11, /**< gpio_gpio 2 */
  kOpentitanPlicIrqIdGpioGpio3 = 12, /**< gpio_gpio 3 */
  kOpentitanPlicIrqIdGpioGpio4 = 13, /**< gpio_gpio 4 */
  kOpentitanPlicIrqIdGpioGpio5 = 14, /**< gpio_gpio 5 */
  kOpentitanPlicIrqIdGpioGpio6 = 15, /**< gpio_gpio 6 */
  kOpentitanPlicIrqIdGpioGpio7 = 16, /**< gpio_gpio 7 */
  kOpentitanPlicIrqIdGpioGpio8 = 17, /**< gpio_gpio 8 */
  kOpentitanPlicIrqIdGpioGpio9 = 18, /**< gpio_gpio 9 */
  kOpentitanPlicIrqIdGpioGpio10 = 19, /**< gpio_gpio 10 */
  kOpentitanPlicIrqIdGpioGpio11 = 20, /**< gpio_gpio 11 */
  kOpentitanPlicIrqIdGpioGpio12 = 21, /**< gpio_gpio 12 */
  kOpentitanPlicIrqIdGpioGpio13 = 22, /**< gpio_gpio 13 */
  kOpentitanPlicIrqIdGpioGpio14 = 23, /**< gpio_gpio 14 */
  kOpentitanPlicIrqIdGpioGpio15 = 24, /**< gpio_gpio 15 */
  kOpentitanPlicIrqIdGpioGpio16 = 25, /**< gpio_gpio 16 */
  kOpentitanPlicIrqIdGpioGpio17 = 26, /**< gpio_gpio 17 */
  kOpentitanPlicIrqIdGpioGpio18 = 27, /**< gpio_gpio 18 */
  kOpentitanPlicIrqIdGpioGpio19 = 28, /**< gpio_gpio 19 */
  kOpentitanPlicIrqIdGpioGpio20 = 29, /**< gpio_gpio 20 */
  kOpentitanPlicIrqIdGpioGpio21 = 30, /**< gpio_gpio 21 */
  kOpentitanPlicIrqIdGpioGpio22 = 31, /**< gpio_gpio 22 */
  kOpentitanPlicIrqIdGpioGpio23 = 32, /**< gpio_gpio 23 */
  kOpentitanPlicIrqIdGpioGpio24 = 33, /**< gpio_gpio 24 */
  kOpentitanPlicIrqIdGpioGpio25 = 34, /**< gpio_gpio 25 */
  kOpentitanPlicIrqIdGpioGpio26 = 35, /**< gpio_gpio 26 */
  kOpentitanPlicIrqIdGpioGpio27 = 36, /**< gpio_gpio 27 */
  kOpentitanPlicIrqIdGpioGpio28 = 37, /**< gpio_gpio 28 */
  kOpentitanPlicIrqIdGpioGpio29 = 38, /**< gpio_gpio 29 */
  kOpentitanPlicIrqIdGpioGpio30 = 39, /**< gpio_gpio 30 */
  kOpentitanPlicIrqIdGpioGpio31 = 40, /**< gpio_gpio 31 */
  kOpentitanPlicIrqIdI2c0FmtWatermark = 41, /**< i2c0_fmt_watermark */
  kOpentitanPlicIrqIdI2c0RxWatermark = 42, /**< i2c0_rx_watermark */
  kOpentitanPlicIrqIdI2c0FmtOverflow = 43, /**< i2c0_fmt_overflow */
  kOpentitanPlicIrqIdI2c0RxOverflow = 44, /**< i2c0_rx_overflow */
  kOpentitanPlicIrqIdI2c0Nak = 45, /**< i2c0_nak */
  kOpentitanPlicIrqIdI2c0SclInterference = 46, /**< i2c0_scl_interference */
  kOpentitanPlicIrqIdI2c0SdaInterference = 47, /**< i2c0_sda_interference */
  kOpentitanPlicIrqIdI2c0StretchTimeout = 48, /**< i2c0_stretch_timeout */
  kOpentitanPlicIrqIdI2c0SdaUnstable = 49, /**< i2c0_sda_unstable */
  kOpentitanPlicIrqIdI2c0CmdComplete = 50, /**< i2c0_cmd_complete */
  kOpentitanPlicIrqIdI2c0TxStretch = 51, /**< i2c0_tx_stretch */
  kOpentitanPlicIrqIdI2c0TxOverflow = 52, /**< i2c0_tx_overflow */
  kOpentitanPlicIrqIdI2c0AcqFull = 53, /**< i2c0_acq_full */
  kOpentitanPlicIrqIdI2c0UnexpStop = 54, /**< i2c0_unexp_stop */
  kOpentitanPlicIrqIdI2c0HostTimeout = 55, /**< i2c0_host_timeout */
  kOpentitanPlicIrqIdRvTimerTimerExpiredHart0Timer0 = 56, /**< rv_timer_timer_expired_hart0_timer0 */
  kOpentitanPlicIrqIdOtpCtrlOtpOperationDone = 57, /**< otp_ctrl_otp_operation_done */
  kOpentitanPlicIrqIdOtpCtrlOtpError = 58, /**< otp_ctrl_otp_error */
  kOpentitanPlicIrqIdAlertHandlerClassa = 59, /**< alert_handler_classa */
  kOpentitanPlicIrqIdAlertHandlerClassb = 60, /**< alert_handler_classb */
  kOpentitanPlicIrqIdAlertHandlerClassc = 61, /**< alert_handler_classc */
  kOpentitanPlicIrqIdAlertHandlerClassd = 62, /**< alert_handler_classd */
  kOpentitanPlicIrqIdSpiHost0Error = 63, /**< spi_host0_error */
  kOpentitanPlicIrqIdSpiHost0SpiEvent = 64, /**< spi_host0_spi_event */
  kOpentitanPlicIrqIdPwrmgrAonWakeup = 65, /**< pwrmgr_aon_wakeup */
  kOpentitanPlicIrqIdSysrstCtrlAonEventDetected = 66, /**< sysrst_ctrl_aon_event_detected */
  kOpentitanPlicIrqIdAonTimerAonWkupTimerExpired = 67, /**< aon_timer_aon_wkup_timer_expired */
  kOpentitanPlicIrqIdAonTimerAonWdogTimerBark = 68, /**< aon_timer_aon_wdog_timer_bark */
  kOpentitanPlicIrqIdSensorCtrlIoStatusChange = 69, /**< sensor_ctrl_io_status_change */
  kOpentitanPlicIrqIdSensorCtrlInitStatusChange = 70, /**< sensor_ctrl_init_status_change */
  kOpentitanPlicIrqIdFlashCtrlProgEmpty = 71, /**< flash_ctrl_prog_empty */
  kOpentitanPlicIrqIdFlashCtrlProgLvl = 72, /**< flash_ctrl_prog_lvl */
  kOpentitanPlicIrqIdFlashCtrlRdFull = 73, /**< flash_ctrl_rd_full */
  kOpentitanPlicIrqIdFlashCtrlRdLvl = 74, /**< flash_ctrl_rd_lvl */
  kOpentitanPlicIrqIdFlashCtrlOpDone = 75, /**< flash_ctrl_op_done */
  kOpentitanPlicIrqIdFlashCtrlCorrErr = 76, /**< flash_ctrl_corr_err */
  kOpentitanPlicIrqIdLast = 76, /**< \internal The Last Valid Interrupt ID. */
} opentitan_plic_irq_id_t;

/**
 * PLIC Interrupt Source to Peripheral Map
 *
 * This array is a mapping from `opentitan_plic_irq_id_t` to
 * `opentitan_plic_peripheral_t`.
 */
extern const opentitan_plic_peripheral_t
    opentitan_plic_interrupt_for_peripheral[77];

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
  kOpentitanAlertPeripheralGpio = 1, /**< gpio */
  kOpentitanAlertPeripheralI2c0 = 2, /**< i2c0 */
  kOpentitanAlertPeripheralRvTimer = 3, /**< rv_timer */
  kOpentitanAlertPeripheralOtpCtrl = 4, /**< otp_ctrl */
  kOpentitanAlertPeripheralLcCtrl = 5, /**< lc_ctrl */
  kOpentitanAlertPeripheralSpiHost0 = 6, /**< spi_host0 */
  kOpentitanAlertPeripheralPwrmgrAon = 7, /**< pwrmgr_aon */
  kOpentitanAlertPeripheralRstmgrAon = 8, /**< rstmgr_aon */
  kOpentitanAlertPeripheralClkmgrAon = 9, /**< clkmgr_aon */
  kOpentitanAlertPeripheralSysrstCtrlAon = 10, /**< sysrst_ctrl_aon */
  kOpentitanAlertPeripheralPinmuxAon = 11, /**< pinmux_aon */
  kOpentitanAlertPeripheralAonTimerAon = 12, /**< aon_timer_aon */
  kOpentitanAlertPeripheralSensorCtrl = 13, /**< sensor_ctrl */
  kOpentitanAlertPeripheralSramCtrlRetAon = 14, /**< sram_ctrl_ret_aon */
  kOpentitanAlertPeripheralFlashCtrl = 15, /**< flash_ctrl */
  kOpentitanAlertPeripheralRvDm = 16, /**< rv_dm */
  kOpentitanAlertPeripheralRvPlic = 17, /**< rv_plic */
  kOpentitanAlertPeripheralSramCtrlMain = 18, /**< sram_ctrl_main */
  kOpentitanAlertPeripheralRomCtrl = 19, /**< rom_ctrl */
  kOpentitanAlertPeripheralRvCoreIbex = 20, /**< rv_core_ibex */
  kOpentitanAlertPeripheralLast = 20, /**< \internal Final Alert peripheral */
} opentitan_alert_peripheral_t;

/**
 * Alert Handler Alert Source.
 *
 * Enumeration of all Alert Handler Alert Sources. The alert sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum opentitan_alert_id {
  kOpentitanAlertIdUart0FatalFault = 0, /**< uart0_fatal_fault */
  kOpentitanAlertIdGpioFatalFault = 1, /**< gpio_fatal_fault */
  kOpentitanAlertIdI2c0FatalFault = 2, /**< i2c0_fatal_fault */
  kOpentitanAlertIdRvTimerFatalFault = 3, /**< rv_timer_fatal_fault */
  kOpentitanAlertIdOtpCtrlFatalMacroError = 4, /**< otp_ctrl_fatal_macro_error */
  kOpentitanAlertIdOtpCtrlFatalCheckError = 5, /**< otp_ctrl_fatal_check_error */
  kOpentitanAlertIdOtpCtrlFatalBusIntegError = 6, /**< otp_ctrl_fatal_bus_integ_error */
  kOpentitanAlertIdOtpCtrlFatalPrimOtpAlert = 7, /**< otp_ctrl_fatal_prim_otp_alert */
  kOpentitanAlertIdOtpCtrlRecovPrimOtpAlert = 8, /**< otp_ctrl_recov_prim_otp_alert */
  kOpentitanAlertIdLcCtrlFatalProgError = 9, /**< lc_ctrl_fatal_prog_error */
  kOpentitanAlertIdLcCtrlFatalStateError = 10, /**< lc_ctrl_fatal_state_error */
  kOpentitanAlertIdLcCtrlFatalBusIntegError = 11, /**< lc_ctrl_fatal_bus_integ_error */
  kOpentitanAlertIdSpiHost0FatalFault = 12, /**< spi_host0_fatal_fault */
  kOpentitanAlertIdPwrmgrAonFatalFault = 13, /**< pwrmgr_aon_fatal_fault */
  kOpentitanAlertIdRstmgrAonFatalFault = 14, /**< rstmgr_aon_fatal_fault */
  kOpentitanAlertIdRstmgrAonFatalCnstyFault = 15, /**< rstmgr_aon_fatal_cnsty_fault */
  kOpentitanAlertIdClkmgrAonRecovFault = 16, /**< clkmgr_aon_recov_fault */
  kOpentitanAlertIdClkmgrAonFatalFault = 17, /**< clkmgr_aon_fatal_fault */
  kOpentitanAlertIdSysrstCtrlAonFatalFault = 18, /**< sysrst_ctrl_aon_fatal_fault */
  kOpentitanAlertIdPinmuxAonFatalFault = 19, /**< pinmux_aon_fatal_fault */
  kOpentitanAlertIdAonTimerAonFatalFault = 20, /**< aon_timer_aon_fatal_fault */
  kOpentitanAlertIdSensorCtrlRecovAlert = 21, /**< sensor_ctrl_recov_alert */
  kOpentitanAlertIdSensorCtrlFatalAlert = 22, /**< sensor_ctrl_fatal_alert */
  kOpentitanAlertIdSramCtrlRetAonFatalError = 23, /**< sram_ctrl_ret_aon_fatal_error */
  kOpentitanAlertIdFlashCtrlRecovErr = 24, /**< flash_ctrl_recov_err */
  kOpentitanAlertIdFlashCtrlFatalStdErr = 25, /**< flash_ctrl_fatal_std_err */
  kOpentitanAlertIdFlashCtrlFatalErr = 26, /**< flash_ctrl_fatal_err */
  kOpentitanAlertIdFlashCtrlFatalPrimFlashAlert = 27, /**< flash_ctrl_fatal_prim_flash_alert */
  kOpentitanAlertIdFlashCtrlRecovPrimFlashAlert = 28, /**< flash_ctrl_recov_prim_flash_alert */
  kOpentitanAlertIdRvDmFatalFault = 29, /**< rv_dm_fatal_fault */
  kOpentitanAlertIdRvPlicFatalFault = 30, /**< rv_plic_fatal_fault */
  kOpentitanAlertIdSramCtrlMainFatalError = 31, /**< sram_ctrl_main_fatal_error */
  kOpentitanAlertIdRomCtrlFatal = 32, /**< rom_ctrl_fatal */
  kOpentitanAlertIdRvCoreIbexFatalSwErr = 33, /**< rv_core_ibex_fatal_sw_err */
  kOpentitanAlertIdRvCoreIbexRecovSwErr = 34, /**< rv_core_ibex_recov_sw_err */
  kOpentitanAlertIdRvCoreIbexFatalHwErr = 35, /**< rv_core_ibex_fatal_hw_err */
  kOpentitanAlertIdRvCoreIbexRecovHwErr = 36, /**< rv_core_ibex_recov_hw_err */
  kOpentitanAlertIdLast = 36, /**< \internal The Last Valid Alert ID. */
} opentitan_alert_id_t;

/**
 * Alert Handler Alert Source to Peripheral Map
 *
 * This array is a mapping from `opentitan_alert_id_t` to
 * `opentitan_alert_peripheral_t`.
 */
extern const opentitan_alert_peripheral_t
    opentitan_alert_for_peripheral[37];

#define PINMUX_MIO_PERIPH_INSEL_IDX_OFFSET 2

// PERIPH_INSEL ranges from 0 to NUM_MIO_PADS + 2 -1}
//  0 and 1 are tied to value 0 and 1
#define NUM_MIO_PADS 42
#define NUM_DIO_PADS 8

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
  kOpentitanPinmuxPeripheralInUart0Rx = 34, /**< Peripheral Input 34 */
  kOpentitanPinmuxPeripheralInFlashCtrlTck = 35, /**< Peripheral Input 35 */
  kOpentitanPinmuxPeripheralInFlashCtrlTms = 36, /**< Peripheral Input 36 */
  kOpentitanPinmuxPeripheralInFlashCtrlTdi = 37, /**< Peripheral Input 37 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonAcPresent = 38, /**< Peripheral Input 38 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonKey0In = 39, /**< Peripheral Input 39 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonKey1In = 40, /**< Peripheral Input 40 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonKey2In = 41, /**< Peripheral Input 41 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonPwrbIn = 42, /**< Peripheral Input 42 */
  kOpentitanPinmuxPeripheralInSysrstCtrlAonLidOpen = 43, /**< Peripheral Input 43 */
  kOpentitanPinmuxPeripheralInLast = 43, /**< \internal Last valid peripheral input */
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
  kOpentitanPinmuxInselIor0 = 36, /**< MIO Pad 34 */
  kOpentitanPinmuxInselIor1 = 37, /**< MIO Pad 35 */
  kOpentitanPinmuxInselIor2 = 38, /**< MIO Pad 36 */
  kOpentitanPinmuxInselIor3 = 39, /**< MIO Pad 37 */
  kOpentitanPinmuxInselIor4 = 40, /**< MIO Pad 38 */
  kOpentitanPinmuxInselIor5 = 41, /**< MIO Pad 39 */
  kOpentitanPinmuxInselIor6 = 42, /**< MIO Pad 40 */
  kOpentitanPinmuxInselIor7 = 43, /**< MIO Pad 41 */
  kOpentitanPinmuxInselLast = 43, /**< \internal Last valid insel value */
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
  kOpentitanPinmuxMioOutIor0 = 34, /**< MIO Pad 34 */
  kOpentitanPinmuxMioOutIor1 = 35, /**< MIO Pad 35 */
  kOpentitanPinmuxMioOutIor2 = 36, /**< MIO Pad 36 */
  kOpentitanPinmuxMioOutIor3 = 37, /**< MIO Pad 37 */
  kOpentitanPinmuxMioOutIor4 = 38, /**< MIO Pad 38 */
  kOpentitanPinmuxMioOutIor5 = 39, /**< MIO Pad 39 */
  kOpentitanPinmuxMioOutIor6 = 40, /**< MIO Pad 40 */
  kOpentitanPinmuxMioOutIor7 = 41, /**< MIO Pad 41 */
  kOpentitanPinmuxMioOutLast = 41, /**< \internal Last valid mio output */
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
  kOpentitanPinmuxOutselUart0Tx = 37, /**< Peripheral Output 34 */
  kOpentitanPinmuxOutselFlashCtrlTdo = 38, /**< Peripheral Output 35 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut0 = 39, /**< Peripheral Output 36 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut1 = 40, /**< Peripheral Output 37 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut2 = 41, /**< Peripheral Output 38 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut3 = 42, /**< Peripheral Output 39 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut4 = 43, /**< Peripheral Output 40 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut5 = 44, /**< Peripheral Output 41 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut6 = 45, /**< Peripheral Output 42 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut7 = 46, /**< Peripheral Output 43 */
  kOpentitanPinmuxOutselSensorCtrlAstDebugOut8 = 47, /**< Peripheral Output 44 */
  kOpentitanPinmuxOutselOtpCtrlTest0 = 48, /**< Peripheral Output 45 */
  kOpentitanPinmuxOutselSysrstCtrlAonBatDisable = 49, /**< Peripheral Output 46 */
  kOpentitanPinmuxOutselSysrstCtrlAonKey0Out = 50, /**< Peripheral Output 47 */
  kOpentitanPinmuxOutselSysrstCtrlAonKey1Out = 51, /**< Peripheral Output 48 */
  kOpentitanPinmuxOutselSysrstCtrlAonKey2Out = 52, /**< Peripheral Output 49 */
  kOpentitanPinmuxOutselSysrstCtrlAonPwrbOut = 53, /**< Peripheral Output 50 */
  kOpentitanPinmuxOutselSysrstCtrlAonZ3Wakeup = 54, /**< Peripheral Output 51 */
  kOpentitanPinmuxOutselLast = 54, /**< \internal Last valid outsel value */
} opentitan_pinmux_outsel_t;

/**
 * Dedicated Pad Selects
 */
typedef enum opentitan_direct_pads {
  kOpentitanDirectPadsSpiHost0Sd0 = 0, /**<  */
  kOpentitanDirectPadsSpiHost0Sd1 = 1, /**<  */
  kOpentitanDirectPadsSpiHost0Sd2 = 2, /**<  */
  kOpentitanDirectPadsSpiHost0Sd3 = 3, /**<  */
  kOpentitanDirectPadsSysrstCtrlAonEcRstL = 4, /**<  */
  kOpentitanDirectPadsSysrstCtrlAonFlashWpL = 5, /**<  */
  kOpentitanDirectPadsSpiHost0Sck = 6, /**<  */
  kOpentitanDirectPadsSpiHost0Csb = 7, /**<  */
  kOpentitanDirectPadsLast = 7, /**< \internal Last valid direct pad */
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
  kOpentitanMuxedPadsIor0 = 34, /**<  */
  kOpentitanMuxedPadsIor1 = 35, /**<  */
  kOpentitanMuxedPadsIor2 = 36, /**<  */
  kOpentitanMuxedPadsIor3 = 37, /**<  */
  kOpentitanMuxedPadsIor4 = 38, /**<  */
  kOpentitanMuxedPadsIor5 = 39, /**<  */
  kOpentitanMuxedPadsIor6 = 40, /**<  */
  kOpentitanMuxedPadsIor7 = 41, /**<  */
  kOpentitanMuxedPadsLast = 41, /**< \internal Last valid muxed pad */
} opentitan_muxed_pads_t;

/**
 * Power Manager Wakeup Signals
 */
typedef enum opentitan_power_manager_wake_ups {
  kOpentitanPowerManagerWakeUpsSysrstCtrlAonWkupReq = 0, /**<  */
  kOpentitanPowerManagerWakeUpsPinmuxAonPinWkupReq = 1, /**<  */
  kOpentitanPowerManagerWakeUpsPinmuxAonUsbWkupReq = 2, /**<  */
  kOpentitanPowerManagerWakeUpsAonTimerAonWkupReq = 3, /**<  */
  kOpentitanPowerManagerWakeUpsSensorCtrlWkupReq = 4, /**<  */
  kOpentitanPowerManagerWakeUpsLast = 4, /**< \internal Last valid pwrmgr wakeup signal */
} opentitan_power_manager_wake_ups_t;

/**
 * Reset Manager Software Controlled Resets
 */
typedef enum opentitan_reset_manager_sw_resets {
  kOpentitanResetManagerSwResetsSpiHost0 = 0, /**<  */
  kOpentitanResetManagerSwResetsUsb = 1, /**<  */
  kOpentitanResetManagerSwResetsUsbAon = 2, /**<  */
  kOpentitanResetManagerSwResetsI2c0 = 3, /**<  */
  kOpentitanResetManagerSwResetsLast = 3, /**< \internal Last valid rstmgr software reset request */
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
  kOpentitanGateableClocksIoPeri = 1, /**< Clock clk_io_peri in group peri */
  kOpentitanGateableClocksUsbPeri = 2, /**< Clock clk_usb_peri in group peri */
  kOpentitanGateableClocksLast = 2, /**< \internal Last Valid Gateable Clock */
} opentitan_gateable_clocks_t;

/**
 * Clock Manager Software-Hinted Clocks.
 *
 * The Software has partial control over these clocks. It can ask them to stop,
 * but the clock manager is in control of whether the clock actually is stopped.
 */
typedef enum opentitan_hintable_clocks {
  kOpentitanHintableClocksMainKmac = 0, /**< Clock clk_main_kmac in group trans */
  kOpentitanHintableClocksLast = 0, /**< \internal Last Valid Hintable Clock */
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

#endif  // OPENTITAN_HW_TOP_CUSTOM_GF12_SW_AUTOGEN_TOP_CUSTOM_GF12_H_
