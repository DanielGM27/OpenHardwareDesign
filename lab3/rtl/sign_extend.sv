module sign_extend #(
    parameter int ILen = 32
)(
    input logic [Ilen-1:0] instr_i,
    input logic [1:0] imm_src_i,
    output logic [ILen-1:0] imm_ext_o
);

always_comb begin : SignExtend
    case (imm_src_i)
      //I-Type
      3'b000: imm_ext_o = {{20{instr_i[ILen-1]}}, instr_i[ILen-1:20]};

      //S-Type
      3'b001: imm_ext_o = {{20{instr_i[ILen-1]}}, instr_i[ILen-1:25], instr_i[11:7]};

      //B-Type
      3'b010:
      imm_ext_o = {
        {19{instr_i[ILen-1]}},
        instr_i[ILen-1],
        instr_i[7],
        instr_i[30:25],
        instr_i[11:8],
        1'b0
      };

      //J-type
      3'b011:
      imm_ext_o = {
        {12{instr_i[ILen-1]}}, instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0
      };

      //U-Type
      3'b100: imm_ext_o = {instr_i[ILen-1:12], 12'b0};

      default: ;
    endcase
  end

endmodule