#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 12 member(s).
class CTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CTask@@UEAAJJAEBUTextRect@@0@Z
    virtual long Complete(long, TextRect const &, TextRect const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CTask@@UEAAJJPEAUMsgString@@@Z
    virtual long Complete(long, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CTask@@UEAAJJUEditControlRange@@@Z
    virtual long Complete(long, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelegateCompletionHandlers@CTask@@QEAAXPEAV1@@Z
    void DelegateCompletionHandlers(CTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanceled@CTask@@UEAAJXZ
    virtual long OnCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@CTask@@QEAAXXZ
    void OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunCancellation@CTask@@QEAAJXZ
    long RunCancellation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunCompletionHandlers@CTask@@QEAAJXZ
    long RunCompletionHandlers();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTask@@UEAA@XZ
    virtual ~CTask();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContinuationHandlers@CTask@@MEAAXXZ
    virtual void ClearContinuationHandlers();
};
