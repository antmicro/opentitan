// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#if (defined OT_IS_EARLGREY)
    #include "hw/top_earlgrey/sw/autogen/top_earlgrey_memory.h"
#elif (defined OT_IS_CUSTOM_GF12)
    #include "hw/top_custom_gf12/sw/autogen/top_custom_gf12_memory.h"
#else
    #error "No 'OT_IS_<soc_config> macro defined!"
#endif
