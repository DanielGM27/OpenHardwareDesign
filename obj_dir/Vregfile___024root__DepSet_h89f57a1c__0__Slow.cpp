// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile__pch.h"
#include "Vregfile__Syms.h"
#include "Vregfile___024root.h"

VL_ATTR_COLD void Vregfile___024root___eval_initial__TOP(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_initial__TOP\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    ++(vlSymsp->__Vcoverage[120]);
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    ++(vlSymsp->__Vcoverage[121]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__stl(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregfile___024root___eval_triggers__stl(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_triggers__stl\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregfile___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vregfile___024root___stl_sequent__TOP__0(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___stl_sequent__TOP__0\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_regfile__DOT__clk) ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__clk = vlSelfRef.tb_regfile__DOT__clk;
    }
    if (((IData)(vlSelfRef.tb_regfile__DOT__rst_n) 
         ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rst_n 
            = vlSelfRef.tb_regfile__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.tb_regfile__DOT__we3) ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__we3))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__we3 = vlSelfRef.tb_regfile__DOT__we3;
    }
    if ((1U & ((IData)(vlSelfRef.tb_regfile__DOT__a1) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a1)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a1 = 
            ((0x1eU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a1)) 
             | (1U & (IData)(vlSelfRef.tb_regfile__DOT__a1)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_regfile__DOT__a1) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a1)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a1 = 
            ((0x1dU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a1)) 
             | (2U & (IData)(vlSelfRef.tb_regfile__DOT__a1)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_regfile__DOT__a1) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a1)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a1 = 
            ((0x1bU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a1)) 
             | (4U & (IData)(vlSelfRef.tb_regfile__DOT__a1)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_regfile__DOT__a1) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a1)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a1 = 
            ((0x17U & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a1)) 
             | (8U & (IData)(vlSelfRef.tb_regfile__DOT__a1)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_regfile__DOT__a1) 
                  ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a1)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a1 = 
            ((0xfU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a1)) 
             | (0x10U & (IData)(vlSelfRef.tb_regfile__DOT__a1)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_regfile__DOT__a2) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a2)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a2 = 
            ((0x1eU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a2)) 
             | (1U & (IData)(vlSelfRef.tb_regfile__DOT__a2)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_regfile__DOT__a2) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a2)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a2 = 
            ((0x1dU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a2)) 
             | (2U & (IData)(vlSelfRef.tb_regfile__DOT__a2)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_regfile__DOT__a2) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a2)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a2 = 
            ((0x1bU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a2)) 
             | (4U & (IData)(vlSelfRef.tb_regfile__DOT__a2)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_regfile__DOT__a2) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a2)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a2 = 
            ((0x17U & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a2)) 
             | (8U & (IData)(vlSelfRef.tb_regfile__DOT__a2)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_regfile__DOT__a2) 
                  ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a2)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a2 = 
            ((0xfU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a2)) 
             | (0x10U & (IData)(vlSelfRef.tb_regfile__DOT__a2)));
    }
    if ((1U & ((IData)(vlSelfRef.tb_regfile__DOT__a3) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a3)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a3 = 
            ((0x1eU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a3)) 
             | (1U & (IData)(vlSelfRef.tb_regfile__DOT__a3)));
    }
    if ((2U & ((IData)(vlSelfRef.tb_regfile__DOT__a3) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a3)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a3 = 
            ((0x1dU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a3)) 
             | (2U & (IData)(vlSelfRef.tb_regfile__DOT__a3)));
    }
    if ((4U & ((IData)(vlSelfRef.tb_regfile__DOT__a3) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a3)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a3 = 
            ((0x1bU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a3)) 
             | (4U & (IData)(vlSelfRef.tb_regfile__DOT__a3)));
    }
    if ((8U & ((IData)(vlSelfRef.tb_regfile__DOT__a3) 
               ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a3)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a3 = 
            ((0x17U & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a3)) 
             | (8U & (IData)(vlSelfRef.tb_regfile__DOT__a3)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb_regfile__DOT__a3) 
                  ^ (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a3)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__a3 = 
            ((0xfU & (IData)(vlSelfRef.tb_regfile__DOT____Vtogcov__a3)) 
             | (0x10U & (IData)(vlSelfRef.tb_regfile__DOT__a3)));
    }
    if ((1U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffffffeU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (1U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((2U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffffffdU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (2U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((4U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffffffbU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (4U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((8U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffffff7U & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (8U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x10U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffffffefU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x10U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x20U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffffffdfU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x20U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x40U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffffffbfU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x40U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x80U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffffff7fU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x80U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x100U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffffeffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x100U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x200U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffffdffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x200U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x400U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffffbffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x400U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x800U & (vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffff7ffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x800U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x1000U & (vlSelfRef.tb_regfile__DOT__wd3 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffffefffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x1000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x2000U & (vlSelfRef.tb_regfile__DOT__wd3 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffffdfffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x2000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x4000U & (vlSelfRef.tb_regfile__DOT__wd3 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffffbfffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x4000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x8000U & (vlSelfRef.tb_regfile__DOT__wd3 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffff7fffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x8000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x10000U & (vlSelfRef.tb_regfile__DOT__wd3 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffeffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x10000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x20000U & (vlSelfRef.tb_regfile__DOT__wd3 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffdffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x20000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x40000U & (vlSelfRef.tb_regfile__DOT__wd3 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfffbffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x40000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x80000U & (vlSelfRef.tb_regfile__DOT__wd3 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfff7ffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x80000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x100000U & (vlSelfRef.tb_regfile__DOT__wd3 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffefffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x100000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x200000U & (vlSelfRef.tb_regfile__DOT__wd3 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffdfffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x200000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x400000U & (vlSelfRef.tb_regfile__DOT__wd3 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xffbfffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x400000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x800000U & (vlSelfRef.tb_regfile__DOT__wd3 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xff7fffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x800000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x1000000U & (vlSelfRef.tb_regfile__DOT__wd3 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfeffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x1000000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x2000000U & (vlSelfRef.tb_regfile__DOT__wd3 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfdffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x2000000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x4000000U & (vlSelfRef.tb_regfile__DOT__wd3 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xfbffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x4000000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x8000000U & (vlSelfRef.tb_regfile__DOT__wd3 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xf7ffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x8000000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x10000000U & (vlSelfRef.tb_regfile__DOT__wd3 
                        ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xefffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x10000000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x20000000U & (vlSelfRef.tb_regfile__DOT__wd3 
                        ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xdfffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x20000000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if ((0x40000000U & (vlSelfRef.tb_regfile__DOT__wd3 
                        ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0xbfffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x40000000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    if (((vlSelfRef.tb_regfile__DOT__wd3 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__wd3 = 
            ((0x7fffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__wd3) 
             | (0x80000000U & vlSelfRef.tb_regfile__DOT__wd3));
    }
    vlSelfRef.tb_regfile__DOT__rd1 = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf
        [vlSelfRef.tb_regfile__DOT__a1];
    vlSelfRef.tb_regfile__DOT__rd2 = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf
        [vlSelfRef.tb_regfile__DOT__a2];
    if ((1U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffffffeU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (1U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((2U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffffffdU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (2U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((4U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffffffbU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (4U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((8U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffffff7U & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (8U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x10U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffffffefU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x10U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x20U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffffffdfU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x20U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x40U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffffffbfU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x40U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x80U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffffff7fU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x80U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x100U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffffeffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x100U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x200U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffffdffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x200U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x400U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffffbffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x400U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x800U & (vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffff7ffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x800U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x1000U & (vlSelfRef.tb_regfile__DOT__rd1 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffffefffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x1000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x2000U & (vlSelfRef.tb_regfile__DOT__rd1 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffffdfffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x2000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x4000U & (vlSelfRef.tb_regfile__DOT__rd1 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffffbfffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x4000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x8000U & (vlSelfRef.tb_regfile__DOT__rd1 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffff7fffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x8000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x10000U & (vlSelfRef.tb_regfile__DOT__rd1 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffeffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x10000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x20000U & (vlSelfRef.tb_regfile__DOT__rd1 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffdffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x20000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x40000U & (vlSelfRef.tb_regfile__DOT__rd1 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfffbffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x40000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x80000U & (vlSelfRef.tb_regfile__DOT__rd1 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfff7ffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x80000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x100000U & (vlSelfRef.tb_regfile__DOT__rd1 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffefffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x100000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x200000U & (vlSelfRef.tb_regfile__DOT__rd1 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffdfffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x200000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x400000U & (vlSelfRef.tb_regfile__DOT__rd1 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xffbfffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x400000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x800000U & (vlSelfRef.tb_regfile__DOT__rd1 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xff7fffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x800000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x1000000U & (vlSelfRef.tb_regfile__DOT__rd1 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfeffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x1000000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x2000000U & (vlSelfRef.tb_regfile__DOT__rd1 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfdffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x2000000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x4000000U & (vlSelfRef.tb_regfile__DOT__rd1 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xfbffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x4000000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x8000000U & (vlSelfRef.tb_regfile__DOT__rd1 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xf7ffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x8000000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x10000000U & (vlSelfRef.tb_regfile__DOT__rd1 
                        ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xefffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x10000000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x20000000U & (vlSelfRef.tb_regfile__DOT__rd1 
                        ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xdfffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x20000000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((0x40000000U & (vlSelfRef.tb_regfile__DOT__rd1 
                        ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0xbfffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x40000000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if (((vlSelfRef.tb_regfile__DOT__rd1 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd1 = 
            ((0x7fffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd1) 
             | (0x80000000U & vlSelfRef.tb_regfile__DOT__rd1));
    }
    if ((1U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffffffeU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (1U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((2U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffffffdU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (2U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((4U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffffffbU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (4U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((8U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffffff7U & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (8U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x10U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffffffefU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x10U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x20U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffffffdfU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x20U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x40U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffffffbfU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x40U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x80U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffffff7fU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x80U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x100U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffffeffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x100U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x200U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffffdffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x200U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x400U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffffbffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x400U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x800U & (vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffff7ffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x800U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x1000U & (vlSelfRef.tb_regfile__DOT__rd2 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffffefffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x1000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x2000U & (vlSelfRef.tb_regfile__DOT__rd2 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffffdfffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x2000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x4000U & (vlSelfRef.tb_regfile__DOT__rd2 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffffbfffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x4000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x8000U & (vlSelfRef.tb_regfile__DOT__rd2 
                    ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffff7fffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x8000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x10000U & (vlSelfRef.tb_regfile__DOT__rd2 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffeffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x10000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x20000U & (vlSelfRef.tb_regfile__DOT__rd2 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffdffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x20000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x40000U & (vlSelfRef.tb_regfile__DOT__rd2 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfffbffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x40000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x80000U & (vlSelfRef.tb_regfile__DOT__rd2 
                     ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfff7ffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x80000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x100000U & (vlSelfRef.tb_regfile__DOT__rd2 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffefffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x100000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x200000U & (vlSelfRef.tb_regfile__DOT__rd2 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffdfffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x200000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x400000U & (vlSelfRef.tb_regfile__DOT__rd2 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xffbfffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x400000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x800000U & (vlSelfRef.tb_regfile__DOT__rd2 
                      ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xff7fffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x800000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x1000000U & (vlSelfRef.tb_regfile__DOT__rd2 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfeffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x1000000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x2000000U & (vlSelfRef.tb_regfile__DOT__rd2 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfdffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x2000000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x4000000U & (vlSelfRef.tb_regfile__DOT__rd2 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xfbffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x4000000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x8000000U & (vlSelfRef.tb_regfile__DOT__rd2 
                       ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xf7ffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x8000000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x10000000U & (vlSelfRef.tb_regfile__DOT__rd2 
                        ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xefffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x10000000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x20000000U & (vlSelfRef.tb_regfile__DOT__rd2 
                        ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xdfffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x20000000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if ((0x40000000U & (vlSelfRef.tb_regfile__DOT__rd2 
                        ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0xbfffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x40000000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
    if (((vlSelfRef.tb_regfile__DOT__rd2 ^ vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.tb_regfile__DOT____Vtogcov__rd2 = 
            ((0x7fffffffU & vlSelfRef.tb_regfile__DOT____Vtogcov__rd2) 
             | (0x80000000U & vlSelfRef.tb_regfile__DOT__rd2));
    }
}

VL_ATTR_COLD void Vregfile___024root___configure_coverage(Vregfile___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___configure_coverage\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "verible/tb/tb_regfile.sv", 21, 9, ".tb_regfile", "v_toggle/tb_regfile", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "verible/tb/tb_regfile.sv", 22, 9, ".tb_regfile", "v_toggle/tb_regfile", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "verible/tb/tb_regfile.sv", 23, 25, ".tb_regfile", "v_toggle/tb_regfile", "a1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "verible/tb/tb_regfile.sv", 23, 25, ".tb_regfile", "v_toggle/tb_regfile", "a1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "verible/tb/tb_regfile.sv", 23, 25, ".tb_regfile", "v_toggle/tb_regfile", "a1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "verible/tb/tb_regfile.sv", 23, 25, ".tb_regfile", "v_toggle/tb_regfile", "a1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "verible/tb/tb_regfile.sv", 23, 25, ".tb_regfile", "v_toggle/tb_regfile", "a1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "verible/tb/tb_regfile.sv", 24, 25, ".tb_regfile", "v_toggle/tb_regfile", "a2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "verible/tb/tb_regfile.sv", 24, 25, ".tb_regfile", "v_toggle/tb_regfile", "a2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "verible/tb/tb_regfile.sv", 24, 25, ".tb_regfile", "v_toggle/tb_regfile", "a2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "verible/tb/tb_regfile.sv", 24, 25, ".tb_regfile", "v_toggle/tb_regfile", "a2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "verible/tb/tb_regfile.sv", 24, 25, ".tb_regfile", "v_toggle/tb_regfile", "a2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "verible/tb/tb_regfile.sv", 25, 25, ".tb_regfile", "v_toggle/tb_regfile", "a3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "verible/tb/tb_regfile.sv", 25, 25, ".tb_regfile", "v_toggle/tb_regfile", "a3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "verible/tb/tb_regfile.sv", 25, 25, ".tb_regfile", "v_toggle/tb_regfile", "a3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "verible/tb/tb_regfile.sv", 25, 25, ".tb_regfile", "v_toggle/tb_regfile", "a3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "verible/tb/tb_regfile.sv", 25, 25, ".tb_regfile", "v_toggle/tb_regfile", "a3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "verible/tb/tb_regfile.sv", 26, 9, ".tb_regfile", "v_toggle/tb_regfile", "we3", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "verible/tb/tb_regfile.sv", 27, 20, ".tb_regfile", "v_toggle/tb_regfile", "wd3[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "verible/tb/tb_regfile.sv", 28, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "verible/tb/tb_regfile.sv", 29, 20, ".tb_regfile", "v_toggle/tb_regfile", "rd2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "verible/tb/tb_regfile.sv", 56, 24, ".tb_regfile", "v_expr/tb_regfile", "(clk==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "verible/tb/tb_regfile.sv", 56, 24, ".tb_regfile", "v_expr/tb_regfile", "(clk==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "verible/tb/tb_regfile.sv", 56, 5, ".tb_regfile", "v_line/tb_regfile", "block", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "verible/tb/tb_regfile.sv", 54, 3, ".tb_regfile", "v_line/tb_regfile", "block", "54-55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "verible/tb/tb_regfile.sv", 77, 5, ".tb_regfile", "v_line/tb_regfile", "block", "77-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "verible/tb/tb_regfile.sv", 60, 3, ".tb_regfile", "v_line/tb_regfile", "block", "60,62,65-69,71,74,77,88-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "verible/tb/tb_regfile.sv", 93, 3, ".tb_regfile", "v_line/tb_regfile", "block", "93-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "verible/tb/tb_regfile.sv", 99, 3, ".tb_regfile", "v_line/tb_regfile", "block", "99-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "verible/rtl/regfile.sv", 11, 15, ".tb_regfile.regfile_i", "v_toggle/regfile", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "verible/rtl/regfile.sv", 12, 15, ".tb_regfile.regfile_i", "v_toggle/regfile", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "verible/rtl/regfile.sv", 13, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a1_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "verible/rtl/regfile.sv", 13, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a1_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "verible/rtl/regfile.sv", 13, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a1_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "verible/rtl/regfile.sv", 13, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a1_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "verible/rtl/regfile.sv", 13, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a1_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "verible/rtl/regfile.sv", 14, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a2_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "verible/rtl/regfile.sv", 14, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a2_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "verible/rtl/regfile.sv", 14, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a2_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "verible/rtl/regfile.sv", 14, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a2_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "verible/rtl/regfile.sv", 14, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a2_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "verible/rtl/regfile.sv", 15, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a3_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "verible/rtl/regfile.sv", 15, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a3_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "verible/rtl/regfile.sv", 15, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a3_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "verible/rtl/regfile.sv", 15, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a3_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "verible/rtl/regfile.sv", 15, 31, ".tb_regfile.regfile_i", "v_toggle/regfile", "a3_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "verible/rtl/regfile.sv", 16, 15, ".tb_regfile.regfile_i", "v_toggle/regfile", "we3_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "verible/rtl/regfile.sv", 17, 26, ".tb_regfile.regfile_i", "v_toggle/regfile", "wd3_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "verible/rtl/regfile.sv", 18, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd1_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "verible/rtl/regfile.sv", 19, 27, ".tb_regfile.regfile_i", "v_toggle/regfile", "rd2_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "verible/rtl/regfile.sv", 29, 7, ".tb_regfile.regfile_i", "v_line/regfile", "block", "29-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "verible/rtl/regfile.sv", 34, 26, ".tb_regfile.regfile_i", "v_expr/regfile", "((a3_i == 5'h0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "verible/rtl/regfile.sv", 34, 26, ".tb_regfile.regfile_i", "v_expr/regfile", "((a3_i == 5'h0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "verible/rtl/regfile.sv", 33, 7, ".tb_regfile.regfile_i", "v_branch/regfile", "if", "33-34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "verible/rtl/regfile.sv", 33, 8, ".tb_regfile.regfile_i", "v_branch/regfile", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "verible/rtl/regfile.sv", 28, 5, ".tb_regfile.regfile_i", "v_branch/regfile", "if", "28-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "verible/rtl/regfile.sv", 28, 6, ".tb_regfile.regfile_i", "v_branch/regfile", "else", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "verible/rtl/regfile.sv", 28, 9, ".tb_regfile.regfile_i", "v_expr/regfile", "(rst_ni==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "verible/rtl/regfile.sv", 28, 9, ".tb_regfile.regfile_i", "v_expr/regfile", "(rst_ni==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "verible/rtl/regfile.sv", 27, 3, ".tb_regfile.regfile_i", "v_line/regfile", "block", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "verible/verif/prop_regfile.sv", 14, 15, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "verible/verif/prop_regfile.sv", 15, 15, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rst_ni", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "verible/verif/prop_regfile.sv", 16, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a1_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "verible/verif/prop_regfile.sv", 16, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a1_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "verible/verif/prop_regfile.sv", 16, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a1_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "verible/verif/prop_regfile.sv", 16, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a1_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "verible/verif/prop_regfile.sv", 16, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a1_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "verible/verif/prop_regfile.sv", 17, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a2_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "verible/verif/prop_regfile.sv", 17, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a2_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "verible/verif/prop_regfile.sv", 17, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a2_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "verible/verif/prop_regfile.sv", 17, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a2_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "verible/verif/prop_regfile.sv", 17, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a2_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "verible/verif/prop_regfile.sv", 18, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a3_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "verible/verif/prop_regfile.sv", 18, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a3_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "verible/verif/prop_regfile.sv", 18, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a3_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "verible/verif/prop_regfile.sv", 18, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a3_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "verible/verif/prop_regfile.sv", 18, 31, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "a3_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "verible/verif/prop_regfile.sv", 19, 15, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "we3_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "verible/verif/prop_regfile.sv", 20, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "wd3_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "verible/verif/prop_regfile.sv", 21, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd1_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "verible/verif/prop_regfile.sv", 22, 26, ".tb_regfile.regfile_i.prop_regfile_i", "v_toggle/prop_regfile", "rd2_o[31]", "");
}
