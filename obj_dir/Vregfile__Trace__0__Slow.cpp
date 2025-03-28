// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile__Syms.h"


VL_ATTR_COLD void Vregfile___024root__trace_init_sub__TOP__0(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_init_sub__TOP__0\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"XLen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+44,0,"NReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+45,0,"NRegWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+46,0,"Iterations",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"a3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"we3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"wd3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"rd1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"rd2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regfile_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"XLen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+44,0,"NReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+45,0,"NRegWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+41,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"a1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"a2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"a3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"we3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"wd3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"rd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"rd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+40,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("prop_regfile_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"XLen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+44,0,"NReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+45,0,"NRegWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+41,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"a1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"a2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"a3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"we3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"wd3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"rd1_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"rd2_o",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vregfile___024root__trace_init_top(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_init_top\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregfile___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregfile___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vregfile___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregfile___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregfile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregfile___024root__trace_register(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_register\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vregfile___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vregfile___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vregfile___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vregfile___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregfile___024root__trace_const_0_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregfile___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_const_0\n"); );
    // Init
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregfile___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregfile___024root__trace_const_0_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_const_0_sub_0\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+44,(0x20U),32);
    bufp->fullIData(oldp+45,(5U),32);
    bufp->fullIData(oldp+46,(0x40U),32);
}

VL_ATTR_COLD void Vregfile___024root__trace_full_0_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregfile___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_full_0\n"); );
    // Init
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregfile___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregfile___024root__trace_full_0_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_full_0_sub_0\n"); );
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_regfile__DOT__rst_n));
    bufp->fullCData(oldp+2,(vlSelfRef.tb_regfile__DOT__a1),5);
    bufp->fullCData(oldp+3,(vlSelfRef.tb_regfile__DOT__a2),5);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_regfile__DOT__a3),5);
    bufp->fullBit(oldp+5,(vlSelfRef.tb_regfile__DOT__we3));
    bufp->fullIData(oldp+6,(vlSelfRef.tb_regfile__DOT__wd3),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[0]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[1]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[2]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[3]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[4]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[5]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[6]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[7]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[8]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[9]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[10]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[11]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[12]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[13]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[14]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[15]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[16]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[17]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[18]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[19]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[20]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[21]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[22]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[23]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[24]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[25]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[26]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[27]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[28]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[29]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[30]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__rf[31]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_regfile__DOT__regfile_i__DOT__i),32);
    bufp->fullBit(oldp+41,(vlSelfRef.tb_regfile__DOT__clk));
    bufp->fullIData(oldp+42,(vlSelfRef.tb_regfile__DOT__rd1),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_regfile__DOT__rd2),32);
}
