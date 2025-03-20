module alu #(
    parameter int XLEN = 32,
    parameter int NOPS = 5,
    localparam int NOPS_LOG = $clog2(NOPS)) 
(
    input logic [XLEN-1:0] a,
    input logic [XLEN-1:0] b,
    input logic [NOPS_LOG-1:0] alucontrol,
    output logic [XLEN-1:0] result,
    output logic zero
);

    logic overflow;
    logic [XLEN-1:0]sum;
    logic cout;
    logic [XLEN-1:0] invb;

always_comb
    invb = alucontrol[0] ? b : ~b;

always_comb begin
    case (alucontrol[0])
        0: {cout, sum} = a + b;
        1: sum = a + invb + 1;
        default: sum = a + b;
    endcase
end

always_comb begin
    overflow = ( ~(alucontrol[0] ^ b[XLEN-1] ^ a[XLEN-1]) && (a[XLEN-1] ^ sum[XLEN-1]) && ~alucontrol[1] )
end



always_comb begin
    case (alucontrol)
        3'b000: result = sum;
        3'b001: result = sum;
        3'b010: result = a && b;
        3'b011: result = a || b;
        3'b101: result = sum[XLEN-1] ^ overflow;
        default: 
    endcase
    
end

endmodule