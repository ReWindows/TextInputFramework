#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class COneCoreVoidPtrArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@COneCoreVoidPtrArray@@QEAAPEAPEAXH@Z
    void * * Append(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COneCoreVoidPtrArray@@QEAA@XZ
    COneCoreVoidPtrArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompactSize@COneCoreVoidPtrArray@@QEAAXH@Z
    void CompactSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@COneCoreVoidPtrArray@@QEAAHHH@Z
    int Insert(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@COneCoreVoidPtrArray@@QEAAHHH@Z
    int Move(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@COneCoreVoidPtrArray@@QEAAXHH@Z
    void Remove(int, int);
};
