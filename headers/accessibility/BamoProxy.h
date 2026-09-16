#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 4 member(s).
namespace Microsoft::Bamo {
class BamoProxy {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@BamoProxy@Bamo@Microsoft@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@BamoProxy@Bamo@Microsoft@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshed@BamoProxy@Bamo@Microsoft@@MEAAJXZ
    virtual long OnPropertiesRefreshed();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ
    void AbandonOnDisconnect();
};
} // namespace Microsoft::Bamo
