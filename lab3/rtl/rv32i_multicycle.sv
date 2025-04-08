module rv32i_multicycle #(
    parameter int XLen = 32,
    parameter int ILen = 32,
    parameter int MemPos = 1024,
    localparam int AddrWidth = $clog2(MemPos)
) (
    input logic clk_i,
    input logic rst_ni
);

  logic [ILen-1:0] pc;
  logic [ILen-1:0] old_pc;
  logic [XLen-1:0] pc_next;
  logic pc_write;

  logic addr_src;
  logic [AddrWidth-1:0] addr;

  logic [ILen-1:0] instr;

  logic mem_write;
  logic [XLen-1:0] write_data;
  logic [XLen-1:0] read_data;
  logic [XLen-1:0] data;

  logic ir_write;
  logic reg_write;
  logic [2:0] imm_src;
  logic [1:0] alu_src_a;
  logic [1:0] alu_src_b;
  logic [2:0] alu_control;
  logic [1:0] result_src;

  logic [ILen-1:0] imm_ext;

  logic zero;

  logic [XLen-1:0] a;
  logic [XLen-1:0] src_a;
  logic [XLen-1:0] src_b;
  logic [XLen-1:0] alu_result;
  logic [XLen-1:0] alu_out;
  logic [XLen-1:0] result;

  logic [XLen-1:0] rd1;
  logic [XLen-1:0] rd2;

  alu_control alu_control_i (
      .clk_i        (clk_i),
      .rst_ni       (rst_ni),
      .op_i         (instr[6:0]),
      .funct3_i     (instr[14:12]),
      .funct7_i     (instr[30]),
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

  ram #(
      .XLen(XLen),
      .NPos(1024)
  ) mem_ram_i (
      .clk_i(clk_i),
      .a_i  (addr),
      .we_i (mem_write),
      .wd_i (write_data),
      .rd_o (read_data)
  );

  regfile #(
      .XLen(XLen),
      .NReg(XLen)
  ) regfile_i (
      .clk_i (clk_i),
      .rst_ni(rst_ni),
      .a1_i  (instr[19:15]),
      .a2_i  (instr[24:20]),
      .a3_i  (instr[11:7]),
      .we3_i (reg_write),
      .wd3_i (result),
      .rd1_o (rd1),
      .rd2_o (rd2)
  );

  sign_extend #(
      .ILen(ILen)
  ) sign_extend_i (
      .instr_i  (instr),
      .imm_src_i(imm_src),
      .imm_ext_o(imm_ext)
  );

  alu #(
      .XLen(XLen),
      .NOps(6)
  ) alu_i (
      .a_i          (src_a),
      .b_i          (src_b),
      .alu_control_i(alu_control),
      .result_o     (alu_result),
      .zero_o       (zero)
  );

  always_ff @(posedge clk_i) begin : alu_reg
    alu_out <= alu_result;
  end

  always_comb begin : alu_mux
    result = alu_out;
    unique case (result_src)
      2'b00:   result = alu_out;
      2'b01:   result = data;
      2'b10:   result = alu_result;
      default: ;
    endcase
  end

  always_comb begin : src_a_mux
    unique case (alu_src_a)
      2'b00:   src_a = pc;
      2'b01:   src_a = old_pc;
      2'b10:   src_a = a;
      default: ;
    endcase
  end

  always_comb begin : src_b_mux
    unique case (alu_src_b)
      2'b00:   src_b = write_data;
      2'b01:   src_b = imm_ext;
      2'b10:   src_b = 4;
      default: ;
    endcase
  end

  always_ff @(clk_i) begin : reg_filereg
    a <= rd1;
    write_data <= rd2;
  end

  always_ff @(clk_i) begin
    data <= read_data;
  end

  always_ff @(clk_i) begin : instruction_reg
    if (ir_write) begin
      old_pc <= pc;
      instr  <= read_data;
    end
  end

  always_ff @(clk_i) begin : pc_reg
    if (pc_write) begin
      pc <= pc_next;
    end
  end

  assign addr = (addr_src) ? result : pc;

  assign pc_next = result;

endmodule
