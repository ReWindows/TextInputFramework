#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 12 member(s).
class CDisplayAttributeMgr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseMarkupCollection@CDisplayAttributeMgr@@UEAAXPEAUITfTextInputProcessor@@K@Z
    virtual void AdviseMarkupCollection(ITfTextInputProcessor *, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayAttributeMgr@@QEAA@XZ
    CDisplayAttributeMgr();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumCollections@CDisplayAttributeMgr@@UEAAJPEAPEAUIEnumTfCollection@@@Z
    virtual long EnumCollections(IEnumTfCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumDisplayAttributeInfo@CDisplayAttributeMgr@@UEAAJPEAPEAUIEnumTfDisplayAttributeInfo@@@Z
    virtual long EnumDisplayAttributeInfo(IEnumTfDisplayAttributeInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayAttributeInfo@CDisplayAttributeMgr@@UEAAJAEBU_GUID@@PEAPEAUITfDisplayAttributeInfo@@PEAU2@@Z
    virtual long GetDisplayAttributeInfo(_GUID const &, ITfDisplayAttributeInfo * *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarkupCollection@CDisplayAttributeMgr@@UEAAPEAVCRenderMarkupCollection@@XZ
    virtual CRenderMarkupCollection * GetMarkupCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateInfo@CDisplayAttributeMgr@@UEAAJXZ
    virtual long OnUpdateInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDisplayAttributeMgr@@QEAAJPEAUIUnknown@@@Z
    long RuntimeClassInitialize(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseMarkupCollection@CDisplayAttributeMgr@@UEAAXK@Z
    virtual void UnadviseMarkupCollection(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayAttributeMgr@@UEAA@XZ
    virtual ~CDisplayAttributeMgr();
};
