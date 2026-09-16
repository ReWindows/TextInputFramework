#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 29 member(s).
namespace TextInputFramework::BamoImpl {
class BamoTextInputFrameworkProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activated@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJIGH@Z
    long Activated(unsigned int, unsigned short, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTextAugmentation@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJPEBUEditActionHeader@@GGPEBUEditControlRange@@@Z
    long AddTextAugmentation(EditActionHeader const *, unsigned short, unsigned short, EditControlRange const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndComposition@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJPEBUEditActionHeader@@PEBUEditControlRange@@PEBGPEBEI@Z
    long EndComposition(EditActionHeader const *, EditControlRange const *, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndKeyEventPayload@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJPEBUEditActionHeader@@PEBUKeyEventHostInfo@@_NPEBEI@Z
    long EndKeyEventPayload(EditActionHeader const *, KeyEventHostInfo const *, bool, unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeIntentDetermined@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJAEBUInkStrokeId@@0II@Z
    long InkStrokeIntentDetermined(InkStrokeId const &, InkStrokeId const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeTargetDetermined@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJIAEBUInkStrokeId@@0IPEBUTextUnitInfo@@IPEBGI@Z
    long InkStrokeTargetDetermined(unsigned int, InkStrokeId const &, InkStrokeId const &, unsigned int, TextUnitInfo const *, unsigned int, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeTextAugmentation@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJIGGAEBUTextRect@@_N@Z
    long InvokeTextAugmentation(unsigned int, unsigned short, unsigned short, TextRect const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyEventProcessed@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJPEBUEditActionHeader@@PEBUKeyEventHostInfo@@PEBUKeyEventText@@PEBEI@Z
    long KeyEventProcessed(EditActionHeader const *, KeyEventHostInfo const *, KeyEventText const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutChanged@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@AEBUTextboxLayoutInfo@core@tsf4@@@Z
    long LayoutChanged(EditActionHeader const &, EditControlRange const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PayloadCompleted@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@W4EditActionState@@AEBUTextRect@@@Z
    long PayloadCompleted(EditActionHeader const &, int, TextRect const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChanged@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    long SelectionChanged(EditActionHeader const &, EditControlRange const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPrivacy@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJ_KW4WindowPrivacy@@@Z
    long SetWindowPrivacy(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextChanged@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@IPEBG@Z
    long TextChanged(EditActionHeader const &, EditControlRange const &, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextPopulated@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJIAEBUEditControlRange@@PEBG@Z
    long TextPopulated(unsigned int, EditControlRange const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionInfo@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJPEBUEditActionHeader@@PEBUEditControlRange@@PEBGPEBEI@Z
    long UpdateCompositionInfo(EditActionHeader const *, EditControlRange const *, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConfirmed@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJIG@Z
    long UpdateConfirmed(unsigned int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSubscription@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJ_NPEBUTextServiceSubscription@core@tsf4@@@Z
    long UpdateSubscription(bool, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextAugmentationClassList@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJ_NI@Z
    long UpdateTextAugmentationClassList(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UrlChanged@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJ_KIPEBG@Z
    long UrlChanged(uint64_t, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDestroyed@BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@QEAAJ_K@Z
    long WindowDestroyed(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoTextInputFrameworkProxyImpl@BamoImpl@TextInputFramework@@UEAA@XZ
    virtual ~BamoTextInputFrameworkProxyImpl();
};
} // namespace TextInputFramework::BamoImpl
