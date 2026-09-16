#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 12 member(s).
class EditBufferCacheTracker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCached@EditBufferCacheTracker@@QEAAJHHAEA_N@Z
    long CheckCached(int, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRegion@EditBufferCacheTracker@@QEAAJHH@Z
    long ClearRegion(int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EditBufferCacheTracker@@QEAA@IPEAVTextInputClient@@@Z
    EditBufferCacheTracker(unsigned int, TextInputClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRegion@EditBufferCacheTracker@@QEAAJHH@Z
    long EnsureRegion(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendingRegionToPopulate@EditBufferCacheTracker@@QEAAJPEAVClientOwnerRegistration@@HHHAEAH111@Z
    long GetExtendingRegionToPopulate(ClientOwnerRegistration *, int, int, int, int &, int &, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextRangeToUnpopulate@EditBufferCacheTracker@@QEAAXHHAEAH0@Z
    void GetNextRangeToUnpopulate(int, int, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopRangesForSelection@EditBufferCacheTracker@@QEAAXHHHAEAH000@Z
    void GetPopRangesForSelection(int, int, int, int &, int &, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegionAtPosition@EditBufferCacheTracker@@QEAAJHAEAH0@Z
    long GetRegionAtPosition(int, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegionToPopulate@EditBufferCacheTracker@@QEAAJHHAEAH0HH@Z
    long GetRegionToPopulate(int, int, int &, int &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTextChange@EditBufferCacheTracker@@QEAAJHHH@Z
    long NotifyTextChange(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTextChangeFromInputService@EditBufferCacheTracker@@QEAAJHHH@Z
    long NotifyTextChangeFromInputService(int, int, int);
};
