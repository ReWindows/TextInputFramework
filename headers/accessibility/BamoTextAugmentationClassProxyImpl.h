#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 14 member(s).
namespace TextInputFramework::BamoImpl {
class BamoTextAugmentationClassProxyImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@QEAA@PEAVBamoConnection@TextInputFramework_AutoBamos@@@Z
    BamoTextAugmentationClassProxyImpl(::TextInputFramework_AutoBamos::BamoConnection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCategoryName@BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@QEAAJ_NPEBG@Z
    long UpdateCategoryName(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateData@BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@QEAAJ_NPEBUTextAugmentationClass@@@Z
    long UpdateData(bool, TextAugmentationClass const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDefaultActionName@BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@QEAAJ_NPEBG@Z
    long UpdateDefaultActionName(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDescription@BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@QEAAJ_NPEBG@Z
    long UpdateDescription(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoTextAugmentationClassProxyImpl@BamoImpl@TextInputFramework@@UEAA@XZ
    virtual ~BamoTextAugmentationClassProxyImpl();
};
} // namespace TextInputFramework::BamoImpl
