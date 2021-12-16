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
  // Autogenerated type: UnityEngine.ProBuilder.CullingMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct CullingMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CullingMode
    constexpr CullingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.CullingMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.ProBuilder.CullingMode None
    static UnityEngine::ProBuilder::CullingMode _get_None();
    // Set static field: static public UnityEngine.ProBuilder.CullingMode None
    static void _set_None(UnityEngine::ProBuilder::CullingMode value);
    // static field const value: static public UnityEngine.ProBuilder.CullingMode Back
    static constexpr const int Back = 1;
    // Get static field: static public UnityEngine.ProBuilder.CullingMode Back
    static UnityEngine::ProBuilder::CullingMode _get_Back();
    // Set static field: static public UnityEngine.ProBuilder.CullingMode Back
    static void _set_Back(UnityEngine::ProBuilder::CullingMode value);
    // static field const value: static public UnityEngine.ProBuilder.CullingMode Front
    static constexpr const int Front = 2;
    // Get static field: static public UnityEngine.ProBuilder.CullingMode Front
    static UnityEngine::ProBuilder::CullingMode _get_Front();
    // Set static field: static public UnityEngine.ProBuilder.CullingMode Front
    static void _set_Front(UnityEngine::ProBuilder::CullingMode value);
    // static field const value: static public UnityEngine.ProBuilder.CullingMode FrontBack
    static constexpr const int FrontBack = 3;
    // Get static field: static public UnityEngine.ProBuilder.CullingMode FrontBack
    static UnityEngine::ProBuilder::CullingMode _get_FrontBack();
    // Set static field: static public UnityEngine.ProBuilder.CullingMode FrontBack
    static void _set_FrontBack(UnityEngine::ProBuilder::CullingMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.CullingMode
  #pragma pack(pop)
  static check_size<sizeof(CullingMode), 0 + sizeof(int)> __UnityEngine_ProBuilder_CullingModeSizeCheck;
  static_assert(sizeof(CullingMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::CullingMode, "UnityEngine.ProBuilder", "CullingMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
