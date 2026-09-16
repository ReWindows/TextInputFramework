#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 5 member(s).
class CTSF3CandidateMessage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CTSF3CandidateMessage@@UEAAXPEAUIInputContextAdapter@@@Z
    virtual void Execute(IInputContextAdapter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDocumentAccessRequired@CTSF3CandidateMessage@@UEBA_NXZ
    virtual bool IsDocumentAccessRequired() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@CTSF3CandidateMessage@@UEBA_NXZ
    virtual bool IsReadOnly() const;
};
