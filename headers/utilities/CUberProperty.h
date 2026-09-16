#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class CUberProperty {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumRanges@CUberProperty@@UEAAJKPEAPEAUIEnumTfRanges@@PEAUITfRange@@@Z
    virtual long EnumRanges(unsigned long, IEnumTfRanges * *, ITfRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContext@CUberProperty@@UEAAJPEAPEAUITfContext@@@Z
    virtual long GetContext(ITfContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CUberProperty@@UEAAJPEAU_GUID@@@Z
    virtual long GetType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CUberProperty@@UEAAJKPEAUITfRange@@PEAUtagVARIANT@@@Z
    virtual long GetValue(unsigned long, ITfRange *, tagVARIANT *);
};
