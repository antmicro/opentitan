# Copyright lowRISC contributors.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

package(default_visibility = ["//visibility:public"])

filegroup(
    name = "all_files",
    srcs = glob(
        ["**"],
        exclude = [
            "rtl/rstmgr.sv",
            "rtl/rstmgr_pkg.sv",
            "rtl/rstmgr_reg_top.sv",
            "rtl/rstmgr_reg_pkg.sv",
        ]
    ) + [
        "//hw/ip/rstmgr/data:all_files",
    ],
)
