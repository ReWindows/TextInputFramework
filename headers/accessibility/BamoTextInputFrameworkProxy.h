#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 29 member(s).
namespace TextInputFramework {
class BamoTextInputFrameworkProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activated@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJIGH@Z
    virtual long Activated(unsigned int, unsigned short, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubscription@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAAEBUTextServiceSubscription@core@tsf4@@XZ
    virtual WindissectOpaque const & GetSubscription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAugmentationClassList@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAPEAVBamoList_TextInputFramework_TextAugmentationClassPrincipal_Proxy@TextInputFramework_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::TextInputFramework_AutoBamos::BamoList_TextInputFramework_TextAugmentationClassPrincipal_Proxy * GetTextAugmentationClassList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeIntentDetermined@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJAEBUInkStrokeId@@0II@Z
    virtual long InkStrokeIntentDetermined(InkStrokeId const &, InkStrokeId const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkStrokeTargetDetermined@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJIAEBUInkStrokeId@@0IPEBUTextUnitInfo@@IPEBGI@Z
    virtual long InkStrokeTargetDetermined(unsigned int, InkStrokeId const &, InkStrokeId const &, unsigned int, TextUnitInfo const *, unsigned int, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeTextAugmentation@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJIGGAEBUTextRect@@_N@Z
    virtual long InvokeTextAugmentation(unsigned int, unsigned short, unsigned short, TextRect const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutChanged@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@AEBUTextboxLayoutInfo@core@tsf4@@@Z
    virtual long LayoutChanged(EditActionHeader const &, EditControlRange const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PayloadCompleted@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJAEBUEditActionHeader@@W4EditActionState@@AEBUTextRect@@@Z
    virtual long PayloadCompleted(EditActionHeader const &, int, TextRect const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionChanged@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long SelectionChanged(EditActionHeader const &, EditControlRange const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPrivacy@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJ_KW4WindowPrivacy@@@Z
    virtual long SetWindowPrivacy(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextChanged@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@IPEBG@Z
    virtual long TextChanged(EditActionHeader const &, EditControlRange const &, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextPopulated@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJIAEBUEditControlRange@@PEBG@Z
    virtual long TextPopulated(unsigned int, EditControlRange const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UrlChanged@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJ_KIPEBG@Z
    virtual long UrlChanged(uint64_t, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDestroyed@BamoTextInputFrameworkProxy@TextInputFramework@@UEAAJ_K@Z
    virtual long WindowDestroyed(uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@BamoTextInputFrameworkProxy@TextInputFramework@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@BamoTextInputFrameworkProxy@TextInputFramework@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoTextInputFrameworkProxy@TextInputFramework@@MEAAJXZ
    virtual long OnPropertiesRefreshed();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoTextInputFrameworkProxy@TextInputFramework@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoTextInputFrameworkProxy@TextInputFramework@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoTextInputFrameworkProxy@TextInputFramework@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoTextInputFrameworkProxy@TextInputFramework@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace TextInputFramework
