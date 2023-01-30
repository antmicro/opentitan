// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// KMAC dummy replacement

module kmac_dummy
  import kmac_pkg::*;
(
  input  logic clk_i,
  input  logic rst_ni,

  input  tlul_pkg::tl_h2d_t tl_i,
  output tlul_pkg::tl_d2h_t tl_o,

  // KeyMgr KDF data path
  input  app_req_t [NumAppIntf-1:0] app_i,
  output app_rsp_t [NumAppIntf-1:0] app_o,

  // Idle signal
  output prim_mubi_pkg::mubi4_t idle_o
);

  // Accept data every 2^N clocks
  reg [2:0] cnt;
  always @(posedge clk_i)
      cnt <= cnt + 1;
  
  genvar i;
  generate for (i=0; i<NumAppIntf; i=i+1) begin

    // Detect falling edge of last and pulse done
    reg is_last;
    always @(posedge clk_i)
        if (!rst_ni)  is_last <= 0;
        else          is_last <= app_i[i].last;
  
    reg done;
    always @(posedge clk_i)
        if (!rst_ni)  done <= 0;
        else          done <= (is_last & ~app_i[i].last);
  
    assign app_o[i] = '{
        ready:          app_i[i].valid & (cnt == 0),
        done:           done,
        digest_share0:  AppDigestW'(32'hDEADBEEF),
        digest_share1:  AppDigestW'(32'hFACEBEEF),
        error:          1'b0
    };

  end endgenerate

  // Idle control
  assign idle_o = prim_mubi_pkg::MuBi4True;

endmodule
