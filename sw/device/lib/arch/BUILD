# Copyright lowRISC contributors.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "device",
    hdrs = ["device.h"],
)

cc_library(
    name = "fpga_cw305",
    srcs = ["device_fpga_cw305.c"],
    deps = [
        ":device",
        "//sw/device/silicon_creator/lib:rom_print_custom_tiny",
        "//sw/device/silicon_creator/lib/drivers:ibex_custom_tiny", # FIXME: Others?
    ],
)

cc_library(
    name = "fpga_cw310",
    srcs = ["device_fpga_cw310.c"],
    deps = [
        ":device",
        "//sw/device/silicon_creator/lib:rom_print_earlgrey",
        "//sw/device/silicon_creator/lib/drivers:ibex_earlgrey",
    ],
)

cc_library(
    name = "fpga_nexysvideo",
    srcs = ["device_fpga_nexysvideo.c"],
    deps = [
        ":device",
        "//sw/device/silicon_creator/lib:rom_print_custom_tiny",
        "//sw/device/silicon_creator/lib/drivers:ibex_custom_tiny", # FIXME: Others?
    ],
)

cc_library(
    name = "sim_dv",
    srcs = ["device_sim_dv.c"],
    deps = [":device"],
)

cc_library(
    name = "sim_verilator",
    srcs = ["device_sim_verilator.c"],
    deps = [":device"],
)
