#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 1 member(s).
namespace TextInputFramework {
class BamoImpl {
public:
    class BamoTextAugmentationClassProxyImpl;
    class BamoTextInputFrameworkPrincipalImpl;
    class BamoTextInputFrameworkProxyImpl;
    class BamoTextInputFrameworkStubImpl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextInputFrameworkProxy@BamoImpl@TextInputFramework@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@TextInputFramework_AutoBamos@@PEAPEAVBamoProxy@Bamo@4@@Z
    void CreateTextInputFrameworkProxy(WindissectOpaque *, ::TextInputFramework_AutoBamos::BamoPeer *, ::Microsoft::Bamo::BamoProxy * *);
};
} // namespace TextInputFramework
