//      // verilator_coverage annotation
        //
        // Microcredencial en Diseño de Procesadores con Arquitectura Abierta
        // Cátedra UPM-INDRA en Microelectrónica
        //
        // Author: Alfonso Rodríguez <alfonso.rodriguezm@upm.es>
        // Date: March 2025
        //
        
        module tb_regfile;
        
          // Configure simulation
          timeunit 10ns; timeprecision 10ps;
        
          // Local parameters for the simulation
          localparam int XLen = 32;
          localparam int NReg = 32;
          localparam int NRegWidth = $clog2(NReg);
          localparam int Iterations = 2 * NReg;
        
          // Signals for the simulation
 000296   logic clk;
%000001   logic rst_n;
~000063   logic [NRegWidth-1:0] a1;
 000036   logic [NRegWidth-1:0] a2;
~000063   logic [NRegWidth-1:0] a3;
 000128   logic we3;
 000042   logic [XLen-1:0] wd3;
 000075   logic [XLen-1:0] rd1;
 000031   logic [XLen-1:0] rd2;
        
          // Instantiate UUT
          regfile #(
            .XLen(XLen),
            .NReg(NReg)
          ) regfile_i (
            .clk_i (clk),
            .rst_ni(rst_n),
            .a1_i  (a1),
            .a2_i  (a2),
            .a3_i  (a3),
            .we3_i (we3),
            .wd3_i (wd3),
            .rd1_o (rd1),
            .rd2_o (rd2)
          );
        
          // Bind SVA module to UUT
          bind regfile prop_regfile #(
            .XLen(XLen),
            .NReg(NReg)
          ) prop_regfile_i (.*);
        
          // Clock generation
%000000   initial begin
%000000     clk = 0;
~000296     forever #0.5 clk = ~clk;
          end
        
          // Stimuli generation
%000001   initial begin
            // Assert reset signal
%000001     rst_n = 1'b0;
        
            // Reset state for inputs
%000001     a1 = '0;
%000001     a3 = '0;
%000001     a3 = '0;
%000001     we3 = 1'b0;
%000001     wd3 = '0;
        
%000001     $display("Simulation START");
        
            // Deassert reset
%000001     #10 rst_n = 1'b1;
        
            // Generate R/W operations
~000064     for (int i = 0; i < Iterations; i++) begin
 000064       a1  = i;
 000064       a2  = $urandom;
 000064       a3  = i;
 000064       we3 = 1'b1;
 000064       wd3 = $urandom;
 000064       #1 we3 = 1'b0;
 000064       #1 ; //$display("a1=%02x, rd1=%08x, a2=%02x, rd2=%08x, a3=%02x, we3=%b, wd3=%08x", a1, rd1, a2, rd2, a3, we3, wd3);
            end
        
            // End simulation
%000001     #10 $display("Simulation FINISH");
%000001     $finish;
          end
        
          // Signal monitoring
%000001   initial begin
%000001     $monitor("time=%0t, a1=%02x, rd1=%08x, a2=%02x, rd2=%08x, a3=%02x, we3=%b, wd3=%08x", $time,
%000001              a1, rd1, a2, rd2, a3, we3, wd3);
          end
        
          // Waveform generation (VCD)
%000001   initial begin
%000001     $dumpfile("dump.vcd");
%000001     $dumpvars(0, tb_regfile);
          end
        
        endmodule
        
