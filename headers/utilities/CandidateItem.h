#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 16 member(s).
namespace CandidateWindowAPI {
class CandidateItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CandidateItem@CandidateWindowAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayString@CandidateItem@CandidateWindowAPI@@UEAAJPEAPEAG@Z
    virtual long GetDisplayString(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayStringRef@CandidateItem@CandidateWindowAPI@@UEAAJPEAPEBG@Z
    virtual long GetDisplayStringRef(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguage@CandidateItem@CandidateWindowAPI@@UEAAJPEAG@Z
    virtual long GetLanguage(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadataString@CandidateItem@CandidateWindowAPI@@UEAAJPEAPEAG@Z
    virtual long GetMetadataString(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadataStringRef@CandidateItem@CandidateWindowAPI@@UEAAJPEAPEBG@Z
    virtual long GetMetadataStringRef(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStyle@CandidateItem@CandidateWindowAPI@@UEAAJPEAI@Z
    virtual long GetStyle(unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CandidateItem@CandidateWindowAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CandidateItem@CandidateWindowAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayString@CandidateItem@CandidateWindowAPI@@UEAAJPEBG@Z
    virtual long SetDisplayString(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLanguage@CandidateItem@CandidateWindowAPI@@UEAAJG@Z
    virtual long SetLanguage(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMetadataString@CandidateItem@CandidateWindowAPI@@UEAAJPEBG@Z
    virtual long SetMetadataString(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMetadataStringByteLen@CandidateItem@CandidateWindowAPI@@QEAAJPEBEI@Z
    long SetMetadataStringByteLen(unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStyle@CandidateItem@CandidateWindowAPI@@UEAAJI@Z
    virtual long SetStyle(unsigned int);
};
} // namespace CandidateWindowAPI
