#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 11 member(s).
class CCompartmentMgr {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompartmentMgr@@QEAA@XZ
    CCompartmentMgr();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUp@CCompartmentMgr@@QEAAXXZ
    void CleanUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCompartment@CCompartmentMgr@@UEAAJKAEBU_GUID@@@Z
    virtual long ClearCompartment(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumCompartments@CCompartmentMgr@@UEAAJPEAPEAUIEnumGUID@@@Z
    virtual long EnumCompartments(IEnumGUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompartment@CCompartmentMgr@@UEAAJAEBU_GUID@@PEAPEAUITfCompartment@@@Z
    virtual long GetCompartment(_GUID const &, ITfCompartment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerId@CCompartmentMgr@@UEBAKXZ
    virtual unsigned long GetOwnerId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompartmentSetValue@CCompartmentMgr@@UEAAXPEAVCCompartment@@@Z
    virtual void OnCompartmentSetValue(CCompartment *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompartmentMgr@@UEAA@XZ
    virtual ~CCompartmentMgr();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCompartment@CCompartmentMgr@@MEAAJAEBU_GUID@@KW4TfPropertyType@@PEAPEAVCCompartment@@@Z
    virtual long _CreateCompartment(_GUID const &, unsigned long, int, CCompartment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSharedGuidArray@CCompartmentMgr@@IEAAJPEAPEAU_SHARED_GUID_ARRAY@@@Z
    long _CreateSharedGuidArray(_SHARED_GUID_ARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Find@CCompartmentMgr@@IEAAPEAVCCompartment@@KPEAH@Z
    CCompartment * _Find(unsigned long, int *);
};
