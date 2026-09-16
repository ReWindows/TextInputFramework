#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 6 member(s).
class TextInputClientRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRegisteredEditControl@TextInputClientRegistration@@QEAAJIPEAPEAVEditControlRegistration@@@Z
    long FindRegisteredEditControl(unsigned int, EditControlRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TextInputClientRegistration@@QEAAJPEAUIMessageProxy@@PEAUITextInputServerOwner@@IIU_GUID@@@Z
    long RuntimeClassInitialize(IMessageProxy *, ITextInputServerOwner *, unsigned int, unsigned int, _GUID);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextInputClientRegistration@@QEAA@XZ
    TextInputClientRegistration();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputClientRegistration@@UEAA@XZ
    virtual ~TextInputClientRegistration();
};
