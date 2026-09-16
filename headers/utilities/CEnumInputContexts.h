#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 7 member(s).
class CEnumInputContexts {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumInputContexts@@UEAAJPEAPEAUIEnumTfContexts@@@Z
    virtual long Clone(IEnumTfContexts * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumInputContexts@@UEAAJKPEAPEAUITfContext@@PEAK@Z
    virtual long Next(unsigned long, ITfContext * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumInputContexts@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumInputContexts@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumInputContexts@@UEAA@XZ
    virtual ~CEnumInputContexts();
};
