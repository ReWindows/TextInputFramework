#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 2 member(s).
class InputServiceLatencyTelemetry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureDurationinMS@InputServiceLatencyTelemetry@@QEAAN_K0@Z
    double MeasureDurationinMS(uint64_t, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UploadData@InputServiceLatencyTelemetry@@AEAAXXZ
    void _UploadData();
};
