# Copyright lowRISC contributors.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

package(default_visibility = ["//visibility:public"])

filegroup(
    name = "all_files",
    srcs = glob(
        ["**"],
        exclude = [
            "flash_ctrl_core_reg_top.sv",
            "flash_ctrl_mem_reg_top.sv",
            "flash_ctrl_pkg.sv",
            "flash_ctrl_prim_reg_top.sv",
            "flash_ctrl_region_cfg.sv",
            "flash_ctrl_reg_pkg.sv",
            "flash_ctrl.sv",
        ]
    ) + [
        "//hw/ip/flash_ctrl/data:all_files",
    ],
)
