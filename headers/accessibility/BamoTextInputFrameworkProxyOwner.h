#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 4 member(s).
namespace TextInputFramework {
class BamoTextInputFrameworkProxyOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoTextInputFrameworkProxyOwner@TextInputFramework@@UEAAJPEAVBamoTextInputFrameworkProxy@2@@Z
    virtual long OnPropertiesRefreshed(::TextInputFramework::BamoTextInputFrameworkProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSubscriptionChanged@BamoTextInputFrameworkProxyOwner@TextInputFramework@@UEAAJPEAVBamoTextInputFrameworkProxy@2@@Z
    virtual long OnSubscriptionChanged(::TextInputFramework::BamoTextInputFrameworkProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextAugmentationClassListChanged@BamoTextInputFrameworkProxyOwner@TextInputFramework@@UEAAJPEAVBamoTextInputFrameworkProxy@2@@Z
    virtual long OnTextAugmentationClassListChanged(::TextInputFramework::BamoTextInputFrameworkProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextAugmentationClassListChanging@BamoTextInputFrameworkProxyOwner@TextInputFramework@@UEAAJPEAVBamoTextInputFrameworkProxy@2@PEAVBamoList_TextInputFramework_TextAugmentationClassPrincipal_Proxy@TextInputFramework_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnTextAugmentationClassListChanging(::TextInputFramework::BamoTextInputFrameworkProxy *, ::Microsoft::Bamo::Lib::TextInputFramework_AutoBamos::BamoList_TextInputFramework_TextAugmentationClassPrincipal_Proxy *);
};
} // namespace TextInputFramework
