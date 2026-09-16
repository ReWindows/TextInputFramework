#pragma once
#include "../windissect_forwards.h"

// Reconstructed from TextInputFramework.dll by Windissect. 4 member(s).
namespace ARI::ProcessToken {
class SysAppId {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z
    long GetAppUserModelId(_TOKEN_SECURITY_ATTRIBUTE_V1const *, unsigned int, unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z
    long GetPackageFamilyName(_TOKEN_SECURITY_ATTRIBUTE_V1const *, unsigned int, unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z
    long GetPackageRelativeApplicationId(_TOKEN_SECURITY_ATTRIBUTE_V1const *, unsigned int, unsigned int *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z
    long Open(void *, _TOKEN_SECURITY_ATTRIBUTES_INFORMATION * *, _TOKEN_SECURITY_ATTRIBUTE_V1const * *, bool *);
};
} // namespace ARI::ProcessToken
