#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 9 member(s).
class CEnumCompositionView {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumCompositionView@@QEAA@XZ
    CEnumCompositionView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumCompositionView@@UEAAJPEAPEAUIEnumITfCompositionView@@@Z
    virtual long Clone(IEnumITfCompositionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumCompositionView@@UEAAJKPEAPEAUITfCompositionView@@PEAK@Z
    virtual long Next(unsigned long, ITfCompositionView * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumCompositionView@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CEnumCompositionView@@QEAAJPEAVCComposition@@0@Z
    long RuntimeClassInitialize(CComposition *, CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumCompositionView@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
