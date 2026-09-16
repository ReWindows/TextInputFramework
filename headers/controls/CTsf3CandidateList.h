#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 43 member(s).
class CTsf3CandidateList {
public:
    class ITEMS;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Abort@CTsf3CandidateList@@UEAAJXZ
    virtual long Abort();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTsf3CandidateList@@QEAA@XZ
    CTsf3CandidateList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumCandidates@CTsf3CandidateList@@UEAAJPEAPEAUIEnumTfCandidates@@@Z
    virtual long EnumCandidates(IEnumTfCandidates * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@CTsf3CandidateList@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidate@CTsf3CandidateList@@UEAAJKPEAPEAUITfCandidateString@@@Z
    virtual long GetCandidate(unsigned long, ITfCandidateString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateNum@CTsf3CandidateList@@UEAAJPEAK@Z
    virtual long GetCandidateNum(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CTsf3CandidateList@@UEAAJPEAH@Z
    virtual long GetCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CTsf3CandidateList@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPage@CTsf3CandidateList@@UEAAJPEAI@Z
    virtual long GetCurrentPage(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPageStartIndexAndSize@CTsf3CandidateList@@UEBAJPEAI0@Z
    virtual long GetCurrentPageStartIndexAndSize(unsigned int *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CTsf3CandidateList@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocumentId@CTsf3CandidateList@@UEBAKXZ
    virtual unsigned long GetDocumentId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocumentMgr@CTsf3CandidateList@@UEAAJPEAPEAUITfDocumentMgr@@@Z
    virtual long GetDocumentMgr(ITfDocumentMgr * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGUID@CTsf3CandidateList@@UEAAJPEAU_GUID@@@Z
    virtual long GetGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@CTsf3CandidateList@@UEBAKXZ
    virtual unsigned long GetId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CTsf3CandidateList@@UEAAJHPEAW4TsfCandidateItemFlags@@PEAPEAG11@Z
    virtual long GetItem(int, int *, unsigned short * *, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerId@CTsf3CandidateList@@UEBAKXZ
    virtual unsigned long GetOwnerId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageIndex@CTsf3CandidateList@@UEAAJPEAII0@Z
    virtual long GetPageIndex(unsigned int *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CTsf3CandidateList@@UEAAJPEAH@Z
    virtual long GetSelection(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CTsf3CandidateList@@UEAAJPEAI@Z
    virtual long GetSelection(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CTsf3CandidateList@@UEAAJIPEAPEAG@Z
    virtual long GetString(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetRange@CTsf3CandidateList@@UEAAPEAUITfRange@@XZ
    virtual ITfRange * GetTargetRange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatedFlags@CTsf3CandidateList@@UEAAJPEAK@Z
    virtual long GetUpdatedFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShown@CTsf3CandidateList@@UEAAJPEAH@Z
    virtual long IsShown(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToNextPage@CTsf3CandidateList@@UEAAX_N@Z
    virtual void MoveToNextPage(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTsf3CandidateList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetLastUpdateFlags@CTsf3CandidateList@@UEAAXXZ
    virtual void ResetLastUpdateFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTsf3CandidateList@@QEAAJPEAUICandidateListOwner@@PEAUICandidateList@@KKH@Z
    long RuntimeClassInitialize(ICandidateListOwner *, ICandidateList *, unsigned long, unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPageIndex@CTsf3CandidateList@@UEAAJPEAII@Z
    virtual long SetPageIndex(unsigned int *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@CTsf3CandidateList@@UEAAJKW4__MIDL_ITfCandidateList_0001@@@Z
    virtual long SetResult(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CTsf3CandidateList@@UEAAJHW4TsfCandidateListActionType@@@Z
    virtual long SetSelection(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CTsf3CandidateList@@UEAAJI@Z
    virtual long SetSelection(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CTsf3CandidateList@@UEAAJH@Z
    virtual long Show(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CTsf3CandidateList@@UEAAXPEAUICandidateList@@KKH@Z
    virtual void Update(ICandidateList *, unsigned long, unsigned long, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTsf3CandidateList@@UEAA@XZ
    virtual ~CTsf3CandidateList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItemsByContainedIndex@CTsf3CandidateList@@AEAAPEAUITEMS@1@I@Z
    WindissectOpaque * FindItemsByContainedIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageCount@CTsf3CandidateList@@AEBAIXZ
    unsigned int GetPageCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageStartIndex@CTsf3CandidateList@@AEBAII@Z
    unsigned int GetPageStartIndex(unsigned int) const;
};
