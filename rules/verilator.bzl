# Copyright lowRISC contributors.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

load(":fusesoc.bzl", "fusesoc_build")

def verilator_build (
    config,
    **kwargs):
    """A macro to create verilator targets for given OpenTitan SoC config.

    Parameters:
        @param config: Configuration name (eg. "earlgray").
    """

    name = "verilator_real_" + config
    fusesoc_build(
        name = name,
        srcs = [
            "//hw/ip:all_files",
            "//hw/top_" + config + ":all_files",
        ],
        cores = [
            "//:cores",
        ],
        data = ["//hw/ip/otbn:all_files"],
        make_options = ":make_options",
        output_groups = {
            "binary": ["sim-verilator/Vchip_sim_tb"],
        },
        systems = ["lowrisc:dv:chip_" + config + "_verilator_sim"],
        tags = [
            "manual",
            "verilator",
        ],
        target = "sim",
        verilator_options = ":verilator_options",
    )

    target = "verilator_" + config + "_bin"
    native.filegroup(
        name = target,
        srcs = [":" + name],
        output_group = "binary",
    )

    native.alias(
        name = "verilator_" + config,
        actual = select({
            ":disable_verilator_build": ":verilator_stub",
            "//conditions:default": ":" + target,
        }),
        tags = ["verilator"],
        visibility = ["//visibility:public"],
    )


