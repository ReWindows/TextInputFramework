#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 11 member(s).
class CQueryTextAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CQueryTextAsync@@UEAAJJ@Z
    virtual long Complete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CQueryTextAsync@@UEAAJJPEAUMsgString@@@Z
    virtual long Complete(long, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContinuation@CQueryTextAsync@@UEAA_NXZ
    virtual bool HasContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanceled@CQueryTextAsync@@UEAAJXZ
    virtual long OnCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunContinuation@CQueryTextAsync@@UEAAJXZ
    virtual long RunContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CQueryTextAsync@@QEAAJPEAVCAsyncTaskScheduler@@I@Z
    long RuntimeClassInitialize(CAsyncTaskScheduler *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CQueryTextAsync@@UEAA@XZ
    virtual ~CQueryTextAsync();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContinuationHandlers@CQueryTextAsync@@EEAAXXZ
    virtual void ClearContinuationHandlers();
};
