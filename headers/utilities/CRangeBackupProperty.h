#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class CRangeBackupProperty {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CRangeBackupProperty@@QEAAHK@Z
    int Init(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restore@CRangeBackupProperty@@QEAAHK@Z
    int Restore(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRangeBackupProperty@@QEAA@XZ
    ~CRangeBackupProperty();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOffset@CRangeBackupProperty@@AEAAHKPEAUIAnchor@@@Z
    int _GetOffset(unsigned long, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StoreOneRange@CRangeBackupProperty@@AEAAHKPEAVCRange@@@Z
    int _StoreOneRange(unsigned long, CRange *);
};
