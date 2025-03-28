// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile__pch.h"
#include "Vregfile___024root.h"

VL_ATTR_COLD void Vregfile___024root___eval_initial__TOP(Vregfile___024root* vlSelf);
VlCoroutine Vregfile___024root___eval_initial__TOP__Vtiming__0(Vregfile___024root* vlSelf);
VlCoroutine Vregfile___024root___eval_initial__TOP__Vtiming__1(Vregfile___024root* vlSelf);

void Vregfile___024root___eval_initial(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_initial\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregfile___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vregfile___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vregfile___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0 
        = vlSelfRef.tb_regfile__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__rst_n__0 
        = vlSelfRef.tb_regfile__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__a1__0 
        = vlSelfRef.tb_regfile__DOT__a1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__a2__0 
        = vlSelfRef.tb_regfile__DOT__a2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__a3__0 
        = vlSelfRef.tb_regfile__DOT__a3;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__rd1__0 
        = vlSelfRef.tb_regfile__DOT__rd1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__rd2__0 
        = vlSelfRef.tb_regfile__DOT__rd2;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__wd3__0 
        = vlSelfRef.tb_regfile__DOT__wd3;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__we3__0 
        = vlSelfRef.tb_regfile__DOT__we3;
}

void Vregfile___024root___act_sequent__TOP__0(Vregfile___024root* vlSelf);
void Vregfile___024root___act_sequent__TOP__1(Vregfile___024root* vlSelf);
void Vregfile___024root___act_comb__TOP__0(Vregfile___024root* vlSelf);

void Vregfile___024root___eval_act(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_act\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vregfile___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vregfile___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x203ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vregfile___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vregfile___024root___nba_sequent__TOP__0(Vregfile___024root* vlSelf);
void Vregfile___024root___nba_sequent__TOP__1(Vregfile___024root* vlSelf);

void Vregfile___024root___eval_nba(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_nba\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1fcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vregfile___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vregfile___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vregfile___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vregfile___024root___timing_resume(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___timing_resume\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vregfile___024root___eval_triggers__act(Vregfile___024root* vlSelf);

bool Vregfile___024root___eval_phase__act(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_phase__act\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<10> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregfile___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vregfile___024root___timing_resume(vlSelf);
        Vregfile___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregfile___024root___eval_phase__nba(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_phase__nba\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregfile___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__nba(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__act(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile___024root___eval(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__rst_n 
        = vlSelfRef.tb_regfile__DOT__rst_n;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__rf 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_0_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_0_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_1_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_1_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_2_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_2_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_3_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_3_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_4_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_4_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_5_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_5_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_6_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_6_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_7_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_7_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_8_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_8_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_9_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_9_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_10_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_10_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_11_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_11_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_12_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_12_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_13_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_13_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_14_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_14_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_15_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_15_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_16_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_16_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_17_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_17_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_18_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_18_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_19_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_19_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_20_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_20_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_21_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_21_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_22_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_22_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_23_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_23_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_24_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_24_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_25_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_25_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_26_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_26_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_27_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_27_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_28_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_28_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_29_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_29_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_30_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_30_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_31_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_31_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_32_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_32_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_33_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_33_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_34_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_34_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_35_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_35_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_36_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_36_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_37_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_37_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_38_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_38_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_39_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_39_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_40_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_40_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_41_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_41_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_42_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_42_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_43_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_43_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_44_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_44_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_45_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_45_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_46_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_46_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_47_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_47_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_48_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_48_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_49_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_49_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_50_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_50_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_51_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_51_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_52_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_52_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_53_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_53_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_54_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_54_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_55_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_55_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_56_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_56_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_57_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_57_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_58_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_58_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_59_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_59_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_60_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_60_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_61_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_61_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_62_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_62_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_63_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_63_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_64_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_64_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_65_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_65_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_66_0 
        = vlSelfRef.tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_66_0;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__rd1 
        = vlSelfRef.tb_regfile__DOT__rd1;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__a1 = vlSelfRef.tb_regfile__DOT__a1;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__rd2 
        = vlSelfRef.tb_regfile__DOT__rd2;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__a2 = vlSelfRef.tb_regfile__DOT__a2;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__we3 
        = vlSelfRef.tb_regfile__DOT__we3;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__a3 = vlSelfRef.tb_regfile__DOT__a3;
    vlSelfRef.__Vsampled_TOP__tb_regfile__DOT__wd3 
        = vlSelfRef.tb_regfile__DOT__wd3;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vregfile___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("verible/tb/tb_regfile.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vregfile___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("verible/tb/tb_regfile.sv", 9, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vregfile___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vregfile___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregfile___024root___eval_debug_assertions(Vregfile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_debug_assertions\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
