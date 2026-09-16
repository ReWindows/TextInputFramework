#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class CEnumInputProcessorProfiles {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumInputProcessorProfiles@@QEAA@XZ
    CEnumInputProcessorProfiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumInputProcessorProfiles@@UEAAJPEAPEAUIEnumTfInputProcessorProfiles@@@Z
    virtual long Clone(IEnumTfInputProcessorProfiles * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumInputProcessorProfiles@@UEAAJKPEAUTF_INPUTPROCESSORPROFILE@@PEAK@Z
    virtual long Next(unsigned long, TF_INPUTPROCESSORPROFILE *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumInputProcessorProfiles@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumInputProcessorProfiles@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumInputProcessorProfiles@@UEAA@XZ
    virtual ~CEnumInputProcessorProfiles();
};
