module alu_control (
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

    logic [1:0] ALUOp;
    logic Branch;
    logic PCUpdate;

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

    state_e state_d, state_q;

    always_comb begin : FiniteStateMachine

        PCUpdate     = 1'b0;
        Branch       = 1'b0;
        reg_write_o  = 1'b0;
        mem_write_o  = 1'b0;
        ir_write_o   = 1'b0;
        alu_src_a_o  = 2'b0;
        alu_src_b_o  = 2'b0;
        ALUOp        = 2'b00;
        result_src_o = 2'b0;
        addr_src_o   = 1'b0;

        unique case (state_q)

            StFetch: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b1_0_0_0_1_00_10_00_10_0;

                state_d = StDecode;
            end

            StDecode: begin

                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b0_0_0_0_0_01_01_00_00_0;

                case (op_i)
                    7'b0000011, 7'b0100011: state_d = StMemAddr;
                    7'b0110011:             state_d = StExecuteR;
                    7'b0010011:             state_d = StExecuteI;
                    7'b1101111:             state_d = StJAL;
                    7'b1100011:             state_d = StBEQ;
                    default:                ;
                endcase
            end

            StMemAddr: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b0_0_0_0_0_10_01_00_00_0;

                case (op_i)
                    7'b0000011: state_d = StMemRead;
                    7'b0100011: state_d = StMemWrite;
                    default:    state_d = StMemAddr;
                endcase
            end

            StMemRead: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b0_0_0_0_0_00_00_00_00_1;

                state_d = StMemWB;
            end

            StMemWB: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b0_0_1_0_0_00_00_00_01_0;

                state_d = StFetch;
            end

            StMemWrite: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b0_0_0_1_0_00_00_00_00_1;

                state_d = StFetch;
            end

            StExecuteR: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b0_0_0_0_0_10_00_10_00_0;

                state_d = StALUWB;
            end

            StExecuteI: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b0_0_0_0_0_10_01_10_00_0;

                state_d = StALUWB;
            end

            StExecuteU: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b0_0_0_0_0_10_01_00_00_0;

                state_d = StALUWB;
            end

            StALUWB: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b0_0_1_0_0_00_00_00_00_0;

                state_d = StFetch;
            end

            StBEQ: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b0_1_0_0_0_10_00_01_00_0;

                state_d = StFetch;
            end

            StJAL: begin
                {PCUpdate, Branch, reg_write_o, mem_write_o, ir_write_o,
                 alu_src_a_o, alu_src_b_o, ALUOp, result_src_o, addr_src_o} =
                    14'b1_0_0_0_0_01_10_00_00_0;

                state_d = StALUWB;
            end

            default: ;
        endcase
    end

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state_q <= StFetch;
        end else begin
            state_q <= state_d;
        end
    end

    always_comb begin : ALUDecoder
        unique case (ALUOp)
            //Add
            2'b00: alu_control_o = 3'b000;

            //Substract
            2'b01: alu_control_o = 3'b001;

            //Look at funct code
            2'b10: begin
                unique case (funct3_i)  //Si la funct3 corresponde a suma/resta comprobar ALUSrc para que aplique a add y addi
                    3'b000:
                    alu_control_o = (funct7_i == 1'b0 | alu_src_b_o == 2'b01) ?
                        3'b000 : 3'b001;  // Add/Sub
                    3'b111: alu_control_o = 3'b010;  // AND
                    3'b110: alu_control_o = 3'b011;  // OR
                    3'b010: alu_control_o = 3'b101;  // SLT
                    3'b100: alu_control_o = 3'b100;  // XOR
                    default: ;
                endcase
            end

            default: ;
        endcase
    end

    always_comb begin : InstrDecoder
        imm_src_o = 3'b0;
        unique case (op_i)

            7'b0000011: imm_src_o = 3'b000;  //lw
            7'b0100011: imm_src_o = 3'b001;  //sw            
            7'b0110011: imm_src_o = 3'b000;  //R-Type            
            7'b1100011: imm_src_o = 3'b010;  //beq
            7'b0010011: imm_src_o = 3'b000;  //I-type ALU
            7'b1101111: imm_src_o = 3'b011;  //jal
            7'b0110111: imm_src_o = 3'b100;  //lui
            default:    ;
        endcase
    end

    assign pc_write_o = ((zero_i & Branch) | PCUpdate);

endmodule
