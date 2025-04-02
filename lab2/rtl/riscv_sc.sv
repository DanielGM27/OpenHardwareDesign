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

logic [XLen-1:0] instruction;
logic [6:0] op;
logic ResultSrc;
logic MemWrite;
logic ALUSrc;
logic [1:0] ImmSrc;
logic []
logic RegWrite;
logic [1:0] ALUOp;
logic Branch;

logic [2:0] funct3;
logic funct7;
logic [2:0] ALUControl;

assign op = instruction[6:0];
assign funct3 = instruction[14:12];
assign funct7 = instruction[30];

always_comb begin : MainDecoder
    unique case (op)
        7'b0000011: begin
            ResultSrc = '1;
            MemWrite = '0;
            ALUSrc = '1;
            ImmSrc = 2'b00;
            RegWrite = 1;
            Branch = '0;
            ALUOp = 2'b00;
        end
        7'b0100011: begin
            ResultSrc = '0;
            MemWrite = '1;
            ALUSrc = '1;
            ImmSrc = 2'b01;
            RegWrite = 0;
            Branch = '0;
            ALUOp = 2'b00;
        end
        7'b0110011: begin
            ResultSrc = '0;
            MemWrite = '0;
            ALUSrc = '0;
            ImmSrc = 2'b00;
            RegWrite = 1;
            Branch = '0;
            ALUOp = 2'b10;
        end
        7'b1100011: begin
            ResultSrc = '0;
            MemWrite = '0;
            ALUSrc = '0;
            ImmSrc = 2'b10;
            RegWrite = 0;
            Branch = '1;
            ALUOp = 2'b01;
        end
        default: ;
    endcase
end

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

endmodule
