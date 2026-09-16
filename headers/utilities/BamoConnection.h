#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 14 member(s).
namespace TextInputFramework_AutoBamos {
class BamoConnection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoConnection@TextInputFramework_AutoBamos@@QEAA@XZ
    BamoConnection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocatePeer@BamoConnection@TextInputFramework_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z
    virtual long AllocatePeer(::TextInputFramework_AutoBamos::BamoPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilog@BamoConnection@TextInputFramework_AutoBamos@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallProlog@BamoConnection@TextInputFramework_AutoBamos@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@BamoConnection@TextInputFramework_AutoBamos@@MEAAJPEAVBamoPeer@2@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::TextInputFramework_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@BamoConnection@TextInputFramework_AutoBamos@@MEAAJPEAVBamoPeer@2@_N@Z
    virtual long OnPeerDisconnected(::TextInputFramework_AutoBamos::BamoPeer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerRequestsConnect@BamoConnection@TextInputFramework_AutoBamos@@MEAAJIPEAIPEAPEAUMsgString@@@Z
    virtual long OnPeerRequestsConnect(unsigned int, unsigned int *, MsgString * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoConnection@TextInputFramework_AutoBamos@@MEAA@XZ
    virtual ~BamoConnection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Do_not_derive_from_BaseBamoConnection_directly@BamoConnection@TextInputFramework_AutoBamos@@EEBAXXZ
    virtual void Do_not_derive_from_BaseBamoConnection_directly() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoConnection@TextInputFramework_AutoBamos@@EEBAPEAVBaseBamoConnectionImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BaseBamoConnectionImpl * GetImpl() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProtocolId@BamoConnection@TextInputFramework_AutoBamos@@EEBAAEBU_GUID@@XZ
    virtual _GUID const & GetProtocolId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxyCallout@BamoConnection@TextInputFramework_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z
    virtual long SetBootstrapProxyCallout(::Microsoft::Bamo::BamoProxy *);
};
} // namespace TextInputFramework_AutoBamos
