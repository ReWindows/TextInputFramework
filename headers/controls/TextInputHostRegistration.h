#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 12 member(s).
class TextInputHostRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindow@TextInputHostRegistration@@QEAAJ_N@Z
    long EnableWindow(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidOrdinal@TextInputHostRegistration@@QEAA_NI@Z
    bool IsValidOrdinal(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDepartFocusComplete@TextInputHostRegistration@@QEAAJUNavigateFocusCompleteInfo@@@Z
    long OnDepartFocusComplete(NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusNavigating@TextInputHostRegistration@@QEAAJUNavigateFocusInfo@@@Z
    long OnFocusNavigating(NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDelegated@TextInputHostRegistration@@QEAAJII_N@Z
    long OnInputDelegated(unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNonCUIConfigurationChange@TextInputHostRegistration@@QEAAJUNonCUIConfiguration@@@Z
    long OnNonCUIConfigurationChange(NonCUIConfiguration);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted@TextInputHostRegistration@@QEAAJW4TextInputAcknowledgment@@@Z
    long OperationCompleted(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextInputHostRegistration@@QEAAJPEAUIMessageSession@@_KPEAUtagMsgRoutingInfo@@PEAUITextInputServerOwner@@PEAUTextInputHostSettings@@II@Z
    long RuntimeClassInitialize(IMessageSession *, uint64_t, tagMsgRoutingInfo *, ITextInputServerOwner *, TextInputHostSettings *, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextInputHostRegistration@@QEAA@XZ
    TextInputHostRegistration();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputHostRegistration@@UEAA@XZ
    virtual ~TextInputHostRegistration();
};
