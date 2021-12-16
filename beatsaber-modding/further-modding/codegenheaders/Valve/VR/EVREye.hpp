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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVREye
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVREye/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVREye
    constexpr EVREye(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVREye Eye_Left
    static constexpr const int Eye_Left = 0;
    // Get static field: static public Valve.VR.EVREye Eye_Left
    static Valve::VR::EVREye _get_Eye_Left();
    // Set static field: static public Valve.VR.EVREye Eye_Left
    static void _set_Eye_Left(Valve::VR::EVREye value);
    // static field const value: static public Valve.VR.EVREye Eye_Right
    static constexpr const int Eye_Right = 1;
    // Get static field: static public Valve.VR.EVREye Eye_Right
    static Valve::VR::EVREye _get_Eye_Right();
    // Set static field: static public Valve.VR.EVREye Eye_Right
    static void _set_Eye_Right(Valve::VR::EVREye value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EVREye
  #pragma pack(pop)
  static check_size<sizeof(EVREye), 0 + sizeof(int)> __Valve_VR_EVREyeSizeCheck;
  static_assert(sizeof(EVREye) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVREye, "Valve.VR", "EVREye");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
