#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 4 member(s).
class CCleanupQueueItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCleanupQueueItem@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CCleanupQueueItem@@UEAAJPEAUIInputContextPrivate@@@Z
    virtual long DoWork(IInputContextPrivate *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCleanupQueueItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCleanupQueueItem@@UEAAKXZ
    virtual unsigned long Release();
};
