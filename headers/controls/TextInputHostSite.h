#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 21 member(s).
class TextInputHostSite {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentUIRights@TextInputHostSite@@UEAAJW4ComponentUIRights@@0@Z
    virtual long ConfigureComponentUIRights(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelegateInput@TextInputHostSite@@UEAAJII_N@Z
    virtual long DelegateInput(unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocusComplete@TextInputHostSite@@UEAAJUNavigateFocusCompleteInfo@@@Z
    virtual long DepartFocusComplete(NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindow@TextInputHostSite@@UEAAJ_N@Z
    virtual long EnableWindow(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpoint@TextInputHostSite@@UEAAJPEA_K@Z
    virtual long GetEndpoint(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocus@TextInputHostSite@@UEAAJUNavigateFocusInfo@@@Z
    virtual long NavigateFocus(NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComponentWindowActivated@TextInputHostSite@@UEAAJ_N@Z
    virtual long OnComponentWindowActivated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@TextInputHostSite@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@TextInputHostSite@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusDeparting@TextInputHostSite@@UEAAJUNavigateFocusInfo@@@Z
    virtual long OnFocusDeparting(NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateFocusComplete@TextInputHostSite@@UEAAJUNavigateFocusCompleteInfo@@@Z
    virtual long OnNavigateFocusComplete(NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TextInputHostSite@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@TextInputHostSite@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnProxyCreated(IMessageProxy *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextInputHostSite@@QEAA@XZ
    TextInputHostSite();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TextInputHostSite@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputHostSite@@EEAA@XZ
    virtual ~TextInputHostSite();
};
