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
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Int32Enum
  // [TokenAttribute] Offset: FFFFFFFF
  struct Int32Enum/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Int32Enum
    constexpr Int32Enum(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Int32Enum
  #pragma pack(pop)
  static check_size<sizeof(Int32Enum), 0 + sizeof(int)> __System_Int32EnumSizeCheck;
  static_assert(sizeof(Int32Enum) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Int32Enum, "System", "Int32Enum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
