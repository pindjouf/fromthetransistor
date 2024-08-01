// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblink.h for the primary calling header

#include "Vblink__pch.h"
#include "Vblink___024root.h"

VL_ATTR_COLD void Vblink___024root___eval_static__TOP(Vblink___024root* vlSelf);

VL_ATTR_COLD void Vblink___024root___eval_static(Vblink___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_static\n"); );
    // Body
    Vblink___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vblink___024root___eval_static__TOP(Vblink___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->blink_tb__DOT__r_Clock = 0U;
}

VL_ATTR_COLD void Vblink___024root___eval_final(Vblink___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vblink___024root___eval_settle(Vblink___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink___024root___dump_triggers__act(Vblink___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblink___024root___dump_triggers__nba(Vblink___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vblink___024root___ctor_var_reset(Vblink___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->blink_tb__DOT__r_Clock = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__blink_tb__DOT__r_Clock__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__blink_tb__DOT__r_Clock__v0 = 0;
}
