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
  // Autogenerated type: UnityEngine.MotionVectorGenerationMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct MotionVectorGenerationMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MotionVectorGenerationMode
    constexpr MotionVectorGenerationMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.MotionVectorGenerationMode Camera
    static constexpr const int Camera = 0;
    // Get static field: static public UnityEngine.MotionVectorGenerationMode Camera
    static UnityEngine::MotionVectorGenerationMode _get_Camera();
    // Set static field: static public UnityEngine.MotionVectorGenerationMode Camera
    static void _set_Camera(UnityEngine::MotionVectorGenerationMode value);
    // static field const value: static public UnityEngine.MotionVectorGenerationMode Object
    static constexpr const int Object = 1;
    // Get static field: static public UnityEngine.MotionVectorGenerationMode Object
    static UnityEngine::MotionVectorGenerationMode _get_Object();
    // Set static field: static public UnityEngine.MotionVectorGenerationMode Object
    static void _set_Object(UnityEngine::MotionVectorGenerationMode value);
    // static field const value: static public UnityEngine.MotionVectorGenerationMode ForceNoMotion
    static constexpr const int ForceNoMotion = 2;
    // Get static field: static public UnityEngine.MotionVectorGenerationMode ForceNoMotion
    static UnityEngine::MotionVectorGenerationMode _get_ForceNoMotion();
    // Set static field: static public UnityEngine.MotionVectorGenerationMode ForceNoMotion
    static void _set_ForceNoMotion(UnityEngine::MotionVectorGenerationMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.MotionVectorGenerationMode
  #pragma pack(pop)
  static check_size<sizeof(MotionVectorGenerationMode), 0 + sizeof(int)> __UnityEngine_MotionVectorGenerationModeSizeCheck;
  static_assert(sizeof(MotionVectorGenerationMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MotionVectorGenerationMode, "UnityEngine", "MotionVectorGenerationMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
