#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 10 member(s).
class CTextDecoration {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@CTextDecoration@@UEAA?AUTsfColor@@XZ
    virtual TsfColor GetBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundDarkColor@CTextDecoration@@UEAA?AUTsfColor@@XZ
    virtual TsfColor GetBackgroundDarkColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundLightColor@CTextDecoration@@UEAA?AUTsfColor@@XZ
    virtual TsfColor GetBackgroundLightColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlineColor@CTextDecoration@@UEAA?AUTsfColor@@XZ
    virtual TsfColor GetUnderlineColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlineDarkColor@CTextDecoration@@UEAA?AUTsfColor@@XZ
    virtual TsfColor GetUnderlineDarkColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlineLightColor@CTextDecoration@@UEAA?AUTsfColor@@XZ
    virtual TsfColor GetUnderlineLightColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlineStyle@CTextDecoration@@UEAA?AW4TsfTextUnderlineStyle@@XZ
    virtual int GetUnderlineStyle();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetColor@CTextDecoration@@AEBA?AUTsfColor@@I@Z
    TsfColor _GetColor(unsigned int) const;
};
