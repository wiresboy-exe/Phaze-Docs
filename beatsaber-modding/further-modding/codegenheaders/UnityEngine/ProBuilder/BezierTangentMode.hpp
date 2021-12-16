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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.BezierTangentMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct BezierTangentMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BezierTangentMode
    constexpr BezierTangentMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.BezierTangentMode Free
    static constexpr const int Free = 0;
    // Get static field: static public UnityEngine.ProBuilder.BezierTangentMode Free
    static UnityEngine::ProBuilder::BezierTangentMode _get_Free();
    // Set static field: static public UnityEngine.ProBuilder.BezierTangentMode Free
    static void _set_Free(UnityEngine::ProBuilder::BezierTangentMode value);
    // static field const value: static public UnityEngine.ProBuilder.BezierTangentMode Aligned
    static constexpr const int Aligned = 1;
    // Get static field: static public UnityEngine.ProBuilder.BezierTangentMode Aligned
    static UnityEngine::ProBuilder::BezierTangentMode _get_Aligned();
    // Set static field: static public UnityEngine.ProBuilder.BezierTangentMode Aligned
    static void _set_Aligned(UnityEngine::ProBuilder::BezierTangentMode value);
    // static field const value: static public UnityEngine.ProBuilder.BezierTangentMode Mirrored
    static constexpr const int Mirrored = 2;
    // Get static field: static public UnityEngine.ProBuilder.BezierTangentMode Mirrored
    static UnityEngine::ProBuilder::BezierTangentMode _get_Mirrored();
    // Set static field: static public UnityEngine.ProBuilder.BezierTangentMode Mirrored
    static void _set_Mirrored(UnityEngine::ProBuilder::BezierTangentMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.BezierTangentMode
  #pragma pack(pop)
  static check_size<sizeof(BezierTangentMode), 0 + sizeof(int)> __UnityEngine_ProBuilder_BezierTangentModeSizeCheck;
  static_assert(sizeof(BezierTangentMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BezierTangentMode, "UnityEngine.ProBuilder", "BezierTangentMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
