#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 16 member(s).
class CAnchorRef {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnchorRef@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearChangeHistory@CAnchorRef@@UEAAJXZ
    virtual long ClearChangeHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CAnchorRef@@UEAAJPEAPEAUIAnchor@@@Z
    virtual long Clone(IAnchor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CAnchorRef@@UEAAJPEAUIAnchor@@PEAJ@Z
    virtual long Compare(IAnchor *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangeHistory@CAnchorRef@@UEAAJPEAK@Z
    virtual long GetChangeHistory(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGravity@CAnchorRef@@UEAAJPEAW4__MIDL_IAnchor_0001@@@Z
    virtual long GetGravity(int*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@CAnchorRef@@UEAAJPEAUIAnchor@@PEAH@Z
    virtual long IsEqual(IAnchor *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnchorRef@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnchorRef@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChangeHistoryMask@CAnchorRef@@UEAAJK@Z
    virtual long SetChangeHistoryMask(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGravity@CAnchorRef@@UEAAJW4__MIDL_IAnchor_0001@@@Z
    virtual long SetGravity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shift@CAnchorRef@@UEAAJKJPEAJPEAUIAnchor@@@Z
    virtual long Shift(unsigned long, long, long *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftRegion@CAnchorRef@@UEAAJKW4__MIDL_IAnchor_0002@@PEAH@Z
    virtual long ShiftRegion(unsigned long, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftTo@CAnchorRef@@UEAAJPEAUIAnchor@@@Z
    virtual long ShiftTo(IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetACP@CAnchorRef@@QEAAJXZ
    long _GetACP();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetACP@CAnchorRef@@QEAAHJ@Z
    int _SetACP(long);
};
