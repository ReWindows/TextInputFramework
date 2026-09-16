#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 61 member(s).
class CProperty {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProperty@@QEAA@XZ
    CProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CProperty@@QEAAXPEAUIAnchor@@0KH@Z
    void Clear(IAnchor *, IAnchor *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CProperty@@UEAAJKPEAUITfRange@@@Z
    virtual long Clear(unsigned long, ITfRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Defrag@CProperty@@QEAAHPEAUIAnchor@@0@Z
    int Defrag(IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumRanges@CProperty@@UEAAJKPEAPEAUIEnumTfRanges@@PEAUITfRange@@@Z
    virtual long EnumRanges(unsigned long, IEnumTfRanges * *, ITfRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextValue@CProperty@@UEAAJKPEAUITfRange@@W4__MIDL___MIDL_itf_msctf_0000_0000_0001@@KPEAHPEAPEAU2@@Z
    virtual long FindNextValue(unsigned long, ITfRange *, int, unsigned long, int *, ITfRange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPropertyListByPos@CProperty@@QEAAPEAUtag_PROPERTYLIST@@PEAUIAnchor@@H@Z
    tag_PROPERTYLIST * FindPropertyListByPos(IAnchor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRange@CProperty@@UEAAJKPEAUITfRange@@PEAPEAU2@W4__MIDL___MIDL_itf_msctf_0000_0000_0001@@@Z
    virtual long FindRange(unsigned long, ITfRange *, ITfRange * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceLoad@CProperty@@QEAAJXZ
    long ForceLoad();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContext@CProperty@@UEAAJPEAPEAUITfContext@@@Z
    virtual long GetContext(ITfContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThis@CProperty@@UEAAPEAV1@XZ
    virtual CProperty * GetThis();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CProperty@@UEAAJPEAU_GUID@@@Z
    virtual long GetType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CProperty@@UEAAJKPEAUITfRange@@PEAUtagVARIANT@@@Z
    virtual long GetValue(unsigned long, ITfRange *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadData@CProperty@@QEAAJPEAUtag_PROPERTYLIST@@@Z
    long LoadData(tag_PROPERTYLIST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuickGetAndLoadPropList@CProperty@@QEAAPEAUtag_PROPERTYLIST@@H@Z
    tag_PROPERTYLIST * QuickGetAndLoadPropList(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CProperty@@QEAAJPEAVCInputContext@@AEBU_GUID@@W4TFPROPERTYSTYLE@@KK@Z
    long RuntimeClassInitialize(CInputContext *, _GUID const &, int, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeGetPropList@CProperty@@QEAAPEAUtag_PROPERTYLIST@@H@Z
    tag_PROPERTYLIST * SafeGetPropList(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CProperty@@UEAAJKPEAUITfRange@@PEBUtagVARIANT@@@Z
    virtual long SetValue(unsigned long, ITfRange *, tagVARIANT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueStore@CProperty@@UEAAJKPEAUITfRange@@PEAUITfPropertyStore@@@Z
    virtual long SetValueStore(unsigned long, ITfRange *, ITfPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearInternal@CProperty@@QEAAJKPEAUIAnchor@@0@Z
    long _ClearInternal(unsigned long, IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindPropList@CProperty@@QEAAPEAUtag_PROPERTYLIST@@PEAUIAnchor@@0@Z
    tag_PROPERTYLIST * _FindPropList(IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindPropListAndDivide@CProperty@@QEAAPEAUtag_PROPERTYLIST@@PEAUIAnchor@@0@Z
    tag_PROPERTYLIST * _FindPropListAndDivide(IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDataInternal@CProperty@@QEAAJPEAUIAnchor@@0PEAUtagVARIANT@@@Z
    long _GetDataInternal(IAnchor *, IAnchor *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalFindRange@CProperty@@QEAAJPEAVCRange@@PEAPEAV2@W4__MIDL___MIDL_itf_msctf_0000_0000_0001@@H@Z
    long _InternalFindRange(CRange *, CRange * *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Serialize@CProperty@@QEAAJPEAVCRange@@PEAUTF_PERSISTENT_PROPERTY_HEADER_ANCHOR@@PEAUIStream@@@Z
    long _Serialize(CRange *, TF_PERSISTENT_PROPERTY_HEADER_ANCHOR *, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDataInternal@CProperty@@QEAAJKPEAUIAnchor@@0PEBUtagVARIANT@@@Z
    long _SetDataInternal(unsigned long, IAnchor *, IAnchor *, tagVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStoreInternal@CProperty@@QEAAJKPEAVCRange@@PEAUITfPropertyStore@@H@Z
    long _SetStoreInternal(unsigned long, CRange *, ITfPropertyStore *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unserialize@CProperty@@QEAAJPEBUTF_PERSISTENT_PROPERTY_HEADER_ANCHOR@@PEAUIStream@@PEAUITfPersistentPropertyLoaderAnchor@@@Z
    long _Unserialize(TF_PERSISTENT_PROPERTY_HEADER_ANCHOR const *, IStream *, ITfPersistentPropertyLoaderAnchor *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProperty@@UEAA@XZ
    virtual ~CProperty();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyUpdated@CProperty@@AEAAXPEAUIAnchor@@0@Z
    void PropertyUpdated(IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CProperty@@AEAAJPEAUIAnchor@@0PEAUITfPropertyStore@@@Z
    long Set(IAnchor *, IAnchor *, ITfPropertyStore *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?_AddIntoProp@CProperty@@AEAAHHPEAUIAnchor@@0PEAUITfPropertyStore@@@Z
    int _AddIntoProp(int, IAnchor *, IAnchor *, ITfPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckOwner@CProperty@@AEAAJKPEAUIAnchor@@0@Z
    long _CheckOwner(unsigned long, IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckValidation@CProperty@@AEAAJKPEAVCRange@@@Z
    long _CheckValidation(unsigned long, CRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearOneSpan@CProperty@@AEAAXPEAUIAnchor@@0HHHKH@Z
    void _ClearOneSpan(IAnchor *, IAnchor *, int, int, int, unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?_CreateNewProp@CProperty@@AEAAPEAUtag_PROPERTYLIST@@PEAUIAnchor@@0PEAUITfPropertyStore@@PEAVCPropertyLoad@@@Z
    tag_PROPERTYLIST * _CreateNewProp(IAnchor *, IAnchor *, ITfPropertyStore *, CPropertyLoad *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DefragAfterThis@CProperty@@AEAAXH@Z
    void _DefragAfterThis(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Divide@CProperty@@AEAAJPEAUtag_PROPERTYLIST@@PEAUIAnchor@@1PEAPEAUITfPropertyStore@@@Z
    long _Divide(tag_PROPERTYLIST *, IAnchor *, IAnchor *, ITfPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindComplex@CProperty@@AEAAPEAUtag_PROPERTYLIST@@PEAUIAnchor@@PEAJHH@Z
    tag_PROPERTYLIST * _FindComplex(IAnchor *, long *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreePropertyList@CProperty@@AEAAXPEAUtag_PROPERTYLIST@@@Z
    void _FreePropertyList(tag_PROPERTYLIST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropStoreFromStream@CProperty@@AEAAJPEBUTF_PERSISTENT_PROPERTY_HEADER_ANCHOR@@PEAUIStream@@PEAVCRange@@PEAPEAUITfPropertyStore@@@Z
    long _GetPropStoreFromStream(TF_PERSISTENT_PROPERTY_HEADER_ANCHOR const *, IStream *, CRange *, ITfPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertPropList@CProperty@@AEAAHPEAUIAnchor@@0PEAUITfPropertyStore@@PEAVCPropertyLoad@@@Z
    int _InsertPropList(IAnchor *, IAnchor *, ITfPropertyStore *, CPropertyLoad *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MovePropertySpans@CProperty@@AEAAXHHH@Z
    void _MovePropertySpans(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTextUpdate@CProperty@@AEAAHKPEAUtag_PROPERTYLIST@@PEAUIAnchor@@1@Z
    int _OnTextUpdate(unsigned long, tag_PROPERTYLIST *, IAnchor *, IAnchor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?_RemoveProp@CProperty@@AEAAXJPEAUtag_PROPERTYLIST@@@Z
    void _RemoveProp(long, tag_PROPERTYLIST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNewExtent@CProperty@@AEAAJPEAUtag_PROPERTYLIST@@PEAUIAnchor@@1H@Z
    long _SetNewExtent(tag_PROPERTYLIST *, IAnchor *, IAnchor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPropertyLoaderInternal@CProperty@@AEAAJKPEAVCRange@@PEAVCPropertyLoad@@@Z
    long _SetPropertyLoaderInternal(unsigned long, CRange *, CPropertyLoad *);
};
