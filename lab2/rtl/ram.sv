//
// Microcredencial en Diseño de Procesadores con Arquitectura Abierta
// Cátedra UPM-INDRA en Microelectrónica
//
// Author: Alfonso Rodríguez <alfonso.rodriguezm@upm.es>
// Date: March 2025
//

module ram #(
    parameter int XLen = 32,
    parameter int NPos = 1024,
    localparam int NPosWidth = $clog2(NPos)
) (
    input  logic clk_i,
    input  logic [NPosWidth-1:0] a_i,
    input  logic we_i,
    input  logic [XLen-1:0] wd_i,
    output logic [XLen-1:0] rd_o
);

    // Memory (unpacked array)
    logic [XLen-1:0] mem[NPos];

    // Synchronous write
    always_ff @(posedge clk_i) begin
        if (we_i) begin
            mem[a_i] <= wd_i;
        end
    end

    // Asynchronous read
    assign rd_o = mem[a_i];

endmodule
