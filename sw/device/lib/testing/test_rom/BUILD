# Copyright lowRISC contributors.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

load("//rules:opentitan.bzl",
    "OPENTITAN_CPU",
    "opentitan_rom_binary",
    "opentitan_cc_library",
)
load("//rules:opentitan_test.bzl", "opentitan_functest")
load("//rules:exclude_files.bzl", "exclude_files")
load("//rules:autogen.bzl", "autogen_chip_info")
load("//rules:linker.bzl", "ld_library")
load("@rules_pkg//pkg:mappings.bzl", "pkg_files")

package(default_visibility = ["//visibility:public"])

autogen_chip_info(
    name = "chip_info",
)

ld_library(
    name = "test_rom_ld",
    includes = ["test_rom.ld"]
)

ld_library(
    name = "linker_script_earlgrey",
    script = "test_rom_earlgrey.ld",
    deps = [
        ":test_rom_ld",
        "//hw/top_earlgrey/sw/autogen:top_earlgrey_memory",
        "//sw/device:info_sections",
        "//sw/device/silicon_creator/lib/base:static_critical_sections",
    ],
)
ld_library(
    name = "linker_script_custom_gf12",
    script = "test_rom_custom_gf12.ld",
    deps = [
        ":test_rom_ld",
        "//hw/top_custom_gf12/sw/autogen:top_custom_gf12_memory",
        "//sw/device:info_sections",
        "//sw/device/silicon_creator/lib/base:static_critical_sections",
    ],
)

opentitan_rom_binary(
    name = "test_rom",
    soc_config = "earlgrey",
    deps = [
        ":linker_script_earlgrey",
        ":test_rom_lib_earlgrey",
    ],
)
opentitan_rom_binary(
    name = "test_rom",
    soc_config = "custom_gf12",
    devices = [
        "sim_verilator",
        "fpga_nexysvideo"
    ],
    deps = [
        ":linker_script_custom_gf12",
        ":test_rom_lib_custom_gf12",
    ],
)

## TODO(#12905): Use a slightly hollowed out version of the silicon_creator bootstrap
## and other functions necessary to build the test_rom for the english breakfast top level.
#cc_library(
#    name = "english_breakfast_test_rom_lib",
#    srcs = [
#        "english_breakfast_fake_driver_funcs.c",
#        "//sw/device/silicon_creator/lib/drivers:english_breakfast_test_rom_driver_srcs",
#        "//sw/device/silicon_creator/rom:english_breakfast_test_rom_bootstrap_srcs",
#    ],
#    # This should be built only for english breakfast and skipped if using wildcards.
#    tags = ["manual"],
#    deps = [
#        "//hw/ip/gpio/data:gpio_regs",
#        "//hw/ip/otp_ctrl/data:otp_ctrl_regs",
#        "//hw/ip/spi_device/data:spi_device_regs",
#        "//hw/top_earlgrey/ip/flash_ctrl/data/autogen:flash_ctrl_regs",
#        "//hw/top_earlgrey/sw/autogen:top_earlgrey",
#        "//sw/device/lib/base:abs_mmio",
#        "//sw/device/lib/base:multibits",
#        "//sw/device/lib/dif:rstmgr_intf",
#        "//sw/device/silicon_creator/lib/base:chip",
#        "//sw/device/silicon_creator/lib/base:sec_mmio",
#    ],
#)

## TODO(#12905): Use a slightly hollowed out version of the silicon_creator manifest
## implementation when building the test_rom for the english breakfast top level.
#cc_library(
#    name = "english_breakfast_test_rom_manifest",
#    srcs = [
#        "//sw/device/silicon_creator/lib:english_breakfast_test_rom_manifest_srcs",
#        "//sw/device/silicon_creator/lib/drivers:english_breakfast_test_rom_driver_srcs",
#    ],
#    # This should be built only for english breakfast and skipped if using wildcards.
#    tags = ["manual"],
#    deps = [
#        "//hw/ip/otp_ctrl/data:otp_ctrl_regs",
#        "//hw/ip/spi_device/data:spi_device_regs",
#        "//hw/top_earlgrey/ip/flash_ctrl/data/autogen:flash_ctrl_regs",
#        "//hw/top_earlgrey/sw/autogen:top_earlgrey",
#        "//sw/device/lib/base:abs_mmio",
#        "//sw/device/lib/base:macros",
#        "//sw/device/lib/base:multibits",
#        "//sw/device/silicon_creator/lib:epmp_state",
#        "//sw/device/silicon_creator/lib:error",
#        "//sw/device/silicon_creator/lib:keymgr_binding",
#        "//sw/device/silicon_creator/lib/base:chip",
#        "//sw/device/silicon_creator/lib/base:sec_mmio",
#        "//sw/device/silicon_creator/lib/sigverify:rsa_key",
#    ],
#)

# TODO: There are certain peripherals missing in other configurations than
#       'earlgrey'. Therefore we have to duplicate the definition - there is
#       no easy way (yet) to specify deps for "only A", "only B" and "shared".
opentitan_cc_library(
    name = "test_rom_lib",
    soc_configs = ['earlgrey'],
    srcs = [
        "test_rom.c",
        "test_rom_start.S",
    ],
    target_compatible_with = [OPENTITAN_CPU],
    deps = [
        ":chip_info",
        "//sw/device/lib/dif:rstmgr_{soc_config}",
        "//sw/device/silicon_creator/lib:manifest_{soc_config}",
        "//sw/device/silicon_creator/rom:bootstrap_{soc_config}",
        "//hw/ip/csrng/data:csrng_regs",
        "//hw/ip/edn/data:edn_regs",
        "//hw/ip/entropy_src/data:entropy_src_regs",
        "//hw/ip/otp_ctrl/data:otp_ctrl_regs",
        "//hw/ip/sram_ctrl/data:sram_ctrl_regs",
        "//hw/top_{soc_config}/ip/ast/data:ast_regs",
        "//hw/top_{soc_config}/ip/clkmgr/data/autogen:clkmgr_regs",
        "//hw/top_{soc_config}/ip/flash_ctrl/data/autogen:flash_ctrl_regs",
        "//hw/top_{soc_config}/ip/sensor_ctrl/data:sensor_ctrl_regs",
        "//hw/top_{soc_config}/sw/autogen:top_{soc_config}",
        "//sw/device/include:opentitan",
        "//sw/device/lib/arch:device",
        "//sw/device/lib/base:abs_mmio",
        "//sw/device/lib/base:bitfield",
        "//sw/device/lib/base:mmio",
        "//sw/device/lib/crt",
        "//sw/device/lib/dif:clkmgr_{soc_config}",
        "//sw/device/lib/dif:flash_ctrl",
        "//sw/device/lib/dif:gpio",
        "//sw/device/lib/dif:hmac",
        "//sw/device/lib/dif:pinmux_{soc_config}",
        "//sw/device/lib/dif:rv_core_ibex_{soc_config}",
        "//sw/device/lib/dif:spi_device",
        "//sw/device/lib/dif:uart",
        "//sw/device/lib/runtime:hart",
        "//sw/device/lib/runtime:log",
        "//sw/device/lib/runtime:print",
        "//sw/device/lib/testing:flash_ctrl_testutils_{soc_config}",
        "//sw/device/lib/testing:pinmux_testutils_{soc_config}",
        "//sw/device/lib/testing/test_framework:check",
        "//sw/device/lib/testing/test_framework:status",
        "//sw/device/silicon_creator/lib/base:sec_mmio",
        "//sw/device/silicon_creator/lib/base:static_critical_boot_measurements",
        "//sw/device/silicon_creator/lib/base:static_critical_epmp_state",
        "//sw/device/silicon_creator/lib/base:static_critical_sec_mmio",
        "//sw/device/silicon_creator/lib/drivers:retention_sram_{soc_config}",
    ],
)
opentitan_cc_library(
    name = "test_rom_lib",
    soc_configs = ['custom_gf12'],
    srcs = [
        "test_rom.c",
        "test_rom_start.S",
    ],
    target_compatible_with = [OPENTITAN_CPU],
    deps = [
        ":chip_info",
        "//sw/device/lib/dif:rstmgr_{soc_config}",
        "//sw/device/silicon_creator/lib:manifest_{soc_config}",
        "//hw/ip/csrng/data:csrng_regs",
        "//hw/ip/edn/data:edn_regs",
        "//hw/ip/entropy_src/data:entropy_src_regs",
        "//hw/ip/otp_ctrl/data:otp_ctrl_regs",
        "//hw/ip/sram_ctrl/data:sram_ctrl_regs",
        "//hw/top_{soc_config}/ip/ast/data:ast_regs",
        "//hw/top_{soc_config}/ip/clkmgr/data/autogen:clkmgr_regs",
        "//hw/top_{soc_config}/ip/flash_ctrl/data/autogen:flash_ctrl_regs",
        "//hw/top_{soc_config}/ip/sensor_ctrl/data:sensor_ctrl_regs",
        "//hw/top_{soc_config}/sw/autogen:top_{soc_config}",
        "//sw/device/include:opentitan",
        "//sw/device/lib/arch:device",
        "//sw/device/lib/base:abs_mmio",
        "//sw/device/lib/base:bitfield",
        "//sw/device/lib/base:mmio",
        "//sw/device/lib/crt",
        "//sw/device/lib/dif:clkmgr_{soc_config}",
        "//sw/device/lib/dif:flash_ctrl",
        "//sw/device/lib/dif:gpio",
        "//sw/device/lib/dif:hmac",
        "//sw/device/lib/dif:pinmux_{soc_config}",
        "//sw/device/lib/dif:rv_core_ibex_{soc_config}",
        "//sw/device/lib/dif:uart",
        "//sw/device/lib/runtime:hart",
        "//sw/device/lib/runtime:log",
        "//sw/device/lib/runtime:print",
        "//sw/device/lib/testing:flash_ctrl_testutils_{soc_config}",
        "//sw/device/lib/testing:pinmux_testutils_{soc_config}",
        "//sw/device/lib/testing/test_framework:check",
        "//sw/device/lib/testing/test_framework:status",
        "//sw/device/silicon_creator/lib/base:sec_mmio",
        "//sw/device/silicon_creator/lib/base:static_critical_boot_measurements",
        "//sw/device/silicon_creator/lib/base:static_critical_epmp_state",
        "//sw/device/silicon_creator/lib/base:static_critical_sec_mmio",
        "//sw/device/silicon_creator/lib/drivers:retention_sram_{soc_config}",
    ],
)

opentitan_functest(
    name = "test_rom_test",
    srcs = ["test_rom_test.c"],
    deps = [
        "//sw/device/lib/testing/test_framework:ottf_main",
    ],
)

exclude_files(
    name = "pre_package",
    testonly = True,
    srcs = [":test_rom"],
    exclude_suffix = [
        ".ll",
        ".i",
        ".s",
    ],
)

pkg_files(
    name = "package",
    testonly = True,
    srcs = [":pre_package"],
    prefix = "earlgrey/test_rom",
)
