#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class TsfDisplayAttributeManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TsfDisplayAttributeManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TsfDisplayAttributeManager@@QEAAJPEAVTsfSingletonObjectStore@@@Z
    long RuntimeClassInitialize(TsfSingletonObjectStore *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TsfDisplayAttributeManager@@UEAA@XZ
    virtual ~TsfDisplayAttributeManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetClassId@TsfDisplayAttributeManager@@EEBA?AW4TsfSingletonObjects@@XZ
    virtual int _GetClassId() const;
};
