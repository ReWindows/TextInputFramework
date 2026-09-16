#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class CEnumReconversion {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumReconversion@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumReconversion@@UEAAJPEAPEAUIEnumTfCandidates@@@Z
    virtual long Clone(IEnumTfCandidates * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumReconversion@@UEAAJKPEAPEAUITfCandidateString@@PEAK@Z
    virtual long Next(unsigned long, ITfCandidateString * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumReconversion@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumReconversion@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumReconversion@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumReconversion@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumReconversion@@QEAA@XZ
    ~CEnumReconversion();
};
