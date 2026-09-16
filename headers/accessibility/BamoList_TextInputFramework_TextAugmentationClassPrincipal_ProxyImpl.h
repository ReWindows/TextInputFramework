#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 10 member(s).
namespace Microsoft::Bamo::Lib::BamoImpl::TextInputFramework_AutoBamos {
class BamoList_TextInputFramework_TextAugmentationClassPrincipal_ProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoList_TextInputFramework_TextAugmentationClassPrincipal_ProxyImpl@TextInputFramework_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEBAPEAVBamoProxy@56@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoList_TextInputFramework_TextAugmentationClassPrincipal_ProxyImpl@TextInputFramework_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoList_TextInputFramework_TextAugmentationClassPrincipal_ProxyImpl@TextInputFramework_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoList_TextInputFramework_TextAugmentationClassPrincipal_ProxyImpl@TextInputFramework_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoList_TextInputFramework_TextAugmentationClassPrincipal_ProxyImpl@TextInputFramework_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@36@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteInsert@BamoList_TextInputFramework_TextAugmentationClassPrincipal_ProxyImpl@TextInputFramework_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJII@Z
    long RemoteInsert(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteReplace@BamoList_TextInputFramework_TextAugmentationClassPrincipal_ProxyImpl@TextInputFramework_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJII@Z
    long RemoteReplace(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoList_TextInputFramework_TextAugmentationClassPrincipal_ProxyImpl@TextInputFramework_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAVBamoProxyImpl@36@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
};
} // namespace Microsoft::Bamo::Lib::BamoImpl::TextInputFramework_AutoBamos
