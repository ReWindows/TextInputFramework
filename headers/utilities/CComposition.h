#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 17 member(s).
class CComposition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndComposition@CComposition@@UEAAJK@Z
    virtual long EndComposition(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerClsid@CComposition@@UEAAJPEAU_GUID@@@Z
    virtual long GetOwnerClsid(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRange@CComposition@@UEAAJPEAPEAUITfRange@@@Z
    virtual long GetRange(ITfRange * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThis@CComposition@@UEAAPEAV1@XZ
    virtual CComposition * GetThis();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CComposition@@QEAAJKPEAVCInputContext@@PEAUIAnchor@@1PEAUITfCompositionSink@@@Z
    long RuntimeClassInitialize(unsigned long, CInputContext *, IAnchor *, IAnchor *, ITfCompositionSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftEnd@CComposition@@UEAAJKPEAUITfRange@@@Z
    virtual long ShiftEnd(unsigned long, ITfRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftStart@CComposition@@UEAAJKPEAUITfRange@@@Z
    virtual long ShiftStart(unsigned long, ITfRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsRangeCovered@CComposition@@SA?AW4IRC@@PEAVCInputContext@@KPEAUIAnchor@@1PEAPEAV1@@Z
    static int _IsRangeCovered(CInputContext *, unsigned long, IAnchor *, IAnchor *, CComposition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveFromCompositionList@CComposition@@QEAAHPEAPEAV1@@Z
    int _RemoveFromCompositionList(CComposition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendOnTerminated@CComposition@@QEAAXKK@Z
    void _SendOnTerminated(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Terminate@CComposition@@QEAAXK@Z
    void _Terminate(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearComposing@CComposition@@AEAAXKPEAUIAnchor@@0@Z
    void _ClearComposing(unsigned long, IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetComposing@CComposition@@AEAAXKPEAUIAnchor@@0@Z
    void _SetComposing(unsigned long, IAnchor *, IAnchor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Uninit@CComposition@@AEAAXXZ
    void _Uninit();
};
