// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile__pch.h"
#include "Vregfile___024root.h"

VL_ATTR_COLD void Vregfile___024root___eval_static(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_static\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregfile___024root___eval_final(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_final\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__stl(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vregfile___024root___eval_phase__stl(Vregfile___024root* vlSelf);

VL_ATTR_COLD void Vregfile___024root___eval_settle(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_settle\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vregfile___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("verible/tb/tb_regfile.sv", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vregfile___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__stl(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___dump_triggers__stl\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregfile___024root___stl_sequent__TOP__0(Vregfile___024root* vlSelf);

VL_ATTR_COLD void Vregfile___024root___eval_stl(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_stl\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vregfile___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vregfile___024root___eval_triggers__stl(Vregfile___024root* vlSelf);

VL_ATTR_COLD bool Vregfile___024root___eval_phase__stl(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_phase__stl\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vregfile___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vregfile___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__act(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___dump_triggers__act\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_regfile.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_regfile.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_regfile.a1)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( tb_regfile.a2)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( tb_regfile.a3)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( tb_regfile.rd1)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( tb_regfile.rd2)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @( tb_regfile.wd3)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @( tb_regfile.we3)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__nba(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___dump_triggers__nba\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_regfile.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_regfile.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_regfile.a1)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( tb_regfile.a2)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( tb_regfile.a3)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( tb_regfile.rd1)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( tb_regfile.rd2)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @( tb_regfile.wd3)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @( tb_regfile.we3)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregfile___024root___ctor_var_reset(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___ctor_var_reset\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_regfile__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__a1 = VL_RAND_RESET_I(5);
    vlSelf->tb_regfile__DOT__a2 = VL_RAND_RESET_I(5);
    vlSelf->tb_regfile__DOT__a3 = VL_RAND_RESET_I(5);
    vlSelf->tb_regfile__DOT__we3 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__wd3 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__rd2 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT____Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT____Vtogcov__a1 = VL_RAND_RESET_I(5);
    vlSelf->tb_regfile__DOT____Vtogcov__a2 = VL_RAND_RESET_I(5);
    vlSelf->tb_regfile__DOT____Vtogcov__a3 = VL_RAND_RESET_I(5);
    vlSelf->tb_regfile__DOT____Vtogcov__we3 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT____Vtogcov__wd3 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT____Vtogcov__rd1 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT____Vtogcov__rd2 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_regfile__DOT__regfile_i__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_regfile__DOT__regfile_i__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_1_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_3_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_4_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_5_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_6_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_7_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_8_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_9_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_10_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_11_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_12_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_13_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_14_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_15_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_16_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_17_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_18_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_19_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_20_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_21_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_22_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_23_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_24_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_25_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_26_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_27_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_28_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_29_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_30_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_31_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_32_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_33_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_34_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_35_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_36_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_37_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_38_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_39_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_40_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_41_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_42_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_43_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_44_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_45_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_46_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_47_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_48_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_49_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_50_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_51_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_52_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_53_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_54_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_55_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_56_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_57_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_58_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_59_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_60_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_61_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_62_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_63_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_64_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_65_0 = VL_RAND_RESET_I(5);
    vlSelf->tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_66_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_1_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_3_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_4_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_5_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_6_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_7_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_8_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_9_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_10_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_11_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_12_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_13_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_14_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_15_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_16_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_17_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_18_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_19_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_20_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_21_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_22_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_23_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_24_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_25_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_26_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_27_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_28_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_29_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_30_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_31_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_32_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_33_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_34_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_35_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_36_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_37_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_38_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_39_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_40_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_41_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_42_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_43_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_44_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_45_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_46_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_47_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_48_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_49_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_50_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_51_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_52_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_53_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_54_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_55_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_56_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_57_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_58_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_59_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_60_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_61_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_62_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_63_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_64_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_65_0 = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_66_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__a1 = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__rd2 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__a2 = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__we3 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__a3 = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__tb_regfile__DOT__wd3 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__a1__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__a2__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__a3__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__rd1__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__rd2__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__wd3__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_regfile__DOT__we3__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
