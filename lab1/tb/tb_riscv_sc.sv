//
// Microcredencial en Diseño de Procesadores con Arquitectura Abierta
// Cátedra UPM-INDRA en Microelectrónica
//
// Author: Alfonso Rodríguez <alfonso.rodriguezm@upm.es>
// Date: March 2025
//

module tb_riscv_sc;

// Configure simulation
timeunit 10ns;
timeprecision 10ps;

// Local parameters for the simulation
localparam int XLen = 32;
localparam int ILen = 32;
localparam int MemPos = 1024;
localparam int AddrWidth = $clog2(MemPos);

// Signals for the simulation
logic clk;
logic rst_n;
logic [AddrWidth-1:0] pmem_addr;
logic [ILen-1:0] pmem_rdata;
logic [AddrWidth-1:0] dmem_addr;
logic [XLen-1:0] dmem_rdata;
logic dmem_we;
logic [XLen-1:0] dmem_wdata;

// Single cycle RISC-V processor
riscv_sc #(
    .XLen(XLen),
    .ILen(ILen),
    .AddrWidth(AddrWidth)
) riscv_sc_i (
    .clk_i(clk),
    .rst_ni(rst_n),
    .pmem_addr_o(pmem_addr),
    .pmem_rdata_i(pmem_rdata),
    .dmem_addr_o(dmem_addr),
    .dmem_rdata_i(dmem_rdata),
    .dmem_we_o(dmem_we),
    .dmem_wdata_o(dmem_wdata)
);

// Program memory
ram #(
    .XLen(XLen),
    .NPos(MemPos)
) pmem_ram_i (
    .clk_i(clk),
    .a_i(pmem_addr[AddrWidth-1:2]),
    .we_i(1'b0),
    .wd_i('0),
    .rd_o(pmem_rdata)
);

// Program memory initialization
initial begin
    $readmemh("sw/build/test.hex", pmem_ram_i.mem);
end

// Data memory
ram #(
    .XLen(XLen),
    .NPos(MemPos)
) dmem_ram_i (
    .clk_i(clk),
    .a_i(dmem_addr[AddrWidth-1:2]),
    .we_i(dmem_we),
    .wd_i(dmem_wdata),
    .rd_o(dmem_rdata)
);

// Clock generation
initial begin
    clk = 1'b0;
    forever #0.5 clk = ~clk;
end

// Stimuli generation
initial begin
    // Assert reset
    rst_n = 1'b0;

    // Start simulation
    #10 $display("Simulation START");

    // Deassert reset
    rst_n = 1'b1;

    // End simulation after some clock cycles
    #20 $display("Simulation FINISH");
    $finish;
end

// Signal monitoring
initial begin
    // $monitor("time=%0t, mem[0]=%08x, mem[1]=%08x, mem[2]=%08x", $time, dmem_ram_i.mem[0], dmem_ram_i.mem[1], dmem_ram_i.mem[2]);
end

// Waveform generation (VCD)
initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, tb_riscv_sc);
end

endmodule
