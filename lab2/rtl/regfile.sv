//
// Microcredencial en Diseño de Procesadores con Arquitectura Abierta
// Cátedra UPM-INDRA en Microelectrónica
//
// Author: Alfonso Rodríguez <alfonso.rodriguezm@upm.es>
// Date: March 2025
//

module regfile #(
    parameter int XLen = 32,
    parameter int NReg = 32,
    localparam int NRegWidth = $clog2(NReg)
) (
    input  logic clk_i,
    input  logic rst_ni,
    input  logic [NRegWidth-1:0] a1_i,
    input  logic [NRegWidth-1:0] a2_i,
    input  logic [NRegWidth-1:0] a3_i,
    input  logic we3_i,
    input  logic [XLen-1:0] wd3_i,
    output logic [XLen-1:0] rd1_o,
    output logic [XLen-1:0] rd2_o
);

    // Register file (unpacked array)
    logic [XLen-1:0] rf[NReg];

    // Synchronous write
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            rf = '{default: '0};
        end else if (we3_i) begin
            rf[a3_i] = wd3_i;
        end
    end

    // Asynchronous read
    assign rd1_o = (a1_i != '0) ? rf[a1_i] : '0;
    assign rd2_o = (a2_i != '0) ? rf[a2_i] : '0;

endmodule
