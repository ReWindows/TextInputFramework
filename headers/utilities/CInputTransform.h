#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 3 member(s).
class CInputTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RelativePointToScreen@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z
    TransformedPoint RelativePointToScreen(TransformedPoint const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RelativeRectToScreen@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z
    TransformedRect RelativeRectToScreen(TransformedRect const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RelativeRectToScreen@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z
    static TransformedRect RelativeRectToScreen(TransformedRect const &, tagINPUT_TRANSFORM const &);
};
