#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 9 member(s).
class CEnumDisplayAttributeInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumDisplayAttributeInfo@@QEAA@XZ
    CEnumDisplayAttributeInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumDisplayAttributeInfo@@UEAAJPEAPEAUIEnumTfDisplayAttributeInfo@@@Z
    virtual long Clone(IEnumTfDisplayAttributeInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumDisplayAttributeInfo@@UEAAJKPEAPEAUITfDisplayAttributeInfo@@PEAK@Z
    virtual long Next(unsigned long, ITfDisplayAttributeInfo * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumDisplayAttributeInfo@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumDisplayAttributeInfo@@UEAAJK@Z
    virtual long Skip(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CEnumDisplayAttributeInfo@@AEAAHPEAUIThreadInputManagerPrivate@@@Z
    int Init(IThreadInputManagerPrivate *);
};
