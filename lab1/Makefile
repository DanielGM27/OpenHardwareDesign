SOURCES_ALU = rtl/alu.sv verif/prop_alu.sv tb/tb_alu.sv
SOURCES_REG = rtl/regfile.sv verif/prop_regfile.sv tb/tb_regfile.sv
SOURCES_RAM = rtl/ram.sv verif/prop_ram.sv tb/tb_ram.sv

OBJECTS_ALU = $(SOURCES_ALU:%=verible/%)
OBJECTS_REG = $(SOURCES_REG:%=verible/%)
OBJECTS_RAM = $(SOURCES_RAM:%=verible/%)

VFLAGS = ""
#VFLAGS += --cc --exe --build -j 0 --main
#VFLAGS += --timing
# NOTE: "--binary" is an alias for "--main --exe --build --timing"
# NOTE: "--cc" seems to be the default option, so it's not needed...
VFLAGS += --cc --binary -j 0
VFLAGS += -Wall -Wno-fatal
VFLAGS += --trace
VFLAGS += --assert
VFLAGS += --coverage

conda:
	# Install Miniconda3
	#    https://docs.anaconda.com/miniconda/
	mkdir -p ~/miniconda3
	wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh -O ~/miniconda3/miniconda.sh
	bash ~/miniconda3/miniconda.sh -b -u -p ~/miniconda3
	rm ~/miniconda3/miniconda.sh

	# Add Miniconda3 to the PATH but disable default base environment init in shells
	~/miniconda3/bin/conda init --all
	~/miniconda3/bin/conda config --set auto_activate_base false

	# Create environment for DPAA
	~/miniconda3/bin/conda create --name labs-dpaa --channel conda-forge -y verilator=5.034 verible=0.0_3667_g88d12889 gtkwave

verilator-alu: $(OBJECTS_ALU)
	verilator $(VFLAGS) $^

verilator-regfile: $(OBJECTS_REG)
	verilator $(VFLAGS) $^

verilator-ram: $(OBJECTS_RAM)
	verilator $(VFLAGS) $^

run-alu: verilator-alu
	./obj_dir/Valu
	verilator_coverage --annotate coverage_annotated coverage.dat

run-regfile: verilator-regfile
	./obj_dir/Vregfile
	verilator_coverage --annotate coverage_annotated coverage.dat

run-ram: verilator-ram
	./obj_dir/Vram
	verilator_coverage --annotate coverage_annotated coverage.dat

waves-alu: run-alu
	gtkwave dump.vcd

waves-regfile: run-regfile
	gtkwave dump.vcd

waves-ram: run-ram
	gtkwave dump.vcd

clean:
	rm -rf verible obj_dir dump.vcd coverage.dat coverage_annotated

verible/%.sv: %.sv
	# Copy files to build directory
	mkdir -p verible/rtl verible/tb verible/verif
	cp $< $@

	# Format SystemVerilog code
	verible-verilog-format $@ --inplace \
		--formal_parameters_indentation indent --named_parameter_indentation indent \
		--named_port_indentation indent --port_declarations_indentation indent 2> /dev/null

	# Lint SystemVerilog code
	verible-verilog-lint $@ --lint_fatal=false --parse_fatal=false
