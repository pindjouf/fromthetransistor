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
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->tb__DOT__clk = 0U;
    vlSelf->tb__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb.sv", 21);
    vlSelf->tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb.sv", 22);
    vlSelf->tb__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       24);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb.sv", 26);
    vlSelf->tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb.sv", 27);
    vlSelf->tb__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       29);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       29);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       29);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       29);
    co_await vlSelf->__VtrigSched_h95cd1bbb__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "tb.sv", 
                                                       29);
    VL_FINISH_MT("tb.sv", 31, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
