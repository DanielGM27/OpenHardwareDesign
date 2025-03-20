module regfile #(

parameter int XLen = 32,

parameter int NReg = 32,

localparam int NRegWidth = $clog2(NReg)

) (

input logic clk_i,                

input logic rst_ni,               

input logic [NRegWidth-1:0] a1_i, 

input logic [NRegWidth-1:0] a2_i, 

input logic [NRegWidth-1:0] a3_i, 

input logic we3_i,                

input logic [XLen-1:0] wd3_i,     

output logic [XLen-1:0] rd1_o,    

output logic [XLen-1:0] rd2_o     

);

// Register file (unpacked array)

logic [XLen-1:0] rf[NReg];

// (...)

   assign rd1_o = rf[a1_i];

   assign rd2_o = rf[a2_i];

  

   integer i;

   always @(posedge clk_i) begin

      if (rst_ni) begin

        for (i = 0; i < NReg; i = i + 1) begin

            rf[i] <= 0;

        end

      end else begin

        if (we3_i) rf[a3_i] <= wd3_i;

      end
   end

endmodule