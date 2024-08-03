// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblink_tb.h for the primary calling header

#include "Vblink_tb__pch.h"
#include "Vblink_tb__Syms.h"
#include "Vblink_tb___024root.h"

void Vblink_tb___024root___ctor_var_reset(Vblink_tb___024root* vlSelf);

Vblink_tb___024root::Vblink_tb___024root(Vblink_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vblink_tb___024root___ctor_var_reset(this);
}

void Vblink_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vblink_tb___024root::~Vblink_tb___024root() {
}
