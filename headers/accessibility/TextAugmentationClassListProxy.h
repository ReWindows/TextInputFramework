#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class TextAugmentationClassListProxy {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteClear@TextAugmentationClassListProxy@@MEAAJXZ
    virtual long RemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteInsert@TextAugmentationClassListProxy@@MEAAJIPEAVBamoTextAugmentationClassProxy@TextInputFramework@@@Z
    virtual long RemoteInsert(unsigned int, ::TextInputFramework::BamoTextAugmentationClassProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteRemove@TextAugmentationClassListProxy@@MEAAJI@Z
    virtual long RemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteReplace@TextAugmentationClassListProxy@@MEAAJIPEAVBamoTextAugmentationClassProxy@TextInputFramework@@@Z
    virtual long RemoteReplace(unsigned int, ::TextInputFramework::BamoTextAugmentationClassProxy *);
};
