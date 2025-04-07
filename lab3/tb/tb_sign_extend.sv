module tb_sign_extend;

    parameter int ILen = 32;

    logic [ILen-1:0] instr_i;
    logic [     2:0] imm_src_i;
    logic [ILen-1:0] imm_ext_o;

    // Instantiate the DUT
    sign_extend #(
        .ILen(ILen)
    ) dut (
        .instr_i  (instr_i),
        .imm_src_i(imm_src_i),
        .imm_ext_o(imm_ext_o)
    );

    // Function to calculate expected result
    function automatic [ILen-1:0] calc_expected(input [ILen-1:0] instr,
                                                input [2:0] imm_src);
        case (imm_src)
            3'b000: return {{20{instr[31]}}, instr[31:20]};  // I-Type
            3'b001:
            return {{20{instr[31]}}, instr[31:25], instr[11:7]};  // S-Type
            3'b010:
            return {
                {19{instr[31]}},
                instr[31],
                instr[7],
                instr[30:25],
                instr[11:8],
                1'b0
            };  // B-Type
            3'b011:
            return {
                {12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0
            };  // J-Type
            3'b100: return {instr[31:12], 12'b0};  // U-Type
            default: return 32'b0;
        endcase
    endfunction

    // Task to run a test
    task run_test(input [ILen-1:0] instr, input [2:0] imm_src);
        logic [ILen-1:0] expected;
        begin
            instr_i   = instr;
            imm_src_i = imm_src;
            expected  = calc_expected(instr, imm_src);
            #1;
            if (imm_ext_o !== expected) begin
                $display(
                    "FAIL: imm_src=%0d, instr=%h\n\tGot     = %h\n\tExpected= %h",
                    imm_src, instr, imm_ext_o, expected);
            end else begin
                $display("PASS: imm_src=%0d, instr=%h, output=%h", imm_src,
                         instr, imm_ext_o);
            end
            assert (imm_ext_o === expected);
        end
    endtask

    initial begin
        // Seed for reproducibility
        int seed = 42;
        $urandom(seed);

        // Run random tests for each imm_src type
        for (int t = 0; t < 10; t++) begin
            run_test($urandom, imm_src_i);
        end


        // Also test edge values
        run_test(32'hFFFF_FFFF, 3'b000);
        run_test(32'h0000_0000, 3'b011);
        run_test(32'h8000_0000, 3'b010);
        run_test(32'h7FFF_FFFF, 3'b100);

        $display("Randomized test completed.");
        $finish;
    end

    // Waveform generation (VCD)
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_regfile);
    end

endmodule
