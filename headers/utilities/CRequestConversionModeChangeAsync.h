#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 12 member(s).
class CRequestConversionModeChangeAsync {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRequestConversionModeChangeAsync@@QEAA@XZ
    CRequestConversionModeChangeAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CRequestConversionModeChangeAsync@@UEAAJJ@Z
    virtual long Complete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CRequestConversionModeChangeAsync@@QEAAJJW4IMEConversionMode@@@Z
    long Complete(long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContinuation@CRequestConversionModeChangeAsync@@UEAA_NXZ
    virtual bool HasContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanceled@CRequestConversionModeChangeAsync@@UEAAJXZ
    virtual long OnCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunContinuation@CRequestConversionModeChangeAsync@@UEAAJXZ
    virtual long RunContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CRequestConversionModeChangeAsync@@QEAAJPEAVCAsyncTaskScheduler@@I@Z
    long RuntimeClassInitialize(CAsyncTaskScheduler *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRequestConversionModeChangeAsync@@UEAA@XZ
    virtual ~CRequestConversionModeChangeAsync();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContinuationHandlers@CRequestConversionModeChangeAsync@@EEAAXXZ
    virtual void ClearContinuationHandlers();
};
