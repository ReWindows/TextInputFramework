#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class CRenderMarkupCollection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderMarkupCollection@@QEAA@PEAVCDisplayAttributeMgr@@@Z
    CRenderMarkupCollection(CDisplayAttributeMgr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRenderMarkupCollection@@QEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Advise@CRenderMarkupCollection@@QEAAXPEAUITfTextInputProcessor@@K@Z
    void _Advise(ITfTextInputProcessor *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInCollection@CRenderMarkupCollection@@QEAAHAEBU_GUID@@@Z
    int _IsInCollection(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unadvise@CRenderMarkupCollection@@QEAAXK@Z
    void _Unadvise(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderMarkupCollection@@QEAA@XZ
    ~CRenderMarkupCollection();
};
