//
// Microcredencial en Diseño de Procesadores con Arquitectura Abierta
// Cátedra UPM-INDRA en Microelectrónica
//
// Author: Alfonso Rodríguez <alfonso.rodriguezm@upm.es>
// Date: March 2025
//

module alu #(
    parameter int XLen = 32,
    parameter int NOps = 6,
    localparam int NOpsWidth = $clog2(NOps)
) (
    input logic [XLen-1:0] a_i,
    input logic [XLen-1:0] b_i,
    input logic [NOpsWidth-1:0] alu_control_i,
    output logic [XLen-1:0] result_o,
    output logic zero_o
);

    // Internal signals
    logic [XLen-1:0] not_b;
    logic [XLen-1:0] sum;
    logic is_adder;
    logic v;

    // Compute /B to have A - B = A + /B + 1
    assign not_b = alu_control_i[0] ? ~b_i : b_i;
    // Implement adder
    assign sum = a_i + not_b + alu_control_i[0];
    // Detect if the operation uses the adder (for overflow checks)
    //     'b000 -> +, 'b001 -> -, 'b101 -> -, 'b100 -> don't care : 'bx0x
    // assign is_adder = ~alu_control_i[1];
    //     'b000 -> +, 'b001 -> -, 'b101 -> - : 'b000 | 'b001 | 'b101 | 'b001
    assign is_adder = (~alu_control_i[2] & ~alu_control_i[1]) | (~alu_control_i[1] & alu_control_i[0]);

    // Core functionality
    always_comb begin
        // Default value (ensure the variable is always assigned)
        result_o = '0;
        unique case (alu_control_i)
            // ADD
            'b000:   result_o = sum;
            // SUB
            'b001:   result_o = sum;
            // AND
            'b010:   result_o = a_i & b_i;
            // OR
            'b011:   result_o = a_i | b_i;
            // XOR
            'b100:   result_o = a_i ^ b_i;
            // SLT
            'b101:   result_o = sum[XLen-1] ^ v;
            // Undefined, use default value from above
            default: ;
        endcase
    end

    // Zero flag
    assign zero_o = (result_o == '0);
    // Overflow flag (internal)
    assign v = is_adder & (a_i[XLen-1] ^ sum[XLen-1]) & ~(a_i[XLen-1] ^ b_i[XLen-1] ^ alu_control_i[0]);

endmodule
