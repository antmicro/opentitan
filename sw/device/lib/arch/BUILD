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
        "//sw/device/silicon_creator/lib:rom_print",
        "//sw/device/silicon_creator/lib/drivers:ibex_custom_gf12", # FIXME: Others?
    ],
)

cc_library(
    name = "fpga_cw310",
    srcs = ["device_fpga_cw310.c"],
    deps = [
        ":device",
        "//sw/device/silicon_creator/lib:rom_print",
        "//sw/device/silicon_creator/lib/drivers:ibex_earlgrey",
    ],
)

#cc_library(
#    name = "fpga_arty_a35t",
#    srcs = ["device_fpga_arty_a35t.c"],
#    deps = [
#        ":device",
#        "//sw/device/silicon_creator/lib:rom_print",
#        "//sw/device/silicon_creator/lib/drivers:ibex",
#    ],
#)

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
