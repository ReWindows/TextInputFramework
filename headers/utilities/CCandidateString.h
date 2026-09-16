#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 5 member(s).
class CCandidateString {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@CCandidateString@@UEAAJPEAK@Z
    virtual long GetIndex(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CCandidateString@@UEAAJPEAPEAG@Z
    virtual long GetString(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCandidateString@@UEAA@XZ
    virtual ~CCandidateString();
};
