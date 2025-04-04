module alu_control(
    input logic clk_i,
    input logic rst_ni,
    input logic [6:0] op_i,
    input logic [2:0] funct3_i,
    input logic funct7_i,
    input logic zero_i,
    output logic pc_write_o,
    output logic addr_src_o,
    output logic mem_write_o,
    output logic ir_write_o,
    output logic [1:0] result_src_o,
    output logic [2:0] alu_control_o,
    output logic [1:0] alu_src_a_o,
    output logic [1:0] alu_src_b_o,
    output logic [1:0] imm_src_o,
    output logic reg_write_o
);

logic [2:0] ALUOp;

typedef enum logic {
    StFetch,
    StDecode,
    StMemAddr,
    StMemRead,
    StMemWB,
    StMemWrite,
    StExecuteR,
    StExecuteI,
    StALUWB,
    StBEQ,
    StJAL
} state_e;

state_e state_d, state_q;

always_comb begin : FiniteStateMachine

    pc_write_o      = 1'b0;
    addr_src_o      = 1'b0;
    mem_write_o     = 1'b0;
    ir_write_o      = 1'b0;
    result_src_o    = 2'b0;
    alu_control_o   = 3'b0;
    alu_src_a_o     = 2'b0;
    alu_src_b_o     = 2'b0;
    imm_src_o       = 2'b0;
    reg_write_o     = 1'b0;

    
    
    unique case (state_q)

        StFetch:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'b0_0_0_1_00_000_00_00_00_0;
        StDecode:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'b0_0_0_1_00_000_00_00_00_0;
            case (op)
                7'b0000011 | 7'b0100011: state_d = StMemAddr;
                7'b0110011: state_d = StExecuteR;
                7'b0010011: state_d = StExecuteI;
                7'b1101111: state_d = StJAL;
                7'b1100011: state_d = StBEQ; 
                default: ;
            endcase
        StMemAddr:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'b0_0_0_0_00_000_01_10_00_0;
        StMemRead:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'b0_1_0_0_00_000_00_00_00_0;
        StMemWB:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'b0_0_0_0_01_000_00_00_00_1;
        StMemWrite:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'b0_1_1_0_00_000_00_00_01_0;
        StExecuteR:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'b0_0_0_0_00_XXX_00_10_00_0;
        StExecuteI:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'bX_X_X_X_XX_XXX_XX_XX_XX_X;
        StALUWB:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'b0_0_0_0_00_000_00_00_00_1;
        StBEQ:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'bX_X_X_X_XX_XXX_XX_XX_XX_X;
        StJAL:
            {pc_write_o, addr_src_o, mem_write_o, ir_write_o, result_src_o, alu_control_o, alu_src_a_o, alu_src_b_o, imm_src_o, reg_write_o} = 16'bX_X_X_X_XX_XXX_XX_XX_XX_X;
        default: state_d = StFetch;
    endcase
end

always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
        state_q <= StFetch;
    end else begin
        state_q <= state_d;
    end
end
    
endmodule