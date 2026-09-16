#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 3 member(s).
class GuidMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@GuidMap@@QEAAKAEBU_GUID@@@Z
    unsigned long Add(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindGuid@GuidMap@@QEAAKAEBU_GUID@@@Z
    unsigned long FindGuid(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGUID@GuidMap@@QEAA?AU_GUID@@K@Z
    _GUID GetGUID(unsigned long);
};
