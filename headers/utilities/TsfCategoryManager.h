#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 18 member(s).
class TsfCategoryManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumCategoriesInItem@TsfCategoryManager@@UEAAJAEBU_GUID@@PEAPEAUIEnumGUID@@@Z
    virtual long EnumCategoriesInItem(_GUID const &, IEnumGUID * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumItemsInCategory@TsfCategoryManager@@UEAAJAEBU_GUID@@PEAPEAUIEnumGUID@@@Z
    virtual long EnumItemsInCategory(_GUID const &, IEnumGUID * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosestCategory@TsfCategoryManager@@UEAAJAEBU_GUID@@PEAU2@PEAPEBU2@K@Z
    virtual long FindClosestCategory(_GUID const &, _GUID *, _GUID const * *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGUID@TsfCategoryManager@@UEAAJKPEAU_GUID@@@Z
    virtual long GetGUID(unsigned long, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGUIDDWORD@TsfCategoryManager@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetGUIDDWORD(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGUIDDescription@TsfCategoryManager@@UEAAJAEBU_GUID@@PEAPEAG@Z
    virtual long GetGUIDDescription(_GUID const &, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualTfGuidAtom@TsfCategoryManager@@UEAAJKAEBU_GUID@@PEAH@Z
    virtual long IsEqualTfGuidAtom(unsigned long, _GUID const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCategory@TsfCategoryManager@@UEAAJAEBU_GUID@@00@Z
    virtual long RegisterCategory(_GUID const &, _GUID const &, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGUID@TsfCategoryManager@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long RegisterGUID(_GUID const &, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGUIDDWORD@TsfCategoryManager@@UEAAJAEBU_GUID@@0K@Z
    virtual long RegisterGUIDDWORD(_GUID const &, _GUID const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGUIDDescription@TsfCategoryManager@@UEAAJAEBU_GUID@@0PEBGK@Z
    virtual long RegisterGUIDDescription(_GUID const &, _GUID const &, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCategory@TsfCategoryManager@@UEAAJAEBU_GUID@@00@Z
    virtual long UnregisterCategory(_GUID const &, _GUID const &, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterGUIDDWORD@TsfCategoryManager@@UEAAJAEBU_GUID@@0@Z
    virtual long UnregisterGUIDDWORD(_GUID const &, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterGUIDDescription@TsfCategoryManager@@UEAAJAEBU_GUID@@0@Z
    virtual long UnregisterGUIDDescription(_GUID const &, _GUID const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TsfCategoryManager@@UEAA@XZ
    virtual ~TsfCategoryManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetClassId@TsfCategoryManager@@EEBA?AW4TsfSingletonObjects@@XZ
    virtual int _GetClassId() const;
};
