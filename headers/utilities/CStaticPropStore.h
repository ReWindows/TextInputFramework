#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 5 member(s).
class CStaticPropStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CStaticPropStore@@UEAAJPEAPEAUITfPropertyStore@@@Z
    virtual long Clone(ITfPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Divide@CStaticPropStore@@UEAAJPEAUITfRange@@0PEAPEAUITfPropertyStore@@@Z
    virtual long Divide(ITfRange *, ITfRange *, ITfPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shrink@CStaticPropStore@@UEAAJPEAUITfRange@@PEAH@Z
    virtual long Shrink(ITfRange *, int *);
};
