#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 9 member(s).
class OutstandingOpTracker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearOutstandingOps@OutstandingOpTracker@@QEAAJXZ
    long ClearOutstandingOps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutstandingOpCount@OutstandingOpTracker@@QEAAIXZ
    unsigned int OutstandingOpCount();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OutstandingOpTracker@@QEAA@XZ
    OutstandingOpTracker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopOutstandingOp@OutstandingOpTracker@@QEAAJW4TextInputAcknowledgment@@I@Z
    long PopOutstandingOp(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushOutstandingOp@OutstandingOpTracker@@QEAAJW4TextInputAcknowledgment@@I@Z
    long PushOutstandingOp(int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutstandingOpID@OutstandingOpTracker@@QEAAJW4TextInputAcknowledgment@@I@Z
    long SetOutstandingOpID(int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OutstandingOpTracker@@UEAA@XZ
    virtual ~OutstandingOpTracker();
};
