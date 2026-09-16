#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class CEditRecord {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEditRecord@@QEAA@XZ
    CEditRecord();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionStatus@CEditRecord@@UEAAJPEAH@Z
    virtual long GetSelectionStatus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAndPropertyUpdates@CEditRecord@@UEAAJKPEAPEBU_GUID@@KPEAPEAUIEnumTfRanges@@@Z
    virtual long GetTextAndPropertyUpdates(unsigned long, _GUID const * *, unsigned long, IEnumTfRanges * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindCreateAppAttr@CEditRecord@@QEAAPEAVCSpanSet@@K@Z
    CSpanSet * _FindCreateAppAttr(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEditRecord@@UEAA@XZ
    virtual ~CEditRecord();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertProperty@CEditRecord@@AEAAHKPEAVCSpanSet@@HH@Z
    int _InsertProperty(unsigned long, CSpanSet *, int, int);
};
