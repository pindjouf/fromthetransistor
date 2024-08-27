// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblink_tb.h for the primary calling header

#include "Vblink_tb__pch.h"
#include "Vblink_tb__Syms.h"
#include "Vblink_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vblink_tb___024root___eval_initial__TOP__Vtiming__0(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF_NX("Running testbench...\n",0);
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x1c9c380ULL, 
                                       nullptr, "blink_tb.sv", 
                                       23);
    VL_WRITEF_NX("Done: made file dump.vcd\n",0);
    VL_FINISH_MT("blink_tb.sv", 25, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink_tb___024root___dump_triggers__act(Vblink_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vblink_tb___024root___eval_triggers__act(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vblink_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
