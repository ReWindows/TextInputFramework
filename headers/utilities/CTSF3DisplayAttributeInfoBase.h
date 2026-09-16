#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class CTSF3DisplayAttributeInfoBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTSF3DisplayAttributeInfoBase@@QEAA@XZ
    CTSF3DisplayAttributeInfoBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CTSF3DisplayAttributeInfoBase@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGUID@CTSF3DisplayAttributeInfoBase@@UEAAJPEAU_GUID@@@Z
    virtual long GetGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTSF3DisplayAttribute@CTSF3DisplayAttributeInfoBase@@SA_NAEBU_GUID@@@Z
    static bool IsTSF3DisplayAttribute(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CTSF3DisplayAttributeInfoBase@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttributeInfo@CTSF3DisplayAttributeInfoBase@@UEAAJPEBUTF_DISPLAYATTRIBUTE@@@Z
    virtual long SetAttributeInfo(TF_DISPLAYATTRIBUTE const *);
};
