# Copyright lowRISC contributors.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

load("//rules:linker.bzl", "ld_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "top_custom_tiny",
    srcs = [
        "top_custom_tiny.c",
    ],
    hdrs = [
        "top_custom_tiny.h",
        "top_custom_tiny_memory.h",
    ],
)

ld_library(
    name = "top_custom_tiny_memory",
    includes = ["top_custom_tiny_memory.ld"],
)

filegroup(
    name = "all_files",
    srcs = glob(["**"]),
)
