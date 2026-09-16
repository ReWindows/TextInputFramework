#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class BamoTextInputFrameworkServerConnection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoTextInputFrameworkServerConnection@@QEAA@PEAVBamoTextInputFrameworkPrincipalOwner@TextInputFramework@@@Z
    BamoTextInputFrameworkServerConnection(::TextInputFramework::BamoTextInputFrameworkPrincipalOwner *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoTextInputFrameworkServerConnection@@UEAA@XZ
    virtual ~BamoTextInputFrameworkServerConnection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@BamoTextInputFrameworkServerConnection@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@BamoTextInputFrameworkServerConnection@@MEAAJPEAVBamoPeer@TextInputFramework_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::TextInputFramework_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
};
