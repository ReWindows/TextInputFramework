#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class TextInputHostSiteAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextInputHostSiteAdapter@@QEAAJPEAVTextInputHostSite@@@Z
    long RuntimeClassInitialize(TextInputHostSite *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputHostSiteAdapter@@UEAA@XZ
    virtual ~TextInputHostSiteAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MsgEndpointProc@TextInputHostSiteAdapter@@AEAAJPEBXH@Z
    long MsgEndpointProc(void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MsgEndpointProc@TextInputHostSiteAdapter@@CAJPEAXPEBXH@Z
    static long s_MsgEndpointProc(void *, void const *, int);
};
