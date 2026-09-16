#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 3 member(s).
class TraversalStack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@TraversalStack@@QEAA_NPEAPEAVMonitorViewRegistration@@PEAW4ComponentUIRights@@@Z
    bool Pop(MonitorViewRegistration * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push@TraversalStack@@QEAAXPEAVMonitorViewRegistration@@W4ComponentUIRights@@@Z
    void Push(MonitorViewRegistration *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TraversalStack@@QEAA@XZ
    ~TraversalStack();
};
