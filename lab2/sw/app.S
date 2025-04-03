# riscvtest.s
# Sarah.Harris@unlv.edu
# David_Harris@hmc.edu
# 27 Oct 2020
#
# Test the RISC-V processor.  
#  addi, beq

#       RISC-V Assembly         Description               Address   Machine Code
main:   lui x2, 8               # x2 = 5                  0         00500113
        ori x3, x0, -20
        add x2, x2, x3
done:   beq  x2, x2, done       # infinite loop           4        00210063
