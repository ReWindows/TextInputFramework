#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 7 member(s).
class CEnumPropertyValue {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumPropertyValue@@QEAA@XZ
    CEnumPropertyValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumPropertyValue@@UEAAJPEAPEAUIEnumTfPropertyValue@@@Z
    virtual long Clone(IEnumTfPropertyValue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumPropertyValue@@UEAAJKPEAUTF_PROPERTYVAL@@PEAK@Z
    virtual long Next(unsigned long, TF_PROPERTYVAL *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumPropertyValue@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumPropertyValue@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
