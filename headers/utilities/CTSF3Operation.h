#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 7 member(s).
class CTSF3Operation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDocumentAccessRequired@CTSF3Operation@@UEBA_NXZ
    virtual bool IsDocumentAccessRequired() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@CTSF3Operation@@UEBA_NXZ
    virtual bool IsReadOnly() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTSF3Operation@@QEAAIXZ
    unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFinalizeExternalComposition@CTSF3Operation@@UEBA_NXZ
    virtual bool ShouldFinalizeExternalComposition() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTSF3Operation@@UEAA@XZ
    virtual ~CTSF3Operation();
};
