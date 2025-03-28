// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile__pch.h"
#include "Vregfile___024unit.h"

VL_ATTR_COLD void Vregfile___024unit___ctor_var_reset(Vregfile___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vregfile___024unit___ctor_var_reset\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void Vregfile___024unit___configure_coverage(Vregfile___024unit* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vregfile___024unit___configure_coverage\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
