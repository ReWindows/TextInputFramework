#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 14 member(s).
namespace BamoImpl::TextInputFramework_AutoBamos {
class BamoPeerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_Microsoft_Bamo_Lib_TextInputFramework_AutoBamos_BamoList_TextInputFramework_TextAugmentationClassPrincipal_Proxy@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_Microsoft_Bamo_Lib_TextInputFramework_AutoBamos_BamoList_TextInputFramework_TextAugmentationClassPrincipal_Proxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_TextInputFramework_BamoTextAugmentationClassProxy@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_TextInputFramework_BamoTextAugmentationClassProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_TextInputFramework_BamoTextInputFrameworkProxy@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_TextInputFramework_BamoTextInputFrameworkProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendAckProxyReference@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@UEAAXI_N@Z
    virtual void SendAckProxyReference(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCheckProtocol@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z
    virtual void SendCheckProtocol(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendDisposeProxy@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@UEAAXI_N@Z
    virtual void SendDisposeProxy(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendProxyDisposed@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendProxyDisposed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRequestDisposeProxy@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendRequestDisposeProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSetBootstrapProxy@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendSetBootstrapProxy(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogResumeOutboundMessages@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@EEBAXII@Z
    virtual void LogResumeOutboundMessages(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSuspendOutboundMessages@BamoPeerImpl@TextInputFramework_AutoBamos@BamoImpl@@EEBAXII@Z
    virtual void LogSuspendOutboundMessages(unsigned int, unsigned int) const;
};
} // namespace BamoImpl::TextInputFramework_AutoBamos
