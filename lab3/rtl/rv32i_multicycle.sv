module rv32i_multicycle #(
    parameter int XLen = 32,
    parameter int ILen = 32,
    parameter int MemPos = 1024,
    localparam int AddrWidth = $clog2(MemPos)
) (
    input logic clk_i,
    input logic rst_ni
);

    logic [ILen-1:0] PC;
    logic [ILen-1:0] OldPC;
    logic [XLen-1:0] PCNext;
    logic PCWrite;

    logic AddrSrc;
    logic [Addr-1:0] Addr;

    logic [ILen-1:0] instr;

    logic MemWrite;
    logic [XLen-1:0] WriteData;
    logic [XLen-1:0] ReadData;
    logic [XLen-1:0] Data;

    logic IRWrite;
    logic RegWrite;
    logic [2:0] ImmSrc;
    logic [1:0] ALUSrcA;
    logic [1:0] ALUSrcB;
    logic [2:0] ALUControl;
    logic [1:0] ResultSrc;

    logic [ILen-1:0] ImmExt;

    logic Zero;

    logic [XLen-1:0] A;
    logic [XLen-1:0] SrcA;
    logic [XLen-1:0] SrcB;
    logic [XLen-1:0] ALUResult;
    logic [XLen-1:0] ALUOut;
    logic [XLen-1:0] Result;

    logic [XLen-1:0] rd1;
    logic [XLen-1:0] rd2;

    alu_control alu_control_i (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .op_i(instr[6:0]),
        .funct3_i(instr[14:12]),
        .funct7_i(instr[30]),
        .zero_i(Zero),
        .pc_write_o(PCWrite),
        .addr_src_o(AddrSrc),
        .mem_write_o(MemWrite),
        .ir_write_o(IRWrite),
        .result_src_o(ResultSrc),
        .alu_control_o(ALUControl),
        .alu_src_a_o(ALUSrcA),
        .alu_src_b_o(ALUSrcB),
        .imm_src_o(ImmSrc),
        .reg_write_o(RegWrite)
    );

    ram #(
        .XLen(XLen),
        .NPos(1024)
    ) mem_ram_i (
        .clk_i(clk_i),
        .a_i  (Addr),
        .we_i (MemWrite),
        .wd_i (WriteData),
        .rd_o (ReadData)
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
        .we3_i (RegWrite),
        .wd3_i (Result),
        .rd1_o (rd1),
        .rd2_o (rd2)
    );

    sign_extend #(
        .ILen(ILen)
    ) sign_extend_i (
        .instr_i  (instr),
        .imm_src_i(ImmSrc),
        .imm_ext_o(ImmExt)
    );

    alu #(
        .XLen(XLen),
        .NOps(6)
    ) alu_i (
        .a_i(SrcA),
        .b_i(SrcB),
        .alu_control_i(ALUControl),
        .result_o(ALUResult),
        .zero_o(Zero)
    );

    always_ff @(posedge clk_i) begin : AluReg
        ALUOut <= ALUResult;
    end

    always_comb begin : ALUMux
        Result = ALUOut;
        unique case (ResultSrc)
            2'b00:   Result = ALUOut;
            2'b01:   Result = Data;
            2'b10:   Result = ALUResult;
            default: ;
        endcase
    end

    always_comb begin : SrcAMux
        unique case (ALUSrcA)
            2'b00:   SrcA = PC;
            2'b01:   SrcA = OldPC;
            2'b10:   SrcA = A;
            default: ;
        endcase
    end

    always_comb begin : SrcBMux
        unique case (ALUSrcB)
            2'b00:   SrcB = WriteData;
            2'b01:   SrcB = ImmExt;
            2'b10:   SrcB = 4;
            default: ;
        endcase
    end

    always_ff @(clk_i) begin : RegfileReg
        A <= rd1;
        WriteData <= rd2;
    end

    always_ff @(clk_i) begin
        Data <= ReadData;
    end

    always_ff @(clk_i) begin : InstrReg
        if (IRWrite) begin
            OldPC <= PC;
            instr <= ReadData;
        end
    end

    always_ff @(clk_i) begin : PCReg
        if (PCWrite) begin
            PC <= PCNext;
        end
    end

    assign Addr   = (AddrSrc) ? Result : PC;

    assign PCNext = Result;

endmodule
