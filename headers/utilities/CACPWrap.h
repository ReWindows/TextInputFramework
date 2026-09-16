#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 79 member(s).
class CACPWrap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CACPWrap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseMouseSink@CACPWrap@@UEAAJPEAUITfRangeACP@@PEAUITfMouseSink@@PEAK@Z
    virtual long AdviseMouseSink(ITfRangeACP *, ITfMouseSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseSink@CACPWrap@@UEAAJAEBU_GUID@@PEAUIUnknown@@K@Z
    virtual long AdviseSink(_GUID const &, IUnknown *, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CACPWrap@@QEAA@PEAUITextStoreACP@@@Z
    CACPWrap(ITextStoreACP *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRange@CACPWrap@@UEAAJJJPEAPEAUITfRangeACP@@@Z
    virtual long CreateRange(long, long, ITfRangeACP * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextAttrTransition@CACPWrap@@UEAAJPEAUIAnchor@@0KPEBU_GUID@@KPEAHPEAJ@Z
    virtual long FindNextAttrTransition(IAnchor *, IAnchor *, unsigned long, _GUID const *, unsigned long, int *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceLoadProperty@CACPWrap@@UEAAJPEAUITfProperty@@@Z
    virtual long ForceLoadProperty(ITfProperty *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveView@CACPWrap@@UEAAJPEAK@Z
    virtual long GetActiveView(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorFromPoint@CACPWrap@@UEAAJKPEBUtagPOINT@@KPEAPEAUIAnchor@@@Z
    virtual long GetAnchorFromPoint(unsigned long, tagPOINT const *, unsigned long, IAnchor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbedded@CACPWrap@@UEAAJKPEAUIAnchor@@AEBU_GUID@@1PEAPEAUIUnknown@@@Z
    virtual long GetEmbedded(unsigned long, IAnchor *, _GUID const &, _GUID const &, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnd@CACPWrap@@UEAAJPEAPEAUIAnchor@@@Z
    virtual long GetEnd(IAnchor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormattedText@CACPWrap@@UEAAJPEAUIAnchor@@0PEAPEAUIDataObject@@@Z
    virtual long GetFormattedText(IAnchor *, IAnchor *, IDataObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenExt@CACPWrap@@UEAAJKPEAUtagRECT@@@Z
    virtual long GetScreenExt(unsigned long, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CACPWrap@@UEAAJKKPEAUTS_SELECTION_ANCHOR@@PEAK@Z
    virtual long GetSelection(unsigned long, unsigned long, TS_SELECTION_ANCHOR *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStart@CACPWrap@@UEAAJPEAPEAUIAnchor@@@Z
    virtual long GetStart(IAnchor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CACPWrap@@UEAAJPEAUTS_STATUS@@@Z
    virtual long GetStatus(TS_STATUS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CACPWrap@@UEAAJKPEAUIAnchor@@0PEAGKPEAKH@Z
    virtual long GetText(unsigned long, IAnchor *, IAnchor *, unsigned short *, unsigned long, unsigned long *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextExt@CACPWrap@@UEAAJKPEAUIAnchor@@0PEAUtagRECT@@PEAH@Z
    virtual long GetTextExt(unsigned long, IAnchor *, IAnchor *, tagRECT *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWnd@CACPWrap@@UEAAJKPEAPEAUHWND__@@@Z
    virtual long GetWnd(unsigned long, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertEmbedded@CACPWrap@@UEAAJKPEAUIAnchor@@0PEAUIDataObject@@@Z
    virtual long InsertEmbedded(unsigned long, IAnchor *, IAnchor *, IDataObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertEmbeddedAtSelection@CACPWrap@@UEAAJKPEAUIDataObject@@PEAPEAUIAnchor@@1@Z
    virtual long InsertEmbeddedAtSelection(unsigned long, IDataObject *, IAnchor * *, IAnchor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTextAtSelection@CACPWrap@@UEAAJKPEBGKPEAPEAUIAnchor@@1@Z
    virtual long InsertTextAtSelection(unsigned long, unsigned short const *, unsigned long, IAnchor * *, IAnchor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttrsChange@CACPWrap@@UEAAJJJKPEBU_GUID@@@Z
    virtual long OnAttrsChange(long, long, unsigned long, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndEditTransaction@CACPWrap@@UEAAJXZ
    virtual long OnEndEditTransaction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChange@CACPWrap@@UEAAJW4__MIDL___MIDL_itf_textstor_0000_0000_0002@@K@Z
    virtual long OnLayoutChange(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLockGranted@CACPWrap@@UEAAJK@Z
    virtual long OnLockGranted(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChange@CACPWrap@@UEAAJXZ
    virtual long OnSelectionChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartEditTransaction@CACPWrap@@UEAAJXZ
    virtual long OnStartEditTransaction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStatusChange@CACPWrap@@UEAAJK@Z
    virtual long OnStatusChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextChange@CACPWrap@@UEAAJKPEBUTS_TEXTCHANGE@@@Z
    virtual long OnTextChange(unsigned long, TS_TEXTCHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInsert@CACPWrap@@UEAAJPEAUIAnchor@@0KPEAPEAU2@1@Z
    virtual long QueryInsert(IAnchor *, IAnchor *, unsigned long, IAnchor * *, IAnchor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInsertEmbedded@CACPWrap@@UEAAJPEBU_GUID@@PEBUtagFORMATETC@@PEAH@Z
    virtual long QueryInsertEmbedded(_GUID const *, tagFORMATETC const *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CACPWrap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CACPWrap@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CACPWrap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@CACPWrap@@UEAAJPEAUIAnchor@@0PEBGK@Z
    virtual long ReplaceText(IAnchor *, IAnchor *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAttrsAtPosition@CACPWrap@@UEAAJPEAUIAnchor@@KPEBU_GUID@@K@Z
    virtual long RequestAttrsAtPosition(IAnchor *, unsigned long, _GUID const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAttrsTransitioningAtPosition@CACPWrap@@UEAAJPEAUIAnchor@@KPEBU_GUID@@K@Z
    virtual long RequestAttrsTransitioningAtPosition(IAnchor *, unsigned long, _GUID const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestLock@CACPWrap@@UEAAJKPEAJ@Z
    virtual long RequestLock(unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSupportedAttrs@CACPWrap@@UEAAJKKPEBU_GUID@@@Z
    virtual long RequestSupportedAttrs(unsigned long, unsigned long, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveRequestedAttrs@CACPWrap@@UEAAJKPEAUTS_ATTRVAL@@PEAK@Z
    virtual long RetrieveRequestedAttrs(unsigned long, TS_ATTRVAL *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CACPWrap@@UEAAJPEAUITfProperty@@PEAUITfRange@@PEAUTF_PERSISTENT_PROPERTY_HEADER_ACP@@PEAUIStream@@@Z
    virtual long Serialize(ITfProperty *, ITfRange *, TF_PERSISTENT_PROPERTY_HEADER_ACP *, IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CACPWrap@@UEAAJKPEBUTS_SELECTION_ANCHOR@@@Z
    virtual long SetSelection(unsigned long, TS_SELECTION_ANCHOR const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CACPWrap@@UEAAJKPEAUIAnchor@@0PEBGK@Z
    virtual long SetText(unsigned long, IAnchor *, IAnchor *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseMouseSink@CACPWrap@@UEAAJK@Z
    virtual long UnadviseMouseSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseSink@CACPWrap@@UEAAJPEAUIUnknown@@@Z
    virtual long UnadviseSink(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unserialize@CACPWrap@@UEAAJPEAUITfProperty@@PEBUTF_PERSISTENT_PROPERTY_HEADER_ACP@@PEAUIStream@@PEAUITfPersistentPropertyLoaderACP@@@Z
    virtual long Unserialize(ITfProperty *, TF_PERSISTENT_PROPERTY_HEADER_ACP const *, IStream *, ITfPersistentPropertyLoaderACP *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ACPHdrToAnchor@CACPWrap@@QEAAJPEBUTF_PERSISTENT_PROPERTY_HEADER_ACP@@PEAUTF_PERSISTENT_PROPERTY_HEADER_ANCHOR@@@Z
    long _ACPHdrToAnchor(TF_PERSISTENT_PROPERTY_HEADER_ACP const *, TF_PERSISTENT_PROPERTY_HEADER_ANCHOR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAnchorACP@CACPWrap@@QEAAPEAVCAnchorRef@@JW4__MIDL_IAnchor_0001@@@Z
    CAnchorRef * _CreateAnchorACP(long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NormalizeAnchor@CACPWrap@@QEAAXPEAVCAnchor@@@Z
    void _NormalizeAnchor(CAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Serialize@CACPWrap@@QEAAJPEAUITfProperty@@PEAUITfRange@@PEAUTF_PERSISTENT_PROPERTY_HEADER_ACP@@PEAUIStream@@@Z
    long _Serialize(ITfProperty *, ITfRange *, TF_PERSISTENT_PROPERTY_HEADER_ACP *, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unserialize@CACPWrap@@QEAAJPEAUITfProperty@@PEBUTF_PERSISTENT_PROPERTY_HEADER_ACP@@PEAUIStream@@PEAUITfPersistentPropertyLoaderACP@@@Z
    long _Unserialize(ITfProperty *, TF_PERSISTENT_PROPERTY_HEADER_ACP const *, IStream *, ITfPersistentPropertyLoaderACP *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustIchs@CACPWrap@@AEAAJHH@Z
    long _AdjustIchs(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AnchorHdrToACP@CACPWrap@@CAHPEBUTF_PERSISTENT_PROPERTY_HEADER_ANCHOR@@PEAUTF_PERSISTENT_PROPERTY_HEADER_ACP@@@Z
    static int _AnchorHdrToACP(TF_PERSISTENT_PROPERTY_HEADER_ANCHOR const *, TF_PERSISTENT_PROPERTY_HEADER_ACP *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Delete@CACPWrap@@AEAAXPEAVCAnchor@@@Z
    void _Delete(CAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DragAnchors@CACPWrap@@AEAAXJJ@Z
    void _DragAnchors(long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Find@CACPWrap@@AEAAPEAVCAnchor@@HPEAH@Z
    CAnchor * _Find(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Insert@CACPWrap@@AEAAJPEAVCAnchorRef@@J@Z
    long _Insert(CAnchorRef *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Merge@CACPWrap@@AEAAXPEAVCAnchor@@0@Z
    void _Merge(CAnchor *, CAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostInsertUpdate@CACPWrap@@AEAAXJJKPEBUTS_TEXTCHANGE@@@Z
    void _PostInsertUpdate(long, long, unsigned long, TS_TEXTCHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Renormalize@CACPWrap@@AEAAXHH@Z
    void _Renormalize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@CACPWrap@@AEAAHPEAVCAnchor@@HH0H@Z
    int _Update(CAnchor *, int, int, CAnchor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update@CACPWrap@@AEAAJPEBUTS_TEXTCHANGE@@@Z
    long _Update(TS_TEXTCHANGE const *);
};
