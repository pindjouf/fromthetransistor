// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblink.h for the primary calling header

#include "Vblink__pch.h"
#include "Vblink__Syms.h"
#include "Vblink___024root.h"

VL_ATTR_COLD void Vblink___024root___eval_initial__TOP(Vblink___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vblink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblink___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    VL_PRINTF_MT("-Info: blink_tb.sv:24: $dumpvar ignored, as Verilated without --trace\n");
}
