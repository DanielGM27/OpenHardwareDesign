// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile__pch.h"
#include "Vregfile__Syms.h"
#include "Vregfile___024unit.h"

void Vregfile___024unit___ctor_var_reset(Vregfile___024unit* vlSelf);

Vregfile___024unit::Vregfile___024unit(Vregfile__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregfile___024unit___ctor_var_reset(this);
}

void Vregfile___024unit___configure_coverage(Vregfile___024unit* vlSelf, bool first);

void Vregfile___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vregfile___024unit___configure_coverage(this, first);
}

Vregfile___024unit::~Vregfile___024unit() {
}

// Coverage
void Vregfile___024unit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{VerilatedModule::name()} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
