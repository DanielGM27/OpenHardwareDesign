module ram #(

localparam int NPosWidth = $clog2(NPos),

parameter int XLen = 32,

parameter int NPos = 1024
) (
input logic clk_i,
input logic [NPosWidth-1:0] a_i,
input logic [XLen-1:0] wd_i,
input logic we_i,
output logic [XLen-1:0] rd_o
);

// Memory (unpacked array)

logic [XLen-1:0] mem[NPos];

 

always @ (posedge clk_i) begin
    if (we_i)
        mem[a_i] = wd_i;
    else
        mem[a_i] = mem[a_i];
end

assign rd_o = mem[a_i];

endmodule
