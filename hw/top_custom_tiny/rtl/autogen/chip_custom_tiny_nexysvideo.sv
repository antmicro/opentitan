// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// ------------------- W A R N I N G: A U T O - G E N E R A T E D   C O D E !! -------------------//
// PLEASE DO NOT HAND-EDIT THIS FILE. IT HAS BEEN AUTO-GENERATED WITH THE FOLLOWING COMMAND:
//
// util/topgen.py -t hw/top_custom_tiny/data/top_custom_tiny.hjson \
//                -o hw/top_custom_tiny/ \
//                --rnd_cnst_seed 4881560218908238235


module chip_custom_tiny_nexysvideo #(
  // Path to a VMEM file containing the contents of the boot ROM, which will be
  // baked into the FPGA bitstream.
  parameter BootRomInitFile = "test_rom_fpga_nexysvideo.32.vmem",
  // Path to a VMEM file containing the contents of the emulated OTP, which will be
  // baked into the FPGA bitstream.
  parameter OtpCtrlMemInitFile = "otp_img_fpga_nexysvideo.vmem"
) (
  // Dedicated Pads
  inout POR_N, // Manual Pad
  inout SPI_HOST_D0, // Dedicated Pad for spi_host0_sd
  inout SPI_HOST_D1, // Dedicated Pad for spi_host0_sd
  inout SPI_HOST_D2, // Dedicated Pad for spi_host0_sd
  inout SPI_HOST_D3, // Dedicated Pad for spi_host0_sd
  inout SPI_HOST_CLK, // Dedicated Pad for spi_host0_sck
  inout SPI_HOST_CS_L, // Dedicated Pad for spi_host0_csb
  inout IOR8, // Dedicated Pad for sysrst_ctrl_aon_ec_rst_l
  inout IOR9, // Dedicated Pad for sysrst_ctrl_aon_flash_wp_l
  inout IO_CLK, // Manual Pad
  inout POR_BUTTON_N, // Manual Pad
  inout JTAG_SRST_N, // Manual Pad

  // Muxed Pads
  inout IOB7, // MIO Pad 16
  inout IOB8, // MIO Pad 17
  inout IOB9, // MIO Pad 18
  inout IOC3, // MIO Pad 25
  inout IOC4, // MIO Pad 26
  inout IOC9, // MIO Pad 31
  inout IOC10, // MIO Pad 32
  inout IOC11, // MIO Pad 33
  inout IOR0, // MIO Pad 34
  inout IOR1, // MIO Pad 35
  inout IOR2, // MIO Pad 36
  inout IOR3, // MIO Pad 37
  inout IOR4, // MIO Pad 38
  inout IOR6, // MIO Pad 40
  inout IOR7  // MIO Pad 41
);

  import top_custom_tiny_pkg::*;
  import prim_pad_wrapper_pkg::*;

  ////////////////////////////
  // Special Signal Indices //
  ////////////////////////////

  localparam int TckPadIdx = 37;
  localparam int TmsPadIdx = 34;
  localparam int TrstNPadIdx = 38;
  localparam int TdiPadIdx = 36;
  localparam int TdoPadIdx = 35;

  // DFT and Debug signal positions in the pinout.
  localparam pinmux_pkg::target_cfg_t PinmuxTargetCfg = '{
    tck_idx:           TckPadIdx,
    tms_idx:           TmsPadIdx,
    trst_idx:          TrstNPadIdx,
    tdi_idx:           TdiPadIdx,
    tdo_idx:           TdoPadIdx,
    tap_strap0_idx:    0,
    tap_strap1_idx:    0,
    dft_strap0_idx:    0,
    dft_strap1_idx:    0,
    usb_dp_idx:        0,
    usb_dn_idx:        0,
    usb_sense_idx:     0,
    // Pad types for attribute WARL behavior
    dio_pad_type: {
      BidirStd, // DIO spi_host0_csb
      BidirStd, // DIO spi_host0_sck
      BidirOd, // DIO sysrst_ctrl_aon_flash_wp_l
      BidirOd, // DIO sysrst_ctrl_aon_ec_rst_l
      BidirStd, // DIO spi_host0_sd
      BidirStd, // DIO spi_host0_sd
      BidirStd, // DIO spi_host0_sd
      BidirStd  // DIO spi_host0_sd
    },
    mio_pad_type: {
      BidirStd, // MIO Pad 41
      BidirStd, // MIO Pad 40
      BidirStd, // MIO Pad 39
      BidirStd, // MIO Pad 38
      BidirStd, // MIO Pad 37
      BidirStd, // MIO Pad 36
      BidirStd, // MIO Pad 35
      BidirStd, // MIO Pad 34
      BidirOd, // MIO Pad 33
      BidirOd, // MIO Pad 32
      BidirStd, // MIO Pad 31
      BidirStd, // MIO Pad 30
      BidirStd, // MIO Pad 29
      BidirStd, // MIO Pad 28
      BidirStd, // MIO Pad 27
      BidirStd, // MIO Pad 26
      BidirStd, // MIO Pad 25
      BidirStd, // MIO Pad 24
      BidirStd, // MIO Pad 23
      BidirStd, // MIO Pad 22
      BidirOd, // MIO Pad 21
      BidirOd, // MIO Pad 20
      BidirOd, // MIO Pad 19
      BidirOd, // MIO Pad 18
      BidirStd, // MIO Pad 17
      BidirStd, // MIO Pad 16
      BidirStd, // MIO Pad 15
      BidirStd, // MIO Pad 14
      BidirStd, // MIO Pad 13
      BidirStd, // MIO Pad 12
      BidirStd, // MIO Pad 11
      BidirStd, // MIO Pad 10
      BidirStd, // MIO Pad 9
      BidirOd, // MIO Pad 8
      BidirOd, // MIO Pad 7
      BidirOd, // MIO Pad 6
      BidirStd, // MIO Pad 5
      BidirStd, // MIO Pad 4
      BidirStd, // MIO Pad 3
      BidirStd, // MIO Pad 2
      BidirStd, // MIO Pad 1
      BidirStd  // MIO Pad 0
    }
  };

  ////////////////////////
  // Signal definitions //
  ////////////////////////


  pad_attr_t [pinmux_reg_pkg::NMioPads-1:0] mio_attr;
  pad_attr_t [pinmux_reg_pkg::NDioPads-1:0] dio_attr;
  logic [pinmux_reg_pkg::NMioPads-1:0] mio_out;
  logic [pinmux_reg_pkg::NMioPads-1:0] mio_oe;
  logic [pinmux_reg_pkg::NMioPads-1:0] mio_in;
  logic [pinmux_reg_pkg::NMioPads-1:0] mio_in_raw;
  logic [pinmux_reg_pkg::NDioPads-1:0] dio_out;
  logic [pinmux_reg_pkg::NDioPads-1:0] dio_oe;
  logic [pinmux_reg_pkg::NDioPads-1:0] dio_in;

  logic unused_mio_in_raw;
  assign unused_mio_in_raw = ^mio_in_raw;

  // Manual pads
  logic manual_in_por_n, manual_out_por_n, manual_oe_por_n;
  logic manual_in_io_clk, manual_out_io_clk, manual_oe_io_clk;
  logic manual_in_por_button_n, manual_out_por_button_n, manual_oe_por_button_n;
  logic manual_in_jtag_srst_n, manual_out_jtag_srst_n, manual_oe_jtag_srst_n;

  pad_attr_t manual_attr_por_n;
  pad_attr_t manual_attr_io_clk;
  pad_attr_t manual_attr_por_button_n;
  pad_attr_t manual_attr_jtag_srst_n;

  /////////////////////////
  // Stubbed pad tie-off //
  /////////////////////////

  // Only signals going to non-custom pads need to be tied off.
  logic [58:0] unused_sig;
  assign mio_in[0] = 1'b0;
  assign mio_in_raw[0] = 1'b0;
  assign unused_sig[15] = mio_out[0] ^ mio_oe[0];
  assign mio_in[1] = 1'b0;
  assign mio_in_raw[1] = 1'b0;
  assign unused_sig[16] = mio_out[1] ^ mio_oe[1];
  assign mio_in[2] = 1'b0;
  assign mio_in_raw[2] = 1'b0;
  assign unused_sig[17] = mio_out[2] ^ mio_oe[2];
  assign mio_in[3] = 1'b0;
  assign mio_in_raw[3] = 1'b0;
  assign unused_sig[18] = mio_out[3] ^ mio_oe[3];
  assign mio_in[4] = 1'b0;
  assign mio_in_raw[4] = 1'b0;
  assign unused_sig[19] = mio_out[4] ^ mio_oe[4];
  assign mio_in[5] = 1'b0;
  assign mio_in_raw[5] = 1'b0;
  assign unused_sig[20] = mio_out[5] ^ mio_oe[5];
  assign mio_in[6] = 1'b0;
  assign mio_in_raw[6] = 1'b0;
  assign unused_sig[21] = mio_out[6] ^ mio_oe[6];
  assign mio_in[7] = 1'b0;
  assign mio_in_raw[7] = 1'b0;
  assign unused_sig[22] = mio_out[7] ^ mio_oe[7];
  assign mio_in[8] = 1'b0;
  assign mio_in_raw[8] = 1'b0;
  assign unused_sig[23] = mio_out[8] ^ mio_oe[8];
  assign mio_in[9] = 1'b0;
  assign mio_in_raw[9] = 1'b0;
  assign unused_sig[24] = mio_out[9] ^ mio_oe[9];
  assign mio_in[10] = 1'b0;
  assign mio_in_raw[10] = 1'b0;
  assign unused_sig[25] = mio_out[10] ^ mio_oe[10];
  assign mio_in[11] = 1'b0;
  assign mio_in_raw[11] = 1'b0;
  assign unused_sig[26] = mio_out[11] ^ mio_oe[11];
  assign mio_in[12] = 1'b0;
  assign mio_in_raw[12] = 1'b0;
  assign unused_sig[27] = mio_out[12] ^ mio_oe[12];
  assign mio_in[13] = 1'b0;
  assign mio_in_raw[13] = 1'b0;
  assign unused_sig[28] = mio_out[13] ^ mio_oe[13];
  assign mio_in[14] = 1'b0;
  assign mio_in_raw[14] = 1'b0;
  assign unused_sig[29] = mio_out[14] ^ mio_oe[14];
  assign mio_in[15] = 1'b0;
  assign mio_in_raw[15] = 1'b0;
  assign unused_sig[30] = mio_out[15] ^ mio_oe[15];
  assign mio_in[19] = 1'b0;
  assign mio_in_raw[19] = 1'b0;
  assign unused_sig[34] = mio_out[19] ^ mio_oe[19];
  assign mio_in[20] = 1'b0;
  assign mio_in_raw[20] = 1'b0;
  assign unused_sig[35] = mio_out[20] ^ mio_oe[20];
  assign mio_in[21] = 1'b0;
  assign mio_in_raw[21] = 1'b0;
  assign unused_sig[36] = mio_out[21] ^ mio_oe[21];
  assign mio_in[22] = 1'b0;
  assign mio_in_raw[22] = 1'b0;
  assign unused_sig[37] = mio_out[22] ^ mio_oe[22];
  assign mio_in[23] = 1'b0;
  assign mio_in_raw[23] = 1'b0;
  assign unused_sig[38] = mio_out[23] ^ mio_oe[23];
  assign mio_in[24] = 1'b0;
  assign mio_in_raw[24] = 1'b0;
  assign unused_sig[39] = mio_out[24] ^ mio_oe[24];
  assign mio_in[27] = 1'b0;
  assign mio_in_raw[27] = 1'b0;
  assign unused_sig[42] = mio_out[27] ^ mio_oe[27];
  assign mio_in[28] = 1'b0;
  assign mio_in_raw[28] = 1'b0;
  assign unused_sig[43] = mio_out[28] ^ mio_oe[28];
  assign mio_in[29] = 1'b0;
  assign mio_in_raw[29] = 1'b0;
  assign unused_sig[44] = mio_out[29] ^ mio_oe[29];
  assign mio_in[30] = 1'b0;
  assign mio_in_raw[30] = 1'b0;
  assign unused_sig[45] = mio_out[30] ^ mio_oe[30];
  assign mio_in[39] = 1'b0;
  assign mio_in_raw[39] = 1'b0;
  assign unused_sig[54] = mio_out[39] ^ mio_oe[39];

  //////////////////////
  // Padring Instance //
  //////////////////////

  ast_pkg::ast_clks_t ast_base_clks;


  padring #(
    // Padring specific counts may differ from pinmux config due
    // to custom, stubbed or added pads.
    .NDioPads(12),
    .NMioPads(15),
    .DioPadType ({
      InputStd, // JTAG_SRST_N
      InputStd, // POR_BUTTON_N
      InputStd, // IO_CLK
      BidirOd, // IOR9
      BidirOd, // IOR8
      BidirStd, // SPI_HOST_CS_L
      BidirStd, // SPI_HOST_CLK
      BidirStd, // SPI_HOST_D3
      BidirStd, // SPI_HOST_D2
      BidirStd, // SPI_HOST_D1
      BidirStd, // SPI_HOST_D0
      InputStd  // POR_N
    }),
    .MioPadType ({
      BidirStd, // IOR7
      BidirStd, // IOR6
      BidirStd, // IOR4
      BidirStd, // IOR3
      BidirStd, // IOR2
      BidirStd, // IOR1
      BidirStd, // IOR0
      BidirOd, // IOC11
      BidirOd, // IOC10
      BidirStd, // IOC9
      BidirStd, // IOC4
      BidirStd, // IOC3
      BidirOd, // IOB9
      BidirStd, // IOB8
      BidirStd  // IOB7
    })
  ) u_padring (
  // This is only used for scan and DFT purposes
    .clk_scan_i   ( 1'b0                  ),
    .scanmode_i   ( prim_mubi_pkg::MuBi4False ),
    .dio_in_raw_o ( ),
    // Chip IOs
    .dio_pad_io ({
      JTAG_SRST_N,
      POR_BUTTON_N,
      IO_CLK,
      IOR9,
      IOR8,
      SPI_HOST_CS_L,
      SPI_HOST_CLK,
      SPI_HOST_D3,
      SPI_HOST_D2,
      SPI_HOST_D1,
      SPI_HOST_D0,
      POR_N
    }),

    .mio_pad_io ({
      IOR7,
      IOR6,
      IOR4,
      IOR3,
      IOR2,
      IOR1,
      IOR0,
      IOC11,
      IOC10,
      IOC9,
      IOC4,
      IOC3,
      IOB9,
      IOB8,
      IOB7
    }),

    // Core-facing
    .dio_in_o ({
        manual_in_jtag_srst_n,
        manual_in_por_button_n,
        manual_in_io_clk,
        dio_in[DioSysrstCtrlAonFlashWpL],
        dio_in[DioSysrstCtrlAonEcRstL],
        dio_in[DioSpiHost0Csb],
        dio_in[DioSpiHost0Sck],
        dio_in[DioSpiHost0Sd3],
        dio_in[DioSpiHost0Sd2],
        dio_in[DioSpiHost0Sd1],
        dio_in[DioSpiHost0Sd0],
        manual_in_por_n
      }),
    .dio_out_i ({
        manual_out_jtag_srst_n,
        manual_out_por_button_n,
        manual_out_io_clk,
        dio_out[DioSysrstCtrlAonFlashWpL],
        dio_out[DioSysrstCtrlAonEcRstL],
        dio_out[DioSpiHost0Csb],
        dio_out[DioSpiHost0Sck],
        dio_out[DioSpiHost0Sd3],
        dio_out[DioSpiHost0Sd2],
        dio_out[DioSpiHost0Sd1],
        dio_out[DioSpiHost0Sd0],
        manual_out_por_n
      }),
    .dio_oe_i ({
        manual_oe_jtag_srst_n,
        manual_oe_por_button_n,
        manual_oe_io_clk,
        dio_oe[DioSysrstCtrlAonFlashWpL],
        dio_oe[DioSysrstCtrlAonEcRstL],
        dio_oe[DioSpiHost0Csb],
        dio_oe[DioSpiHost0Sck],
        dio_oe[DioSpiHost0Sd3],
        dio_oe[DioSpiHost0Sd2],
        dio_oe[DioSpiHost0Sd1],
        dio_oe[DioSpiHost0Sd0],
        manual_oe_por_n
      }),
    .dio_attr_i ({
        manual_attr_jtag_srst_n,
        manual_attr_por_button_n,
        manual_attr_io_clk,
        dio_attr[DioSysrstCtrlAonFlashWpL],
        dio_attr[DioSysrstCtrlAonEcRstL],
        dio_attr[DioSpiHost0Csb],
        dio_attr[DioSpiHost0Sck],
        dio_attr[DioSpiHost0Sd3],
        dio_attr[DioSpiHost0Sd2],
        dio_attr[DioSpiHost0Sd1],
        dio_attr[DioSpiHost0Sd0],
        manual_attr_por_n
      }),

    .mio_in_o ({
        mio_in[41:40],
        mio_in[38:31],
        mio_in[26:25],
        mio_in[18:16]
      }),
    .mio_out_i ({
        mio_out[41:40],
        mio_out[38:31],
        mio_out[26:25],
        mio_out[18:16]
      }),
    .mio_oe_i ({
        mio_oe[41:40],
        mio_oe[38:31],
        mio_oe[26:25],
        mio_oe[18:16]
      }),
    .mio_attr_i ({
        mio_attr[41:40],
        mio_attr[38:31],
        mio_attr[26:25],
        mio_attr[18:16]
      }),
    .mio_in_raw_o ({
        mio_in_raw[41:40],
        mio_in_raw[38:31],
        mio_in_raw[26:25],
        mio_in_raw[18:16]
      })
  );





  //////////////////////////////////
  // AST - Common for all targets //
  //////////////////////////////////

  // pwrmgr interface
  pwrmgr_pkg::pwr_ast_req_t base_ast_pwr;
  pwrmgr_pkg::pwr_ast_rsp_t ast_base_pwr;

  // assorted ast status
  ast_pkg::ast_pwst_t ast_pwst;
  ast_pkg::ast_pwst_t ast_pwst_h;

  // TLUL interface
  tlul_pkg::tl_h2d_t base_ast_bus;
  tlul_pkg::tl_d2h_t ast_base_bus;

  // synchronization clocks / rests
  clkmgr_pkg::clkmgr_out_t clkmgr_aon_clocks;
  rstmgr_pkg::rstmgr_out_t rstmgr_aon_resets;

  // external clock
  logic ext_clk;

  // monitored clock
  logic sck_monitor;

  // observe interface
  logic [7:0] fla_obs;
  logic [7:0] otp_obs;
  ast_pkg::ast_obs_ctrl_t obs_ctrl;

  // otp power sequence
  otp_ctrl_pkg::otp_ast_req_t otp_ctrl_otp_ast_pwr_seq;
  otp_ctrl_pkg::otp_ast_rsp_t otp_ctrl_otp_ast_pwr_seq_h;

  logic usb_ref_pulse;
  logic usb_ref_val;

  // adc
  ast_pkg::adc_ast_req_t adc_req;
  ast_pkg::adc_ast_rsp_t adc_rsp;

  // entropy source interface
  // The entropy source pacakge definition should eventually be moved to es
  entropy_src_pkg::entropy_src_rng_req_t es_rng_req;
  entropy_src_pkg::entropy_src_rng_rsp_t es_rng_rsp;
  logic es_rng_fips;

  // entropy distribution network
  edn_pkg::edn_req_t ast_edn_edn_req;
  edn_pkg::edn_rsp_t ast_edn_edn_rsp;

  // alerts interface
  ast_pkg::ast_alert_rsp_t ast_alert_rsp;
  ast_pkg::ast_alert_req_t ast_alert_req;

  // Flash connections
  prim_mubi_pkg::mubi4_t flash_bist_enable;
  logic flash_power_down_h;
  logic flash_power_ready_h;

  // clock bypass req/ack
  prim_mubi_pkg::mubi4_t io_clk_byp_req;
  prim_mubi_pkg::mubi4_t io_clk_byp_ack;
  prim_mubi_pkg::mubi4_t all_clk_byp_req;
  prim_mubi_pkg::mubi4_t all_clk_byp_ack;
  prim_mubi_pkg::mubi4_t hi_speed_sel;
  prim_mubi_pkg::mubi4_t div_step_down_req;

  // DFT connections
  logic scan_en;
  lc_ctrl_pkg::lc_tx_t dft_en;
  pinmux_pkg::dft_strap_test_req_t dft_strap_test;

  // Debug connections
  logic [ast_pkg::Ast2PadOutWidth-1:0] ast2pinmux;
  logic [ast_pkg::Pad2AstInWidth-1:0] pad2ast;

  // Jitter enable
  prim_mubi_pkg::mubi4_t jen;

  // reset domain connections
  import rstmgr_pkg::PowerDomains;
  import rstmgr_pkg::DomainAonSel;
  import rstmgr_pkg::Domain0Sel;

  // Memory configuration connections
  ast_pkg::spm_rm_t ast_ram_1p_cfg;
  ast_pkg::spm_rm_t ast_rf_cfg;
  ast_pkg::spm_rm_t ast_rom_cfg;
  ast_pkg::dpm_rm_t ast_ram_2p_fcfg;
  ast_pkg::dpm_rm_t ast_ram_2p_lcfg;

  prim_ram_1p_pkg::ram_1p_cfg_t ram_1p_cfg;
  prim_ram_2p_pkg::ram_2p_cfg_t ram_2p_cfg;
  prim_rom_pkg::rom_cfg_t rom_cfg;

  // conversion from ast structure to memory centric structures
  assign ram_1p_cfg = '{
    ram_cfg: '{
                cfg_en: ast_ram_1p_cfg.marg_en,
                cfg:    ast_ram_1p_cfg.marg
              },
    rf_cfg:  '{
                cfg_en: ast_rf_cfg.marg_en,
                cfg:    ast_rf_cfg.marg
              }
  };

  assign ram_2p_cfg = '{
    a_ram_fcfg: '{
                   cfg_en: ast_ram_2p_fcfg.marg_en_a,
                   cfg:    ast_ram_2p_fcfg.marg_a
                 },
    a_ram_lcfg: '{
                   cfg_en: ast_ram_2p_lcfg.marg_en_a,
                   cfg:    ast_ram_2p_lcfg.marg_a
                 },
    b_ram_fcfg: '{
                   cfg_en: ast_ram_2p_fcfg.marg_en_b,
                   cfg:    ast_ram_2p_fcfg.marg_b
                 },
    b_ram_lcfg: '{
                   cfg_en: ast_ram_2p_lcfg.marg_en_b,
                   cfg:    ast_ram_2p_lcfg.marg_b
                 }
  };

  assign rom_cfg = '{
    cfg_en: ast_rom_cfg.marg_en,
    cfg: ast_rom_cfg.marg
  };


  //////////////////////////////////
  // AST - Custom for targets     //
  //////////////////////////////////


  assign ast_base_pwr.main_pok = ast_pwst.main_pok;

  logic [rstmgr_pkg::PowerDomains-1:0] por_n;
  assign por_n = {ast_pwst.main_pok, ast_pwst.aon_pok};

  // TODO: Hook this up when FPGA pads are updated
  assign ext_clk = '0;
  assign pad2ast = '0;

  logic clk_main, clk_usb_48mhz, clk_aon, rst_n, srst_n;
  clkgen_xil7series # (
    .AddClkBuf(0)
  ) clkgen (
    .clk_i(manual_in_io_clk),
    .rst_ni(manual_in_por_n),
    .srst_ni(srst_n),
    .clk_main_o(clk_main),
    .clk_48MHz_o(clk_usb_48mhz),
    .clk_aon_o(clk_aon),
    .rst_no(rst_n)
  );

  logic [31:0] fpga_info;
  usr_access_xil7series u_info (
    .info_o(fpga_info)
  );

  ast_pkg::clks_osc_byp_t clks_osc_byp;
  assign clks_osc_byp = '{
    usb: clk_usb_48mhz,
    sys: clk_main,
    io:  clk_main,
    aon: clk_aon
  };


  prim_mubi_pkg::mubi4_t ast_init_done;

  ast #(
    .EntropyStreams(ast_pkg::EntropyStreams),
    .AdcChannels(ast_pkg::AdcChannels),
    .AdcDataWidth(ast_pkg::AdcDataWidth),
    .UsbCalibWidth(ast_pkg::UsbCalibWidth),
    .Ast2PadOutWidth(ast_pkg::Ast2PadOutWidth),
    .Pad2AstInWidth(ast_pkg::Pad2AstInWidth)
  ) u_ast (
    // external POR
    .por_ni                ( rst_n ),

    // USB IO Pull-up Calibration Setting
    .usb_io_pu_cal_o       ( ),

    // clocks' oschillator bypass for FPGA
    .clk_osc_byp_i         ( clks_osc_byp ),

    // adc
    .adc_a0_ai             ( '0 ),
    .adc_a1_ai             ( '0 ),

    // Direct short to PAD
    .ast2pad_t0_ao         (  ),
    .ast2pad_t1_ao         (  ),

    // clocks and resets supplied for detection
    .sns_clks_i            ( clkmgr_aon_clocks    ),
    .sns_rsts_i            ( rstmgr_aon_resets    ),
    .sns_spi_ext_clk_i     ( sck_monitor          ),
    // tlul
    .tl_i                  ( base_ast_bus ),
    .tl_o                  ( ast_base_bus ),
    // init done indication
    .ast_init_done_o       ( ast_init_done ),
    // buffered clocks & resets
    .clk_ast_tlul_i (clkmgr_aon_clocks.clk_io_div4_infra),
    .clk_ast_adc_i (clkmgr_aon_clocks.clk_aon_peri),
    .clk_ast_alert_i (clkmgr_aon_clocks.clk_io_div4_secure),
    .clk_ast_es_i (clkmgr_aon_clocks.clk_main_secure),
    .clk_ast_rng_i (clkmgr_aon_clocks.clk_main_secure),
    .clk_ast_usb_i (clkmgr_aon_clocks.clk_usb_peri),
    .rst_ast_tlul_ni (rstmgr_aon_resets.rst_lc_io_div4_n[rstmgr_pkg::Domain0Sel]),
    .rst_ast_adc_ni (rstmgr_aon_resets.rst_lc_aon_n[rstmgr_pkg::DomainAonSel]),
    .rst_ast_alert_ni (rstmgr_aon_resets.rst_lc_io_div4_n[rstmgr_pkg::Domain0Sel]),
    .rst_ast_es_ni (rstmgr_aon_resets.rst_lc_n[rstmgr_pkg::Domain0Sel]),
    .rst_ast_rng_ni (rstmgr_aon_resets.rst_lc_n[rstmgr_pkg::Domain0Sel]),
    .rst_ast_usb_ni (rstmgr_aon_resets.rst_usb_n[rstmgr_pkg::Domain0Sel]),
    .clk_ast_ext_i         ( ext_clk ),

    // pok test for FPGA
    .vcc_supp_i            ( 1'b1 ),
    .vcaon_supp_i          ( 1'b1 ),
    .vcmain_supp_i         ( 1'b1 ),
    .vioa_supp_i           ( 1'b1 ),
    .viob_supp_i           ( 1'b1 ),
    // pok
    .ast_pwst_o            ( ast_pwst ),
    .ast_pwst_h_o          ( ast_pwst_h ),
    // main regulator
    .main_env_iso_en_i     ( base_ast_pwr.pwr_clamp_env ),
    .main_pd_ni            ( base_ast_pwr.main_pd_n ),
    // pdm control (flash)/otp
    .flash_power_down_h_o  ( flash_power_down_h ),
    .flash_power_ready_h_o ( flash_power_ready_h ),
    .otp_power_seq_i       ( otp_ctrl_otp_ast_pwr_seq ),
    .otp_power_seq_h_o     ( otp_ctrl_otp_ast_pwr_seq_h ),
    // system source clock
    .clk_src_sys_en_i      ( base_ast_pwr.core_clk_en ),
    // need to add function in clkmgr
    .clk_src_sys_jen_i     ( jen ),
    .clk_src_sys_o         ( ast_base_clks.clk_sys  ),
    .clk_src_sys_val_o     ( ast_base_pwr.core_clk_val ),
    // aon source clock
    .clk_src_aon_o         ( ast_base_clks.clk_aon ),
    .clk_src_aon_val_o     ( ast_base_pwr.slow_clk_val ),
    // io source clock
    .clk_src_io_en_i       ( base_ast_pwr.io_clk_en ),
    .clk_src_io_o          ( ast_base_clks.clk_io ),
    .clk_src_io_val_o      ( ast_base_pwr.io_clk_val ),
    .clk_src_io_48m_o      ( div_step_down_req ),
    // usb source clock
    .usb_ref_pulse_i       ( usb_ref_pulse ),
    .usb_ref_val_i         ( usb_ref_val ),
    .clk_src_usb_en_i      ( base_ast_pwr.usb_clk_en ),
    .clk_src_usb_o         ( ast_base_clks.clk_usb ),
    .clk_src_usb_val_o     ( ast_base_pwr.usb_clk_val ),
    // adc
    .adc_pd_i              ( adc_req.pd ),
    .adc_chnsel_i          ( adc_req.channel_sel ),
    .adc_d_o               ( adc_rsp.data ),
    .adc_d_val_o           ( adc_rsp.data_valid ),
    // rng
    .rng_en_i              ( es_rng_req.rng_enable ),
    .rng_fips_i            ( es_rng_fips ),
    .rng_val_o             ( es_rng_rsp.rng_valid ),
    .rng_b_o               ( es_rng_rsp.rng_b ),
    // entropy
    .entropy_rsp_i         ( ast_edn_edn_rsp ),
    .entropy_req_o         ( ast_edn_edn_req ),
    // alerts
    .alert_rsp_i           ( ast_alert_rsp  ),
    .alert_req_o           ( ast_alert_req  ),
    // dft
    .dft_strap_test_i      ( dft_strap_test   ),
    .lc_dft_en_i           ( dft_en           ),
    .fla_obs_i             ( fla_obs ),
    .otp_obs_i             ( otp_obs ),
    .otm_obs_i             ( '0 ),
    .usb_obs_i             ( usb_diff_rx_obs ),
    .obs_ctrl_o            ( obs_ctrl ),
    // pinmux related
    .padmux2ast_i          ( pad2ast    ),
    .ast2padmux_o          ( ast2pinmux ),
    .ext_freq_is_96m_i     ( hi_speed_sel ),
    .all_clk_byp_req_i     ( all_clk_byp_req  ),
    .all_clk_byp_ack_o     ( all_clk_byp_ack  ),
    .io_clk_byp_req_i      ( io_clk_byp_req   ),
    .io_clk_byp_ack_o      ( io_clk_byp_ack   ),
    .flash_bist_en_o       ( flash_bist_enable ),
    // Memory configuration connections
    .dpram_rmf_o           ( ast_ram_2p_fcfg ),
    .dpram_rml_o           ( ast_ram_2p_lcfg ),
    .spram_rm_o            ( ast_ram_1p_cfg  ),
    .sprgf_rm_o            ( ast_rf_cfg      ),
    .sprom_rm_o            ( ast_rom_cfg     ),
    // scan
    .dft_scan_md_o         ( scanmode ),
    .scan_shift_en_o       ( scan_en ),
    .scan_reset_no         ( scan_rst_n )
  );




  //////////////////
  // PLL for FPGA //
  //////////////////

  assign manual_attr_io_clk = '0;
  assign manual_out_io_clk = 1'b0;
  assign manual_oe_io_clk = 1'b0;
  assign manual_attr_por_n = '0;
  assign manual_out_por_n = 1'b0;
  assign manual_oe_por_n = 1'b0;
  assign manual_attr_por_button_n = '0;
  assign manual_out_por_button_n = 1'b0;
  assign manual_oe_por_button_n = 1'b0;

  assign srst_n = ~manual_in_por_button_n & manual_in_jtag_srst_n;


  //////////////////////
  // Top-level design //
  //////////////////////

  // the rst_ni pin only goes to AST
  // the rest of the logic generates reset based on the 'pok' signal.
  // for verilator purposes, make these two the same.
  prim_mubi_pkg::mubi4_t lc_clk_bypass;   // TODO Tim

// TODO: align this with ASIC version to minimize the duplication.
// Also need to add AST simulation and FPGA emulation models for things like entropy source -
// otherwise Verilator / FPGA will hang.
  top_custom_tiny #(
    .OtpCtrlMemInitFile(OtpCtrlMemInitFile),
    .RomCtrlBootRomInitFile(BootRomInitFile),
    .RvCoreIbexRegFile(ibex_pkg::RegFileFPGA),
    .RvCoreIbexPipeLine(1),
    .RvCoreIbexSecureIbex(0),
    .SramCtrlRetAonInstrExec(0),
    .SramCtrlMainInstrExec(1),
    .PinmuxAonTargetCfg(PinmuxTargetCfg)
  ) top_custom_tiny (
    .por_n_i                      ( por_n                 ),
    .clk_main_i                   ( ast_base_clks.clk_sys ),
    .clk_io_i                     ( ast_base_clks.clk_io  ),
    .clk_usb_i                    ( ast_base_clks.clk_usb ),
    .clk_aon_i                    ( ast_base_clks.clk_aon ),
    .clks_ast_o                   ( clkmgr_aon_clocks     ),
    .clk_main_jitter_en_o         ( jen                   ),
    .rsts_ast_o                   ( rstmgr_aon_resets     ),
    .pwrmgr_ast_req_o             ( base_ast_pwr          ),
    .pwrmgr_ast_rsp_i             ( ast_base_pwr          ),
    .obs_ctrl_i                   ( obs_ctrl              ),
    .flash_bist_enable_i          ( flash_bist_enable     ),
    .flash_power_down_h_i         ( 1'b0                  ),
    .flash_power_ready_h_i        ( 1'b1                  ),
    .flash_obs_o                  ( flash_obs             ),
    .io_clk_byp_req_o             ( io_clk_byp_req        ),
    .io_clk_byp_ack_i             ( io_clk_byp_ack        ),
    .all_clk_byp_req_o            ( all_clk_byp_req       ),
    .all_clk_byp_ack_i            ( all_clk_byp_ack       ),
    .hi_speed_sel_o               ( hi_speed_sel          ),
    .div_step_down_req_i          ( div_step_down_req     ),
    .fpga_info_i                  ( fpga_info             ),
    .ast_tl_req_o                 ( base_ast_bus               ),
    .ast_tl_rsp_i                 ( ast_base_bus               ),
    .otp_ctrl_otp_ast_pwr_seq_o   ( otp_ctrl_otp_ast_pwr_seq   ),
    .otp_ctrl_otp_ast_pwr_seq_h_i ( otp_ctrl_otp_ast_pwr_seq_h ),
    .otp_obs_o                    ( otp_obs                    ),
    .sensor_ctrl_ast_alert_req_i  ( ast_alert_req              ),
    .sensor_ctrl_ast_alert_rsp_o  ( ast_alert_rsp              ),
    .sensor_ctrl_ast_status_i     ( ast_pwst.io_pok            ),
    .ast2pinmux_i                 ( ast2pinmux                 ),
    .calib_rdy_i                  ( ast_init_done              ),
    .ast_init_done_i              ( ast_init_done              ),

    // Multiplexed I/O
    .mio_in_i        ( mio_in   ),
    .mio_out_o       ( mio_out  ),
    .mio_oe_o        ( mio_oe   ),

    // Dedicated I/O
    .dio_in_i        ( dio_in   ),
    .dio_out_o       ( dio_out  ),
    .dio_oe_o        ( dio_oe   ),

    // Pad attributes
    .mio_attr_o      ( mio_attr      ),
    .dio_attr_o      ( dio_attr      ),

    // Memory attributes
    .ram_1p_cfg_i    ( '0 ),
    .ram_2p_cfg_i    ( '0 ),
    .rom_cfg_i       ( '0 ),

    // DFT signals
    .dft_hold_tap_sel_i ( '0               ),
    .scan_rst_ni        ( 1'b1             ),
    .scan_en_i          ( 1'b0             ),
    .scanmode_i         ( prim_mubi_pkg::MuBi4False )
  );


endmodule : chip_custom_tiny_nexysvideo
