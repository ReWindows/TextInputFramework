#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 21 member(s).
namespace TextInputFramework {
class BamoTextInputFrameworkStub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoTextInputFrameworkStub@TextInputFramework@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTextAugmentation@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@GGAEBUEditControlRange@@@Z
    virtual long AddTextAugmentation(EditActionHeader const &, unsigned short, unsigned short, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@@Z
    virtual long BeginKeyEventPayload(EditActionHeader const &, KeyEventHostInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndComposition@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    virtual long EndComposition(EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndKeyEventPayload@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@_NPEBEI@Z
    virtual long EndKeyEventPayload(EditActionHeader const &, KeyEventHostInfo const &, bool, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyEventProcessed@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@AEBUKeyEventText@@PEBEI@Z
    virtual long KeyEventProcessed(EditActionHeader const &, KeyEventHostInfo const &, KeyEventText const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderDisconnected@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJG@Z
    virtual long ProviderDisconnected(unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoTextInputFrameworkStub@TextInputFramework@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTextAugmentations@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long RemoveTextAugmentations(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBG@Z
    virtual long ReplaceText(EditActionHeader const &, EditControlRange const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResyncRequested@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@@Z
    virtual long ResyncRequested(EditActionHeader const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectText@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long SelectText(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartComposition@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long StartComposition(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscriptionChanged@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUCoreImeSubscription@IME@Input@Internal@UI@Windows@@@Z
    virtual long SubscriptionChanged(::Windows::UI::Internal::Input::IME::CoreImeSubscription const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionInfo@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    virtual long UpdateCompositionInfo(EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConfirmed@BamoTextInputFrameworkStub@TextInputFramework@@UEAAJIG@Z
    virtual long UpdateConfirmed(unsigned int, unsigned short);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoTextInputFrameworkStub@TextInputFramework@@EEBAPEAVBamoStubImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace TextInputFramework
