#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 12 member(s).
class MonitorViewRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddView@MonitorViewRegistration@@SA?AV?$ComPtr@VMonitorViewRegistration@@@WRL@Microsoft@@II_N0@Z
    static WindissectOpaque AddView(unsigned int, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@MonitorViewRegistration@@SAXXZ
    static void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTopLevelView@MonitorViewRegistration@@SA?AV?$ComPtr@VMonitorViewRegistration@@@WRL@Microsoft@@I@Z
    static WindissectOpaque FindTopLevelView(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindView@MonitorViewRegistration@@SA?AV?$ComPtr@VMonitorViewRegistration@@@WRL@Microsoft@@I@Z
    static WindissectOpaque FindView(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompositeView@MonitorViewRegistration@@QEAA_NXZ
    bool IsCompositeView();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MonitorViewRegistration@@QEAA@XZ
    MonitorViewRegistration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveView@MonitorViewRegistration@@SA?AV?$ComPtr@VMonitorViewRegistration@@@WRL@Microsoft@@I@Z
    static WindissectOpaque RemoveView(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentView@MonitorViewRegistration@@SA?AV?$ComPtr@VMonitorViewRegistration@@@WRL@Microsoft@@III_N0@Z
    static WindissectOpaque ReparentView(unsigned int, unsigned int, unsigned int, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MonitorViewRegistration@@UEAA@XZ
    virtual ~MonitorViewRegistration();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddViewWorker@MonitorViewRegistration@@CAXV?$ComPtr@VMonitorViewRegistration@@@WRL@Microsoft@@@Z
    static void AddViewWorker(WindissectOpaque);
};
