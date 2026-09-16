#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 76 member(s).
class CRange {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRange@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustForInsert@CRange@@UEAAJKKPEAH@Z
    virtual long AdjustForInsert(unsigned long, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseSink@CRange@@UEAAJAEBU_GUID@@PEAUIUnknown@@PEAK@Z
    virtual long AdviseSink(_GUID const &, IUnknown *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRange@@QEAA@XZ
    CRange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CRange@@UEAAJPEAPEAUITfRange@@@Z
    virtual long Clone(ITfRange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@CRange@@UEAAJKW4__MIDL___MIDL_itf_msctf_0000_0000_0001@@@Z
    virtual long Collapse(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareEnd@CRange@@UEAAJKPEAUITfRange@@W4__MIDL___MIDL_itf_msctf_0000_0000_0001@@PEAJ@Z
    virtual long CompareEnd(unsigned long, ITfRange *, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareStart@CRange@@UEAAJKPEAUITfRange@@W4__MIDL___MIDL_itf_msctf_0000_0000_0001@@PEAJ@Z
    virtual long CompareStart(unsigned long, ITfRange *, int, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContext@CRange@@UEAAJPEAPEAUITfContext@@@Z
    virtual long GetContext(ITfContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContinuousText@CRange@@UEAAJKPEAGKPEAK@Z
    virtual long GetContinuousText(unsigned long, unsigned short *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbedded@CRange@@UEAAJKAEBU_GUID@@0PEAPEAUIUnknown@@@Z
    virtual long GetEmbedded(unsigned long, _GUID const &, _GUID const &, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtent@CRange@@UEAAJPEAJ0@Z
    virtual long GetExtent(long *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtent@CRange@@UEAAJPEAPEAUIAnchor@@0@Z
    virtual long GetExtent(IAnchor * *, IAnchor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormattedText@CRange@@UEAAJKPEAPEAUIDataObject@@@Z
    virtual long GetFormattedText(unsigned long, IDataObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGravity@CRange@@UEAAJPEAW4__MIDL_ITfRange_0001@@0@Z
    virtual long GetGravity(int*, int*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CRange@@UEAAJKKPEAGKPEAK@Z
    virtual long GetText(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertEmbedded@CRange@@UEAAJKKPEAUIDataObject@@@Z
    virtual long InsertEmbedded(unsigned long, unsigned long, IDataObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CRange@@UEAAJKPEAH@Z
    virtual long IsEmpty(unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualEnd@CRange@@UEAAJKPEAUITfRange@@W4__MIDL___MIDL_itf_msctf_0000_0000_0001@@PEAH@Z
    virtual long IsEqualEnd(unsigned long, ITfRange *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualStart@CRange@@UEAAJKPEAUITfRange@@W4__MIDL___MIDL_itf_msctf_0000_0000_0001@@PEAH@Z
    virtual long IsEqualStart(unsigned long, ITfRange *, int, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRange@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRange@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@CRange@@UEAAJKPEBGJ@Z
    virtual long ReplaceText(unsigned long, unsigned short const *, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtent@CRange@@UEAAJJJ@Z
    virtual long SetExtent(long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtent@CRange@@UEAAJPEAUIAnchor@@0@Z
    virtual long SetExtent(IAnchor *, IAnchor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGravity@CRange@@UEAAJKW4__MIDL_ITfRange_0001@@0@Z
    virtual long SetGravity(unsigned long, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CRange@@UEAAJKPEBGJ@Z
    virtual long SetText(unsigned long, unsigned short const *, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CRange@@UEAAJKKPEBGJ@Z
    virtual long SetText(unsigned long, unsigned long, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftEnd@CRange@@UEAAJKJPEAJPEBUTF_HALTCOND@@@Z
    virtual long ShiftEnd(unsigned long, long, long *, TF_HALTCOND const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftEndRegion@CRange@@UEAAJKW4__MIDL_ITfRange_0002@@PEAH@Z
    virtual long ShiftEndRegion(unsigned long, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftEndToRange@CRange@@UEAAJKPEAUITfRange@@W4__MIDL___MIDL_itf_msctf_0000_0000_0001@@@Z
    virtual long ShiftEndToRange(unsigned long, ITfRange *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftStart@CRange@@UEAAJKJPEAJPEBUTF_HALTCOND@@@Z
    virtual long ShiftStart(unsigned long, long, long *, TF_HALTCOND const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftStartRegion@CRange@@UEAAJKW4__MIDL_ITfRange_0002@@PEAH@Z
    virtual long ShiftStartRegion(unsigned long, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftStartToRange@CRange@@UEAAJKPEAUITfRange@@W4__MIDL___MIDL_itf_msctf_0000_0000_0001@@@Z
    virtual long ShiftStartToRange(unsigned long, ITfRange *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseSink@CRange@@UEAAJK@Z
    virtual long UnadviseSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Clone@CRange@@QEAAPEAV1@XZ
    CRange * _Clone();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckCrossedAnchors@CRange@@AEAAXXZ
    void _CheckCrossedAnchors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetText@CRange@@AEAAJKKPEAGKPEAK@Z
    long _GetText(unsigned long, unsigned long, unsigned short *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CRange@@AEAAHPEAVCInputContext@@W4AnchorOwnership@@PEAUIAnchor@@2W4RInit@@@Z
    int _Init(CInputContext *, int, IAnchor *, IAnchor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsEqualX@CRange@@AEAAJKW4__MIDL___MIDL_itf_msctf_0000_0000_0001@@PEAUITfRange@@0PEAH@Z
    long _IsEqualX(unsigned long, int, ITfRange *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsValidEditCookie@CRange@@AEAAHKK@Z
    int _IsValidEditCookie(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PreEditCompositionCheck@CRange@@AEAAJK_NPEAPEAVCComposition@@PEAH@Z
    long _PreEditCompositionCheck(unsigned long, bool, CComposition * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetGravity@CRange@@AEAAJW4__MIDL_ITfRange_0001@@0H@Z
    long _SetGravity(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetText@CRange@@AEAAJKKPEBGJ@Z
    long _SetText(unsigned long, unsigned long, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShiftConditional@CRange@@AEAAJPEAUIAnchor@@0JPEAJPEBUTF_HALTCOND@@@Z
    long _ShiftConditional(IAnchor *, IAnchor *, long, long *, TF_HALTCOND const *);
};
