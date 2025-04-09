module prop_alu_control (
    input  logic       clk_i,
    input  logic       rst_ni,
    input  logic [6:0] op_i,
    input  logic [2:0] funct3_i,
    input  logic       funct7_i,
    input  logic       zero_i,
    output logic       pc_write_o,
    output logic       addr_src_o,
    output logic       mem_write_o,
    output logic       ir_write_o,
    output logic [1:0] result_src_o,
    output logic [2:0] alu_control_o,
    output logic [1:0] alu_src_a_o,
    output logic [1:0] alu_src_b_o,
    output logic [2:0] imm_src_o,
    output logic       reg_write_o
);

  typedef enum logic [3:0] {
    StFetch,
    StDecode,
    StMemAddr,
    StMemRead,
    StMemWB,
    StMemWrite,
    StExecuteR,
    StExecuteI,
    StExecuteU,
    StALUWB,
    StBEQ,
    StJAL
  } state_e;

  a_rst_fetch :
  assert property (@(posedge clk_i) !rst_ni |-> (alu_control_i.state_q == StFetch));

  a_decode :
  assert property (
      @(posedge clk_i) (alu_control_i.state_q == StFetch) |-> (alu_control_i.state_d == StDecode));

endmodule
