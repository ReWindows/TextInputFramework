#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 11 member(s).
class CGetLayoutBoundsAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CGetLayoutBoundsAsync@@UEAAJJ@Z
    virtual long Complete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CGetLayoutBoundsAsync@@UEAAJJAEBUTextRect@@0@Z
    virtual long Complete(long, TextRect const &, TextRect const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContinuation@CGetLayoutBoundsAsync@@UEAA_NXZ
    virtual bool HasContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanceled@CGetLayoutBoundsAsync@@UEAAJXZ
    virtual long OnCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunContinuation@CGetLayoutBoundsAsync@@UEAAJXZ
    virtual long RunContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CGetLayoutBoundsAsync@@QEAAJPEAVCAsyncTaskScheduler@@I@Z
    long RuntimeClassInitialize(CAsyncTaskScheduler *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGetLayoutBoundsAsync@@UEAA@XZ
    virtual ~CGetLayoutBoundsAsync();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContinuationHandlers@CGetLayoutBoundsAsync@@EEAAXXZ
    virtual void ClearContinuationHandlers();
};
