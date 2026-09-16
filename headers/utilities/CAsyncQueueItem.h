#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 5 member(s).
class CAsyncQueueItem {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAsyncQueueItem@@QEAA@PEAUIWorkItem@@_N@Z
    CAsyncQueueItem(IWorkItem *, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAsyncQueueItem@@QEAAJXZ
    long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EditSessionQiCallback@CAsyncQueueItem@@SAJPEAVCInputContext@@PEAU_TS_QUEUE_ITEM@@W4QiCallbackCode@@@Z
    static long _EditSessionQiCallback(CInputContext *, _TS_QUEUE_ITEM *, int);
};
