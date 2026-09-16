#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 5 member(s).
class CEditSession {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEditSession@@QEAA@XZ
    CEditSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoEditSession@CEditSession@@UEAAJK@Z
    virtual long DoEditSession(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CEditSession@@UEAAJPEAVCInputContext@@@Z
    virtual long RuntimeClassInitialize(CInputContext *);
};
