#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 14 member(s).
class CCompartment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseSink@CCompartment@@UEAAJAEBU_GUID@@PEAUIUnknown@@PEAK@Z
    virtual long AdviseSink(_GUID const &, IUnknown *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompartment@@QEAA@XZ
    CCompartment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyCompartmentValue@CCompartment@@UEAAJK@Z
    virtual long EmptyCompartmentValue(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CCompartment@@UEAAJPEAUtagVARIANT@@@Z
    virtual long GetValue(tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSetValue@CCompartment@@UEAAJKPEBUtagVARIANT@@H@Z
    virtual long InternalSetValue(unsigned long, tagVARIANT const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CCompartment@@UEAAJKPEBUtagVARIANT@@@Z
    virtual long SetValue(unsigned long, tagVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseSink@CCompartment@@UEAAJK@Z
    virtual long UnadviseSink(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompartment@@UEAA@XZ
    virtual ~CCompartment();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReleaseClearCompartment@CCompartment@@AEAAHXZ
    int IsReleaseClearCompartment();
};
