#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class CEnumCandidates {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumCandidates@@QEAA@XZ
    CEnumCandidates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumCandidates@@UEAAJPEAPEAUIEnumTfCandidates@@@Z
    virtual long Clone(IEnumTfCandidates * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumCandidates@@UEAAJKPEAPEAUITfCandidateString@@PEAK@Z
    virtual long Next(unsigned long, ITfCandidateString * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumCandidates@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumCandidates@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumCandidates@@UEAA@XZ
    virtual ~CEnumCandidates();
};
