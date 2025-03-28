// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile.h for the primary calling header

#ifndef VERILATED_VREGFILE___024ROOT_H_
#define VERILATED_VREGFILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vregfile___024unit;


class Vregfile__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregfile___024root final : public VerilatedModule {
  public:
    // CELLS
    Vregfile___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_regfile__DOT__clk;
        CData/*0:0*/ tb_regfile__DOT__rst_n;
        CData/*0:0*/ tb_regfile__DOT__we3;
        CData/*4:0*/ tb_regfile__DOT__a1;
        CData/*4:0*/ tb_regfile__DOT__a2;
        CData/*4:0*/ tb_regfile__DOT__a3;
        CData/*0:0*/ tb_regfile__DOT____Vtogcov__clk;
        CData/*0:0*/ tb_regfile__DOT____Vtogcov__rst_n;
        CData/*4:0*/ tb_regfile__DOT____Vtogcov__a1;
        CData/*4:0*/ tb_regfile__DOT____Vtogcov__a2;
        CData/*4:0*/ tb_regfile__DOT____Vtogcov__a3;
        CData/*0:0*/ tb_regfile__DOT____Vtogcov__we3;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_0_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_2_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_4_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_6_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_8_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_10_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_12_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_14_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_16_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_18_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_20_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_22_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_24_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_26_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_28_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_30_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_32_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_34_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_36_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_38_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_40_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_42_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_44_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_46_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_48_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_50_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_52_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_54_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_56_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_58_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_60_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_62_0;
        CData/*0:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_64_0;
        CData/*4:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_65_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__rst_n;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_0_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_2_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_4_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_6_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_8_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_10_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_12_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_14_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_16_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_18_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_20_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_22_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_24_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_26_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_28_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_30_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_32_0;
    };
    struct {
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_34_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_36_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_38_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_40_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_42_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_44_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_46_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_48_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_50_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_52_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_54_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_56_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_58_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_60_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_62_0;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_64_0;
        CData/*4:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_65_0;
        CData/*4:0*/ __Vsampled_TOP__tb_regfile__DOT__a1;
        CData/*4:0*/ __Vsampled_TOP__tb_regfile__DOT__a2;
        CData/*0:0*/ __Vsampled_TOP__tb_regfile__DOT__we3;
        CData/*4:0*/ __Vsampled_TOP__tb_regfile__DOT__a3;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__rst_n__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__a1__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__a2__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__a3__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__we3__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_regfile__DOT__wd3;
        IData/*31:0*/ tb_regfile__DOT__rd1;
        IData/*31:0*/ tb_regfile__DOT__rd2;
        IData/*31:0*/ tb_regfile__DOT____Vtogcov__wd3;
        IData/*31:0*/ tb_regfile__DOT____Vtogcov__rd1;
        IData/*31:0*/ tb_regfile__DOT____Vtogcov__rd2;
        IData/*31:0*/ tb_regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__i;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_1_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_3_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_5_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_7_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_9_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_11_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_13_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_15_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_17_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_19_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_21_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_23_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_25_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_27_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_29_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_31_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_33_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_35_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_37_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_39_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_41_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_43_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_45_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_47_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_49_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_51_0;
    };
    struct {
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_53_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_55_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_57_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_59_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_61_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_63_0;
        IData/*31:0*/ tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_66_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_1_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_3_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_5_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_7_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_9_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_11_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_13_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_15_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_17_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_19_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_21_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_23_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_25_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_27_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_29_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_31_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_33_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_35_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_37_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_39_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_41_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_43_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_45_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_47_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_49_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_51_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_53_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_55_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_57_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_59_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_61_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_63_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__prop_regfile_i__DOT___Vpast_66_0;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__rd1;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__rd2;
        IData/*31:0*/ __Vsampled_TOP__tb_regfile__DOT__wd3;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__rd1__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__rd2__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__wd3__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> tb_regfile__DOT__regfile_i__DOT__rf;
        VlUnpacked<IData/*31:0*/, 32> __Vsampled_TOP__tb_regfile__DOT__regfile_i__DOT__rf;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<10> __VactTriggered;
    VlTriggerVec<10> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregfile__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregfile___024root(Vregfile__Syms* symsp, const char* v__name);
    ~Vregfile___024root();
    VL_UNCOPYABLE(Vregfile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
