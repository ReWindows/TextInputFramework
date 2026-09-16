#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 7 member(s).
class TextInputHostSiteRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComponentWindowActivated@TextInputHostSiteRegistration@@QEAAJ_N@Z
    long OnComponentWindowActivated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusDeparting@TextInputHostSiteRegistration@@QEAAJUNavigateFocusInfo@@@Z
    long OnFocusDeparting(NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateFocusComplete@TextInputHostSiteRegistration@@QEAAJUNavigateFocusCompleteInfo@@@Z
    long OnNavigateFocusComplete(NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextInputHostSiteRegistration@@QEAAJPEAUIMessageSession@@_KPEAUtagMsgRoutingInfo@@PEAUITextInputServerOwner@@PEAUTextInputHostSiteSettings@@I@Z
    long RuntimeClassInitialize(IMessageSession *, uint64_t, tagMsgRoutingInfo *, ITextInputServerOwner *, TextInputHostSiteSettings *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputHostSiteRegistration@@UEAA@XZ
    virtual ~TextInputHostSiteRegistration();
};
