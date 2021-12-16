// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.MatchTargetWeightMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DCE090
  struct MatchTargetWeightMask/*, public System::ValueType*/ {
    public:
    // private UnityEngine.Vector3 m_PositionXYZWeight
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 m_PositionXYZWeight;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single m_RotationWeight
    // Size: 0x4
    // Offset: 0xC
    float m_RotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MatchTargetWeightMask
    constexpr MatchTargetWeightMask(UnityEngine::Vector3 m_PositionXYZWeight_ = {}, float m_RotationWeight_ = {}) noexcept : m_PositionXYZWeight{m_PositionXYZWeight_}, m_RotationWeight{m_RotationWeight_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 m_PositionXYZWeight
    UnityEngine::Vector3& dyn_m_PositionXYZWeight();
    // Get instance field reference: private System.Single m_RotationWeight
    float& dyn_m_RotationWeight();
  }; // UnityEngine.MatchTargetWeightMask
  #pragma pack(pop)
  static check_size<sizeof(MatchTargetWeightMask), 12 + sizeof(float)> __UnityEngine_MatchTargetWeightMaskSizeCheck;
  static_assert(sizeof(MatchTargetWeightMask) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MatchTargetWeightMask, "UnityEngine", "MatchTargetWeightMask");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
