#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 9 member(s).
class CEnumRenderingMarkup {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumRenderingMarkup@@QEAA@XZ
    CEnumRenderingMarkup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumRenderingMarkup@@UEAAJPEAPEAUIEnumTfRenderingMarkup@@@Z
    virtual long Clone(IEnumTfRenderingMarkup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumRenderingMarkup@@UEAAJKPEAU__MIDL___MIDL_itf_msctfp_0000_0019_0001@@PEAK@Z
    virtual long Next(unsigned long, __MIDL___MIDL_itf_msctfp_0000_0019_0001*, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumRenderingMarkup@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumRenderingMarkup@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumRenderingMarkup@@UEAA@XZ
    virtual ~CEnumRenderingMarkup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CEnumRenderingMarkup@@AEAAHKPEAVCRange@@PEAVCInputContext@@@Z
    int _Init(unsigned long, CRange *, CInputContext *);
};
