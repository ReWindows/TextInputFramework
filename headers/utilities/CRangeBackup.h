#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class CRangeBackup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CRangeBackup@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restore@CRangeBackup@@UEAAJKPEAUITfRange@@@Z
    virtual long Restore(unsigned long, ITfRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CRangeBackup@@QEAAJPEAVCInputContext@@KPEAVCRange@@@Z
    long RuntimeClassInitialize(CInputContext *, unsigned long, CRange *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRangeBackup@@UEAA@XZ
    virtual ~CRangeBackup();
};
