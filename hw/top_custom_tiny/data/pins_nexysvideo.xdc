## Copyright lowRISC contributors.
## Licensed under the Apache License, Version 2.0, see LICENSE for details.
## SPDX-License-Identifier: Apache-2.0


## Clock Signal
set_property -dict { PACKAGE_PIN R4 IOSTANDARD LVCMOS33 } [get_ports { IO_CLK }]; # clk

## Clock constraints
## set via clocks.xdc

## Buttons
set_property -dict { PACKAGE_PIN B22 IOSTANDARD LVCMOS33 } [get_ports { POR_BUTTON_N }]; #BTNC

## JTAG system reset (routed to JA)
set_property -dict { PACKAGE_PIN  V9  IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { JTAG_SRST_N }]; #JA0

# JTAG (JA)
set_property -dict { PACKAGE_PIN V8 IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { IOR0  }]; #JA1
set_property -dict { PACKAGE_PIN V7 IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { IOR1  }]; #JA2
set_property -dict { PACKAGE_PIN W7 IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { IOR2  }]; #JA3
set_property -dict { PACKAGE_PIN W9 IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { IOR3  }]; #JA4
set_property -dict { PACKAGE_PIN Y9 IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { IOR4  }]; #JA5

## Power-on Reset
set_property -dict { PACKAGE_PIN  G4  IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { POR_N }];

# Main UART (over FTDI)
set_property -dict { PACKAGE_PIN V18 IOSTANDARD LVCMOS33 } [get_ports { IOC3 }]; #OpenTitan UART0 RX
set_property -dict { PACKAGE_PIN AA19 IOSTANDARD LVCMOS33 } [get_ports { IOC4 }]; #OpenTitan UART0 TX

## Preserve prim_prince modules and setup multi-cycle paths
## These are no longer required, but kept here as a reference
## set_property KEEP_HIERARCHY TRUE [get_cells top_earlgrey/u_flash_eflash/gen_flash_banks[*].i_core/u_scramble/u_cipher]
## set_multicycle_path -setup 2 -through [get_pins -of_objects [get_cells top_earlgrey/u_flash_eflash/gen_flash_banks[*].i_core/u_scramble/u_cipher]]
## set_multicycle_path -hold 1  -through [get_pins -of_objects [get_cells top_earlgrey/u_flash_eflash/gen_flash_banks[*].i_core/u_scramble/u_cipher]]

#set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets IO_SDCK_IBUF]; # SDCK clock to be ignored

## IOB bank
# Aux SPI host
#set_property -dict { PACKAGE_PIN Y6  IOSTANDARD LVCMOS33 } [get_ports { IOB6  }]; # USRDIP0
set_property -dict { PACKAGE_PIN AA6  IOSTANDARD LVCMOS33 } [get_ports { IOB7  }]; # USRDIP1
set_property -dict { PACKAGE_PIN AA8  IOSTANDARD LVCMOS33 } [get_ports { IOB8  }]; # USRDIP2
set_property -dict { PACKAGE_PIN AB8  IOSTANDARD LVCMOS33 } [get_ports { IOB9  }]; # USRDIP3

## IOC bank
# GPIOs (SW)
set_property -dict { PACKAGE_PIN E22 IOSTANDARD LVCMOS33 } [get_ports { IOC9  }]; # SW0
set_property -dict { PACKAGE_PIN F21 IOSTANDARD LVCMOS33 } [get_ports { IOC10 }]; # SW1
set_property -dict { PACKAGE_PIN G21 IOSTANDARD LVCMOS33 } [get_ports { IOC11 }]; # SW2
set_property -dict { PACKAGE_PIN G22 IOSTANDARD LVCMOS33 } [get_ports { IOC12 }]; # SW3

## IOR bank

# GPIO (LED)
set_property -dict { PACKAGE_PIN T14 IOSTANDARD LVCMOS33 } [get_ports { IOR6  }]; # USRLED0
set_property -dict { PACKAGE_PIN T15 IOSTANDARD LVCMOS33 } [get_ports { IOR7  }]; # USRLED1
set_property -dict { PACKAGE_PIN T16 IOSTANDARD LVCMOS33 } [get_ports { IOR8  }]; # USRLED2
set_property -dict { PACKAGE_PIN U16 IOSTANDARD LVCMOS33 } [get_ports { IOR9  }]; # USRLED3

## SPI HOST
set_property -dict { PACKAGE_PIN AB18  IOSTANDARD LVCMOS33 } [get_ports { SPI_HOST_CLK }];   #SCK (USR_SPI0CLK)
set_property -dict { PACKAGE_PIN AB21  IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { SPI_HOST_D0 }]; #SDO (USR_SPI0DQ0)
set_property -dict { PACKAGE_PIN AB20  IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { SPI_HOST_D1 }]; #SDO (USR_SPI0DQ1)
set_property -dict { PACKAGE_PIN AA21  IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { SPI_HOST_D2 }]; #SDO (USR_SPI0DQ2)
set_property -dict { PACKAGE_PIN AA20  IOSTANDARD LVCMOS33 PULLTYPE PULLUP } [get_ports { SPI_HOST_D3 }]; #SDO (USR_SPI0DQ3)
set_property -dict { PACKAGE_PIN AB22  IOSTANDARD LVCMOS33 } [get_ports { SPI_HOST_CS_L }]; #CSB (USR_SPI0CS)


## USB input delay to accommodate T_FST (full-speed transition time) and the
## PHY's sampling logic. The PHY expects to only see up to one transient / fake
## SE0. The phase relationship with the PHY's sampling clock is arbitrary, but
## for simplicity, constrain the maximum path delay to something smaller than
## `T_sample - T_FST(max)` to help keep the P/N skew from slipping beyond one
## sample period.
set clks_48_unbuf [get_clocks -of_objects [get_pin clkgen/pll/CLKOUT1]]
#set_input_delay -clock ${clks_48_unbuf} -min 3 [get_ports {IO_USB_DP_RX IO_USB_DN_RX IO_USB_D_RX}]
#set_input_delay -clock ${clks_48_unbuf} -add_delay -max 17 [get_ports {IO_USB_DP_RX IO_USB_DN_RX IO_USB_D_RX}]

## USB output max skew constraint
## Use the output-enable as a "clock" and time the P/N relative to it. Keep the skew within T_FST.
#set usb_embed_out_clk [create_generated_clock -name usb_embed_out_clk -source [get_pin clkgen/pll/CLKOUT1] -multiply_by 1 [get_ports IO_USB_OE_N]]
#set_false_path -from [get_clocks -include_generated_clocks clk_io_div4] -to ${usb_embed_out_clk}
#set_output_delay -min -clock ${usb_embed_out_clk} 7 [get_ports {IO_USB_DP_TX IO_USB_DN_TX}]
#set_output_delay -max -clock ${usb_embed_out_clk} 14 [get_ports {IO_USB_DP_TX IO_USB_DN_TX}] -add_delay


## Configuration options, can be used for all designs
set_property CONFIG_VOLTAGE 3.3 [current_design]
set_property CFGBVS VCCO [current_design]
