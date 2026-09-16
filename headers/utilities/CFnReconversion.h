#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 13 member(s).
class CFnReconversion {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRangeOwnerId@CFnReconversion@@SAJKPEAVCInputContext@@PEAUITfRange@@PEAK@Z
    static long FindRangeOwnerId(unsigned long, CInputContext *, ITfRange *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@CFnReconversion@@UEAAJPEAPEAG@Z
    virtual long GetDisplayName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReconversion@CFnReconversion@@UEAAJPEAUITfRange@@PEAPEAUITfCandidateList@@@Z
    virtual long GetReconversion(ITfRange *, ITfCandidateList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryRange@CFnReconversion@@UEAAJPEAUITfRange@@PEAPEAU2@PEAH@Z
    virtual long QueryRange(ITfRange *, ITfRange * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryRangeByIMM32@CFnReconversion@@UEAAJPEAUITfRange@@PEAPEAU2@PEAH@Z
    virtual long QueryRangeByIMM32(ITfRange *, ITfRange * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reconvert@CFnReconversion@@UEAAJPEAUITfRange@@@Z
    virtual long Reconvert(ITfRange *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFnReconversion@@UEAA@XZ
    virtual ~CFnReconversion();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Internal_GetReconversion@CFnReconversion@@AEAAJPEAUITfRange@@PEAPEAUITfCandidateList@@PEAPEAU2@W4RECONVFUNC@1@PEAHH@Z
    long Internal_GetReconversion(ITfRange *, ITfCandidateList * *, ITfRange * *, int, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Internal_TSF3_GetReconversion@CFnReconversion@@AEAAJPEAUITfRange@@PEAPEAUITfCandidateList@@PEAPEAU2@W4RECONVFUNC@1@PEAHH@Z
    long Internal_TSF3_GetReconversion(ITfRange *, ITfCandidateList * *, ITfRange * *, int, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAndGetFunction@CFnReconversion@@AEAAJPEAVCInputContext@@PEAUITfRange@@PEAPEAUITfFnReconversion@@PEAPEAU3@@Z
    long QueryAndGetFunction(CInputContext *, ITfRange *, ITfFnReconversion * *, ITfRange * *);
};
