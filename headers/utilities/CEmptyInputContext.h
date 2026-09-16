#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 22 member(s).
class CEmptyInputContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEmptyInputContext@@QEAA@XZ
    CEmptyInputContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRangeBackup@CEmptyInputContext@@UEAAJKPEAUITfRange@@PEAPEAUITfRangeBackup@@@Z
    virtual long CreateRangeBackup(unsigned long, ITfRange *, ITfRangeBackup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumProperties@CEmptyInputContext@@UEAAJPEAPEAUIEnumTfProperties@@@Z
    virtual long EnumProperties(IEnumTfProperties * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumViews@CEmptyInputContext@@UEAAJPEAPEAUIEnumTfContextViews@@@Z
    virtual long EnumViews(IEnumTfContextViews * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveView@CEmptyInputContext@@UEAAJPEAPEAUITfContextView@@@Z
    virtual long GetActiveView(ITfContextView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppProperty@CEmptyInputContext@@UEAAJAEBU_GUID@@PEAPEAUITfReadOnlyProperty@@@Z
    virtual long GetAppProperty(_GUID const &, ITfReadOnlyProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryManager@CEmptyInputContext@@UEAAPEAUITfCategoryMgr@@XZ
    virtual ITfCategoryMgr * GetCategoryManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocumentMgr@CEmptyInputContext@@UEAAJPEAPEAUITfDocumentMgr@@@Z
    virtual long GetDocumentMgr(ITfDocumentMgr * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnd@CEmptyInputContext@@UEAAJKPEAPEAUITfRange@@@Z
    virtual long GetEnd(unsigned long, ITfRange * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CEmptyInputContext@@UEAAJAEBU_GUID@@PEAPEAUITfProperty@@@Z
    virtual long GetProperty(_GUID const &, ITfProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CEmptyInputContext@@UEAAJKKKPEAUTF_SELECTION@@PEAK@Z
    virtual long GetSelection(unsigned long, unsigned long, unsigned long, TF_SELECTION *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStart@CEmptyInputContext@@UEAAJKPEAPEAUITfRange@@@Z
    virtual long GetStart(unsigned long, ITfRange * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CEmptyInputContext@@UEAAJPEAUTS_STATUS@@@Z
    virtual long GetStatus(TS_STATUS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InWriteSession@CEmptyInputContext@@UEAAJKPEAH@Z
    virtual long InWriteSession(unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestEditSession@CEmptyInputContext@@UEAAJKPEAUITfEditSession@@KPEAJ@Z
    virtual long RequestEditSession(unsigned long, ITfEditSession *, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CEmptyInputContext@@QEAAJPEAUITfDocumentMgr@@PEAUITfCategoryMgr@@@Z
    long RuntimeClassInitialize(ITfDocumentMgr *, ITfCategoryMgr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CEmptyInputContext@@UEAAJKKPEBUTF_SELECTION@@@Z
    virtual long SetSelection(unsigned long, unsigned long, TF_SELECTION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackProperties@CEmptyInputContext@@UEAAJPEAPEBU_GUID@@K0KPEAPEAUITfReadOnlyProperty@@@Z
    virtual long TrackProperties(_GUID const * *, unsigned long, _GUID const * *, unsigned long, ITfReadOnlyProperty * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEmptyInputContext@@UEAA@XZ
    virtual ~CEmptyInputContext();
};
