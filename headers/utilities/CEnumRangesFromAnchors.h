#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class CEnumRangesFromAnchors {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumRangesFromAnchors@@QEAA@XZ
    CEnumRangesFromAnchors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumRangesFromAnchors@@UEAAJPEAPEAUIEnumTfRanges@@@Z
    virtual long Clone(IEnumTfRanges * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumRangesFromAnchors@@UEAAJKPEAPEAUITfRange@@PEAK@Z
    virtual long Next(unsigned long, ITfRange * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumRangesFromAnchors@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CEnumRangesFromAnchors@@QEAAJPEAVCInputContext@@@Z
    long RuntimeClassInitialize(CInputContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumRangesFromAnchors@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
