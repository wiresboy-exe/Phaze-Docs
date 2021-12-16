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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CursorLockMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct CursorLockMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CursorLockMode
    constexpr CursorLockMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.CursorLockMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.CursorLockMode None
    static UnityEngine::CursorLockMode _get_None();
    // Set static field: static public UnityEngine.CursorLockMode None
    static void _set_None(UnityEngine::CursorLockMode value);
    // static field const value: static public UnityEngine.CursorLockMode Locked
    static constexpr const int Locked = 1;
    // Get static field: static public UnityEngine.CursorLockMode Locked
    static UnityEngine::CursorLockMode _get_Locked();
    // Set static field: static public UnityEngine.CursorLockMode Locked
    static void _set_Locked(UnityEngine::CursorLockMode value);
    // static field const value: static public UnityEngine.CursorLockMode Confined
    static constexpr const int Confined = 2;
    // Get static field: static public UnityEngine.CursorLockMode Confined
    static UnityEngine::CursorLockMode _get_Confined();
    // Set static field: static public UnityEngine.CursorLockMode Confined
    static void _set_Confined(UnityEngine::CursorLockMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.CursorLockMode
  #pragma pack(pop)
  static check_size<sizeof(CursorLockMode), 0 + sizeof(int)> __UnityEngine_CursorLockModeSizeCheck;
  static_assert(sizeof(CursorLockMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CursorLockMode, "UnityEngine", "CursorLockMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
