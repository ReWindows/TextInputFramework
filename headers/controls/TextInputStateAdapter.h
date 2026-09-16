#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 54 member(s).
class TextInputStateAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@TextInputStateAdapter@@UEAAJXZ
    virtual long Dispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveInputProfile@TextInputStateAdapter@@UEAAJPEAUCoreInputProfile@@@Z
    virtual long GetActiveInputProfile(CoreInputProfile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEditBufferID@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetEditBufferID(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEditControlLineType@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetEditControlLineType(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEditControlPosition@TextInputStateAdapter@@UEAAJPEAUTextRect@@@Z
    virtual long GetEditControlPosition(TextRect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEditControlSettings@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetEditControlSettings(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEditControlVisualReferenceId@TextInputStateAdapter@@UEAAJPEA_K@Z
    virtual long GetEditControlVisualReferenceId(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabledInputProfiles@TextInputStateAdapter@@UEAAJPEAPEAUMsgBlob@@@Z
    virtual long GetEnabledInputProfiles(MsgBlob * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundInputHostInfo@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetForegroundInputHostInfo(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameworkType@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetFrameworkType(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameworkVersion@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetFrameworkVersion(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareKeyboardDeployed@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long GetHardwareKeyboardDeployed(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareKeyboardExists@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long GetHardwareKeyboardExists(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareKeyboardFixed@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long GetHardwareKeyboardFixed(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareKeyboardOrientation@TextInputStateAdapter@@UEAAJPEAW4Orientations@@@Z
    virtual long GetHardwareKeyboardOrientation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareKeyboardTextIntelligenceEnabled@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long GetHardwareKeyboardTextIntelligenceEnabled(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareKeyboardUIEnabled@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long GetHardwareKeyboardUIEnabled(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIMEConversionMode@TextInputStateAdapter@@UEAAJPEAW4IMEConversionMode@@@Z
    virtual long GetIMEConversionMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIMEMode@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetIMEMode(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputAppAUMID@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetInputAppAUMID(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputDelegationStateInfo@TextInputStateAdapter@@UEAAJPEAUDelegationStateInfo@@@Z
    virtual long GetInputDelegationStateInfo(DelegationStateInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputLocale@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetInputLocale(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputModality@TextInputStateAdapter@@UEAAJPEAUInputModalityInfo@@@Z
    virtual long GetInputModality(InputModalityInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputPaneTryHide@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetInputPaneTryHide(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputPaneTryShow@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetInputPaneTryShow(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputScope@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetInputScope(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputSettings@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetInputSettings(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyProcessingFlags@TextInputStateAdapter@@UEAAJPEAG@Z
    virtual long GetKeyProcessingFlags(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastTapInControlAtFocus@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long GetLastTapInControlAtFocus(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModifierState@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetModifierState(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateField@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long GetPrivateField(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteForegroundInputHostInfo@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetRemoteForegroundInputHostInfo(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionPosition@TextInputStateAdapter@@UEAAJPEAUTextRect@@@Z
    virtual long GetSelectionPosition(TextRect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShapewritingEnabled@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long GetShapewritingEnabled(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareKeyboardDeployed@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long GetSoftwareKeyboardDeployed(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoftwareKeyboardForcedDownTime@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetSoftwareKeyboardForcedDownTime(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpeechProcessorActive@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long GetSpeechProcessorActive(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextHistory@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetTextHistory(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransferXYFocusToSoftwareKeyboard@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetTransferXYFocusToSoftwareKeyboard(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityRequestKind@TextInputStateAdapter@@UEAAJPEAI@Z
    virtual long GetVisibilityRequestKind(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowInfoMap@TextInputStateAdapter@@UEAAJPEAPEAUMsgBlob@@@Z
    virtual long GetWindowInfoMap(MsgBlob * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProxyInitialized@TextInputStateAdapter@@UEAAJPEA_N@Z
    virtual long IsProxyInitialized(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyProcessor@TextInputStateAdapter@@UEAAJW4InputProcessorAction@@I@Z
    virtual long NotifyProcessor(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnProxyCreated(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z
    long RuntimeClassInitialize(ITextInputStateAdapterOwner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterestedProperty@TextInputStateAdapter@@UEAAJG_N@Z
    virtual long SetInterestedProperty(unsigned short, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextInputStateAdapter@@QEAA@XZ
    TextInputStateAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z
    long PropertyChangeHelper(unsigned short, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputStateAdapter@@EEAA@XZ
    virtual ~TextInputStateAdapter();
};
