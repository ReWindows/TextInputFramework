#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 15 member(s).
class CUIElementAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIElementAdapter@@QEAA@XZ
    CUIElementAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseUI@CUIElementAdapter@@QEAAX_N@Z
    void CloseUI(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveDocument@CUIElementAdapter@@UEAAJPEAPEAUITfDocumentMgr@@@Z
    virtual long GetActiveDocument(ITfDocumentMgr * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsUILessMode@CUIElementAdapter@@QEAAHXZ
    int GetIsUILessMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShownByUIManager@CUIElementAdapter@@UEAA_NPEAUICandidateListPrivate@@@Z
    virtual bool IsShownByUIManager(ICandidateListPrivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMoreItems@CUIElementAdapter@@UEAAJPEAUICandidateListPrivate@@H@Z
    virtual long LoadMoreItems(ICandidateListPrivate *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateListAborted@CUIElementAdapter@@UEAAXPEAUICandidateListPrivate@@@Z
    virtual void OnCandidateListAborted(ICandidateListPrivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateListItemSelected@CUIElementAdapter@@UEAAXPEAUICandidateListPrivate@@HW4TsfCandidateListActionType@@@Z
    virtual void OnCandidateListItemSelected(ICandidateListPrivate *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChange@CUIElementAdapter@@QEAAXI_N@Z
    void OnFocusChange(unsigned int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIElementAdapter@@UEAA@XZ
    virtual ~CUIElementAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCandidateCommand@CUIElementAdapter@@AEAAJPEBUCANDIDATE_COMMAND@@@Z
    long HandleCandidateCommand(CANDIDATE_COMMAND const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenCandidateListUI@CUIElementAdapter@@AEAAJPEAUIInputContextAdapter@@PEAUICandidateList@@KKH@Z
    long OpenCandidateListUI(IInputContextAdapter *, ICandidateList *, unsigned long, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUIElement@CUIElementAdapter@@AEAAXXZ
    void UpdateUIElement();
};
