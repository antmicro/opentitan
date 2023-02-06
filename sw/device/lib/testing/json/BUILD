# Copyright lowRISC contributors.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

load("//rules:opentitan.bzl", "opentitan_cc_library")

package(default_visibility = ["//visibility:public"])

SOC_CONFIGS = [
    'earlgrey',
    'custom_tiny',
]

cc_library(
    name = "command",
    srcs = ["command.c"],
    hdrs = ["command.h"],
    deps = ["//sw/device/lib/ujson"],
)

cc_library(
    name = "chip_specific_startup",
    srcs = ["chip_specific_startup.c"],
    hdrs = ["chip_specific_startup.h"],
    deps = ["//sw/device/lib/ujson"],
)

opentitan_cc_library(
    name = "gpio",
    soc_configs = SOC_CONFIGS,
    srcs = ["gpio.c"],
    hdrs = ["gpio.h"],
    deps = [
        "//sw/device/lib/dif:gpio",
        "//sw/device/lib/testing/test_framework:ujson_ottf_{soc_config}",
        "//sw/device/lib/ujson",
    ],
)

opentitan_cc_library(
    name = "pinmux",
    soc_configs = SOC_CONFIGS,
    srcs = ["pinmux.c"],
    hdrs = ["pinmux.h"],
    deps = [
        "//hw/top_{soc_config}/sw/autogen:top_{soc_config}",
        "//sw/device/lib/ujson",
    ],
)

opentitan_cc_library(
    name = "pinmux_config",
    soc_configs = SOC_CONFIGS,
    srcs = ["pinmux_config.c"],
    hdrs = ["pinmux_config.h"],
    deps = [
        ":pinmux_{soc_config}",
        "//sw/device/lib/base:macros",
        "//sw/device/lib/base:status",
        "//sw/device/lib/dif:pinmux_{soc_config}",
        "//sw/device/lib/runtime:print",
        "//sw/device/lib/testing/test_framework:ujson_ottf_{soc_config}",
        "//sw/device/lib/ujson",
    ],
)
