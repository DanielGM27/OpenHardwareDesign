# riscvtest.s
# Sarah.Harris@unlv.edu
# David_Harris@hmc.edu
# 27 Oct 2020
#
# Test the RISC-V processor.  
#  addi, beq

#       RISC-V Assembly         Description               Address   Machine Code
main:   addi x2, x0, 5          # x2 = 5                  0         00500113
        addi x3, x0, 10
        add x4, x2, x3
done:   beq  x2, x2, done       # infinite loop           4        00210063
