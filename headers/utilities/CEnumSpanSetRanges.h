#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class CEnumSpanSetRanges {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumSpanSetRanges@@UEAAJPEAPEAUIEnumTfRanges@@@Z
    virtual long Clone(IEnumTfRanges * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumSpanSetRanges@@UEAAJKPEAPEAUITfRange@@PEAK@Z
    virtual long Next(unsigned long, ITfRange * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumSpanSetRanges@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumSpanSetRanges@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Merge@CEnumSpanSetRanges@@QEAAXPEAVCSpanSet@@@Z
    void _Merge(CSpanSet *);
};
