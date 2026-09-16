#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 190 member(s).
class TextInputClient {
public:
    class WindowInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTextAugmentation@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@GGAEBUEditControlRange@@@Z
    virtual long AddTextAugmentation(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &, unsigned short, unsigned short, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTextAugmentationClass@TextInputClient@@QEAAXAEBUTextAugmentationClass@@PEBG11@Z
    void AddTextAugmentationClass(TextAugmentationClass const &, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AltPeopleProviderChanged@TextInputClient@@UEAAJIPEAUMsgString@@@Z
    virtual long AltPeopleProviderChanged(unsigned int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AltPlacesProviderChanged@TextInputClient@@UEAAJIPEAUMsgString@@@Z
    virtual long AltPlacesProviderChanged(unsigned int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDeferredOperation@TextInputClient@@UEAAJIIPEA_N@Z
    virtual long BeginDeferredOperation(unsigned int, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@TextInputClient@@UEAAJIIUKeyEventHostInfo@@PEAUITextInputHost@@@Z
    virtual long BeginKeyEventPayload(unsigned int, unsigned int, KeyEventHostInfo, ITextInputHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@AEBUKeyEventHostInfo@@@Z
    virtual long BeginKeyEventPayload(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &, KeyEventHostInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearConnectionMonitorCallback@TextInputClient@@UEAAJPEAUICallbackConnectionMonitor@@@Z
    virtual long ClearConnectionMonitorCallback(ICallbackConnectionMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearKeyEventProcessorCallback@TextInputClient@@UEAAJXZ
    virtual long ClearKeyEventProcessorCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTextAugmentationClasses@TextInputClient@@QEAAXXZ
    void ClearTextAugmentationClasses();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteGetLayoutBounds@TextInputClient@@UEAAJIIUTextRect@@0@Z
    virtual long CompleteGetLayoutBounds(unsigned int, unsigned int, TextRect, TextRect);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteGetSelection@TextInputClient@@UEAAJIIUEditControlRange@@@Z
    virtual long CompleteGetSelection(unsigned int, unsigned int, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteOperation@TextInputClient@@UEAAJIII@Z
    virtual long CompleteOperation(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteQueryText@TextInputClient@@UEAAJIIPEAUMsgString@@@Z
    virtual long CompleteQueryText(unsigned int, unsigned int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferCurrentOperation@TextInputClient@@UEAAJIPEAI@Z
    virtual long DeferCurrentOperation(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlFocusChange@TextInputClient@@UEAAJPEAUEditControlInfo@@_N@Z
    virtual long EditControlFocusChange(EditControlInfo *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlFocusChangeInternal@TextInputClient@@QEAAJPEAUEditControlInfo@@_NPEAVClientOwnerRegistration@@2PEAVTextInputHost@@111@Z
    long EditControlFocusChangeInternal(EditControlInfo *, bool, ClientOwnerRegistration *, ClientOwnerRegistration *, TextInputHost *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlHostOwnerRegister@TextInputClient@@UEAAJIPEAUITextInputHostOwner@@@Z
    virtual long EditControlHostOwnerRegister(unsigned int, ITextInputHostOwner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlInfoChanged@TextInputClient@@UEAAJPEAUEditControlInfo@@@Z
    virtual long EditControlInfoChanged(EditControlInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlLayoutChanged@TextInputClient@@UEAAJI@Z
    virtual long EditControlLayoutChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlReconvertRequest@TextInputClient@@UEAAJI_N0@Z
    virtual long EditControlReconvertRequest(unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlRegister@TextInputClient@@UEAAJPEAUITextInputClientOwner@@PEAUEditControlInfo@@@Z
    virtual long EditControlRegister(ITextInputClientOwner *, EditControlInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTapped@TextInputClient@@UEAAJI@Z
    virtual long EditControlTapped(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTappedEx@TextInputClient@@UEAAJIH_N@Z
    virtual long EditControlTappedEx(unsigned int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTextChanged@TextInputClient@@UEAAJIHHHHH@Z
    virtual long EditControlTextChanged(unsigned int, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTextChanged@TextInputClient@@UEAAJIHHHHHEE@Z
    virtual long EditControlTextChanged(unsigned int, int, int, int, int, int, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTextChanged@TextInputClient@@UEAAJIHHPEAUMsgString@@@Z
    virtual long EditControlTextChanged(unsigned int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlUnregister@TextInputClient@@UEAAJPEAUEditControlInfo@@@Z
    virtual long EditControlUnregister(EditControlInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlUnregisterInternal@TextInputClient@@QEAAJPEAVClientOwnerRegistration@@@Z
    long EditControlUnregisterInternal(ClientOwnerRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInput@TextInputClient@@UEAAJ_N@Z
    virtual long EnableInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableNotifications@TextInputClient@@UEAAJ_N@Z
    virtual long EnableNotifications(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTestMode@TextInputClient@@UEAAJ_N@Z
    virtual long EnableTestMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTsfBamo@TextInputClient@@UEAAXXZ
    virtual void EnableTsfBamo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindow@TextInputClient@@UEAAJPEAUITextInputHost@@_N@Z
    virtual long EnableWindow(ITextInputHost *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndComposition@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    virtual long EndComposition(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndKeyEventPayload@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@AEBUKeyEventHostInfo@@_NPEBEI@Z
    virtual long EndKeyEventPayload(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &, KeyEventHostInfo const &, bool, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndKeyEventPayload@TextInputClient@@UEAAJII_NUKeyEventHostInfo@@PEAUITextInputHost@@@Z
    virtual long EndKeyEventPayload(unsigned int, unsigned int, bool, KeyEventHostInfo, ITextInputHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextAugmentationClass@TextInputClient@@QEAA_NGGPEAPEAVCTextAugmentationClass@@@Z
    bool FindTextAugmentationClass(unsigned short, unsigned short, CTextAugmentationClass * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputClientRegistration@TextInputClient@@QEAAJIPEAPEAVClientOwnerRegistration@@@Z
    long FindTextInputClientRegistration(unsigned int, ClientOwnerRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputClientRegistrationPendingDestroy@TextInputClient@@QEAAJIPEAPEAVClientOwnerRegistration@@@Z
    long FindTextInputClientRegistrationPendingDestroy(unsigned int, ClientOwnerRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusLeaveCompleted@TextInputClient@@UEAAJI@Z
    virtual long FocusLeaveCompleted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveFocus@TextInputClient@@UEAAJI@Z
    virtual long ForceRemoveFocus(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsyncKeyState@TextInputClient@@QEAAFH@Z
    short GetAsyncKeyState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputLanguage@TextInputClient@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetInputLanguage(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardStateBlob@TextInputClient@@QEAA_NPEAPEAUMsgBlob@@@Z
    bool GetKeyboardStateBlob(MsgBlob * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScheduler@TextInputClient@@QEAA?AV?$ComPtr@VCAsyncTaskScheduler@@@WRL@Microsoft@@I@Z
    WindissectOpaque GetScheduler(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAugmentation@TextInputClient@@UEAAJIHPEAUTextRangeAugmentation@@@Z
    virtual long GetTextAugmentation(unsigned int, int, TextRangeAugmentation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAugmentations@TextInputClient@@UEAAJIUEditControlRange@@PEAPEAUTextRangeAugmentation@@PEAI@Z
    virtual long GetTextAugmentations(unsigned int, EditControlRange, TextRangeAugmentation * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextboxRegistration@TextInputClient@@QEAAPEAVTextboxRegistration@@I@Z
    TextboxRegistration * GetTextboxRegistration(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InformOasisDisplayMode@TextInputClient@@UEAAJW4OasisDisplayMode@@@Z
    virtual long InformOasisDisplayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputLanguage@TextInputClient@@UEAAJI@Z
    virtual long InitializeInputLanguage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputProfile@TextInputClient@@UEAAJUCoreInputProfile@@@Z
    virtual long InitializeInputProfile(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeIntentDetermined@TextInputClient@@UEAAJAEBUInkStrokeId@@0II@Z
    virtual long InkStrokeIntentDetermined(InkStrokeId const &, InkStrokeId const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeTargetDetermined@TextInputClient@@UEAAJAEBUInkStrokeId@@0IPEBUTextUnitInfo@@IPEBGI@Z
    virtual long InkStrokeTargetDetermined(InkStrokeId const &, InkStrokeId const &, unsigned int, TextUnitInfo const *, unsigned int, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputLangNotificationHandlerRegister@TextInputClient@@UEAAJPEAUIInputLanguageNotificationHandler@@@Z
    virtual long InputLangNotificationHandlerRegister(IInputLanguageNotificationHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChar@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHGI@Z
    virtual long InsertChar(tagMsgRoutingInfo, unsigned int, unsigned int, int, unsigned short, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertText@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHPEAUMsgString@@@Z
    virtual long InsertText(tagMsgRoutingInfo, unsigned int, unsigned int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeTextAugmentation@TextInputClient@@QEAAJIGGUTextRect@@_N@Z
    long InvokeTextAugmentation(unsigned int, unsigned short, unsigned short, TextRect, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentEditActionOverridden@TextInputClient@@UEAAJPEA_N0@Z
    virtual long IsCurrentEditActionOverridden(bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOperationCanceled@TextInputClient@@UEAAJIIPEA_N@Z
    virtual long IsOperationCanceled(unsigned int, unsigned int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextInputHostExistInThread@TextInputClient@@UEAAJPEA_N@Z
    virtual long IsTextInputHostExistInThread(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyEventProcessed@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@AEBUKeyEventHostInfo@@AEBUKeyEventText@@PEBEI@Z
    virtual long KeyEventProcessed(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &, KeyEventHostInfo const &, KeyEventText const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHostOfKeyEvent@TextInputClient@@QEAAJPEAVTextInputHost@@IIPEAUKeyEventHostInfo@@_NPEAVCEditActionAsync@@PEAUMsgString@@G4@Z
    long NotifyHostOfKeyEvent(TextInputHost *, unsigned int, unsigned int, KeyEventHostInfo *, bool, CEditActionAsync *, MsgString *, unsigned short, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHostOfKeyEvent_tsf4@TextInputClient@@QEAA_NAEBUKeyEventHostInfo@@AEBUKeyEventText@@PEAUMsgBlob@@@Z
    bool NotifyHostOfKeyEvent_tsf4(KeyEventHostInfo const &, KeyEventText const &, MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilog@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@@Z
    virtual long OnCallEpilog(::TextInputFramework::BamoTextInputFrameworkProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallProlog@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@@Z
    virtual long OnCallProlog(::TextInputFramework::BamoTextInputFrameworkProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateUIEvent@TextInputClient@@UEAAJIUCandidateUIEvent@@@Z
    virtual long OnCandidateUIEvent(unsigned int, CandidateUIEvent);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionTerminated@TextInputClient@@UEAAJI@Z
    virtual long OnCompositionTerminated(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@@Z
    virtual long OnConnected(::TextInputFramework::BamoTextInputFrameworkProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@TextInputClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConversionModeChanged@TextInputClient@@UEAAJU_GUID@@IW4IMEConversionMode@@@Z
    virtual long OnConversionModeChanged(_GUID, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDepartFocusComplete@TextInputClient@@UEAAJPEAUITextInputHost@@UNavigateFocusCompleteInfo@@@Z
    virtual long OnDepartFocusComplete(ITextInputHost *, NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@@Z
    virtual long OnDisconnected(::TextInputFramework::BamoTextInputFrameworkProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@TextInputClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDocFeedReady@TextInputClient@@UEAAJPEAUMsgString@@0@Z
    virtual long OnDocFeedReady(MsgString *, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusNavigating@TextInputClient@@UEAAJPEAUITextInputHost@@UNavigateFocusInfo@@@Z
    virtual long OnFocusNavigating(ITextInputHost *, NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostAcceleratorKeyEvent@TextInputClient@@UEAAJPEAUITextInputHost@@IIW4AcceleratorKeyRoutingStage@@UKeyEventHostInfo@@PEAUMsgBlob@@PEAUMsgString@@G4@Z
    virtual long OnHostAcceleratorKeyEvent(ITextInputHost *, unsigned int, unsigned int, int, KeyEventHostInfo, MsgBlob *, MsgString *, unsigned short, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostCharacterEvent@TextInputClient@@UEAAJIIIUKeyEventHostInfo@@PEAUITextInputHost@@@Z
    virtual long OnHostCharacterEvent(unsigned int, unsigned int, unsigned int, KeyEventHostInfo, ITextInputHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostKeyEvent@TextInputClient@@UEAAJIII_NUKeyEventHostInfo@@PEAUITextInputHost@@PEAUMsgBlob@@PEAUMsgString@@G4@Z
    virtual long OnHostKeyEvent(unsigned int, unsigned int, unsigned int, bool, KeyEventHostInfo, ITextInputHost *, MsgBlob *, MsgString *, unsigned short, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@TextInputClient@@UEAAJGGGGPEAUMsgString@@PEAUMsgBlob@@_KII_NG@Z
    virtual long OnKeyEvent(unsigned short, unsigned short, unsigned short, unsigned short, MsgString *, MsgBlob *, uint64_t, unsigned int, unsigned int, bool, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@TextInputClient@@UEAAJII_NUKeyEventHostInfo@@@Z
    virtual long OnKeyEvent(unsigned int, unsigned int, bool, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEventProcessingCompleted@TextInputClient@@QEAAXI_N@Z
    void OnKeyEventProcessingCompleted(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TextInputClient@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@TextInputClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnProxyCreated(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSubscriptionChanging@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUTextServiceSubscription@core@tsf4@@@Z
    virtual long OnSubscriptionChanging(::TextInputFramework::BamoTextInputFrameworkProxy *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextInputHostCreated@TextInputClient@@UEAAJ_N@Z
    virtual long OnTextInputHostCreated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted@TextInputClient@@UEAAJIW4TextInputAcknowledgment@@I@Z
    virtual long OperationCompleted(unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted2@TextInputClient@@UEAAJIW4TextInputAcknowledgment@@IUISLatencyTelemetry@@@Z
    virtual long OperationCompleted2(unsigned int, int, unsigned int, ISLatencyTelemetry);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateRange@TextInputClient@@UEAAJPEAVClientOwnerRegistration@@HHPEAUMsgString@@@Z
    virtual long PopulateRange(ClientOwnerRegistration *, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderDisconnected@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@G@Z
    virtual long ProviderDisconnected(::TextInputFramework::BamoTextInputFrameworkProxy *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutHasFocus@TextInputClient@@UEAAJ_N@Z
    virtual long PutHasFocus(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTextAugmentationClass@TextInputClient@@QEAAXGG@Z
    void RemoveTextAugmentationClass(unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTextAugmentations@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long RemoveTextAugmentations(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@@Z
    virtual long ReplaceText(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@AEBUEditControlRange@@PEBG@Z
    virtual long ReplaceText(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &, EditControlRange const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextEx@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@HH@Z
    virtual long ReplaceTextEx(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextInternal@TextInputClient@@QEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@_NHH@Z
    long ReplaceTextInternal(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *, bool, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIPEAUMsgString@@HHH1@Z
    virtual long ReportError(tagMsgRoutingInfo, unsigned int, unsigned int, MsgString *, int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConversionModeChange@TextInputClient@@UEAAJIW4IMEConversionMode@@@Z
    virtual long RequestConversionModeChange(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInputProfileActivation@TextInputClient@@UEAAJUCoreInputProfile@@@Z
    virtual long RequestInputProfileActivation(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResyncRequested@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@@Z
    virtual long ResyncRequested(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RichContentTypesChanged@TextInputClient@@UEAAJII@Z
    virtual long RichContentTypesChanged(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextInputClient@@QEAAJPEAUIMessageObject@@@Z
    long RuntimeClassInitialize(IMessageObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectText@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long SelectText(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChanged@TextInputClient@@UEAAJIHH@Z
    virtual long SelectionChanged(unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCandidateList@TextInputClient@@UEAAJIHHPEAUMsgBlob@@@Z
    virtual long SendCandidateList(unsigned int, int, int, MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRawCandidateMessage@TextInputClient@@UEAAJPEAUMsgBlob@@@Z
    virtual long SendRawCandidateMessage(MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSipInvocationSignals@TextInputClient@@UEAAJ_N0000UTextRect@@@Z
    virtual long SendSipInvocationSignals(bool, bool, bool, bool, bool, TextRect);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveInputProfile@TextInputClient@@UEAAJUCoreInputProfile@@@Z
    virtual long SetActiveInputProfile(CoreInputProfile);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionClause@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIPEAUMsgBlob@@@Z
    virtual long SetCompositionClause(tagMsgRoutingInfo, unsigned int, unsigned int, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionInfo@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@@Z
    virtual long SetCompositionInfo(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConnectionMonitorCallback@TextInputClient@@UEAAJPEAUICallbackConnectionMonitor@@@Z
    virtual long SetConnectionMonitorCallback(ICallbackConnectionMonitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContextPrivacy@TextInputClient@@UEAAXPEAUHWND__@@_N@Z
    virtual void SetContextPrivacy(HWND__*, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreDispatcherHandled@TextInputClient@@UEAAJXZ
    virtual long SetCoreDispatcherHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentEditActionOverridden@TextInputClient@@UEAAJ_N@Z
    virtual long SetCurrentEditActionOverridden(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInComposition@TextInputClient@@UEAAJUtagMsgRoutingInfo@@II_NPEAUMsgBlob@@@Z
    virtual long SetInComposition(tagMsgRoutingInfo, unsigned int, unsigned int, bool, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputLocale@TextInputClient@@UEAAJUtagMsgRoutingInfo@@III@Z
    virtual long SetInputLocale(tagMsgRoutingInfo, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyDownHandled@TextInputClient@@UEAAJXZ
    virtual long SetKeyDownHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyEventProcessorCallback@TextInputClient@@UEAAJPEAUIKeyEventProcessorCallback@@@Z
    virtual long SetKeyEventProcessorCallback(IKeyEventProcessorCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPredictionMode@TextInputClient@@UEAAJ_NPEAUMsgString@@@Z
    virtual long SetPredictionMode(bool, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHW4CaretBindDirection@@W4GripperVisibility@@@Z
    virtual long SetSelection(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSmartLink@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@111W4RichContentType@@@Z
    virtual long SetSmartLink(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *, MsgString *, MsgString *, MsgString *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextFormat@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHUTextFormat@@@Z
    virtual long SetTextFormat(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, TextFormat);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThreadProperties@TextInputClient@@UEAAX_NW4TextInputThreadProperties@@@Z
    virtual void SetThreadProperties(bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPrivacy@TextInputClient@@UEAAXPEAUHWND__@@_N@Z
    virtual void SetWindowPrivacy(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownTsfBamo@TextInputClient@@UEAAXXZ
    virtual void ShutdownTsfBamo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartComposition@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long StartComposition(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLayoutChangeTracking@TextInputClient@@UEAAJUtagMsgRoutingInfo@@II_NUEditControlRange@@@Z
    virtual long StartLayoutChangeTracking(tagMsgRoutingInfo, unsigned int, unsigned int, bool, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNavigateFocus@TextInputClient@@UEAAJIPEAUITextInputHost@@@Z
    virtual long StartNavigateFocus(unsigned int, ITextInputHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPositionTracking@TextInputClient@@UEAAJUtagMsgRoutingInfo@@II_N1@Z
    virtual long StartPositionTracking(tagMsgRoutingInfo, unsigned int, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreKeyboardState@TextInputClient@@QEAAJPEAUMsgBlob@@@Z
    long StoreKeyboardState(MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscriptionChanged@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUCoreImeSubscription@IME@Input@Internal@UI@Windows@@@Z
    virtual long SubscriptionChanged(::TextInputFramework::BamoTextInputFrameworkProxy *, ::Windows::UI::Internal::Input::IME::CoreImeSubscription const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIHHI@Z
    virtual long TagText(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextInputClient@@QEAA@XZ
    TextInputClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledKey@TextInputClient@@UEAAJUtagMsgRoutingInfo@@IIIPEAUMsgString@@I@Z
    virtual long UnhandledKey(tagMsgRoutingInfo, unsigned int, unsigned int, unsigned int, MsgString *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionInfo@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@AEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    virtual long UpdateCompositionInfo(::TextInputFramework::BamoTextInputFrameworkProxy *, EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConfirmed@TextInputClient@@UEAAJPEAVBamoTextInputFrameworkProxy@TextInputFramework@@IG@Z
    virtual long UpdateConfirmed(::TextInputFramework::BamoTextInputFrameworkProxy *, unsigned int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayoutInfo@TextInputClient@@QEAAJI_N@Z
    long UpdateLayoutInfo(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UrlChanged@TextInputClient@@UEAAXPEAUHWND__@@IPEBG@Z
    virtual void UrlChanged(HWND__*, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDestroyed@TextInputClient@@UEAAXPEAUHWND__@@@Z
    virtual void WindowDestroyed(HWND__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertFromHostQpc@TextInputClient@@IEAA_K_K00@Z
    uint64_t ConvertFromHostQpc(uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DateTimeNow@TextInputClient@@IEAAJPEAT_ULARGE_INTEGER@@@Z
    long DateTimeNow(_ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineComposition@TextInputClient@@IEAAJV?$ComPtr@VClientOwnerRegistration@@@WRL@Microsoft@@_N1@Z
    long DetermineComposition(WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoInitialPopulate@TextInputClient@@IEAAJPEAVClientOwnerRegistration@@UEditControlRange@@@Z
    long DoInitialPopulate(ClientOwnerRegistration *, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterDarkMode@TextInputClient@@IEAAX_N@Z
    void EnterDarkMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateDarkMode@TextInputClient@@IEAAX_N@Z
    void EvaluateDarkMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateVirtualizationScenario@TextInputClient@@IEAAXXZ
    void EvaluateVirtualizationScenario();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveDarkMode@TextInputClient@@IEAAXXZ
    void LeaveDarkMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadResyncConfiguration@TextInputClient@@IEAAXXZ
    void LoadResyncConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySelectionChanged@TextInputClient@@IEAAJPEAVClientOwnerRegistration@@HH_N@Z
    long NotifySelectionChanged(ClientOwnerRegistration *, int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTextChanged@TextInputClient@@IEAAJIHHHHHEE@Z
    long NotifyTextChanged(unsigned int, int, int, int, int, int, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTextChangedInternal@TextInputClient@@IEAAJPEAVClientOwnerRegistration@@HHHHHAEAUEditOperationInfo@@EE@Z
    long NotifyTextChangedInternal(ClientOwnerRegistration *, int, int, int, int, int, EditOperationInfo &, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateAndSendSelNotification@TextInputClient@@IEAAJV?$ComPtr@VClientOwnerRegistration@@@WRL@Microsoft@@UEditControlRange@@_N@Z
    long PopulateAndSendSelNotification(WindissectOpaque, EditControlRange, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateAndSendTapNotification@TextInputClient@@IEAAJV?$ComPtr@VClientOwnerRegistration@@@WRL@Microsoft@@H_N@Z
    long PopulateAndSendTapNotification(WindissectOpaque, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateEditControl@TextInputClient@@IEAAXPEAVClientOwnerRegistration@@@Z
    void PopulateEditControl(ClientOwnerRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PruneEditBufferCache@TextInputClient@@IEAAJPEAVClientOwnerRegistration@@HH@Z
    long PruneEditBufferCache(ClientOwnerRegistration *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetEditControl@TextInputClient@@IEAAXPEAVClientOwnerRegistration@@@Z
    void ResetEditControl(ClientOwnerRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SampleRandomPickEnd@TextInputClient@@IEAAXIUISLatencyTelemetry@@UTICLatencyTelemetry@@@Z
    void SampleRandomPickEnd(unsigned int, ISLatencyTelemetry, TICLatencyTelemetry);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SampleRandomPickStart@TextInputClient@@IEAAXG_KGG0@Z
    void SampleRandomPickStart(unsigned short, uint64_t, unsigned short, unsigned short, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlPopulated@TextInputClient@@IEAAXPEAVClientOwnerRegistration@@E@Z
    void SetControlPopulated(ClientOwnerRegistration *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimeConversionMultiTime@TextInputClient@@IEAAXXZ
    void SetTimeConversionMultiTime();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputClient@@MEAA@XZ
    virtual ~TextInputClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForOperationFailure@TextInputClient@@AEAAJIIJPEAVClientOwnerRegistration@@E@Z
    long CheckForOperationFailure(unsigned int, unsigned int, long, ClientOwnerRegistration *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUpdateLengthWithResult@TextInputClient@@AEAA_NIJPEAUMsgString@@PEAVClientOwnerRegistration@@HPEAH2222@Z
    bool CheckUpdateLengthWithResult(unsigned int, long, MsgString *, ClientOwnerRegistration *, int, int *, int *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredForceRemoveFocus@TextInputClient@@AEAAJXZ
    long DeferredForceRemoveFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTextChanged@TextInputClient@@AEAAJIHHHEHE@Z
    long EditControlTextChanged(unsigned int, int, int, int, unsigned char, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTBR@TextInputClient@@AEAAXXZ
    void EnsureTBR();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextInputProcessor@TextInputClient@@AEAAJXZ
    long EnsureTextInputProcessor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowInfo@TextInputClient@@AEAAXPEAUHWND__@@@Z
    void EnsureWindowInfo(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateLayoutTracking@TextInputClient@@AEAAXXZ
    void EvaluateLayoutTracking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailFastHandleInconsistency@TextInputClient@@AEAAJXZ
    long FailFastHandleInconsistency();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputClientOwner@TextInputClient@@AEAAJIPEAPEAVCTextInputClientOwnerAsync@@@Z
    long FindTextInputClientOwner(unsigned int, CTextInputClientOwnerAsync * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistrationAndCheckNoAbort@TextInputClient@@AEAAJUtagMsgRoutingInfo@@IPEAPEAVClientOwnerRegistration@@PEAPEAVCTextInputClientOwnerAsync@@PEAE@Z
    long GetRegistrationAndCheckNoAbort(tagMsgRoutingInfo, unsigned int, ClientOwnerRegistration * *, CTextInputClientOwnerAsync * *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistrationAndCheckNoAbort@TextInputClient@@AEAAJIPEAPEAVClientOwnerRegistration@@PEAPEAVCTextInputClientOwnerAsync@@PEAE@Z
    long GetRegistrationAndCheckNoAbort(unsigned int, ClientOwnerRegistration * *, CTextInputClientOwnerAsync * *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResponsibleKey@TextInputClient@@AEAA?AUKeyEventHostInfo@@XZ
    KeyEventHostInfo GetResponsibleKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeKeyStateTracker@TextInputClient@@AEAAJXZ
    long InitializeKeyStateTracker();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrivateField@TextInputClient@@AEAAEPEAUEditControlInfo@@@Z
    unsigned char IsPrivateField(EditControlInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTsf4ImeActive@TextInputClient@@AEBA_NXZ
    bool IsTsf4ImeActive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEditControlUsageStatistics@TextInputClient@@AEAAX_N0@Z
    void LogEditControlUsageStatistics(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergePendingTextChange@TextInputClient@@AEAAJPEAVClientOwnerRegistration@@AEAH11AEAE2E@Z
    long MergePendingTextChange(ClientOwnerRegistration *, int &, int &, int &, unsigned char &, unsigned char &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditControlOperationCompleted@TextInputClient@@AEAAJIUEditOperationInfo@@@Z
    long OnEditControlOperationCompleted(unsigned int, EditOperationInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEditControl2@TextInputClient@@AEAAXPEAVClientOwnerRegistration@@@Z
    void RegisterEditControl2(ClientOwnerRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportOperationFailed@TextInputClient@@AEAAJIIJ@Z
    long ReportOperationFailed(unsigned int, unsigned int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConversionModeChange_Then@TextInputClient@@AEAAJPEAVClientOwnerRegistration@@IW4IMEConversionMode@@@Z
    long RequestConversionModeChange_Then(ClientOwnerRegistration *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resynchronize@TextInputClient@@AEAAJIE@Z
    long Resynchronize(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendPendingSelectionChange@TextInputClient@@AEAAJI@Z
    long SendPendingSelectionChange(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseRichEditWorkaround@TextInputClient@@AEAA_NPEAUMsgString@@@Z
    bool ShouldUseRichEditWorkaround(MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DeferredForceRemoveFocus@TextInputClient@@CAJPEAX@Z
    static long s_DeferredForceRemoveFocus(void *);
};
