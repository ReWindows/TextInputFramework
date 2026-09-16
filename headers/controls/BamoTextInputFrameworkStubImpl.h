#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 21 member(s).
namespace TextInputFramework::BamoImpl {
class BamoTextInputFrameworkStubImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTextAugmentation@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@GGAEBUEditControlRange@@@Z
    long AddTextAugmentation(EditActionHeader const &, unsigned short, unsigned short, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@@Z
    long BeginKeyEventPayload(EditActionHeader const &, KeyEventHostInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndComposition@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    long EndComposition(EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndKeyEventPayload@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@_NPEBEI@Z
    long EndKeyEventPayload(EditActionHeader const &, KeyEventHostInfo const &, bool, unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyEventProcessed@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@AEBUKeyEventText@@PEBEI@Z
    long KeyEventProcessed(EditActionHeader const &, KeyEventHostInfo const &, KeyEventText const &, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProviderDisconnected@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJG@Z
    long ProviderDisconnected(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTextAugmentations@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    long RemoveTextAugmentations(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBG@Z
    long ReplaceText(EditActionHeader const &, EditControlRange const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResyncRequested@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@@Z
    long ResyncRequested(EditActionHeader const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectText@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    long SelectText(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartComposition@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    long StartComposition(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscriptionChanged@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUCoreImeSubscription@IME@Input@Internal@UI@Windows@@@Z
    long SubscriptionChanged(::Windows::UI::Internal::Input::IME::CoreImeSubscription const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionInfo@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    long UpdateCompositionInfo(EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConfirmed@BamoTextInputFrameworkStubImpl@BamoImpl@TextInputFramework@@QEAAJIG@Z
    long UpdateConfirmed(unsigned int, unsigned short);
};
} // namespace TextInputFramework::BamoImpl
