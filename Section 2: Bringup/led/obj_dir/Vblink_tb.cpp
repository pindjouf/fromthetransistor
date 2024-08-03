// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vblink_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vblink_tb::Vblink_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vblink_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vblink_tb::Vblink_tb(const char* _vcname__)
    : Vblink_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vblink_tb::~Vblink_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vblink_tb___024root___eval_debug_assertions(Vblink_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vblink_tb___024root___eval_static(Vblink_tb___024root* vlSelf);
void Vblink_tb___024root___eval_initial(Vblink_tb___024root* vlSelf);
void Vblink_tb___024root___eval_settle(Vblink_tb___024root* vlSelf);
void Vblink_tb___024root___eval(Vblink_tb___024root* vlSelf);

void Vblink_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vblink_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vblink_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vblink_tb___024root___eval_static(&(vlSymsp->TOP));
        Vblink_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vblink_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vblink_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vblink_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vblink_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vblink_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vblink_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vblink_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vblink_tb___024root___eval_final(Vblink_tb___024root* vlSelf);

VL_ATTR_COLD void Vblink_tb::final() {
    Vblink_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vblink_tb::hierName() const { return vlSymsp->name(); }
const char* Vblink_tb::modelName() const { return "Vblink_tb"; }
unsigned Vblink_tb::threads() const { return 1; }
void Vblink_tb::prepareClone() const { contextp()->prepareClone(); }
void Vblink_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vblink_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vblink_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vblink_tb___024root__trace_init_top(Vblink_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vblink_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vblink_tb___024root*>(voidSelf);
    Vblink_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vblink_tb___024root__trace_decl_types(tracep);
    Vblink_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vblink_tb___024root__trace_register(Vblink_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vblink_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vblink_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vblink_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
