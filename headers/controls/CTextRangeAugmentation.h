#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 19 member(s).
class CTextRangeAugmentation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextRangeAugmentation@@QEAA@XZ
    CTextRangeAugmentation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveDecoration@CTextRangeAugmentation@@UEAAJPEAPEAUITfTextAugmentationDecoration@@@Z
    virtual long GetActiveDecoration(ITfTextAugmentationDecoration * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategory@CTextRangeAugmentation@@UEAA?AW4TsfTextAugmentationCategory@@XZ
    virtual int GetCategory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryName@CTextRangeAugmentation@@UEAAPEAGXZ
    virtual unsigned short * GetCategoryName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultActionName@CTextRangeAugmentation@@UEAAPEAGXZ
    virtual unsigned short * GetDefaultActionName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CTextRangeAugmentation@@UEAAPEAGXZ
    virtual unsigned short * GetDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnd@CTextRangeAugmentation@@UEAAJXZ
    virtual long GetEnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoverDecoration@CTextRangeAugmentation@@UEAAJPEAPEAUITfTextAugmentationDecoration@@@Z
    virtual long GetHoverDecoration(ITfTextAugmentationDecoration * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInactiveDecoration@CTextRangeAugmentation@@UEAAJPEAPEAUITfTextAugmentationDecoration@@@Z
    virtual long GetInactiveDecoration(ITfTextAugmentationDecoration * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStart@CTextRangeAugmentation@@UEAAJXZ
    virtual long GetStart();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDefaultAction@CTextRangeAugmentation@@UEAAHXZ
    virtual int HasDefaultAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHoverAction@CTextRangeAugmentation@@UEAAHXZ
    virtual int HasHoverAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDefaultAction@CTextRangeAugmentation@@UEAAJUtagRECT@@@Z
    virtual long InvokeDefaultAction(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeHoverAction@CTextRangeAugmentation@@UEAAJUtagRECT@@@Z
    virtual long InvokeHoverAction(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTextRangeAugmentation@@QEAAJIAEBUTextRangeAugmentation@@@Z
    long RuntimeClassInitialize(unsigned int, TextRangeAugmentation const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextRangeAugmentation@@UEAA@XZ
    virtual ~CTextRangeAugmentation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WrapTextDecoration@CTextRangeAugmentation@@AEAAJAEBUTextDecoration@@PEAPEAUITfTextAugmentationDecoration@@@Z
    long _WrapTextDecoration(TextDecoration const &, ITfTextAugmentationDecoration * *);
};
