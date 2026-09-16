#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 30 member(s).
namespace TextInputFramework {
class BamoTextInputFrameworkPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoTextInputFrameworkPrincipal@TextInputFramework@@QEAA@PEAVBamoTextInputFrameworkPrincipalOwner@1@PEAVBamoConnection@TextInputFramework_AutoBamos@@@Z
    BamoTextInputFrameworkPrincipal(::TextInputFramework::BamoTextInputFrameworkPrincipalOwner *, ::TextInputFramework_AutoBamos::BamoConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastAddTextAugmentation@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@GGAEBUEditControlRange@@@Z
    virtual long BroadcastAddTextAugmentation(EditActionHeader const &, unsigned short, unsigned short, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastBeginKeyEventPayload@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@@Z
    virtual long BroadcastBeginKeyEventPayload(EditActionHeader const &, KeyEventHostInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastEndComposition@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    virtual long BroadcastEndComposition(EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastEndKeyEventPayload@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@_NPEBEI@Z
    virtual long BroadcastEndKeyEventPayload(EditActionHeader const &, KeyEventHostInfo const &, bool, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastKeyEventProcessed@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@AEBUKeyEventText@@PEBEI@Z
    virtual long BroadcastKeyEventProcessed(EditActionHeader const &, KeyEventHostInfo const &, KeyEventText const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastProviderDisconnected@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJG@Z
    virtual long BroadcastProviderDisconnected(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoveTextAugmentations@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long BroadcastRemoveTextAugmentations(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastReplaceText@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBG@Z
    virtual long BroadcastReplaceText(EditActionHeader const &, EditControlRange const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastResyncRequested@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@@Z
    virtual long BroadcastResyncRequested(EditActionHeader const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSelectText@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long BroadcastSelectText(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastStartComposition@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long BroadcastStartComposition(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSubscriptionChanged@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUCoreImeSubscription@IME@Input@Internal@UI@Windows@@@Z
    virtual long BroadcastSubscriptionChanged(::Windows::UI::Internal::Input::IME::CoreImeSubscription const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastUpdateCompositionInfo@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    virtual long BroadcastUpdateCompositionInfo(EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastUpdateConfirmed@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJIG@Z
    virtual long BroadcastUpdateConfirmed(unsigned int, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubscription@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAAEBUTextServiceSubscription@core@tsf4@@XZ
    virtual WindissectOpaque const & GetSubscription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAugmentationClassList@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAPEAVBamoList_TextInputFramework_TextAugmentationClassPrincipal_Principal@TextInputFramework_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::TextInputFramework_AutoBamos::BamoList_TextInputFramework_TextAugmentationClassPrincipal_Principal * GetTextAugmentationClassList();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSubscription@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAXAEBUTextServiceSubscription@core@tsf4@@@Z
    virtual void SetSubscription(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextAugmentationClassList@BamoTextInputFrameworkPrincipal@TextInputFramework@@UEAAXPEAVBamoList_TextInputFramework_TextAugmentationClassPrincipal_Principal@TextInputFramework_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual void SetTextAugmentationClassList(::Microsoft::Bamo::Lib::TextInputFramework_AutoBamos::BamoList_TextInputFramework_TextAugmentationClassPrincipal_Principal *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoTextInputFrameworkPrincipal@TextInputFramework@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoTextInputFrameworkPrincipal@TextInputFramework@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoTextInputFrameworkPrincipal@TextInputFramework@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace TextInputFramework
