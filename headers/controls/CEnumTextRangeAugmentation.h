#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class CEnumTextRangeAugmentation {
public:
    class CTextAugmentationArray;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumTextRangeAugmentation@@QEAA@XZ
    CEnumTextRangeAugmentation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumTextRangeAugmentation@@UEAAJPEAPEAUIEnumTfTextRangeAugmentation@@@Z
    virtual long Clone(IEnumTfTextRangeAugmentation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumTextRangeAugmentation@@UEAAJKPEAPEAUITfTextRangeAugmentation@@PEAK@Z
    virtual long Next(unsigned long, ITfTextRangeAugmentation * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumTextRangeAugmentation@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumTextRangeAugmentation@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumTextRangeAugmentation@@UEAA@XZ
    virtual ~CEnumTextRangeAugmentation();
};
