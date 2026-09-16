#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 14 member(s).
class CTextAugmentationClass {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveDecoration@CTextAugmentationClass@@UEAAAEBUTextDecoration@@XZ
    virtual TextDecoration const & GetActiveDecoration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategory@CTextAugmentationClass@@UEAAGXZ
    virtual unsigned short GetCategory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryName@CTextAugmentationClass@@UEAAPEBGXZ
    virtual unsigned short const * GetCategoryName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultActionName@CTextAugmentationClass@@UEAAPEBGXZ
    virtual unsigned short const * GetDefaultActionName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CTextAugmentationClass@@UEAAPEBGXZ
    virtual unsigned short const * GetDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoverDecoration@CTextAugmentationClass@@UEAAAEBUTextDecoration@@XZ
    virtual TextDecoration const & GetHoverDecoration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInactiveDecoration@CTextAugmentationClass@@UEAAAEBUTextDecoration@@XZ
    virtual TextDecoration const & GetInactiveDecoration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDefaultAction@CTextAugmentationClass@@UEAA_NXZ
    virtual bool HasDefaultAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHoverAction@CTextAugmentationClass@@UEAA_NXZ
    virtual bool HasHoverAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CTextAugmentationClass@@UEAAJIGGUTextRect@@_N@Z
    virtual long Invoke(unsigned int, unsigned short, unsigned short, TextRect, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTextAugmentationClass@@QEAAJPEAUITextInputClientFTInternal@@AEBUTextAugmentationClass@@PEBG22@Z
    long RuntimeClassInitialize(ITextInputClientFTInternal *, TextAugmentationClass const &, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextAugmentationClass@@UEAA@XZ
    virtual ~CTextAugmentationClass();
};
