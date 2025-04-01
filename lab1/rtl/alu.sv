module alu #(
    parameter int XLen = 32,
    parameter int NOps = 5,
    localparam int NOpsWidth = $clog2(NOps)) 
(
    input logic [XLen-1:0] a_i,
    input logic [XLen-1:0] b_i,
    input logic [NOpsWidth-1:0] alu_control_i,
    output logic [XLen-1:0] result_o,
    output logic zero_o
);

    logic overflow;
    logic [XLen-1:0]sum;
    logic cout;
    logic [XLen-1:0] invb;

assign invb = alu_control_i[0] ? ~b_i : b_i;

assign {cout, sum} = a_i + invb + alu_control_i[0];

assign overflow = ( ~(alu_control_i[0] ^ b_i[XLen-1] ^ a_i[XLen-1]) && (a_i[XLen-1] ^ sum[XLen-1]) && ~alu_control_i[1] );

always_comb begin
    case(alu_control_i)
        3'b000: result_o = sum;
        3'b001: result_o = sum;
        3'b010: result_o = a_i & b_i;
        3'b011: result_o = a_i | b_i;
        3'b101: result_o = sum[XLen-1] ^ overflow;
        default: result_o = '0;
    endcase  
end

assign zero_o = (result_o == 0)? 1 : 0;

endmodule
