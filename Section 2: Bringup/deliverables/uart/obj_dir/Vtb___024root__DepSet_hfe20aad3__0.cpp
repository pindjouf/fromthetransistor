// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb__DOT__in = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb.sv", 13);
    vlSelf->tb__DOT__in = (2U | (IData)(vlSelf->tb__DOT__in));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb.sv", 14);
    vlSelf->tb__DOT__in = (1U | (IData)(vlSelf->tb__DOT__in));
    co_await vlSelf->__VdlySched.delay(0xfULL, nullptr, 
                                       "tb.sv", 15);
    vlSelf->tb__DOT__in = (1U & (IData)(vlSelf->tb__DOT__in));
    VL_WRITEF_NX("Running testbench...\n",0);
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x493e0ULL, 
                                       nullptr, "tb.sv", 
                                       19);
    VL_WRITEF_NX("Done: made file dump.vcd\n",0);
    VL_FINISH_MT("tb.sv", 21, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
