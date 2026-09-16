#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 11 member(s).
namespace TsfThreadInputManager {
class CKeyEventProcessorCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInputProfile@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAJUCoreInputProfile@@@Z
    virtual long ActivateInputProfile(CoreInputProfile);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAJUKeyEventHostInfo@@@Z
    virtual long BeginKeyEventPayload(KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyDown@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAJIIPEA_N@Z
    virtual long KeyDown(unsigned int, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEventProcessingCanceled@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAJXZ
    virtual long OnKeyEventProcessingCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEventProcessingCompleted@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAJ_NPEAI@Z
    virtual long OnKeyEventProcessingCompleted(bool, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestConversionModeChange@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAJW4IMEConversionMode@@@Z
    virtual long RequestConversionModeChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestDocFeed@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAJXZ
    virtual long RequestDocFeed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPredictionMode@CKeyEventProcessorCallback@TsfThreadInputManager@@UEAAJ_NPEAUMsgString@@@Z
    virtual long SetPredictionMode(bool, MsgString *);
};
} // namespace TsfThreadInputManager
