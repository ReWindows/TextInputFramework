#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 5 member(s).
class CTSF3TextChange {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTSF3TextChange@@QEAA@AEBUEditControlRange@@PEAUMsgString@@@Z
    CTSF3TextChange(EditControlRange const &, MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CTSF3TextChange@@UEAAXPEAUIInputContextAdapter@@@Z
    virtual void Execute(IInputContextAdapter *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTSF3TextChange@@UEAA@XZ
    virtual ~CTSF3TextChange();
};
