module rv32i_multicycle #(
    parameter int XLen = 32,
    parameter int ILen = 32
) (
    logic clk_i;
    logic rst_ni;
);

logic [ILen-1:0] instruction;

sign_extend #(
    .ILen(ILen)
)
sign_extend_i (
    .instr_i(instruction),
    .imm_src_i(),
    .imm_ext_o()
)
    
endmodule