// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblink_tb.h for the primary calling header

#include "Vblink_tb__pch.h"
#include "Vblink_tb___024root.h"

VL_ATTR_COLD void Vblink_tb___024root___eval_initial__TOP(Vblink_tb___024root* vlSelf);
VlCoroutine Vblink_tb___024root___eval_initial__TOP__Vtiming__0(Vblink_tb___024root* vlSelf);
VlCoroutine Vblink_tb___024root___eval_initial__TOP__Vtiming__1(Vblink_tb___024root* vlSelf);

void Vblink_tb___024root___eval_initial(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___eval_initial\n"); );
    // Body
    Vblink_tb___024root___eval_initial__TOP(vlSelf);
    Vblink_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vblink_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vblink_tb___024root___eval_initial__TOP__Vtiming__1(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "blink_tb.sv", 
                                           11);
        vlSelf->__VdlyVal__blink_tb__DOT__clk__v0 = 
            (1U & (~ (IData)(vlSelf->blink_tb__DOT__clk)));
        vlSelf->__VdlySet__blink_tb__DOT__clk__v0 = 1U;
    }
}

void Vblink_tb___024root___eval_act(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___eval_act\n"); );
}

void Vblink_tb___024root___nba_sequent__TOP__0(Vblink_tb___024root* vlSelf);

void Vblink_tb___024root___eval_nba(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vblink_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vblink_tb___024root___nba_sequent__TOP__0(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__VdlySet__blink_tb__DOT__clk__v0) {
        vlSelf->__VdlySet__blink_tb__DOT__clk__v0 = 0U;
        vlSelf->blink_tb__DOT__clk = vlSelf->__VdlyVal__blink_tb__DOT__clk__v0;
    }
}

void Vblink_tb___024root___timing_resume(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vblink_tb___024root___eval_triggers__act(Vblink_tb___024root* vlSelf);

bool Vblink_tb___024root___eval_phase__act(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vblink_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vblink_tb___024root___timing_resume(vlSelf);
        Vblink_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vblink_tb___024root___eval_phase__nba(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vblink_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink_tb___024root___dump_triggers__nba(Vblink_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink_tb___024root___dump_triggers__act(Vblink_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vblink_tb___024root___eval(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vblink_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("blink_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vblink_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("blink_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vblink_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vblink_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vblink_tb___024root___eval_debug_assertions(Vblink_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG