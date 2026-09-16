#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 15 member(s).
class CReconversionCandidateList {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CReconversionCandidateList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddString@CReconversionCandidateList@@QEAAJPEAG@Z
    long AddString(unsigned short *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReconversionCandidateList@@QEAA@PEAUIAdaptedInputContext@@@Z
    CReconversionCandidateList(IAdaptedInputContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoEditSession@CReconversionCandidateList@@UEAAJK@Z
    virtual long DoEditSession(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumCandidates@CReconversionCandidateList@@UEAAJPEAPEAUIEnumTfCandidates@@@Z
    virtual long EnumCandidates(IEnumTfCandidates * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidate@CReconversionCandidateList@@UEAAJKPEAPEAUITfCandidateString@@@Z
    virtual long GetCandidate(unsigned long, ITfCandidateString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateNum@CReconversionCandidateList@@UEAAJPEAK@Z
    virtual long GetCandidateNum(unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CReconversionCandidateList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CReconversionCandidateList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@CReconversionCandidateList@@UEAAJKW4__MIDL_ITfCandidateList_0001@@@Z
    virtual long SetResult(unsigned long, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReconversionCandidateList@@QEAA@XZ
    ~CReconversionCandidateList();
};
