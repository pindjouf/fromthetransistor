// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vblink.h for the primary calling header

#ifndef VERILATED_VBLINK___024ROOT_H_
#define VERILATED_VBLINK___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vblink__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vblink___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ blink_tb__DOT__r_Clock;
    CData/*0:0*/ __VdlyVal__blink_tb__DOT__r_Clock__v0;
    CData/*0:0*/ __VdlySet__blink_tb__DOT__r_Clock__v0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vblink__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vblink___024root(Vblink__Syms* symsp, const char* v__name);
    ~Vblink___024root();
    VL_UNCOPYABLE(Vblink___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
