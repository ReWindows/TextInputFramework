// Flat C exports observed in TextInputFramework.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef TEXTINPUTFRAMEWORK_C_H
#define TEXTINPUTFRAMEWORK_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: tsfGetKeyState (ABI unverified)
// Export: TextInputClientCreate (ABI unverified)
// Export: TextInputClientCreate2 (ABI unverified)
// Export: TsfOneCreate (ABI unverified)
// Export: InputFocusChanged (ABI unverified)
// Export: TextInputHostGetForHwnd (ABI unverified)
// Export: TextInputHostCreate (ABI unverified)
// Export: TextInputHostCreateEx (ABI unverified)
// Export: TextInputServerCreate (ABI unverified)
// Export: DllCanUnloadNow (ABI unverified)
// Export: DllGetActivationFactory (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: NavigateFocusInfoCreate (ABI unverified)
// Export: TextInputHostGetCurrent (ABI unverified)
// Export: TextInputHostSiteCreate (ABI unverified)
// Export: tsfGetAsyncKeyState (ABI unverified)
// Export: tsfGetKeyboardState (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // TEXTINPUTFRAMEWORK_C_H
