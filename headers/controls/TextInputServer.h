#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 216 member(s).
class TextInputServer {
public:
    class InputHostInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activated@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@IGH@Z
    virtual long Activated(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, unsigned int, unsigned short, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTextAugmentationClass@TextInputServer@@UEAAJAEBUTextAugmentationClass@@PEBG11@Z
    virtual long AddTextAugmentationClass(TextAugmentationClass const &, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddView@TextInputServer@@UEAAJPEAUIMonitorView@Server@Navigation@@_N@Z
    virtual long AddView(::Navigation::Server::IMonitorView *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoPeer@TextInputFramework_AutoBamos@@PEAPEAVBamoTextInputFrameworkStub@3@@Z
    virtual long AllocateStubUnderLock(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework_AutoBamos::BamoPeer *, ::TextInputFramework::BamoTextInputFrameworkStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AltPeopleProviderChanged@TextInputServer@@UEAAJUMessageObjectID@@IPEAUMsgString@@@Z
    virtual long AltPeopleProviderChanged(MessageObjectID, unsigned int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AltPlacesProviderChanged@TextInputServer@@UEAAJUMessageObjectID@@IPEAUMsgString@@@Z
    virtual long AltPlacesProviderChanged(MessageObjectID, unsigned int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllViews@TextInputServer@@UEAAXXZ
    virtual void ClearAllViews();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCurrentFocusControl@TextInputServer@@QEAAJXZ
    long ClearCurrentFocusControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipboardAccessCheck@TextInputServer@@UEAAJUClipboardCallerInfo@@PEAW4ClipboardAccessResult@@@Z
    virtual long ClipboardAccessCheck(ClipboardCallerInfo, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentUIRights@TextInputServer@@UEAAJI_NW4ComponentUIRights@@@Z
    virtual long ConfigureComponentUIRights(unsigned int, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectionClosed@TextInputServer@@UEAAJPEBUtagMsgRoutingInfo@@@Z
    virtual long ConnectionClosed(tagMsgRoutingInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectionCreated@TextInputServer@@UEAAJPEBUtagMsgRoutingInfo@@@Z
    virtual long ConnectionCreated(tagMsgRoutingInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@TextInputServer@@UEAAJXZ
    virtual long Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlCompositionTerminated@TextInputServer@@UEAAJUMessageObjectID@@I_N@Z
    virtual long EditControlCompositionTerminated(MessageObjectID, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlFocusEnter@TextInputServer@@UEAAJUMessageObjectID@@UEditControlInfo@@_NIUtagMsgRoutingInfo@@UTextRect@@@Z
    virtual long EditControlFocusEnter(MessageObjectID, EditControlInfo, bool, unsigned int, tagMsgRoutingInfo, TextRect);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlFocusLeave@TextInputServer@@UEAAJUMessageObjectID@@UEditControlInfo@@_N@Z
    virtual long EditControlFocusLeave(MessageObjectID, EditControlInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlInfoChanged@TextInputServer@@UEAAJUMessageObjectID@@UEditControlInfo@@@Z
    virtual long EditControlInfoChanged(MessageObjectID, EditControlInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlKeyEventCompleted@TextInputServer@@UEAAJUMessageObjectID@@II@Z
    virtual long EditControlKeyEventCompleted(MessageObjectID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlOperationCompleted@TextInputServer@@UEAAJUMessageObjectID@@IUEditOperationInfo@@@Z
    virtual long EditControlOperationCompleted(MessageObjectID, unsigned int, EditOperationInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlOperationFailed@TextInputServer@@UEAAJUMessageObjectID@@IIH@Z
    virtual long EditControlOperationFailed(MessageObjectID, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlPopulate@TextInputServer@@UEAAJUMessageObjectID@@IIPEAUMsgString@@@Z
    virtual long EditControlPopulate(MessageObjectID, unsigned int, unsigned int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlReconvertRequest@TextInputServer@@UEAAJUMessageObjectID@@I_N1@Z
    virtual long EditControlReconvertRequest(MessageObjectID, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlRegister@TextInputServer@@UEAAJUMessageObjectID@@IPEAUMsgString@@HHH11I@Z
    virtual long EditControlRegister(MessageObjectID, unsigned int, MsgString *, int, int, int, MsgString *, MsgString *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlSelectionChanged@TextInputServer@@UEAAJUMessageObjectID@@IHH_NUKeyEventHostInfo@@@Z
    virtual long EditControlSelectionChanged(MessageObjectID, unsigned int, int, int, bool, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlStartNavigateFocus@TextInputServer@@UEAAJUMessageObjectID@@UEditControlInfo@@I_N@Z
    virtual long EditControlStartNavigateFocus(MessageObjectID, EditControlInfo, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTapped@TextInputServer@@UEAAJUMessageObjectID@@IH_N@Z
    virtual long EditControlTapped(MessageObjectID, unsigned int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTextChanged@TextInputServer@@UEAAJUMessageObjectID@@IUEditOperationInfo@@PEAUMsgString@@H2HH_NUKeyEventHostInfo@@3PEAUMsgBlob@@@Z
    virtual long EditControlTextChanged(MessageObjectID, unsigned int, EditOperationInfo, MsgString *, int, MsgString *, int, int, bool, KeyEventHostInfo, bool, MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlUnpopulate@TextInputServer@@UEAAJUMessageObjectID@@III@Z
    virtual long EditControlUnpopulate(MessageObjectID, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlUnregister@TextInputServer@@UEAAJUMessageObjectID@@I@Z
    virtual long EditControlUnregister(MessageObjectID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlUsesHost@TextInputServer@@UEAAJUMessageObjectID@@I_N@Z
    virtual long EditControlUsesHost(MessageObjectID, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableCharacterEvents@TextInputServer@@UEAAJ_NUtagMsgRoutingInfo@@@Z
    virtual long EnableCharacterEvents(bool, tagMsgRoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInput@TextInputServer@@UEAAJUtagMsgRoutingInfo@@_N@Z
    virtual long EnableInput(tagMsgRoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTestMode@TextInputServer@@UEAAJ_N@Z
    virtual long EnableTestMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveFocus@TextInputServer@@UEAAJXZ
    virtual long ForceRemoveFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardRegistrationsToVirtualizationHost@TextInputServer@@UEAAJPEAUIMessagePort@@@Z
    virtual long ForwardRegistrationsToVirtualizationHost(IMessagePort *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterEventsEnabled@TextInputServer@@UEAAJPEA_N@Z
    virtual long GetCharacterEventsEnabled(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentForegroundRemoteConnectionId@TextInputServer@@UEAAJPEAU_GUID@@@Z
    virtual long GetCurrentForegroundRemoteConnectionId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsModernApp@TextInputServer@@UEAAJPEA_N@Z
    virtual long GetIsModernApp(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWin32App@TextInputServer@@UEAAJPEA_N@Z
    virtual long GetIsWin32App(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWin32Client@TextInputServer@@UEAAJUMessageObjectID@@PEA_N@Z
    virtual long GetIsWin32Client(MessageObjectID, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyEventHandler@TextInputServer@@UEAAJUMessageObjectID@@IPEAPEAUIKeyEventNotificationHandler@@@Z
    virtual long GetKeyEventHandler(MessageObjectID, unsigned int, IKeyEventNotificationHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyEventHandlerForClientHost@TextInputServer@@UEAAJPEAVTextInputClientRegistration@@PEAPEAUIKeyEventNotificationHandler@@@Z
    virtual long GetKeyEventHandlerForClientHost(TextInputClientRegistration *, IKeyEventNotificationHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastIMEConversionMode@TextInputServer@@UEAAJPEAW4IMEConversionMode@@@Z
    virtual long GetLastIMEConversionMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPredictionMode@TextInputServer@@UEAAJPEA_N@Z
    virtual long GetPredictionMode(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeActiveInputProfile@TextInputServer@@UEAAJXZ
    virtual long InitializeActiveInputProfile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeIntentDetermined@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@AEBUInkStrokeId@@2II@Z
    virtual long InkStrokeIntentDetermined(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, InkStrokeId const &, InkStrokeId const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeTargetDetermined@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@IAEBUInkStrokeId@@2IPEBUTextUnitInfo@@IPEBGI@Z
    virtual long InkStrokeTargetDetermined(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, unsigned int, InkStrokeId const &, InkStrokeId const &, unsigned int, TextUnitInfo const *, unsigned int, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputFocusMonitorProfileActivated@TextInputServer@@UEAAJUCoreInputProfile@@@Z
    virtual long InputFocusMonitorProfileActivated(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostAcceleratorKeyCompleted@TextInputServer@@UEAAJUtagMsgRoutingInfo@@I_N1@Z
    virtual long InputHostAcceleratorKeyCompleted(tagMsgRoutingInfo, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostDepartFocus@TextInputServer@@UEAAJUtagMsgRoutingInfo@@UNavigateFocusInfo@@@Z
    virtual long InputHostDepartFocus(tagMsgRoutingInfo, NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostFocusEnter@TextInputServer@@UEAAJIUtagMsgRoutingInfo@@_N@Z
    virtual long InputHostFocusEnter(unsigned int, tagMsgRoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostFocusLeave@TextInputServer@@UEAAJIUtagMsgRoutingInfo@@_N@Z
    virtual long InputHostFocusLeave(unsigned int, tagMsgRoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostKeyEventCompleted@TextInputServer@@UEAAJUtagMsgRoutingInfo@@I_K1@Z
    virtual long InputHostKeyEventCompleted(tagMsgRoutingInfo, unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostKeyEventRaised@TextInputServer@@UEAAJUtagMsgRoutingInfo@@I@Z
    virtual long InputHostKeyEventRaised(tagMsgRoutingInfo, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostNavigateFocusComplete@TextInputServer@@UEAAJUtagMsgRoutingInfo@@UNavigateFocusCompleteInfo@@@Z
    virtual long InputHostNavigateFocusComplete(tagMsgRoutingInfo, NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostOnWindowEnabled@TextInputServer@@UEAAJUtagMsgRoutingInfo@@_N@Z
    virtual long InputHostOnWindowEnabled(tagMsgRoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSetProcessIDDelegation@TextInputServer@@UEAAJIUtagMsgRoutingInfo@@W4DelegateInputMode@@@Z
    virtual long InputHostSetProcessIDDelegation(unsigned int, tagMsgRoutingInfo, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSetViewIDDelegation@TextInputServer@@UEAAJUtagMsgRoutingInfo@@IIW4DelegateInputMode@@@Z
    virtual long InputHostSetViewIDDelegation(tagMsgRoutingInfo, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSiteDelegateInput@TextInputServer@@UEAAJUtagMsgRoutingInfo@@II_N@Z
    virtual long InputHostSiteDelegateInput(tagMsgRoutingInfo, unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSiteDepartFocusComplete@TextInputServer@@UEAAJUtagMsgRoutingInfo@@UNavigateFocusCompleteInfo@@@Z
    virtual long InputHostSiteDepartFocusComplete(tagMsgRoutingInfo, NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSiteEnableWindow@TextInputServer@@UEAAJUtagMsgRoutingInfo@@_N@Z
    virtual long InputHostSiteEnableWindow(tagMsgRoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSiteNavigateFocus@TextInputServer@@UEAAJUtagMsgRoutingInfo@@UNavigateFocusInfo@@@Z
    virtual long InputHostSiteNavigateFocus(tagMsgRoutingInfo, NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostStartNavigateFocus@TextInputServer@@UEAAJUtagMsgRoutingInfo@@I_N@Z
    virtual long InputHostStartNavigateFocus(tagMsgRoutingInfo, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostUpdateDelegatedTextInputHost@TextInputServer@@UEAAJUtagMsgRoutingInfo@@0@Z
    virtual long InputHostUpdateDelegatedTextInputHost(tagMsgRoutingInfo, tagMsgRoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChar@TextInputServer@@UEAAJUMessageObjectID@@IIHGI@Z
    virtual long InsertChar(MessageObjectID, unsigned int, unsigned int, int, unsigned short, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertText@TextInputServer@@UEAAJUMessageObjectID@@IIHPEAUMsgString@@@Z
    virtual long InsertText(MessageObjectID, unsigned int, unsigned int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeTextAugmentation@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@IGGAEBUTextRect@@_N@Z
    virtual long InvokeTextAugmentation(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, unsigned int, unsigned short, unsigned short, TextRect const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDelegationChanging@TextInputServer@@UEAAJPEA_N@Z
    virtual long IsDelegationChanging(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutChanged@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@AEBUEditActionHeader@@AEBUEditControlRange@@AEBUTextboxLayoutInfo@core@tsf4@@@Z
    virtual long LayoutChanged(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, EditActionHeader const &, EditControlRange const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyIMEConversionModeChanged@TextInputServer@@UEAAJUMessageObjectID@@IW4IMEConversionMode@@@Z
    virtual long NotifyIMEConversionModeChanged(MessageObjectID, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOasisDisplayMode@TextInputServer@@UEAAJI@Z
    virtual long NotifyOasisDisplayMode(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyProxyConnectRequested@TextInputServer@@UEAAJII@Z
    virtual long NotifyProxyConnectRequested(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyProxyCreated@TextInputServer@@UEAAJII@Z
    virtual long NotifyProxyCreated(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyProxyDisposed@TextInputServer@@UEAAJII@Z
    virtual long NotifyProxyDisposed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRemoteForegroundTextInputHost@TextInputServer@@UEAAJUtagMsgRoutingInfo@@U_GUID@@IIUTextInputHostSettings@@@Z
    virtual long NotifyRemoteForegroundTextInputHost(tagMsgRoutingInfo, _GUID, unsigned int, unsigned int, TextInputHostSettings);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActionFinished@TextInputServer@@UEAAJW4RemoteActionType@@I@Z
    virtual long OnActionFinished(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdded@TextInputServer@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z
    virtual long OnAdded(IMessageList *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateUIEvent@TextInputServer@@UEAAJUMessageObjectID@@IUCandidateUIEvent@@@Z
    virtual long OnCandidateUIEvent(MessageObjectID, unsigned int, CandidateUIEvent);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@TextInputServer@@UEAAJPEAUIMessageList@@@Z
    virtual long OnClear(IMessageList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@TextInputServer@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConversionModeChanged@TextInputServer@@UEAAJUMessageObjectID@@U_GUID@@IW4IMEConversionMode@@@Z
    virtual long OnConversionModeChanged(MessageObjectID, _GUID, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@TextInputServer@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDocFeedReady@TextInputServer@@UEAAJUMessageObjectID@@IPEAUMsgString@@1@Z
    virtual long OnDocFeedReady(MessageObjectID, unsigned int, MsgString *, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditControlLayoutChanged@TextInputServer@@UEAAJUMessageObjectID@@IUEditControlRange@@UTextRect@@2@Z
    virtual long OnEditControlLayoutChanged(MessageObjectID, unsigned int, EditControlRange, TextRect, TextRect);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditControlOrSelectionPositionChanged@TextInputServer@@UEAAJUMessageObjectID@@IUEditControlRange@@UTextRect@@2@Z
    virtual long OnEditControlOrSelectionPositionChanged(MessageObjectID, unsigned int, EditControlRange, TextRect, TextRect);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHotKeyRegistrationChanged@TextInputServer@@UEAAJUHotKeyRegistrationData@@_N@Z
    virtual long OnHotKeyRegistrationChanged(HotKeyRegistrationData, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputFocusEvent@TextInputServer@@UEAAJII@Z
    virtual long OnInputFocusEvent(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputFocusEvent@TextInputServer@@UEAAJIII@Z
    virtual long OnInputFocusEvent(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TextInputServer@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@TextInputServer@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnProxyCreated(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoved@TextInputServer@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z
    virtual long OnRemoved(IMessageList *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReplaced@TextInputServer@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@1@Z
    virtual long OnReplaced(IMessageList *, int, IUnknown *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubConnectedUnderLock@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@@Z
    virtual long OnStubConnectedUnderLock(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@@Z
    virtual long OnStubDisconnected(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted@TextInputServer@@UEAAJUMessageObjectID@@IW4TextInputAcknowledgment@@I@Z
    virtual long OperationCompleted(MessageObjectID, unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted2@TextInputServer@@UEAAJUMessageObjectID@@IIW4TextInputAcknowledgment@@IUISLatencyTelemetry@@@Z
    virtual long OperationCompleted2(MessageObjectID, unsigned int, unsigned int, int, unsigned int, ISLatencyTelemetry);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PayloadCompleted@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@AEBUEditActionHeader@@W4EditActionState@@AEBUTextRect@@@Z
    virtual long PayloadCompleted(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, EditActionHeader const &, int, TextRect const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterRemoteTextConnectionThread@TextInputServer@@UEAAJU_GUID@@I@Z
    virtual long RegisterRemoteTextConnectionThread(_GUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTextInputClient@TextInputServer@@UEAAJUtagMsgRoutingInfo@@IIU_GUID@@@Z
    virtual long RegisterTextInputClient(tagMsgRoutingInfo, unsigned int, unsigned int, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTextInputHost@TextInputServer@@UEAAJUtagMsgRoutingInfo@@IIUTextInputHostSettings@@U_GUID@@@Z
    virtual long RegisterTextInputHost(tagMsgRoutingInfo, unsigned int, unsigned int, TextInputHostSettings, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTextInputHostSite@TextInputServer@@UEAAJUtagMsgRoutingInfo@@IUTextInputHostSiteSettings@@@Z
    virtual long RegisterTextInputHostSite(tagMsgRoutingInfo, unsigned int, TextInputHostSiteSettings);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTextAugmentationClass@TextInputServer@@UEAAJGG@Z
    virtual long RemoveTextAugmentationClass(unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveView@TextInputServer@@QEAAJPEAUIMonitorView@Server@Navigation@@@Z
    long RemoveView(::Navigation::Server::IMonitorView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentView@TextInputServer@@QEAAJPEAUIMonitorView@Server@Navigation@@@Z
    long ReparentView(::Navigation::Server::IMonitorView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@TextInputServer@@UEAAJUMessageObjectID@@IIHHPEAUMsgString@@@Z
    virtual long ReplaceText(MessageObjectID, unsigned int, unsigned int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextEx@TextInputServer@@UEAAJUMessageObjectID@@IIHHPEAUMsgString@@HH@Z
    virtual long ReplaceTextEx(MessageObjectID, unsigned int, unsigned int, int, int, MsgString *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@TextInputServer@@UEAAJUMessageObjectID@@IIPEAUMsgString@@HHH1@Z
    virtual long ReportError(MessageObjectID, unsigned int, unsigned int, MsgString *, int, int, int, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportTextInputThreadProperties@TextInputServer@@UEAAJUMessageObjectID@@W4TextInputThreadProperties@@@Z
    virtual long ReportTextInputThreadProperties(MessageObjectID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInputProfileActivation@TextInputServer@@UEAAJUCoreInputProfile@@@Z
    virtual long RequestInputProfileActivation(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSoftwareKeyboardVisibilityChange@TextInputServer@@UEAAJUtagMsgRoutingInfo@@_NI@Z
    virtual long RequestSoftwareKeyboardVisibilityChange(tagMsgRoutingInfo, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RichContentTypesChanged@TextInputServer@@UEAAJUMessageObjectID@@II@Z
    virtual long RichContentTypesChanged(MessageObjectID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextInputServer@@QEAAJPEAUIVirtualizationFormatter@@PEAUITextInputServerOwner@@PEAUIMessagePort@@_N@Z
    long RuntimeClassInitialize(IVirtualizationFormatter *, ITextInputServerOwner *, IMessagePort *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChanged@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@AEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long SelectionChanged(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCandidateList@TextInputServer@@UEAAJUMessageObjectID@@IHHPEAUMsgBlob@@@Z
    virtual long SendCandidateList(MessageObjectID, unsigned int, int, int, MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRawCandidateMessage@TextInputServer@@UEAAJPEAUMsgBlob@@@Z
    virtual long SendRawCandidateMessage(MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSipInvocationSignals@TextInputServer@@UEAAJUMessageObjectID@@_N1111UTextRect@@@Z
    virtual long SendSipInvocationSignals(MessageObjectID, bool, bool, bool, bool, bool, TextRect);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveInputProfile@TextInputServer@@UEAAJUMessageObjectID@@UCoreInputProfile@@@Z
    virtual long SetActiveInputProfile(MessageObjectID, CoreInputProfile);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionClause@TextInputServer@@UEAAJUMessageObjectID@@IIPEAUMsgBlob@@@Z
    virtual long SetCompositionClause(MessageObjectID, unsigned int, unsigned int, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionInfo@TextInputServer@@UEAAJUMessageObjectID@@IIHHPEAUMsgString@@@Z
    virtual long SetCompositionInfo(MessageObjectID, unsigned int, unsigned int, int, int, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@TextInputServer@@UEAAJII@Z
    virtual long SetFocus(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInComposition@TextInputServer@@UEAAJUMessageObjectID@@II_NPEAUMsgBlob@@@Z
    virtual long SetInComposition(MessageObjectID, unsigned int, unsigned int, bool, MsgBlob *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputLocale@TextInputServer@@UEAAJUMessageObjectID@@III@Z
    virtual long SetInputLocale(MessageObjectID, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputMethodMode@TextInputServer@@UEAAJPEAUMsgString@@@Z
    virtual long SetInputMethodMode(MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeepSoftwareKeyboardVisibleOnEditControlFocusLoss@TextInputServer@@UEAAJUtagMsgRoutingInfo@@_N@Z
    virtual long SetKeepSoftwareKeyboardVisibleOnEditControlFocusLoss(tagMsgRoutingInfo, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyProcessingFlags@TextInputServer@@UEAAJUtagMsgRoutingInfo@@G@Z
    virtual long SetKeyProcessingFlags(tagMsgRoutingInfo, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPredictionMode@TextInputServer@@UEAAJ_NPEAUMsgString@@@Z
    virtual long SetPredictionMode(bool, MsgString *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteIntegrationStatus@TextInputServer@@UEAAJU_GUID@@_N@Z
    virtual long SetRemoteIntegrationStatus(_GUID, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteTihInfo@TextInputServer@@UEAAJUtagMsgRoutingInfo@@0@Z
    virtual long SetRemoteTihInfo(tagMsgRoutingInfo, tagMsgRoutingInfo);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@TextInputServer@@UEAAJUMessageObjectID@@IIHHW4CaretBindDirection@@W4GripperVisibility@@@Z
    virtual long SetSelection(MessageObjectID, unsigned int, unsigned int, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSmartLink@TextInputServer@@UEAAJUMessageObjectID@@IIHHPEAUMsgString@@111W4RichContentType@@@Z
    virtual long SetSmartLink(MessageObjectID, unsigned int, unsigned int, int, int, MsgString *, MsgString *, MsgString *, MsgString *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextFormat@TextInputServer@@UEAAJUMessageObjectID@@IIHHUTextFormat@@@Z
    virtual long SetTextFormat(MessageObjectID, unsigned int, unsigned int, int, int, TextFormat);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextVirtualizationParameters@TextInputServer@@UEAAJUtagMsgRoutingInfo@@_KU_GUID@@@Z
    virtual long SetTextVirtualizationParameters(tagMsgRoutingInfo, uint64_t, _GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewInstanceIdDelegation@TextInputServer@@UEAAJPEBUtagMsgRoutingInfo@@IIW4DelegateInputMode@@@Z
    virtual long SetViewInstanceIdDelegation(tagMsgRoutingInfo const *, unsigned int, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizationFormatter@TextInputServer@@UEAAJPEAUIVirtualizationFormatter@@@Z
    virtual long SetVirtualizationFormatter(IVirtualizationFormatter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizationVersion@TextInputServer@@UEAAJU_GUID@@II@Z
    virtual long SetVirtualizationVersion(_GUID, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPrivacy@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@_KW4WindowPrivacy@@@Z
    virtual long SetWindowPrivacy(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLayoutChangeTracking@TextInputServer@@UEAAJUMessageObjectID@@II_NUEditControlRange@@@Z
    virtual long StartLayoutChangeTracking(MessageObjectID, unsigned int, unsigned int, bool, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPositionTracking@TextInputServer@@UEAAJUMessageObjectID@@II_N1@Z
    virtual long StartPositionTracking(MessageObjectID, unsigned int, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscriptionChanged@TextInputServer@@UEAAXXZ
    virtual void SubscriptionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@TextInputServer@@UEAAJUMessageObjectID@@IIHHI@Z
    virtual long TagText(MessageObjectID, unsigned int, unsigned int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextChanged@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@AEBUEditActionHeader@@AEBUEditControlRange@@IPEBG@Z
    virtual long TextChanged(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, EditActionHeader const &, EditControlRange const &, unsigned int, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextInputServer@@QEAA@XZ
    TextInputServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextPopulated@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@IAEBUEditControlRange@@PEBG@Z
    virtual long TextPopulated(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, unsigned int, EditControlRange const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledKey@TextInputServer@@UEAAJUMessageObjectID@@IIIPEAUMsgString@@I@Z
    virtual long UnhandledKey(MessageObjectID, unsigned int, unsigned int, unsigned int, MsgString *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterRemoteTextConnectionThread@TextInputServer@@UEAAJU_GUID@@I@Z
    virtual long UnregisterRemoteTextConnectionThread(_GUID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTextInputClient@TextInputServer@@UEAAJUMessageObjectID@@@Z
    virtual long UnregisterTextInputClient(MessageObjectID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTextInputHost@TextInputServer@@UEAAJUtagMsgRoutingInfo@@@Z
    virtual long UnregisterTextInputHost(tagMsgRoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTextInputHostSite@TextInputServer@@UEAAJUtagMsgRoutingInfo@@@Z
    virtual long UnregisterTextInputHostSite(tagMsgRoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocus@TextInputServer@@UEAAJII@Z
    virtual long UpdateFocus(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputEnabledStateMachineOnViewAddition@TextInputServer@@QEAAJI@Z
    long UpdateInputEnabledStateMachineOnViewAddition(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePathToRootForCurrentHost@TextInputServer@@UEAAJXZ
    virtual long UpdatePathToRootForCurrentHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UrlChanged@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@_KIPEBG@Z
    virtual long UrlChanged(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, uint64_t, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDestroyed@TextInputServer@@UEAAJPEAVBamoTextInputFrameworkPrincipal@TextInputFramework@@PEAVBamoTextInputFrameworkStub@3@_K@Z
    virtual long WindowDestroyed(::TextInputFramework::BamoTextInputFrameworkPrincipal *, ::TextInputFramework::BamoTextInputFrameworkStub *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputServer@@UEAA@XZ
    virtual ~TextInputServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreViewsInSameCompositeApp@TextInputServer@@AEAA_NII@Z
    bool AreViewsInSameCompositeApp(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckComponentUIRights@TextInputServer@@AEAAJPEAVMonitorViewRegistration@@0PEAW4ComponentUIRights@@@Z
    long CheckComponentUIRights(MonitorViewRegistration *, MonitorViewRegistration *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToCoreInputViewManager@TextInputServer@@AEAAJXZ
    long ConnectToCoreInputViewManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndStartWindowWatcher@TextInputServer@@AEAAJXZ
    long CreateAndStartWindowWatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlFocusLeaveInternal@TextInputServer@@AEAAJPEAVTextInputClientRegistration@@IW4FocusChangeEvent@@@Z
    long EditControlFocusLeaveInternal(TextInputClientRegistration *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillForegroundInputHostAppInfo@TextInputServer@@AEAAJPEAVTextInputHostRegistration@@AEAUInputHostInfo@1@@Z
    long FillForegroundInputHostAppInfo(TextInputHostRegistration *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCoreWindowTextInputHostByView@TextInputServer@@AEAAJIPEAPEAVTextInputHostRegistration@@@Z
    long FindCoreWindowTextInputHostByView(unsigned int, TextInputHostRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRegisteredEditControl@TextInputServer@@AEAAJUMessageObjectID@@IPEAPEAVEditControlRegistration@@@Z
    long FindRegisteredEditControl(MessageObjectID, unsigned int, EditControlRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRegisteredEditControl@TextInputServer@@AEAA_NIIPEAPEAVEditControlRegistration@@@Z
    bool FindRegisteredEditControl(unsigned int, unsigned int, EditControlRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRegisteredTextInputClient@TextInputServer@@AEAAJAEBUMessageObjectID@@PEAPEAVTextInputClientRegistration@@@Z
    long FindRegisteredTextInputClient(MessageObjectID const &, TextInputClientRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRegisteredTextInputClient@TextInputServer@@AEAAJPEAUIMessageProxy@@PEAPEAVTextInputClientRegistration@@@Z
    long FindRegisteredTextInputClient(IMessageProxy *, TextInputClientRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRegisteredTextInputClientForThread@TextInputServer@@AEAAJI_NPEAPEAVTextInputClientRegistration@@@Z
    long FindRegisteredTextInputClientForThread(unsigned int, bool, TextInputClientRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputClientByThread@TextInputServer@@AEAAJIPEAPEAVTextInputClientRegistration@@AEBU_GUID@@@Z
    long FindTextInputClientByThread(unsigned int, TextInputClientRegistration * *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputHost@TextInputServer@@AEAAJPEBUtagMsgRoutingInfo@@PEAPEAVTextInputHostRegistration@@W4RegSource@1@@Z
    long FindTextInputHost(tagMsgRoutingInfo const *, TextInputHostRegistration * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputHost@TextInputServer@@AEAAJIPEAPEAVTextInputHostRegistration@@@Z
    long FindTextInputHost(unsigned int, TextInputHostRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputHostByProcess@TextInputServer@@AEAAJIPEAPEAVTextInputHostRegistration@@_N@Z
    long FindTextInputHostByProcess(unsigned int, TextInputHostRegistration * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputHostByThread@TextInputServer@@AEAAJIPEAPEAVTextInputHostRegistration@@_N@Z
    long FindTextInputHostByThread(unsigned int, TextInputHostRegistration * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputHostSite@TextInputServer@@AEAAJIPEAPEAVTextInputHostSiteRegistration@@@Z
    long FindTextInputHostSite(unsigned int, TextInputHostSiteRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTextInputHostSite@TextInputServer@@AEAAJPEBUtagMsgRoutingInfo@@PEAPEAVTextInputHostSiteRegistration@@@Z
    long FindTextInputHostSite(tagMsgRoutingInfo const *, TextInputHostSiteRegistration * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTextInputHostInfo@TextInputServer@@AEAA?AUtagMsgRoutingInfo@@PEAVTextInputClientRegistration@@@Z
    tagMsgRoutingInfo GetCurrentTextInputHostInfo(TextInputClientRegistration *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnregisteredStubForThread@TextInputServer@@AEAA_NIPEAPEAVTextInputClientStub@@@Z
    bool GetUnregisteredStubForThread(unsigned int, TextInputClientStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleContainerOrConnectionChange@TextInputServer@@AEAAXPEAVTextInputHostRegistration@@@Z
    void HandleContainerOrConnectionChange(TextInputHostRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeViews@TextInputServer@@AEAAJXZ
    long InitializeViews();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualRoutingInfo@TextInputServer@@AEAAEPEBUtagMsgRoutingInfo@@0@Z
    unsigned char IsEqualRoutingInfo(tagMsgRoutingInfo const *, tagMsgRoutingInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessIDInSameCompositeAppAsView@TextInputServer@@AEAA_NII@Z
    bool IsProcessIDInSameCompositeAppAsView(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewInPathToRoot@TextInputServer@@AEAAEI@Z
    unsigned char IsViewInPathToRoot(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogForeground@TextInputServer@@AEAAXU_GUID@@IIIIII_NI@Z
    void LogForeground(_GUID, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModifyViewInputStateAndPropagate@TextInputServer@@AEAAJIW4InputDisabledState@@_N@Z
    long ModifyViewInputStateAndPropagate(unsigned int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDelegateOfDelegationStateChange@TextInputServer@@AEAAJPEAVTextInputHostRegistration@@_NIII@Z
    long NotifyDelegateOfDelegationStateChange(TextInputHostRegistration *, bool, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyForegroundInputHostInfoToOwner@TextInputServer@@AEAAJPEAVTextInputHostRegistration@@@Z
    long NotifyForegroundInputHostInfoToOwner(TextInputHostRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOwnerFocusChange@TextInputServer@@AEAAJPEAVEditControlRegistration@@IW4FocusChangeEvent@@UTextRect@@@Z
    long NotifyOwnerFocusChange(EditControlRegistration *, unsigned int, int, TextRect);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyViewOfActivationStateChange@TextInputServer@@AEAAJPEAVMonitorViewRegistration@@W4ViewActivationState@@I@Z
    long NotifyViewOfActivationStateChange(MonitorViewRegistration *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationChanged@TextInputServer@@AEAAJPEAUIActivationWatcher@Input@Internal@UI@Windows@@PEAUIActivationChangedEventArgs@3456@@Z
    long OnActivationChanged(::Windows::UI::Internal::Input::IActivationWatcher *, ::Windows::UI::Internal::Input::IActivationChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentWindowChanged@TextInputServer@@AEAAJXZ
    long OnCurrentWindowChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUniversalPropertyChanged@TextInputServer@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIUniversalPropertyChangedEventArgs@3456@@Z
    long OnUniversalPropertyChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowAdded@TextInputServer@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@3456@@Z
    long OnWindowAdded(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowRemoved@TextInputServer@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@3456@@Z
    long OnWindowRemoved(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowWatcherStopped@TextInputServer@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z
    long OnWindowWatcherStopped(WindissectOpaque *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateActivationState@TextInputServer@@AEAA_NPEAVMonitorViewRegistration@@0_N@Z
    bool PropagateActivationState(MonitorViewRegistration *, MonitorViewRegistration *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateInputStateAcrossCompositeSubTree@TextInputServer@@AEAAJI_N@Z
    long PropagateInputStateAcrossCompositeSubTree(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTextInputHostSite@TextInputServer@@AEAAJPEAVTextInputHostSiteRegistration@@@Z
    long RemoveTextInputHostSite(TextInputHostSiteRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveViewInstanceIDDelegation@TextInputServer@@AEAAJPEBUtagMsgRoutingInfo@@@Z
    long RemoveViewInstanceIDDelegation(tagMsgRoutingInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentKeyEventHandler@TextInputServer@@AEAAJPEAUIKeyEventNotificationHandler@@PEAVMonitorViewRegistration@@@Z
    long SetCurrentKeyEventHandler(IKeyEventNotificationHandler *, MonitorViewRegistration *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentTextInputClient@TextInputServer@@AEAAJPEAVTextInputClientRegistration@@@Z
    long SetCurrentTextInputClient(TextInputClientRegistration *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentTextInputHost@TextInputServer@@AEAAJPEAVTextInputHostRegistration@@@Z
    long SetCurrentTextInputHost(TextInputHostRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextInputClientRegistrationDisposeHelper@TextInputServer@@AEAAJPEAVTextInputClientRegistration@@E@Z
    long TextInputClientRegistrationDisposeHelper(TextInputClientRegistration *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformCoordinatesToDesktopVisual@TextInputServer@@AEAAXPEAUTextRect@@@Z
    void TransformCoordinatesToDesktopVisual(TextRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientPerCurrentHost@TextInputServer@@AEAAJXZ
    long UpdateClientPerCurrentHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateComponentUIActivationState@TextInputServer@@AEAAJKI@Z
    long UpdateComponentUIActivationState(unsigned long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentInputFocus@TextInputServer@@AEAAJXZ
    long UpdateCurrentInputFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentTextInputHost@TextInputServer@@AEAAJPEAVTextInputHostRegistration@@W4DelegateInputMode@@_N22@Z
    long UpdateCurrentTextInputHost(TextInputHostRegistration *, int, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForegroundProcess@TextInputServer@@AEAAJI@Z
    long UpdateForegroundProcess(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForegroundTextInputHost@TextInputServer@@AEAAJPEAVTextInputHostRegistration@@_N@Z
    long UpdateForegroundTextInputHost(TextInputHostRegistration *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForegroundTextInputHostCommon@TextInputServer@@AEAAXPEAVTextInputHostRegistration@@_N@Z
    void UpdateForegroundTextInputHostCommon(TextInputHostRegistration *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInheritedInputDisabledStateOnPropertyChange@TextInputServer@@AEAAJI@Z
    long UpdateInheritedInputDisabledStateOnPropertyChange(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePathToRoot@TextInputServer@@AEAAJPEAUIKeyEventNotificationHandler@@PEAVMonitorViewRegistration@@@Z
    long UpdatePathToRoot(IKeyEventNotificationHandler *, MonitorViewRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePredictionModeForThread@TextInputServer@@AEAAJI_NPEAUMsgString@@U_GUID@@@Z
    long UpdatePredictionModeForThread(unsigned int, bool, MsgString *, _GUID);
};
