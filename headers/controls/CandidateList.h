#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 20 member(s).
namespace CandidateWindowAPI {
class CandidateList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItem@CandidateList@CandidateWindowAPI@@UEAAJPEAUICandidateItem@@@Z
    virtual long AddItem(ICandidateItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CandidateList@CandidateWindowAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CandidateList@CandidateWindowAPI@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoExpandEnabled@CandidateList@CandidateWindowAPI@@UEAAJPEAH@Z
    virtual long GetAutoExpandEnabled(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CandidateList@CandidateWindowAPI@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCountPerPage@CandidateList@CandidateWindowAPI@@UEAAJPEAI@Z
    virtual long GetCountPerPage(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGuidanceString@CandidateList@CandidateWindowAPI@@UEAAJPEAPEAG@Z
    virtual long GetGuidanceString(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexMode@CandidateList@CandidateWindowAPI@@UEAAJPEAI@Z
    virtual long GetIndexMode(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CandidateList@CandidateWindowAPI@@UEAAJIPEAPEAUICandidateItem@@@Z
    virtual long GetItem(unsigned int, ICandidateItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStyle@CandidateList@CandidateWindowAPI@@UEAAJPEAI@Z
    virtual long GetStyle(unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CandidateList@CandidateWindowAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CandidateList@CandidateWindowAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoExpandEnabled@CandidateList@CandidateWindowAPI@@UEAAJH@Z
    virtual long SetAutoExpandEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCountPerPage@CandidateList@CandidateWindowAPI@@UEAAJI@Z
    virtual long SetCountPerPage(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGuidanceString@CandidateList@CandidateWindowAPI@@UEAAJPEBG@Z
    virtual long SetGuidanceString(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndexMode@CandidateList@CandidateWindowAPI@@UEAAJI@Z
    virtual long SetIndexMode(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStyle@CandidateList@CandidateWindowAPI@@UEAAJI@Z
    virtual long SetStyle(unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CandidateList@CandidateWindowAPI@@EEAA@XZ
    virtual ~CandidateList();
};
} // namespace CandidateWindowAPI
