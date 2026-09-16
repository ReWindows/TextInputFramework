#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 110 member(s).
class TsfThreadInputManager {
public:
    class CKeyEventProcessorCallback;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@TsfThreadInputManager@@UEAAJPEAK@Z
    virtual long Activate(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateEx@TsfThreadInputManager@@UEAAJPEAKK@Z
    virtual long ActivateEx(unsigned long *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInputProfile@TsfThreadInputManager@@UEAAJUCoreInputProfile@@@Z
    virtual long ActivateInputProfile(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseSingleSink@TsfThreadInputManager@@UEAAJKAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long AdviseSingleSink(unsigned long, _GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseSink@TsfThreadInputManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@PEAK@Z
    virtual long AdviseSink(_GUID const &, IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociateFocus@TsfThreadInputManager@@UEAAJPEAUHWND__@@PEAUITfDocumentMgr@@PEAPEAU3@@Z
    virtual long AssociateFocus(HWND__*, ITfDocumentMgr *, ITfDocumentMgr * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@TsfThreadInputManager@@UEAAJUKeyEventHostInfo@@@Z
    virtual long BeginKeyEventPayload(KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelKeyEventPayload@TsfThreadInputManager@@UEAAXXZ
    virtual void CancelKeyEventPayload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPostponedLockRequest@TsfThreadInputManager@@UEAAXXZ
    virtual void CancelPostponedLockRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckContextUrl@TsfThreadInputManager@@UEAAXXZ
    virtual void CheckContextUrl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearKeyEventPayloadPtr@TsfThreadInputManager@@UEAAXPEAUIKeyEventPayload@@@Z
    virtual void ClearKeyEventPayloadPtr(IKeyEventPayload *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDisplayAttributeProvider@TsfThreadInputManager@@UEAAJAEBU_GUID@@PEAPEAUITfDisplayAttributeProvider@@@Z
    virtual long CreateDisplayAttributeProvider(_GUID const &, ITfDisplayAttributeProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDocumentMgr@TsfThreadInputManager@@UEAAJPEAPEAUITfDocumentMgr@@@Z
    virtual long CreateDocumentMgr(ITfDocumentMgr * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextStore@TsfThreadInputManager@@UEAAJPEAUIInputContextPrivate@@PEAPEAUITextStoreACP@@@Z
    virtual long CreateTextStore(IInputContextPrivate *, ITextStoreACP * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deactivate@TsfThreadInputManager@@UEAAJXZ
    virtual long Deactivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumDocumentMgrs@TsfThreadInputManager@@UEAAJPEAPEAUIEnumTfDocumentMgrs@@@Z
    virtual long EnumDocumentMgrs(IEnumTfDocumentMgrs * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumFunctionProviders@TsfThreadInputManager@@UEAAJPEAPEAUIEnumTfFunctionProviders@@@Z
    virtual long EnumFunctionProviders(IEnumTfFunctionProviders * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTIPByCLSID@TsfThreadInputManager@@UEAAJAEBU_GUID@@_NPEAPEAUITfTextInputProcessor@@@Z
    virtual long FindTIPByCLSID(_GUID const &, bool, ITfTextInputProcessor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveFlags@TsfThreadInputManager@@UEAAJPEAK@Z
    virtual long GetActiveFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveInputProfileGuid@TsfThreadInputManager@@UEAAJPEAU_GUID@@@Z
    virtual long GetActiveInputProfileGuid(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppCompatFlags@TsfThreadInputManager@@UEAAKXZ
    virtual unsigned long GetAppCompatFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryManager@TsfThreadInputManager@@UEAAPEAUITfCategoryMgr@@XZ
    virtual ITfCategoryMgr * GetCategoryManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientId@TsfThreadInputManager@@UEAAJAEBU_GUID@@PEAK@Z
    virtual long GetClientId(_GUID const &, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextInputScope@TsfThreadInputManager@@UEAAJPEAUIInputContextPrivate@@PEAPEAUIUnknown@@@Z
    virtual long GetContextInputScope(IInputContextPrivate *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDisplayAttributeProvider@TsfThreadInputManager@@UEAAJPEAPEAUITfDisplayAttributeProvider@@PEAU_GUID@@@Z
    virtual long GetCurrentDisplayAttributeProvider(ITfDisplayAttributeProvider * *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@TsfThreadInputManager@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocus@TsfThreadInputManager@@UEAAJPEAPEAUITfDocumentMgr@@@Z
    virtual long GetFocus(ITfDocumentMgr * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedControlNameAndType@TsfThreadInputManager@@UEAAXPEAPEAUMsgString@@PEAI@Z
    virtual void GetFocusedControlNameAndType(MsgString * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFunction@TsfThreadInputManager@@UEAAJAEBU_GUID@@0PEAPEAUIUnknown@@@Z
    virtual long GetFunction(_GUID const &, _GUID const &, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFunctionProvider@TsfThreadInputManager@@UEAAJAEBU_GUID@@PEAPEAUITfFunctionProvider@@@Z
    virtual long GetFunctionProvider(_GUID const &, ITfFunctionProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalCompartment@TsfThreadInputManager@@UEAAJPEAPEAUITfCompartmentMgr@@@Z
    virtual long GetGlobalCompartment(ITfCompartmentMgr * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerId@TsfThreadInputManager@@UEBAKXZ
    virtual unsigned long GetOwnerId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderFunction@TsfThreadInputManager@@UEAAJKAEBU_GUID@@PEAPEAUIUnknown@@@Z
    virtual long GetProviderFunction(unsigned long, _GUID const &, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextInputClient@TsfThreadInputManager@@UEAAJPEAPEAUITextInputClient@@@Z
    virtual long GetTextInputClient(ITextInputClient * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@TsfThreadInputManager@@UEAAJPEAU_GUID@@@Z
    virtual long GetType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnchorTextStoreEnabled@TsfThreadInputManager@@UEAA_NXZ
    virtual bool IsAnchorTextStoreEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIEBrowser@TsfThreadInputManager@@UEAA_NXZ
    virtual bool IsIEBrowser();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveFocusTrackingActive@TsfThreadInputManager@@UEAA_NXZ
    virtual bool IsImmersiveFocusTrackingActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveMode@TsfThreadInputManager@@UEAA_NXZ
    virtual bool IsImmersiveMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInPrivateBrowsing@TsfThreadInputManager@@UEAA_NXZ
    virtual bool IsInPrivateBrowsing();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThreadFocus@TsfThreadInputManager@@UEAAJPEAH@Z
    virtual long IsThreadFocus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidClientId@TsfThreadInputManager@@UEAA_NK@Z
    virtual bool IsValidClientId(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyDown@TsfThreadInputManager@@UEAAJIIPEA_N@Z
    virtual long KeyDown(unsigned int, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeCleanupContext@TsfThreadInputManager@@UEAAXK@Z
    virtual void OnBeforeCleanupContext(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCleanupContextSinkAdded@TsfThreadInputManager@@UEAAXK@Z
    virtual void OnCleanupContextSinkAdded(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCleanupContextSinkRemoved@TsfThreadInputManager@@UEAAXK@Z
    virtual void OnCleanupContextSinkRemoved(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionEnded@TsfThreadInputManager@@UEAAXKK@Z
    virtual void OnCompositionEnded(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionStarted@TsfThreadInputManager@@UEAAXK@Z
    virtual void OnCompositionStarted(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextInitialized@TsfThreadInputManager@@UEAAXPEAUITfContext@@@Z
    virtual void OnContextInitialized(ITfContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextInputScopeChanged@TsfThreadInputManager@@UEAAXXZ
    virtual void OnContextInputScopeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextLayoutChanged@TsfThreadInputManager@@UEAAXPEBUtagRECT@@@Z
    virtual void OnContextLayoutChanged(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextStatusChanged@TsfThreadInputManager@@UEAAX_N00@Z
    virtual void OnContextStatusChanged(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextUninitialized@TsfThreadInputManager@@UEAAXPEAUITfContext@@@Z
    virtual void OnContextUninitialized(ITfContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDocumentDestroyed@TsfThreadInputManager@@UEAAXPEAUIDocumentInputManagerPrivate@@@Z
    virtual void OnDocumentDestroyed(IDocumentInputManagerPrivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDocumentInitialized@TsfThreadInputManager@@UEAAXPEAUIDocumentInputManagerPrivate@@@Z
    virtual void OnDocumentInitialized(IDocumentInputManagerPrivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDocumentUninitialized@TsfThreadInputManager@@UEAAXPEAUIDocumentInputManagerPrivate@@@Z
    virtual void OnDocumentUninitialized(IDocumentInputManagerPrivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@TsfThreadInputManager@@UEAAJUKeyEventHostInfo@@@Z
    virtual long OnKeyEvent(KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEventProcessingCanceled@TsfThreadInputManager@@UEAAJXZ
    virtual long OnKeyEventProcessingCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEventProcessingCompleted@TsfThreadInputManager@@UEAAJ_NPEAI@Z
    virtual long OnKeyEventProcessingCompleted(bool, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostponeLockRequest@TsfThreadInputManager@@UEAAX_N0@Z
    virtual void PostponeLockRequest(bool, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TsfThreadInputManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConversionModeChange@TsfThreadInputManager@@UEAAJW4IMEConversionMode@@@Z
    virtual long RequestConversionModeChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestDocFeed@TsfThreadInputManager@@UEAAJXZ
    virtual long RequestDocFeed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInputProfileActivation@TsfThreadInputManager@@QEAAJAEBUCoreInputProfile@@@Z
    long RequestInputProfileActivation(CoreInputProfile const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeKeystrokeHandling@TsfThreadInputManager@@UEAAJXZ
    virtual long ResumeKeystrokeHandling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TsfThreadInputManager@@QEAAJPEAVTsfSingletonObjectStore@@@Z
    long RuntimeClassInitialize(TsfSingletonObjectStore *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDocumentFocus@TsfThreadInputManager@@UEAAJPEAUIDocumentInputManagerPrivate@@@Z
    virtual long SetDocumentFocus(IDocumentInputManagerPrivate *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@TsfThreadInputManager@@UEAAJPEAUITfDocumentMgr@@@Z
    virtual long SetFocus(ITfDocumentMgr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyEventPayloadPtr@TsfThreadInputManager@@UEAAXPEAUIKeyEventPayload@@@Z
    virtual void SetKeyEventPayloadPtr(IKeyEventPayload *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPredictionMode@TsfThreadInputManager@@UEAAJ_NPEAUMsgString@@@Z
    virtual long SetPredictionMode(bool, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTransitoryExtension@TsfThreadInputManager@@UEAAJPEAUIDocumentInputManagerPrivate@@KPEAPEAUIUnknown@@@Z
    virtual long StartTransitoryExtension(IDocumentInputManagerPrivate *, unsigned long, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTransitoryExtension@TsfThreadInputManager@@UEAAXPEAUIUnknown@@@Z
    virtual void StopTransitoryExtension(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendKeystrokeHandling@TsfThreadInputManager@@UEAAJXZ
    virtual long SuspendKeystrokeHandling();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TsfThreadInputManager@@QEAA@XZ
    TsfThreadInputManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseSingleSink@TsfThreadInputManager@@UEAAJKAEBU_GUID@@@Z
    virtual long UnadviseSingleSink(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseSink@TsfThreadInputManager@@UEAAJK@Z
    virtual long UnadviseSink(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TsfThreadInputManager@@UEAA@XZ
    virtual ~TsfThreadInputManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageWindowProc@TsfThreadInputManager@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t MessageWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMessageWindow@TsfThreadInputManager@@AEAAJXZ
    long _CreateMessageWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetClassId@TsfThreadInputManager@@EEBA?AW4TsfSingletonObjects@@XZ
    virtual int _GetClassId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyInputProfileActivationSinks@TsfThreadInputManager@@AEAAXXZ
    void _NotifyInputProfileActivationSinks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyKeyTraceEventSinks@TsfThreadInputManager@@AEAAXAEBUKeyEventHostInfo@@@Z
    void _NotifyKeyTraceEventSinks(KeyEventHostInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnConversionModeChangeRequest@TsfThreadInputManager@@AEAAXW4IMEConversionMode@@@Z
    void _OnConversionModeChangeRequest(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPostponedLockRequest@TsfThreadInputManager@@AEAAXXZ
    void _OnPostponedLockRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocus@TsfThreadInputManager@@AEAAXPEAUIDocumentInputManagerPrivate@@@Z
    void _SetFocus(IDocumentInputManagerPrivate *);
};
