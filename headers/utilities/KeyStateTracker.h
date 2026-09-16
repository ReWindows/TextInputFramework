#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 16 member(s).
class KeyStateTracker {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyDown@KeyStateTracker@@UEAA_NE@Z
    virtual bool GetKeyDown(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyState@KeyStateTracker@@UEAAFH@Z
    virtual short GetKeyState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyToggled@KeyStateTracker@@UEAA_NE@Z
    virtual bool GetKeyToggled(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardState@KeyStateTracker@@UEAA_NPEAE@Z
    virtual bool GetKeyboardState(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModifierFlags@KeyStateTracker@@UEAAGXZ
    virtual unsigned short GetModifierFlags();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyStateTracker@@QEAA@XZ
    KeyStateTracker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@KeyStateTracker@@UEAAXEG@Z
    virtual void OnKeyEvent(unsigned char, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyStates@KeyStateTracker@@UEAAXPEBE@Z
    virtual void SetKeyStates(unsigned char const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToggleKeyState@KeyStateTracker@@IEAAXE@Z
    void UpdateToggleKeyState(unsigned char);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAsyncKeyStateTracker@KeyStateTracker@@AEAAJXZ
    long InitializeAsyncKeyStateTracker();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyDown@KeyStateTracker@@EEAAXE@Z
    virtual void SetKeyDown(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyToggled@KeyStateTracker@@EEAAXE@Z
    virtual void SetKeyToggled(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyUntoggled@KeyStateTracker@@EEAAXE@Z
    virtual void SetKeyUntoggled(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyUp@KeyStateTracker@@EEAAXE@Z
    virtual void SetKeyUp(unsigned char);
};
