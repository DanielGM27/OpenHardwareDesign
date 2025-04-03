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

//Control Unit Signals
logic [ILen-1:0] instruction;
logic [6:0] op;
logic ResultSrc;
logic MemWrite;
logic ALUSrc;
logic [1:0] ImmSrc;
logic RegWrite;
logic [1:0] ALUOp;
logic Branch;
logic PCSrc;

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

//ReadData buses for regfile
logic [XLen-1:0] rd1_o;
logic [XLen-1:0] rd2_o;

//Program Counter Related signals
logic [ILen-1:0] PC;
logic [ILen-1:0] PCTarget;
logic [ILen-1:0] PCPlus4;
logic [ILen-1:0] PCNext;

//pmem_rdata_i es la instruction que saca el program(instruction) memory
assign instruction = pmem_rdata_i;

//Descomposición de la instruction en sus partes
assign op = instruction[6:0];
assign funct3 = instruction[14:12];
assign funct7 = instruction[30];

//Result Mux
assign Result = (ResultSrc)? dmem_rdata_i : ALUResult;

//Instanciación del Register File
regfile #(
    .XLen(XLen),
    .NReg(XLen)
) regfile_i(
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .a1_i(instruction[19:15]),
    .a2_i(instruction[24:20]),
    .a3_i(instruction[11:7]),
    .we3_i(RegWrite),
    .wd3_i(Result),
    .rd1_o(rd1_o),
    .rd2_o(rd2_o)
);

assign SrcB = (ALUSrc)? immExt : rd2_o;

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
assign dmem_addr_o = ALUResult;

always_comb begin : MainDecoder
    unique case (op)
        //lw
        7'b0000011: {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp} = 9'b1_0_1_00_1_0_00; 
        
        //sw
        7'b0100011: {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp} = 9'b0_1_1_01_0_0_00; 
        
        //R-type
        7'b0110011: {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp} = 9'b0_0_0_00_1_0_10; 
        
        //beq
        7'b1100011: {ResultSrc, MemWrite, ALUSrc, ImmSrc, RegWrite, Branch, ALUOp} = 9'b0_0_0_10_0_1_01; 
        
        default: ;
    endcase
end

assign PCSrc = Branch & Zero;

always_comb begin : ALUDecoder
    unique case (op)
        7'b0000011: ALUControl = 3'b000;
        7'b0100011: ALUControl = 3'b000;
        7'b0110011: begin
            unique case (funct3)
                3'b000: ALUControl = (funct7 == '0)? 3'b000 : 3'b001;
                3'b111: ALUControl = 3'b010;
                3'b110: ALUControl = 3'b011;
                3'b010: ALUControl = 3'b101;
                default: ;
            endcase
        end
        7'b1100011: ALUControl = 3'b001;
        default: ;
    endcase
end

always_comb begin : SignExtend
    case (ImmSrc)
        //I-Type
        2'b00: immExt = {{20{instruction[ILen-1]}}, instruction[ILen-1:20]};
        
        //S-Type
        2'b01: immExt = {{20{instruction[ILen-1]}}, instruction[ILen-1:25], instruction[11:7]};

        //B-Type
        2'b10: immExt = {{19{instruction[ILen-1]}}, instruction[ILen-1], instruction[7], instruction[30:25], instruction[11:8], 1'b0};
        
        default: ;
    endcase
end

assign dmem_wdata_o = rd2_o;

//PC Related Variables Assignment
assign PCPlus4 = PC + 4;
assign PCTarget = PC + immExt;
assign PCNext = (PCSrc)? PCTarget : PCPlus4;

always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) PC = 32'b0;
    else PC = PCNext;
end

assign pmem_addr_o = PC;

endmodule
