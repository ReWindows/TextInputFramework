#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class CContextView {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContextView@@QEAA@XZ
    CContextView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRangeFromPoint@CContextView@@UEAAJKPEBUtagPOINT@@KPEAPEAUITfRange@@@Z
    virtual long GetRangeFromPoint(unsigned long, tagPOINT const *, unsigned long, ITfRange * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenExt@CContextView@@UEAAJPEAUtagRECT@@@Z
    virtual long GetScreenExt(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextExt@CContextView@@UEAAJKPEAUITfRange@@PEAUtagRECT@@PEAH@Z
    virtual long GetTextExt(unsigned long, ITfRange *, tagRECT *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWnd@CContextView@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWnd(HWND__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContextView@@UEAA@XZ
    virtual ~CContextView();
};
