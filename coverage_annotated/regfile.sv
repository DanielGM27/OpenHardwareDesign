//      // verilator_coverage annotation
        module regfile #(
        
          parameter int XLen = 32,
        
          parameter int NReg = 32,
        
          localparam int NRegWidth = $clog2(NReg)
        
        ) (
        
 000296   input logic clk_i,
%000001   input logic rst_ni,
~000063   input logic [NRegWidth-1:0] a1_i,
 000036   input logic [NRegWidth-1:0] a2_i,
~000063   input logic [NRegWidth-1:0] a3_i,
 000128   input logic we3_i,
 000042   input logic [XLen-1:0] wd3_i,
 000075   output logic [XLen-1:0] rd1_o,
 000031   output logic [XLen-1:0] rd2_o
        );
        
          // Register file (unpacked array)
        
          logic [XLen-1:0] rf[NReg];
        
          integer i;
 000148   always @(posedge clk_i or negedge rst_ni) begin
 000138     if (!rst_ni) begin
 000320       for (i = 0; i < NReg; i = i + 1) begin
 000320         rf[i] = 0;
              end
 000138     end else begin
 000074       if (we3_i) begin
 000064         rf[a3_i] = wd3_i;
              end
            end
          end
        
          assign rd1_o = (a1_i == '0) ? '0 : rf[a1_i];
          assign rd2_o = (a2_i == '0) ? '0 : rf[a2_i];
        
        endmodule
        
