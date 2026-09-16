#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 8 member(s).
class CReconversionString {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CReconversionString@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReconversionString@@QEAA@KPEAG@Z
    CReconversionString(unsigned long, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndex@CReconversionString@@UEAAJPEAK@Z
    virtual long GetIndex(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CReconversionString@@UEAAJPEAPEAG@Z
    virtual long GetString(unsigned short * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CReconversionString@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CReconversionString@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReconversionString@@QEAA@XZ
    ~CReconversionString();
};
