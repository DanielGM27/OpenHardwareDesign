module riscv_sc #(
    parameter int XLen = 32,
    parameter int ILen = 32,
    parameter int AddrWidth = 16
) (
    // Clock and reset
    input logic clk_i,
    input logic rst_ni,

    // Program memory interface
    output logic [AddrWidth-1:0] pmem_addr_o,
    input logic [ILen-1:0] pmem_rdata_i,

    // Data memory interface
    output logic [AddrWidth-1:0] dmem_addr_o,
    input logic [XLen-1:0] dmem_rdata_i,
    output logic dmem_we_o,
    output logic [XLen-1:0] dmem_wdata_o
);

    localparam int NAddrBits = $clog2(AddrWidth);

    //Control Unit Signals
    logic [ILen-1:0] instruction;
    logic [6:0] op;
    logic ResultSrc;
    logic MemWrite;
    logic ALUSrc;
    logic [2:0] ImmSrc;
    logic RegWrite;
    logic [1:0] ALUOp;
    logic Branch;
    logic PCSrc;

    //Control Unit Signal Extension for Jump instruction
    logic Jump;

    logic [2:0] funct3;
    logic funct7;

    //Alu Signals
    logic [2:0] ALUControl;
    logic [XLen-1:0] ALUResult;
    logic [XLen-1:0] SrcA;
    logic [XLen-1:0] SrcB;
    logic Zero;

    //Immediate register sign extended
    logic [ILen-1:0] immExt;

    //ReadData output
    logic [XLen-1:0] Result;

    //Data buses for regfile
    logic [NAddrBits:0] a1_i;
    logic [NAddrBits:0] a2_i;
    logic [NAddrBits:0] a3_i;
    logic [XLen-1:0] wd3_i;
    logic [XLen-1:0] rd1_o;
    logic [XLen-1:0] rd2_o;

    //Program Counter Related signals
    logic [ILen-1:0] PC;
    logic [ILen-1:0] PCTarget;
    logic [ILen-1:0] PCPlus4;
    logic [ILen-1:0] PCNext;

    //pmem_rdata_i es la instruction que saca el program(instruction) memory
    assign instruction = pmem_rdata_i;
    assign a1_i = instruction[19:15];
    assign a2_i = instruction[24:20];
    assign a3_i = instruction[11:7];

    //Descomposición de la instruction en sus partes
    assign op = instruction[6:0];
    assign funct3 = instruction[14:12];
    assign funct7 = instruction[30];

    //Result Mux
    assign Result = (ResultSrc) ? dmem_rdata_i : ALUResult;

    //WData Mux
    assign wd3_i = (Jump) ? PCPlus4 : Result;

    //Instanciación del Register File
    regfile #(
        .XLen(XLen),
        .NReg(ILen)
    ) regfile_i (
        .clk_i (clk_i),
        .rst_ni(rst_ni),
        .a1_i  (a1_i),
        .a2_i  (a2_i),
        .a3_i  (a3_i),
        .we3_i (RegWrite),
        .wd3_i (wd3_i),
        .rd1_o (rd1_o),
        .rd2_o (rd2_o)
    );

    assign SrcA = rd1_o;
    assign SrcB = (ALUSrc) ? immExt : rd2_o;

    alu #(
        .XLen(XLen)
    ) alu_i (
        .a_i(SrcA),
        .b_i(SrcB),
        .alu_control_i(ALUControl),
        .result_o(ALUResult),
        .zero_o(Zero)
    );

    //Address for Data Memory
    assign dmem_addr_o = ALUResult[AddrWidth-1:0];

    //Write enable for Data memory
    assign dmem_we_o   = MemWrite;

    always_comb begin : MainDecoder

        {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp, Jump} = 11'b0;

        unique case (op)
            //lw
            7'b0000011:
            {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp, Jump} = 11'b1_0_1_000_1_0_00_0;

            //sw
            7'b0100011:
            {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp, Jump} = 11'b0_1_1_001_0_0_00_0;

            //R-type
            7'b0110011:
            {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp, Jump} = 11'b0_0_0_000_1_0_10_0;

            //I-type
            7'b0010011:
            {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp, Jump} = 11'b0_0_1_000_1_0_10_0;

            //beq
            7'b1100011:
            {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp, Jump} = 11'b0_0_0_010_0_1_01_0;

            //lui
            7'b0110111:
            {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp, Jump} = 11'b0_0_1_100_1_0_00_0;

            //jal
            7'b1101111:
            {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp, Jump} = 11'b0_0_0_011_1_0_00_1;

            default: ;
        endcase
    end


    assign PCSrc = Branch & Zero;

    always_comb begin : ALUDecoder

        ALUControl = 3'b0;

        unique case (ALUOp)
            //Add
            2'b00: ALUControl = 3'b000;

            //Substract
            2'b01: ALUControl = 3'b001;

            //Look at funct code
            2'b10: begin
                unique case (funct3)    //Si la funct3 corresponde a suma/resta comprobar ALUSrc para que aplique a add y addi
                    3'b000:
                    ALUControl = (funct7 == 1'b0 | ALUSrc == 1'b1) ? 3'b000 : 3'b001;  // Add/Sub
                    3'b111: ALUControl = 3'b010;  // AND
                    3'b110: ALUControl = 3'b011;  // OR
                    3'b010: ALUControl = 3'b101;  // SLT
                    3'b100: ALUControl = 3'b100;  // XOR
                    default: ;
                endcase
            end

            default: ;
        endcase
    end

    always_comb begin : SignExtend

        immExt = 32'b0;

        case (ImmSrc)
            //I-Type
            3'b000: immExt = {{20{instruction[ILen-1]}}, instruction[ILen-1:20]};

            //S-Type
            3'b001: immExt = {{20{instruction[ILen-1]}}, instruction[ILen-1:25], instruction[11:7]};

            //B-Type
            3'b010:
            immExt = {
                {19{instruction[ILen-1]}},
                instruction[ILen-1],
                instruction[7],
                instruction[30:25],
                instruction[11:8],
                1'b0
            };

            //J-type
            3'b011:
            immExt = {
                {12{instruction[ILen-1]}},
                instruction[19:12],
                instruction[20],
                instruction[30:21],
                1'b0
            };

            //U-Type
            3'b100: immExt = {instruction[ILen-1:12], 12'b0};

            default: ;
        endcase
    end

    assign dmem_wdata_o = rd2_o;

    //PC Related Variables Assignment
    assign PCPlus4 = PC + 4;
    assign PCTarget = PC + immExt;
    assign PCNext = (PCSrc | Jump) ? PCTarget : PCPlus4;

    always_ff @(posedge clk_i) begin
        if (!rst_ni) PC <= 32'b0;
        else PC <= PCNext;
    end

    assign pmem_addr_o = PC[AddrWidth-1:0];

endmodule
