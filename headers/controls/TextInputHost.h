#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 53 member(s).
class TextInputHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@TextInputHost@@UEAAJIIUKeyEventHostInfo@@@Z
    virtual long BeginKeyEventPayload(unsigned int, unsigned int, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeViewInstanceId@TextInputHost@@UEAAXI@Z
    virtual void ChangeViewInstanceId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComponentWindowActivated@TextInputHost@@UEAAJ_N@Z
    virtual long ComponentWindowActivated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentUIRights@TextInputHost@@UEAAJW4ComponentUIRights@@0@Z
    virtual long ConfigureComponentUIRights(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocus@TextInputHost@@UEAAJUNavigateFocusInfo@@@Z
    virtual long DepartFocus(NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableCharacterEvent@TextInputHost@@UEAAJ_N@Z
    virtual long EnableCharacterEvent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInput@TextInputHost@@UEAAJ_N@Z
    virtual long EnableInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindow@TextInputHost@@UEAAJ_N@Z
    virtual long EnableWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndKeyEventPayload@TextInputHost@@UEAAJII_NUKeyEventHostInfo@@@Z
    virtual long EndKeyEventPayload(unsigned int, unsigned int, bool, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputHost@TextInputHost@@SAPEAV1@UtagMsgRoutingInfo@@@Z
    static TextInputHost * FindTextInputHost(tagMsgRoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputHost@TextInputHost@@SAPEAV1@PEAUHWND__@@@Z
    static TextInputHost * FindTextInputHost(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTextInputHost@TextInputHost@@SAPEAV1@XZ
    static TextInputHost * GetCurrentTextInputHost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpoint@TextInputHost@@UEAAJPEA_K@Z
    virtual long GetEndpoint(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedOnThread@TextInputHost@@SAPEAV1@I@Z
    static TextInputHost * GetFocusedOnThread(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasFocus@TextInputHost@@UEAAJPEA_N@Z
    virtual long GetHasFocus(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScheduler@TextInputHost@@QEAA?AV?$ComPtr@VCAsyncTaskScheduler@@@WRL@Microsoft@@XZ
    WindissectOpaque GetScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostFocusEnter@TextInputHost@@QEAAJ_NK@Z
    long InputHostFocusEnter(bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostFocusLeave@TextInputHost@@QEAAJ_NK@Z
    long InputHostFocusLeave(bool, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextInputHostExistInThread@TextInputHost@@SA_NI@Z
    static bool IsTextInputHostExistInThread(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocusComplete@TextInputHost@@UEAAJUNavigateFocusCompleteInfo@@@Z
    virtual long NavigateFocusComplete(NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAcceleratorKeyEvent@TextInputHost@@UEAAJIIW4AcceleratorKeyRoutingStage@@UKeyEventHostInfo@@PEAUMsgBlob@@PEAUMsgString@@G3@Z
    virtual long OnAcceleratorKeyEvent(unsigned int, unsigned int, int, KeyEventHostInfo, MsgBlob *, MsgString *, unsigned short, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationStateChange@TextInputHost@@UEAAJW4ViewActivationState@@I@Z
    virtual long OnActivationStateChange(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterEvent@TextInputHost@@UEAAJIIIUKeyEventHostInfo@@@Z
    virtual long OnCharacterEvent(unsigned int, unsigned int, unsigned int, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@TextInputHost@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDepartFocusComplete@TextInputHost@@UEAAJUNavigateFocusCompleteInfo@@@Z
    virtual long OnDepartFocusComplete(NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@TextInputHost@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusNavigating@TextInputHost@@UEAAJUNavigateFocusInfo@@@Z
    virtual long OnFocusNavigating(NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDelegated@TextInputHost@@UEAAJII_N@Z
    virtual long OnInputDelegated(unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@TextInputHost@@UEAAJIII_NUKeyEventHostInfo@@PEAUMsgBlob@@PEAUMsgString@@G3@Z
    virtual long OnKeyEvent(unsigned int, unsigned int, unsigned int, bool, KeyEventHostInfo, MsgBlob *, MsgString *, unsigned short, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNonCUIConfigurationChange@TextInputHost@@UEAAJUNonCUIConfiguration@@@Z
    virtual long OnNonCUIConfigurationChange(NonCUIConfiguration);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TextInputHost@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@TextInputHost@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnProxyCreated(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowEnabled@TextInputHost@@UEAAJ_N@Z
    virtual long OnWindowEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted@TextInputHost@@UEAAJW4TextInputAcknowledgment@@@Z
    virtual long OperationCompleted(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutHasFocus@TextInputHost@@UEAAJ_N@Z
    virtual long PutHasFocus(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutHasFocusInternal@TextInputHost@@QEAAJ_NK@Z
    long PutHasFocusInternal(bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSoftwareKeyboardVisibilityChange@TextInputHost@@UEAAJ_N@Z
    virtual long RequestSoftwareKeyboardVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSoftwareKeyboardVisibilityChange2@TextInputHost@@UEAAJ_NI@Z
    virtual long RequestSoftwareKeyboardVisibilityChange2(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextInputHost@@QEAAJPEAUITextInputHostOwner@@_N@Z
    long RuntimeClassInitialize(ITextInputHostOwner *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeepSoftwareKeyboardVisibleOnEditControlFocusLoss@TextInputHost@@UEAAJ_N@Z
    virtual long SetKeepSoftwareKeyboardVisibleOnEditControlFocusLoss(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyProcessingFlags@TextInputHost@@UEAAJG@Z
    virtual long SetKeyProcessingFlags(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessIDDelegation@TextInputHost@@UEAAJIW4DelegateInputMode@@@Z
    virtual long SetProcessIDDelegation(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextVirtualizationParameters@TextInputHost@@UEAAJ_KU_GUID@@@Z
    virtual long SetTextVirtualizationParameters(uint64_t, _GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewIDDelegation@TextInputHost@@UEAAJIW4DelegateInputMode@@@Z
    virtual long SetViewIDDelegation(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNavigateFocus@TextInputHost@@UEAAJI@Z
    virtual long StartNavigateFocus(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextInputHost@@QEAA@XZ
    TextInputHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TextInputHost@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputHost@@EEAA@XZ
    virtual ~TextInputHost();
};
