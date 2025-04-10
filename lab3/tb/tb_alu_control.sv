module tb_alu_control;

  // Configure simulation
  timeunit 10ns; timeprecision 10ps;

  localparam int XLen = 32;

  logic            clk;
  logic            rst_n;
  logic [     6:0] op;
  logic [     2:0] funct3;
  logic            funct7;
  logic            zero;
  logic            pc_write;
  logic            addr_src;
  logic            mem_write;
  logic            ir_write;
  logic [     1:0] result_src;
  logic [     2:0] alu_control;
  logic [     1:0] alu_src_a;
  logic [     1:0] alu_src_b;
  logic [     2:0] imm_src;
  logic            reg_write;

  logic [XLen-1:0] instr;

  typedef enum {
    StFetch,
    StDecode,
    StMemAddr,
    StMemRead,
    StMemWB,
    StMemWrite,
    StExecuteR,
    StALUWB,
    StExecuteI,
    StJAL,
    StBEQ,
    StExecuteU
  } state_e;

  alu_control alu_control_i (
      .clk_i        (clk),
      .rst_ni       (rst_n),
      .op_i         (op),
      .funct3_i     (funct3),
      .funct7_i     (funct7),
      .zero_i       (zero),
      .pc_write_o   (pc_write),
      .addr_src_o   (addr_src),
      .mem_write_o  (mem_write),
      .ir_write_o   (ir_write),
      .result_src_o (result_src),
      .alu_control_o(alu_control),
      .alu_src_a_o  (alu_src_a),
      .alu_src_b_o  (alu_src_b),
      .imm_src_o    (imm_src),
      .reg_write_o  (reg_write)
  );

  bind alu_control prop_alu_control prop_alucontrol_i (.*);

  initial begin
    clk = 0;
    forever #0.5 clk = ~clk;
  end

  initial begin

    rst_n = 1'b0;

    //SW INSTRUCTION
    instr = 32'h00A02083;

    op = instr[6:0];
    funct3 = instr[14:12];
    funct7 = instr[30];
    zero = 1'b0;

    $display("SIMULATION START");

    #1 rst_n = 1'b1;

    #4;  //SW INSTRUCTION
    instr = 32'h0000A023;
    op = instr[6:0];
    funct3 = instr[14:12];
    funct7 = instr[30];
    zero = 1'b0;

    #5;  //R-TYPE INSTRUCTION
    instr = 32'h00000033;
    op = instr[6:0];
    funct3 = instr[14:12];
    funct7 = instr[30];
    zero = 1'b0;

    #3;  //I-TYPE INSTRUCTION
    instr = 32'h00000093;
    op = instr[6:0];
    funct3 = instr[14:12];
    funct7 = instr[30];
    zero = 1'b0;

    #5;  //JAL INSTRUCTION
    instr = 32'h000000EF;
    op = instr[6:0];
    funct3 = instr[14:12];
    funct7 = instr[30];
    zero = 1'b0;

    #3;  //BEQ INSTRUCTION
    instr = 32'h00000063;
    op = instr[6:0];
    funct3 = instr[14:12];
    funct7 = instr[30];
    zero = 1'b0;

    #3;  //LUI INSTRUCTION
    instr = 32'h000000B7;
    op = instr[6:0];
    funct3 = instr[14:12];
    funct7 = instr[30];
    zero = 1'b0;

    #5 $display("SIMULATION FINISH");

    $finish;
  end

  initial begin
    $monitor("[TESTBENCH] time=%0t, state_q=%s", $time, alu_control_i.state_q.name);
  end

  // Waveform generation (VCD)
  initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, tb_alu_control);
  end

endmodule
