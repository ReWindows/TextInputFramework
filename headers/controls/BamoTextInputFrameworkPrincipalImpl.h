#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 51 member(s).
namespace TextInputFramework::BamoImpl {
class BamoTextInputFrameworkPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activated@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJIGH@Z
    long Activated(unsigned int, unsigned short, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@5@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastAddTextAugmentation@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@GGAEBUEditControlRange@@@Z
    long BroadcastAddTextAugmentation(EditActionHeader const &, unsigned short, unsigned short, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastBeginKeyEventPayload@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@@Z
    long BroadcastBeginKeyEventPayload(EditActionHeader const &, KeyEventHostInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastProviderDisconnected@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJG@Z
    long BroadcastProviderDisconnected(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoveTextAugmentations@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    long BroadcastRemoveTextAugmentations(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastReplaceText@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBG@Z
    long BroadcastReplaceText(EditActionHeader const &, EditControlRange const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastResyncRequested@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@@Z
    long BroadcastResyncRequested(EditActionHeader const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSelectText@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    long BroadcastSelectText(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastStartComposition@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    long BroadcastStartComposition(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSubscriptionChanged@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJAEBUCoreImeSubscription@IME@Input@Internal@UI@Windows@@@Z
    long BroadcastSubscriptionChanged(::Windows::UI::Internal::Input::IME::CoreImeSubscription const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastUpdateConfirmed@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJIG@Z
    long BroadcastUpdateConfirmed(unsigned int, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeIntentDetermined@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJPEBUInkStrokeId@@0II@Z
    long InkStrokeIntentDetermined(InkStrokeId const *, InkStrokeId const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeTargetDetermined@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJIPEBUInkStrokeId@@0IPEBUTextUnitInfo@@IPEBGI@Z
    long InkStrokeTargetDetermined(unsigned int, InkStrokeId const *, InkStrokeId const *, unsigned int, TextUnitInfo const *, unsigned int, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeTextAugmentation@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJIGGPEBUTextRect@@_N@Z
    long InvokeTextAugmentation(unsigned int, unsigned short, unsigned short, TextRect const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutChanged@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJPEBUEditActionHeader@@PEBUEditControlRange@@PEBUTextboxLayoutInfo@core@tsf4@@@Z
    long LayoutChanged(EditActionHeader const *, EditControlRange const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PayloadCompleted@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJPEBUEditActionHeader@@W4EditActionState@@PEBUTextRect@@@Z
    long PayloadCompleted(EditActionHeader const *, int, TextRect const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChanged@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJPEBUEditActionHeader@@PEBUEditControlRange@@@Z
    long SelectionChanged(EditActionHeader const *, EditControlRange const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextAugmentationClassList@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAXPEAVBamoList_TextInputFramework_TextAugmentationClassPrincipal_Principal@TextInputFramework_AutoBamos@Lib@Bamo@Microsoft@@@Z
    void SetTextAugmentationClassList(::Microsoft::Bamo::Lib::TextInputFramework_AutoBamos::BamoList_TextInputFramework_TextAugmentationClassPrincipal_Principal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPrivacy@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJ_KW4WindowPrivacy@@@Z
    long SetWindowPrivacy(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextChanged@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJPEBUEditActionHeader@@PEBUEditControlRange@@IPEBG@Z
    long TextChanged(EditActionHeader const *, EditControlRange const *, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextPopulated@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJIPEBUEditControlRange@@PEBG@Z
    long TextPopulated(unsigned int, EditControlRange const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UrlChanged@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJ_KIPEBG@Z
    long UrlChanged(uint64_t, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDestroyed@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@QEAAJ_K@Z
    long WindowDestroyed(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@UEAA@XZ
    virtual ~BamoTextInputFrameworkPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallAddTextAugmentationOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@GGAEBUEditControlRange@@@Z
    static long CallAddTextAugmentationOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &, unsigned short, unsigned short, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallBeginKeyEventPayloadOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@AEBUKeyEventHostInfo@@@Z
    static long CallBeginKeyEventPayloadOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &, KeyEventHostInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallEndCompositionOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    static long CallEndCompositionOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallEndKeyEventPayloadOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@AEBUKeyEventHostInfo@@_NPEBEI@Z
    static long CallEndKeyEventPayloadOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &, KeyEventHostInfo const &, bool, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallKeyEventProcessedOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@AEBUKeyEventHostInfo@@AEBUKeyEventText@@PEBEI@Z
    static long CallKeyEventProcessedOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &, KeyEventHostInfo const &, KeyEventText const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallProviderDisconnectedOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@G@Z
    static long CallProviderDisconnectedOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRemoveTextAugmentationsOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@AEBUEditControlRange@@@Z
    static long CallRemoveTextAugmentationsOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallReplaceTextOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@AEBUEditControlRange@@PEBG@Z
    static long CallReplaceTextOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &, EditControlRange const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallResyncRequestedOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@@Z
    static long CallResyncRequestedOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallSelectTextOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@AEBUEditControlRange@@@Z
    static long CallSelectTextOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallStartCompositionOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@AEBUEditControlRange@@@Z
    static long CallStartCompositionOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallSubscriptionChangedOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUCoreImeSubscription@IME@Input@Internal@UI@Windows@@@Z
    static long CallSubscriptionChangedOnStub(::Microsoft::BamoImpl::BamoStubImpl *, ::Windows::UI::Internal::Input::IME::CoreImeSubscription const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallUpdateCompositionInfoOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    static long CallUpdateCompositionInfoOnStub(::Microsoft::BamoImpl::BamoStubImpl *, EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallUpdateConfirmedOnStub@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@IG@Z
    static long CallUpdateConfirmedOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSubscriptionRemoteCache@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateSubscriptionRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSubscriptionRemoteCacheStatic@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateSubscriptionRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextAugmentationClassListRemoteCache@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTextAugmentationClassListRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextAugmentationClassListRemoteCacheStatic@BamoTextInputFrameworkPrincipalImpl@BamoImpl@TextInputFramework@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV123@@Z
    static long UpdateTextAugmentationClassListRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace TextInputFramework::BamoImpl
