#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 11 member(s).
class CGetSelectionAsync {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGetSelectionAsync@@QEAA@XZ
    CGetSelectionAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CGetSelectionAsync@@UEAAJJ@Z
    virtual long Complete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CGetSelectionAsync@@UEAAJJUEditControlRange@@@Z
    virtual long Complete(long, EditControlRange);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContinuation@CGetSelectionAsync@@UEAA_NXZ
    virtual bool HasContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanceled@CGetSelectionAsync@@UEAAJXZ
    virtual long OnCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunContinuation@CGetSelectionAsync@@UEAAJXZ
    virtual long RunContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CGetSelectionAsync@@QEAAJPEAVCAsyncTaskScheduler@@I_N@Z
    long RuntimeClassInitialize(CAsyncTaskScheduler *, unsigned int, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContinuationHandlers@CGetSelectionAsync@@EEAAXXZ
    virtual void ClearContinuationHandlers();
};
