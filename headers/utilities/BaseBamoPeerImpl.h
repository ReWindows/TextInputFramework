#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 7 member(s).
namespace Microsoft::BamoImpl {
class BaseBamoPeerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z
    long AckProxyReference(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ
    IMessageCallSendHost * GetSendHost() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z
    void Initialize(::Microsoft::BamoImpl::BaseBamoConnectionImpl *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkProxyReady@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z
    long MarkProxyReady(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ
    void OnDisconnected();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ
    virtual ~BaseBamoPeerImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ
    virtual void OnZeroReferenceCount();
};
} // namespace Microsoft::BamoImpl
