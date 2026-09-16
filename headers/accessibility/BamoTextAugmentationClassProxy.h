#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 26 member(s).
namespace TextInputFramework {
class BamoTextAugmentationClassProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoTextAugmentationClassProxy@TextInputFramework@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategoryName@BamoTextAugmentationClassProxy@TextInputFramework@@UEAAPEBGXZ
    virtual unsigned short const * GetCategoryName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@BamoTextAugmentationClassProxy@TextInputFramework@@UEAAAEBUTextAugmentationClass@@XZ
    virtual TextAugmentationClass const & GetData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultActionName@BamoTextAugmentationClassProxy@TextInputFramework@@UEAAPEBGXZ
    virtual unsigned short const * GetDefaultActionName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@BamoTextAugmentationClassProxy@TextInputFramework@@UEAAPEBGXZ
    virtual unsigned short const * GetDescription();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoTextAugmentationClassProxy@TextInputFramework@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoTextAugmentationClassProxy@TextInputFramework@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilog@BamoTextAugmentationClassProxy@TextInputFramework@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallProlog@BamoTextAugmentationClassProxy@TextInputFramework@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCategoryNameChanged@BamoTextAugmentationClassProxy@TextInputFramework@@MEAAJXZ
    virtual long OnCategoryNameChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCategoryNameChanging@BamoTextAugmentationClassProxy@TextInputFramework@@MEAAJPEBG@Z
    virtual long OnCategoryNameChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataChanged@BamoTextAugmentationClassProxy@TextInputFramework@@MEAAJXZ
    virtual long OnDataChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataChanging@BamoTextAugmentationClassProxy@TextInputFramework@@MEAAJAEBUTextAugmentationClass@@@Z
    virtual long OnDataChanging(TextAugmentationClass const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDefaultActionNameChanged@BamoTextAugmentationClassProxy@TextInputFramework@@MEAAJXZ
    virtual long OnDefaultActionNameChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDefaultActionNameChanging@BamoTextAugmentationClassProxy@TextInputFramework@@MEAAJPEBG@Z
    virtual long OnDefaultActionNameChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDescriptionChanged@BamoTextAugmentationClassProxy@TextInputFramework@@MEAAJXZ
    virtual long OnDescriptionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDescriptionChanging@BamoTextAugmentationClassProxy@TextInputFramework@@MEAAJPEBG@Z
    virtual long OnDescriptionChanging(unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoTextAugmentationClassProxy@TextInputFramework@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoTextAugmentationClassProxy@TextInputFramework@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoTextAugmentationClassProxy@TextInputFramework@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoTextAugmentationClassProxy@TextInputFramework@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace TextInputFramework
