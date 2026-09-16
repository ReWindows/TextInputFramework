#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 11 member(s).
class Tsf4ActionTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@Tsf4ActionTask@@UEAAJJ@Z
    virtual long Complete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@Tsf4ActionTask@@UEAAJJAEBUTextRect@@0@Z
    virtual long Complete(long, TextRect const &, TextRect const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContinuation@Tsf4ActionTask@@UEAA_NXZ
    virtual bool HasContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanceled@Tsf4ActionTask@@UEAAJXZ
    virtual long OnCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunContinuation@Tsf4ActionTask@@UEAAJXZ
    virtual long RunContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Tsf4ActionTask@@QEAAJPEAV?$TEditAction@UITextboxProxy@@UITextInputFrameworkProxy@TextInputFramework@@@@PEAVCAsyncTaskScheduler@@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, CAsyncTaskScheduler *, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Tsf4ActionTask@@QEAA@XZ
    Tsf4ActionTask();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Tsf4ActionTask@@UEAA@XZ
    virtual ~Tsf4ActionTask();
};
