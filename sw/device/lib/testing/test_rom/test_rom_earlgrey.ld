/* Copyright lowRISC contributors. */
/* Licensed under the Apache License, Version 2.0, see LICENSE for details. */
/* SPDX-License-Identifier: Apache-2.0 */

/**
 * Linker script for an OpenTitan (test) boot ROM.
 *
 * Portions of this file are Ibex-specific.
 */

OUTPUT_ARCH(riscv)

/**
 * Indicate that there are no dynamic libraries, whatsoever.
 */
__DYNAMIC = 0;

INCLUDE hw/top_earlgrey/sw/autogen/top_earlgrey_memory.ld
INCLUDE sw/device/lib/testing/test_rom/test_rom.ld
