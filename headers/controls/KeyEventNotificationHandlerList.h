#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class KeyEventNotificationHandlerList {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@KeyEventNotificationHandlerList@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@KeyEventNotificationHandlerList@@UEAAJIPEAPEAUIKeyEventNotificationHandler@@@Z
    virtual long GetItem(unsigned int, IKeyEventNotificationHandler * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyEventNotificationHandlerList@@QEAA@XZ
    KeyEventNotificationHandlerList();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KeyEventNotificationHandlerList@@UEAA@XZ
    virtual ~KeyEventNotificationHandlerList();
};
