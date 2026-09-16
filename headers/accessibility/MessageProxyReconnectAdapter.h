#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 15 member(s).
class MessageProxyReconnectAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ
    long Dispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z
    virtual long GetMessageProxy(IMessageProxy * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MessageProxyReconnectAdapter@@QEAA@XZ
    MessageProxyReconnectAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z
    long RuntimeClassInitialize(_GUID const &, unsigned short const *, IMessageProxyReconnectAdapterOwner *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageProxyReconnectAdapter@@UEAA@XZ
    virtual ~MessageProxyReconnectAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ
    long AttemptPullProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ
    long CreateRemoteProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ
    long StartConnectionRetryTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ
    long StopConnectionRetryTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z
    static long s_AttemptPullProxy(void *);
};
