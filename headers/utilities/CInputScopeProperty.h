#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 7 member(s).
class CInputScopeProperty {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumRanges@CInputScopeProperty@@UEAAJKPEAPEAUIEnumTfRanges@@PEAUITfRange@@@Z
    virtual long EnumRanges(unsigned long, IEnumTfRanges * *, ITfRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContext@CInputScopeProperty@@UEAAJPEAPEAUITfContext@@@Z
    virtual long GetContext(ITfContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CInputScopeProperty@@UEAAJPEAU_GUID@@@Z
    virtual long GetType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CInputScopeProperty@@UEAAJKPEAUITfRange@@PEAUtagVARIANT@@@Z
    virtual long GetValue(unsigned long, ITfRange *, tagVARIANT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputScopeProperty@@UEAA@XZ
    virtual ~CInputScopeProperty();
};
