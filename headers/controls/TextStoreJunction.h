#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 13 member(s).
namespace TextInputFramework::TraceLogging {
class TextStoreJunction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionQueueAdded@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@AEBUProviderTracingId@@G@Z
    static void ActionQueueAdded(int, TextboxTracingId const &, ProviderTracingId const &, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionQueueRemoved@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@G@Z
    static void ActionQueueRemoved(int, TextboxTracingId const &, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BASE_changed@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@G_N@Z
    static void BASE_changed(int, TextboxTracingId const &, unsigned short, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Created@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@@Z
    static void Created(int, TextboxTracingId const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroyed@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@@Z
    static void Destroyed(int, TextboxTracingId const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditActionCompleted@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@AEBUEditActionHeader@@W4EditActionState@@@Z
    static void EditActionCompleted(int, TextboxTracingId const &, EditActionHeader const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditActionReceived@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@AEBUEditActionHeader@@UEditControlRange@@HH@Z
    static void EditActionReceived(int, TextboxTracingId const &, EditActionHeader const &, EditControlRange, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialized@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@GHUEditControlRange@@@Z
    static void Initialized(int, TextboxTracingId const &, unsigned short, int, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyUpdateConfirmed@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@I@Z
    static void LegacyUpdateConfirmed(int, TextboxTracingId const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OrphanedActionDropped@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@AEBUEditActionHeader@@@Z
    static void OrphanedActionDropped(int, TextboxTracingId const &, EditActionHeader const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@G@Z
    static void Reset(int, TextboxTracingId const &, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConfirmed@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@GG@Z
    static void UpdateConfirmed(int, TextboxTracingId const &, unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateReceived@TextStoreJunction@TraceLogging@TextInputFramework@@SAXW4TextStoreJunctionType@@AEBUTextboxTracingId@@AEBUEditActionHeader@@UEditControlRange@@HH@Z
    static void UpdateReceived(int, TextboxTracingId const &, EditActionHeader const &, EditControlRange, int, int);
};
} // namespace TextInputFramework::TraceLogging
