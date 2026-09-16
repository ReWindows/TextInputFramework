#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 11 member(s).
class ClientOwnerRegistration {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ClientOwnerRegistration@@QEAA@XZ
    ClientOwnerRegistration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTBR@ClientOwnerRegistration@@QEAAXPEAVTextInputClient@@@Z
    void CreateTBR(TextInputClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyTBR@ClientOwnerRegistration@@QEAAXXZ
    void DestroyTBR();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRangeLayoutTrackingEnabled@ClientOwnerRegistration@@QEBA_NXZ
    bool IsRangeLayoutTrackingEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@ClientOwnerRegistration@@QEAAXXZ
    void OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCompositionInfo@ClientOwnerRegistration@@QEAAXXZ
    void ResetCompositionInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ClientOwnerRegistration@@QEAAJPEAVCTextInputClientOwnerAsync@@PEAUEditControlInfo@@HE@Z
    long RuntimeClassInitialize(CTextInputClientOwnerAsync *, EditControlInfo *, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionInfo@ClientOwnerRegistration@@QEAA_NHHH@Z
    bool UpdateCompositionInfo(int, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClientOwnerRegistration@@UEAA@XZ
    virtual ~ClientOwnerRegistration();
};
