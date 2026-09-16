#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 9 member(s).
class CEnumProperties {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumProperties@@QEAA@XZ
    CEnumProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumProperties@@UEAAJPEAPEAUIEnumTfProperties@@@Z
    virtual long Clone(IEnumTfProperties * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumProperties@@UEAAJKPEAPEAUITfProperty@@PEAK@Z
    virtual long Next(unsigned long, ITfProperty * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumProperties@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CEnumProperties@@QEAAJPEAVCInputContext@@@Z
    long RuntimeClassInitialize(CInputContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumProperties@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
