#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 38 member(s).
class CDocumentInputManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseSink@CDocumentInputManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@PEAK@Z
    virtual long AdviseSink(_GUID const &, IUnknown *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDocumentInputManager@@QEAA@XZ
    CDocumentInputManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupContexts@CDocumentInputManager@@UEAAXPEAUIUnknown@@_NIPEAK@Z
    virtual void CleanupContexts(IUnknown *, bool, unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContext@CDocumentInputManager@@UEAAJKKPEAUIUnknown@@PEAPEAUITfContext@@PEAK@Z
    virtual long CreateContext(unsigned long, unsigned long, IUnknown *, ITfContext * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@CDocumentInputManager@@UEAAXXZ
    virtual void Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumContexts@CDocumentInputManager@@UEAAJPEAPEAUIEnumTfContexts@@@Z
    virtual long EnumContexts(IEnumTfContexts * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBase@CDocumentInputManager@@UEAAJPEAPEAUITfContext@@@Z
    virtual long GetBase(ITfContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseInputContext@CDocumentInputManager@@UEAAPEAUIInputContextPrivate@@XZ
    virtual IInputContextPrivate * GetBaseInputContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryManager@CDocumentInputManager@@UEAAPEAUITfCategoryMgr@@XZ
    virtual ITfCategoryMgr * GetCategoryManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerId@CDocumentInputManager@@UEBAKXZ
    virtual unsigned long GetOwnerId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThis@CDocumentInputManager@@UEAAPEAV1@XZ
    virtual CDocumentInputManager * GetThis();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTop@CDocumentInputManager@@UEAAJPEAPEAUITfContext@@@Z
    virtual long GetTop(ITfContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopInputContext@CDocumentInputManager@@UEAAPEAUIInputContextPrivate@@XZ
    virtual IInputContextPrivate * GetTopInputContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitoryExtension@CDocumentInputManager@@UEAAPEAUIUnknown@@XZ
    virtual IUnknown * GetTransitoryExtension();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCUASDocument@CDocumentInputManager@@UEAA_NXZ
    virtual bool IsCUASDocument();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTSF3Document@CDocumentInputManager@@UEAA_NXZ
    virtual bool IsTSF3Document();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompartmentSetValue@CDocumentInputManager@@UEAAXPEAVCCompartment@@@Z
    virtual void OnCompartmentSetValue(CCompartment *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChange@CDocumentInputManager@@UEAAX_N@Z
    virtual void OnFocusChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransitoryExtensionUpdated@CDocumentInputManager@@UEAAJPEAUITfContext@@KPEAUITfRange@@1PEAH@Z
    virtual long OnTransitoryExtensionUpdated(ITfContext *, unsigned long, ITfRange *, ITfRange *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUIManagerEvent@CDocumentInputManager@@UEAAXW4TsfUIManagerEvent@@PEAUtagRECT@@@Z
    virtual void OnUIManagerEvent(int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@CDocumentInputManager@@UEAAJK@Z
    virtual long Pop(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push@CDocumentInputManager@@UEAAJPEAUITfContext@@@Z
    virtual long Push(ITfContext *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDocumentInputManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDocumentInputManager@@QEAAJPEAUIThreadInputManagerPrivate@@@Z
    long RuntimeClassInitialize(IThreadInputManagerPrivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseSink@CDocumentInputManager@@UEAAJK@Z
    virtual long UnadviseSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContext@CDocumentInputManager@@QEAAJHPEAPEAUITfContext@@@Z
    long _GetContext(int, ITfContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTopIC@CDocumentInputManager@@QEAAPEAVCInputContext@@XZ
    CInputContext * _GetTopIC();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDocumentInputManager@@UEAA@XZ
    virtual ~CDocumentInputManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTransitoryExtensionDocument@CDocumentInputManager@@AEAA_NXZ
    bool _IsTransitoryExtensionDocument();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Pop@CDocumentInputManager@@AEAAXXZ
    void _Pop();
};
