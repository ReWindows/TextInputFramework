#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 14 member(s).
class Tsf4QueryTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@Tsf4QueryTask@@UEAAJJ@Z
    virtual long Complete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@Tsf4QueryTask@@UEAAJJAEBUTextRect@@0@Z
    virtual long Complete(long, TextRect const &, TextRect const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@Tsf4QueryTask@@UEAAJJPEAUMsgString@@@Z
    virtual long Complete(long, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@Tsf4QueryTask@@UEAAJJUEditControlRange@@@Z
    virtual long Complete(long, EditControlRange);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContinuation@Tsf4QueryTask@@UEAA_NXZ
    virtual bool HasContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanceled@Tsf4QueryTask@@UEAAJXZ
    virtual long OnCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunContinuation@Tsf4QueryTask@@UEAAJXZ
    virtual long RunContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Tsf4QueryTask@@QEAAJW4TaskType@@_NPEAVCAsyncTaskScheduler@@PEBUEditControlRange@@@Z
    long RuntimeClassInitialize(int, bool, CAsyncTaskScheduler *, EditControlRange const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Tsf4QueryTask@@QEAA@XZ
    Tsf4QueryTask();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Tsf4QueryTask@@UEAA@XZ
    virtual ~Tsf4QueryTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContinuationHandlers@Tsf4QueryTask@@EEAAXXZ
    virtual void ClearContinuationHandlers();
};
