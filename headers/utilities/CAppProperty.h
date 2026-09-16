#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class CAppProperty {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumRanges@CAppProperty@@UEAAJKPEAPEAUIEnumTfRanges@@PEAUITfRange@@@Z
    virtual long EnumRanges(unsigned long, IEnumTfRanges * *, ITfRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContext@CAppProperty@@UEAAJPEAPEAUITfContext@@@Z
    virtual long GetContext(ITfContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CAppProperty@@UEAAJPEAU_GUID@@@Z
    virtual long GetType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CAppProperty@@UEAAJKPEAUITfRange@@PEAUtagVARIANT@@@Z
    virtual long GetValue(unsigned long, ITfRange *, tagVARIANT *);
};
