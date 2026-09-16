#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 14 member(s).
class TsfInputProfileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateProfile@TsfInputProfileManager@@UEAAJKGAEBU_GUID@@0PEAUHKL__@@K@Z
    virtual long ActivateProfile(unsigned long, unsigned short, _GUID const &, _GUID const &, HKL__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateProfile@TsfInputProfileManager@@UEAAJKGAEBU_GUID@@0PEAUHKL__@@K@Z
    virtual long DeactivateProfile(unsigned long, unsigned short, _GUID const &, _GUID const &, HKL__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumProfiles@TsfInputProfileManager@@UEAAJGPEAPEAUIEnumTfInputProcessorProfiles@@@Z
    virtual long EnumProfiles(unsigned short, IEnumTfInputProcessorProfiles * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveProfile@TsfInputProfileManager@@UEAAJAEBU_GUID@@PEAUTF_INPUTPROCESSORPROFILE@@@Z
    virtual long GetActiveProfile(_GUID const &, TF_INPUTPROCESSORPROFILE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfile@TsfInputProfileManager@@UEAAJKGAEBU_GUID@@0PEAUHKL__@@PEAUTF_INPUTPROCESSORPROFILE@@@Z
    virtual long GetProfile(unsigned long, unsigned short, _GUID const &, _GUID const &, HKL__*, TF_INPUTPROCESSORPROFILE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInterestedPropertyChanged@TsfInputProfileManager@@UEAAJGPEBXI@Z
    virtual long OnInterestedPropertyChanged(unsigned short, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterProfile@TsfInputProfileManager@@UEAAJAEBU_GUID@@G0PEBGK1KKPEAUHKL__@@KHK@Z
    virtual long RegisterProfile(_GUID const &, unsigned short, _GUID const &, unsigned short const *, unsigned long, unsigned short const *, unsigned long, unsigned long, HKL__*, unsigned long, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseInputProcessor@TsfInputProfileManager@@UEAAJAEBU_GUID@@K@Z
    virtual long ReleaseInputProcessor(_GUID const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TsfInputProfileManager@@QEAAJPEAVTsfSingletonObjectStore@@@Z
    long RuntimeClassInitialize(TsfSingletonObjectStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterProfile@TsfInputProfileManager@@UEAAJAEBU_GUID@@G0K@Z
    virtual long UnregisterProfile(_GUID const &, unsigned short, _GUID const &, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TsfInputProfileManager@@UEAA@XZ
    virtual ~TsfInputProfileManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetClassId@TsfInputProfileManager@@EEBA?AW4TsfSingletonObjects@@XZ
    virtual int _GetClassId() const;
};
