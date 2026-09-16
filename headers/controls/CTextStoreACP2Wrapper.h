#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 29 member(s).
class CTextStoreACP2Wrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTextStoreACP2Wrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseSink@CTextStoreACP2Wrapper@@UEAAJAEBU_GUID@@PEAUIUnknown@@K@Z
    virtual long AdviseSink(_GUID const &, IUnknown *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextAttrTransition@CTextStoreACP2Wrapper@@UEAAJJJKPEBU_GUID@@KPEAJPEAH1@Z
    virtual long FindNextAttrTransition(long, long, unsigned long, _GUID const *, unsigned long, long *, int *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetACPFromPoint@CTextStoreACP2Wrapper@@UEAAJKPEBUtagPOINT@@KPEAJ@Z
    virtual long GetACPFromPoint(unsigned long, tagPOINT const *, unsigned long, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveView@CTextStoreACP2Wrapper@@UEAAJPEAK@Z
    virtual long GetActiveView(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbedded@CTextStoreACP2Wrapper@@UEAAJJAEBU_GUID@@0PEAPEAUIUnknown@@@Z
    virtual long GetEmbedded(long, _GUID const &, _GUID const &, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndACP@CTextStoreACP2Wrapper@@UEAAJPEAJ@Z
    virtual long GetEndACP(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormattedText@CTextStoreACP2Wrapper@@UEAAJJJPEAPEAUIDataObject@@@Z
    virtual long GetFormattedText(long, long, IDataObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenExt@CTextStoreACP2Wrapper@@UEAAJKPEAUtagRECT@@@Z
    virtual long GetScreenExt(unsigned long, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CTextStoreACP2Wrapper@@UEAAJKKPEAUTS_SELECTION_ACP@@PEAK@Z
    virtual long GetSelection(unsigned long, unsigned long, TS_SELECTION_ACP *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CTextStoreACP2Wrapper@@UEAAJPEAUTS_STATUS@@@Z
    virtual long GetStatus(TS_STATUS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CTextStoreACP2Wrapper@@UEAAJJJPEAGKPEAKPEAUTS_RUNINFO@@K1PEAJ@Z
    virtual long GetText(long, long, unsigned short *, unsigned long, unsigned long *, TS_RUNINFO *, unsigned long, unsigned long *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextExt@CTextStoreACP2Wrapper@@UEAAJKJJPEAUtagRECT@@PEAH@Z
    virtual long GetTextExt(unsigned long, long, long, tagRECT *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWnd@CTextStoreACP2Wrapper@@UEAAJKPEAPEAUHWND__@@@Z
    virtual long GetWnd(unsigned long, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertEmbedded@CTextStoreACP2Wrapper@@UEAAJKJJPEAUIDataObject@@PEAUTS_TEXTCHANGE@@@Z
    virtual long InsertEmbedded(unsigned long, long, long, IDataObject *, TS_TEXTCHANGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertEmbeddedAtSelection@CTextStoreACP2Wrapper@@UEAAJKPEAUIDataObject@@PEAJ1PEAUTS_TEXTCHANGE@@@Z
    virtual long InsertEmbeddedAtSelection(unsigned long, IDataObject *, long *, long *, TS_TEXTCHANGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTextAtSelection@CTextStoreACP2Wrapper@@UEAAJKPEBGKPEAJ1PEAUTS_TEXTCHANGE@@@Z
    virtual long InsertTextAtSelection(unsigned long, unsigned short const *, unsigned long, long *, long *, TS_TEXTCHANGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInsert@CTextStoreACP2Wrapper@@UEAAJJJKPEAJ0@Z
    virtual long QueryInsert(long, long, unsigned long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInsertEmbedded@CTextStoreACP2Wrapper@@UEAAJPEBU_GUID@@PEBUtagFORMATETC@@PEAH@Z
    virtual long QueryInsertEmbedded(_GUID const *, tagFORMATETC const *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTextStoreACP2Wrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTextStoreACP2Wrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAttrsAtPosition@CTextStoreACP2Wrapper@@UEAAJJKPEBU_GUID@@K@Z
    virtual long RequestAttrsAtPosition(long, unsigned long, _GUID const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAttrsTransitioningAtPosition@CTextStoreACP2Wrapper@@UEAAJJKPEBU_GUID@@K@Z
    virtual long RequestAttrsTransitioningAtPosition(long, unsigned long, _GUID const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestLock@CTextStoreACP2Wrapper@@UEAAJKPEAJ@Z
    virtual long RequestLock(unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSupportedAttrs@CTextStoreACP2Wrapper@@UEAAJKKPEBU_GUID@@@Z
    virtual long RequestSupportedAttrs(unsigned long, unsigned long, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveRequestedAttrs@CTextStoreACP2Wrapper@@UEAAJKPEAUTS_ATTRVAL@@PEAK@Z
    virtual long RetrieveRequestedAttrs(unsigned long, TS_ATTRVAL *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CTextStoreACP2Wrapper@@UEAAJKPEBUTS_SELECTION_ACP@@@Z
    virtual long SetSelection(unsigned long, TS_SELECTION_ACP const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CTextStoreACP2Wrapper@@UEAAJKJJPEBGKPEAUTS_TEXTCHANGE@@@Z
    virtual long SetText(unsigned long, long, long, unsigned short const *, unsigned long, TS_TEXTCHANGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseSink@CTextStoreACP2Wrapper@@UEAAJPEAUIUnknown@@@Z
    virtual long UnadviseSink(IUnknown *);
};
