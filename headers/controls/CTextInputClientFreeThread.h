#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 111 member(s).
class CTextInputClientFreeThread {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AltPeopleProviderChanged@CTextInputClientFreeThread@@UEAAJIPEAUMsgString@@@Z
    virtual long AltPeopleProviderChanged(unsigned int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AltPlacesProviderChanged@CTextInputClientFreeThread@@UEAAJIPEAUMsgString@@@Z
    virtual long AltPlacesProviderChanged(unsigned int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDeferredOperation@CTextInputClientFreeThread@@UEAAJIIPEA_N@Z
    virtual long BeginDeferredOperation(unsigned int, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@CTextInputClientFreeThread@@UEAAJIIUKeyEventHostInfo@@PEAUITextInputHost@@@Z
    virtual long BeginKeyEventPayload(unsigned int, unsigned int, KeyEventHostInfo, ITextInputHost *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextInputClientFreeThread@@QEAA@XZ
    CTextInputClientFreeThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearConnectionMonitorCallback@CTextInputClientFreeThread@@UEAAJPEAUICallbackConnectionMonitor@@@Z
    virtual long ClearConnectionMonitorCallback(ICallbackConnectionMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearKeyEventProcessorCallback@CTextInputClientFreeThread@@UEAAJXZ
    virtual long ClearKeyEventProcessorCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteGetLayoutBounds@CTextInputClientFreeThread@@UEAAJIIUTextRect@@0@Z
    virtual long CompleteGetLayoutBounds(unsigned int, unsigned int, TextRect, TextRect);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteGetSelection@CTextInputClientFreeThread@@UEAAJIIUEditControlRange@@@Z
    virtual long CompleteGetSelection(unsigned int, unsigned int, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteOperation@CTextInputClientFreeThread@@UEAAJIII@Z
    virtual long CompleteOperation(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteQueryText@CTextInputClientFreeThread@@UEAAJIIPEAUMsgString@@@Z
    virtual long CompleteQueryText(unsigned int, unsigned int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferCurrentOperation@CTextInputClientFreeThread@@UEAAJIPEAI@Z
    virtual long DeferCurrentOperation(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlFocusChange@CTextInputClientFreeThread@@UEAAJPEAUEditControlInfo@@_N@Z
    virtual long EditControlFocusChange(EditControlInfo *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlHostOwnerRegister@CTextInputClientFreeThread@@UEAAJIPEAUITextInputHostOwner@@@Z
    virtual long EditControlHostOwnerRegister(unsigned int, ITextInputHostOwner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlInfoChanged@CTextInputClientFreeThread@@UEAAJPEAUEditControlInfo@@@Z
    virtual long EditControlInfoChanged(EditControlInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlLayoutChanged@CTextInputClientFreeThread@@UEAAJI@Z
    virtual long EditControlLayoutChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlReconvertRequest@CTextInputClientFreeThread@@UEAAJI_N0@Z
    virtual long EditControlReconvertRequest(unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlRegister@CTextInputClientFreeThread@@UEAAJPEAUITextInputClientOwner@@PEAUEditControlInfo@@@Z
    virtual long EditControlRegister(ITextInputClientOwner *, EditControlInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTapped@CTextInputClientFreeThread@@UEAAJI@Z
    virtual long EditControlTapped(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTappedEx@CTextInputClientFreeThread@@UEAAJIH_N@Z
    virtual long EditControlTappedEx(unsigned int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTextChanged@CTextInputClientFreeThread@@UEAAJIHHHHH@Z
    virtual long EditControlTextChanged(unsigned int, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTextChanged@CTextInputClientFreeThread@@UEAAJIHHPEAUMsgString@@@Z
    virtual long EditControlTextChanged(unsigned int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlUnregister@CTextInputClientFreeThread@@UEAAJPEAUEditControlInfo@@@Z
    virtual long EditControlUnregister(EditControlInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInput@CTextInputClientFreeThread@@UEAAJ_N@Z
    virtual long EnableInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableNotifications@CTextInputClientFreeThread@@UEAAJ_N@Z
    virtual long EnableNotifications(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTestMode@CTextInputClientFreeThread@@UEAAJ_N@Z
    virtual long EnableTestMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTsfBamo@CTextInputClientFreeThread@@UEAAXXZ
    virtual void EnableTsfBamo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindow@CTextInputClientFreeThread@@UEAAJPEAUITextInputHost@@_N@Z
    virtual long EnableWindow(ITextInputHost *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndKeyEventPayload@CTextInputClientFreeThread@@UEAAJII_NUKeyEventHostInfo@@PEAUITextInputHost@@@Z
    virtual long EndKeyEventPayload(unsigned int, unsigned int, bool, KeyEventHostInfo, ITextInputHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusLeaveCompleted@CTextInputClientFreeThread@@UEAAJI@Z
    virtual long FocusLeaveCompleted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveFocus@CTextInputClientFreeThread@@UEAAJI@Z
    virtual long ForceRemoveFocus(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@CTextInputClientFreeThread@@SAJPEAPEAV1@W4CreationOptions@@_N@Z
    static long GetForCurrentThread(CTextInputClientFreeThread * *, int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputLanguage@CTextInputClientFreeThread@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetInputLanguage(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAugmentation@CTextInputClientFreeThread@@UEAAJIHPEAUTextRangeAugmentation@@@Z
    virtual long GetTextAugmentation(unsigned int, int, TextRangeAugmentation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAugmentations@CTextInputClientFreeThread@@UEAAJIUEditControlRange@@PEAPEAUTextRangeAugmentation@@PEAI@Z
    virtual long GetTextAugmentations(unsigned int, EditControlRange, TextRangeAugmentation * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InformOasisDisplayMode@CTextInputClientFreeThread@@UEAAJW4OasisDisplayMode@@@Z
    virtual long InformOasisDisplayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputLanguage@CTextInputClientFreeThread@@UEAAJI@Z
    virtual long InitializeInputLanguage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputProfile@CTextInputClientFreeThread@@UEAAJUCoreInputProfile@@@Z
    virtual long InitializeInputProfile(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeIntentDetermined@CTextInputClientFreeThread@@UEAAJAEBUInkStrokeId@@0II@Z
    virtual long InkStrokeIntentDetermined(InkStrokeId const &, InkStrokeId const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeTargetDetermined@CTextInputClientFreeThread@@UEAAJAEBUInkStrokeId@@0IPEBUTextUnitInfo@@IPEBGI@Z
    virtual long InkStrokeTargetDetermined(InkStrokeId const &, InkStrokeId const &, unsigned int, TextUnitInfo const *, unsigned int, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputLangNotificationHandlerRegister@CTextInputClientFreeThread@@UEAAJPEAUIInputLanguageNotificationHandler@@@Z
    virtual long InputLangNotificationHandlerRegister(IInputLanguageNotificationHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChar@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIHGI@Z
    virtual long InsertChar(tagMsgRoutingInfo, unsigned int, unsigned int, int, unsigned short, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertText@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIHPEAUMsgString@@@Z
    virtual long InsertText(tagMsgRoutingInfo, unsigned int, unsigned int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeTextAugmentation@CTextInputClientFreeThread@@UEAAJIGGUTextRect@@_N@Z
    virtual long InvokeTextAugmentation(unsigned int, unsigned short, unsigned short, TextRect, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentEditActionOverridden@CTextInputClientFreeThread@@UEAAJPEA_N0@Z
    virtual long IsCurrentEditActionOverridden(bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOperationCanceled@CTextInputClientFreeThread@@UEAAJIIPEA_N@Z
    virtual long IsOperationCanceled(unsigned int, unsigned int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextInputHostExistInThread@CTextInputClientFreeThread@@UEAAJPEA_N@Z
    virtual long IsTextInputHostExistInThread(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilog@CTextInputClientFreeThread@@UEAAXXZ
    virtual void OnCallEpilog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallProlog@CTextInputClientFreeThread@@UEAAXXZ
    virtual void OnCallProlog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateUIEvent@CTextInputClientFreeThread@@UEAAJIUCandidateUIEvent@@@Z
    virtual long OnCandidateUIEvent(unsigned int, CandidateUIEvent);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionTerminated@CTextInputClientFreeThread@@UEAAJI@Z
    virtual long OnCompositionTerminated(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@CTextInputClientFreeThread@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConversionModeChanged@CTextInputClientFreeThread@@UEAAJU_GUID@@IW4IMEConversionMode@@@Z
    virtual long OnConversionModeChanged(_GUID, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDepartFocusComplete@CTextInputClientFreeThread@@UEAAJPEAUITextInputHost@@UNavigateFocusCompleteInfo@@@Z
    virtual long OnDepartFocusComplete(ITextInputHost *, NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@CTextInputClientFreeThread@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDocFeedReady@CTextInputClientFreeThread@@UEAAJPEAUMsgString@@0@Z
    virtual long OnDocFeedReady(MsgString *, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusNavigating@CTextInputClientFreeThread@@UEAAJPEAUITextInputHost@@UNavigateFocusInfo@@@Z
    virtual long OnFocusNavigating(ITextInputHost *, NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostAcceleratorKeyEvent@CTextInputClientFreeThread@@UEAAJPEAUITextInputHost@@IIW4AcceleratorKeyRoutingStage@@UKeyEventHostInfo@@PEAUMsgBlob@@PEAUMsgString@@G4@Z
    virtual long OnHostAcceleratorKeyEvent(ITextInputHost *, unsigned int, unsigned int, int, KeyEventHostInfo, MsgBlob *, MsgString *, unsigned short, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostCharacterEvent@CTextInputClientFreeThread@@UEAAJIIIUKeyEventHostInfo@@PEAUITextInputHost@@@Z
    virtual long OnHostCharacterEvent(unsigned int, unsigned int, unsigned int, KeyEventHostInfo, ITextInputHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostKeyEvent@CTextInputClientFreeThread@@UEAAJIII_NUKeyEventHostInfo@@PEAUITextInputHost@@PEAUMsgBlob@@PEAUMsgString@@G4@Z
    virtual long OnHostKeyEvent(unsigned int, unsigned int, unsigned int, bool, KeyEventHostInfo, ITextInputHost *, MsgBlob *, MsgString *, unsigned short, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@CTextInputClientFreeThread@@UEAAJGGGGPEAUMsgString@@PEAUMsgBlob@@_KII_NG@Z
    virtual long OnKeyEvent(unsigned short, unsigned short, unsigned short, unsigned short, MsgString *, MsgBlob *, uint64_t, unsigned int, unsigned int, bool, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@CTextInputClientFreeThread@@UEAAJII_NUKeyEventHostInfo@@@Z
    virtual long OnKeyEvent(unsigned int, unsigned int, bool, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CTextInputClientFreeThread@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@CTextInputClientFreeThread@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnProxyCreated(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextInputHostCreated@CTextInputClientFreeThread@@UEAAJ_N@Z
    virtual long OnTextInputHostCreated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted@CTextInputClientFreeThread@@UEAAJIW4TextInputAcknowledgment@@I@Z
    virtual long OperationCompleted(unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted2@CTextInputClientFreeThread@@UEAAJIW4TextInputAcknowledgment@@IUISLatencyTelemetry@@@Z
    virtual long OperationCompleted2(unsigned int, int, unsigned int, ISLatencyTelemetry);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutHasFocus@CTextInputClientFreeThread@@UEAAJ_N@Z
    virtual long PutHasFocus(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@@Z
    virtual long ReplaceText(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextEx@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@HH@Z
    virtual long ReplaceTextEx(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIPEAUMsgString@@HHH1@Z
    virtual long ReportError(tagMsgRoutingInfo, unsigned int, unsigned int, MsgString *, int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConversionModeChange@CTextInputClientFreeThread@@UEAAJIW4IMEConversionMode@@@Z
    virtual long RequestConversionModeChange(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInputProfileActivation@CTextInputClientFreeThread@@UEAAJUCoreInputProfile@@@Z
    virtual long RequestInputProfileActivation(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RichContentTypesChanged@CTextInputClientFreeThread@@UEAAJII@Z
    virtual long RichContentTypesChanged(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTextInputClientFreeThread@@QEAAJ_N@Z
    long RuntimeClassInitialize(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChanged@CTextInputClientFreeThread@@UEAAJIHH@Z
    virtual long SelectionChanged(unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCandidateList@CTextInputClientFreeThread@@UEAAJIHHPEAUMsgBlob@@@Z
    virtual long SendCandidateList(unsigned int, int, int, MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRawCandidateMessage@CTextInputClientFreeThread@@UEAAJPEAUMsgBlob@@@Z
    virtual long SendRawCandidateMessage(MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSipInvocationSignals@CTextInputClientFreeThread@@UEAAJ_N0000UTextRect@@@Z
    virtual long SendSipInvocationSignals(bool, bool, bool, bool, bool, TextRect);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveInputProfile@CTextInputClientFreeThread@@UEAAJUCoreInputProfile@@@Z
    virtual long SetActiveInputProfile(CoreInputProfile);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionClause@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIPEAUMsgBlob@@@Z
    virtual long SetCompositionClause(tagMsgRoutingInfo, unsigned int, unsigned int, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionInfo@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@@Z
    virtual long SetCompositionInfo(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConnectionMonitorCallback@CTextInputClientFreeThread@@UEAAJPEAUICallbackConnectionMonitor@@@Z
    virtual long SetConnectionMonitorCallback(ICallbackConnectionMonitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContextPrivacy@CTextInputClientFreeThread@@UEAAXPEAUHWND__@@_N@Z
    virtual void SetContextPrivacy(HWND__*, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreDispatcherHandled@CTextInputClientFreeThread@@UEAAJXZ
    virtual long SetCoreDispatcherHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentEditActionOverridden@CTextInputClientFreeThread@@UEAAJ_N@Z
    virtual long SetCurrentEditActionOverridden(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInComposition@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@II_NPEAUMsgBlob@@@Z
    virtual long SetInComposition(tagMsgRoutingInfo, unsigned int, unsigned int, bool, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputLocale@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@III@Z
    virtual long SetInputLocale(tagMsgRoutingInfo, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyDownHandled@CTextInputClientFreeThread@@UEAAJXZ
    virtual long SetKeyDownHandled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyEventProcessorCallback@CTextInputClientFreeThread@@UEAAJPEAUIKeyEventProcessorCallback@@@Z
    virtual long SetKeyEventProcessorCallback(IKeyEventProcessorCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPredictionMode@CTextInputClientFreeThread@@UEAAJ_NPEAUMsgString@@@Z
    virtual long SetPredictionMode(bool, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIHHW4CaretBindDirection@@W4GripperVisibility@@@Z
    virtual long SetSelection(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSmartLink@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIHHPEAUMsgString@@111W4RichContentType@@@Z
    virtual long SetSmartLink(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, MsgString *, MsgString *, MsgString *, MsgString *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextFormat@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIHHUTextFormat@@@Z
    virtual long SetTextFormat(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, TextFormat);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThreadProperties@CTextInputClientFreeThread@@UEAAX_NW4TextInputThreadProperties@@@Z
    virtual void SetThreadProperties(bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPrivacy@CTextInputClientFreeThread@@UEAAXPEAUHWND__@@_N@Z
    virtual void SetWindowPrivacy(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownTsfBamo@CTextInputClientFreeThread@@UEAAXXZ
    virtual void ShutdownTsfBamo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLayoutChangeTracking@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@II_NUEditControlRange@@@Z
    virtual long StartLayoutChangeTracking(tagMsgRoutingInfo, unsigned int, unsigned int, bool, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNavigateFocus@CTextInputClientFreeThread@@UEAAJIPEAUITextInputHost@@@Z
    virtual long StartNavigateFocus(unsigned int, ITextInputHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPositionTracking@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@II_N1@Z
    virtual long StartPositionTracking(tagMsgRoutingInfo, unsigned int, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIHHI@Z
    virtual long TagText(tagMsgRoutingInfo, unsigned int, unsigned int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledKey@CTextInputClientFreeThread@@UEAAJUtagMsgRoutingInfo@@IIIPEAUMsgString@@I@Z
    virtual long UnhandledKey(tagMsgRoutingInfo, unsigned int, unsigned int, unsigned int, MsgString *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UrlChanged@CTextInputClientFreeThread@@UEAAXPEAUHWND__@@IPEBG@Z
    virtual void UrlChanged(HWND__*, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDestroyed@CTextInputClientFreeThread@@UEAAXPEAUHWND__@@@Z
    virtual void WindowDestroyed(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextInputClientFreeThread@@UEAA@XZ
    virtual ~CTextInputClientFreeThread();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckThreadAccess@CTextInputClientFreeThread@@AEAAJK@Z
    long CheckThreadAccess(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndpointProc@CTextInputClientFreeThread@@AEAAJPEBXH@Z
    long EndpointProc(void const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidEditControl@CTextInputClientFreeThread@@AEAA_NI@Z
    bool IsValidEditControl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EndpointProc@CTextInputClientFreeThread@@CAJPEAXPEBXH@Z
    static long s_EndpointProc(void *, void const *, int);
};
