#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class CTSF3TextFormatAttributeInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorFromUIElementType@CTSF3TextFormatAttributeInfo@@SA?AUTF_DA_COLOR@@I@Z
    static TF_DA_COLOR ColorFromUIElementType(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributeInfo@CTSF3TextFormatAttributeInfo@@UEAAJPEAUTF_DISPLAYATTRIBUTE@@@Z
    virtual long GetAttributeInfo(TF_DISPLAYATTRIBUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineStyleFromUnderlineType@CTSF3TextFormatAttributeInfo@@SA?AW4__MIDL___MIDL_itf_msctf_0000_0070_0001@@IPEA_N@Z
    static int LineStyleFromUnderlineType(unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextFormatToGUID@CTSF3TextFormatAttributeInfo@@SAXAEBUTextFormat@@PEAU_GUID@@@Z
    static void TextFormatToGUID(TextFormat const &, _GUID *);
};
