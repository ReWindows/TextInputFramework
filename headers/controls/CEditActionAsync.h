#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 10 member(s).
class CEditActionAsync {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEditActionAsync@@QEAA@XZ
    CEditActionAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CEditActionAsync@@UEAAJJ@Z
    virtual long Complete(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContinuation@CEditActionAsync@@UEAA_NXZ
    virtual bool HasContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanceled@CEditActionAsync@@UEAAJXZ
    virtual long OnCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunContinuation@CEditActionAsync@@UEAAJXZ
    virtual long RunContinuation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEditActionAsync@@UEAA@XZ
    virtual ~CEditActionAsync();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContinuationHandlers@CEditActionAsync@@EEAAXXZ
    virtual void ClearContinuationHandlers();
};
