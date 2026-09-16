#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 14 member(s).
class CPropertyStoreBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Divide@CPropertyStoreBase@@UEAAJPEAUITfRange@@0PEAPEAUITfPropertyStore@@@Z
    virtual long Divide(ITfRange *, ITfRange *, ITfPropertyStore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@CPropertyStoreBase@@UEAAJPEAUtagVARIANT@@@Z
    virtual long GetData(tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataType@CPropertyStoreBase@@UEAAJPEAK@Z
    virtual long GetDataType(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyRangeCreator@CPropertyStoreBase@@UEAAJPEAU_GUID@@@Z
    virtual long GetPropertyRangeCreator(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CPropertyStoreBase@@UEAAJPEAU_GUID@@@Z
    virtual long GetType(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextUpdated@CPropertyStoreBase@@UEAAJKPEAUITfRange@@PEAH@Z
    virtual long OnTextUpdated(unsigned long, ITfRange *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CPropertyStoreBase@@UEAAJPEAUIStream@@PEAK@Z
    virtual long Serialize(IStream *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shrink@CPropertyStoreBase@@UEAAJPEAUITfRange@@PEAH@Z
    virtual long Shrink(ITfRange *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertyStoreBase@@UEAA@XZ
    virtual ~CPropertyStoreBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CPropertyStoreBase@@IEAAJPEAUITfCategoryMgr@@KPEBUtagVARIANT@@K@Z
    long _Init(ITfCategoryMgr *, unsigned long, tagVARIANT const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CPropertyStoreBase@@IEAAJPEAUITfCategoryMgr@@KHW4TfPropertyType@@PEAUIStream@@K@Z
    long _Init(ITfCategoryMgr *, unsigned long, int, int, IStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CPropertyStoreBase@@IEAAJPEAUITfCategoryMgr@@KPEAUtagTFPROPERTY@@K@Z
    long _Init(ITfCategoryMgr *, unsigned long, tagTFPROPERTY *, unsigned long);
};
