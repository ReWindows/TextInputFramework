#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 7 member(s).
class TextInputHostAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@TextInputHostAdapter@@QEAAJXZ
    long Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextInputHostAdapter@@QEAAJPEAVTextInputHost@@@Z
    long RuntimeClassInitialize(TextInputHost *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputHostAdapter@@UEAA@XZ
    virtual ~TextInputHostAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MsgEndpointProc@TextInputHostAdapter@@AEAAJPEBXH@Z
    long MsgEndpointProc(void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MsgEndpointProc@TextInputHostAdapter@@CAJPEAXPEBXH@Z
    static long s_MsgEndpointProc(void *, void const *, int);
};
