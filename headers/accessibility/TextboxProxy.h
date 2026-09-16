#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 17 member(s).
class TextboxProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextboxProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@TextboxProxy@@UEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@@Z
    virtual long BeginKeyEventPayload(EditActionHeader const &, KeyEventHostInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndComposition@TextboxProxy@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    virtual long EndComposition(EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndKeyEventPayload@TextboxProxy@@UEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@_N@Z
    virtual long EndKeyEventPayload(EditActionHeader const &, KeyEventHostInfo const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyEventProcessed@TextboxProxy@@UEAAJAEBUEditActionHeader@@AEBUKeyEventHostInfo@@AEBUKeyEventText@@@Z
    virtual long KeyEventProcessed(EditActionHeader const &, KeyEventHostInfo const &, KeyEventText const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextboxProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryLayout@TextboxProxy@@UEAAXAEBUEditControlRange@@@Z
    virtual void QueryLayout(EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuerySelection@TextboxProxy@@UEAAXXZ
    virtual void QuerySelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryText@TextboxProxy@@UEAAXAEBUEditControlRange@@@Z
    virtual void QueryText(EditControlRange const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextboxProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceText@TextboxProxy@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBG@Z
    virtual long ReplaceText(EditActionHeader const &, EditControlRange const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestEditSession@TextboxProxy@@UEAAX_N0@Z
    virtual void RequestEditSession(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectText@TextboxProxy@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long SelectText(EditActionHeader const &, EditControlRange const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@TextboxProxy@@UEAAXPEAVTextboxRegistration@@@Z
    virtual void SetOwner(TextboxRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartComposition@TextboxProxy@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@@Z
    virtual long StartComposition(EditActionHeader const &, EditControlRange const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionInfo@TextboxProxy@@UEAAJAEBUEditActionHeader@@AEBUEditControlRange@@PEBGPEBEI@Z
    virtual long UpdateCompositionInfo(EditActionHeader const &, EditControlRange const &, unsigned short const *, unsigned char const *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLayoutBounds@TextboxProxy@@AEAAXPEAVTextboxRegistration@@AEBUEditControlRange@@@Z
    void _GetLayoutBounds(TextboxRegistration *, EditControlRange const &);
};
