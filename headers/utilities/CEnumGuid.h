#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class CEnumGuid {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumGuid@@QEAA@XZ
    CEnumGuid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumGuid@@UEAAJPEAPEAUIEnumGUID@@@Z
    virtual long Clone(IEnumGUID * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumGuid@@UEAAJKPEAU_GUID@@PEAK@Z
    virtual long Next(unsigned long, _GUID *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumGuid@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumGuid@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumGuid@@UEAA@XZ
    virtual ~CEnumGuid();
};
