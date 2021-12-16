// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.PrincipalPolicy
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA27EC
  struct PrincipalPolicy/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PrincipalPolicy
    constexpr PrincipalPolicy(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Principal.PrincipalPolicy UnauthenticatedPrincipal
    static constexpr const int UnauthenticatedPrincipal = 0;
    // Get static field: static public System.Security.Principal.PrincipalPolicy UnauthenticatedPrincipal
    static System::Security::Principal::PrincipalPolicy _get_UnauthenticatedPrincipal();
    // Set static field: static public System.Security.Principal.PrincipalPolicy UnauthenticatedPrincipal
    static void _set_UnauthenticatedPrincipal(System::Security::Principal::PrincipalPolicy value);
    // static field const value: static public System.Security.Principal.PrincipalPolicy NoPrincipal
    static constexpr const int NoPrincipal = 1;
    // Get static field: static public System.Security.Principal.PrincipalPolicy NoPrincipal
    static System::Security::Principal::PrincipalPolicy _get_NoPrincipal();
    // Set static field: static public System.Security.Principal.PrincipalPolicy NoPrincipal
    static void _set_NoPrincipal(System::Security::Principal::PrincipalPolicy value);
    // static field const value: static public System.Security.Principal.PrincipalPolicy WindowsPrincipal
    static constexpr const int WindowsPrincipal = 2;
    // Get static field: static public System.Security.Principal.PrincipalPolicy WindowsPrincipal
    static System::Security::Principal::PrincipalPolicy _get_WindowsPrincipal();
    // Set static field: static public System.Security.Principal.PrincipalPolicy WindowsPrincipal
    static void _set_WindowsPrincipal(System::Security::Principal::PrincipalPolicy value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Principal.PrincipalPolicy
  #pragma pack(pop)
  static check_size<sizeof(PrincipalPolicy), 0 + sizeof(int)> __System_Security_Principal_PrincipalPolicySizeCheck;
  static_assert(sizeof(PrincipalPolicy) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::PrincipalPolicy, "System.Security.Principal", "PrincipalPolicy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
