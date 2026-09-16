#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 4 member(s).
class TextInputClientStub {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderDisconnected@TextInputClientStub@@UEAAJG@Z
    virtual long ProviderDisconnected(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscriptionChanged@TextInputClientStub@@UEAAJAEBUCoreImeSubscription@IME@Input@Internal@UI@Windows@@@Z
    virtual long SubscriptionChanged(::Windows::UI::Internal::Input::IME::CoreImeSubscription const &);
};
