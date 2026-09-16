#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 4 member(s).
class CTSF3TextTagAttributeInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeInfo@CTSF3TextTagAttributeInfo@@UEAAJPEAUTF_DISPLAYATTRIBUTE@@@Z
    virtual long GetAttributeInfo(TF_DISPLAYATTRIBUTE *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayAttributeColor@CTSF3TextTagAttributeInfo@@AEAA?AUTF_DA_COLOR@@I@Z
    TF_DA_COLOR _GetDisplayAttributeColor(unsigned int);
};
