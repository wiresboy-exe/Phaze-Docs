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
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.HumanLimit
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DCE358
  // [NativeTypeAttribute] Offset: DCE358
  // [NativeHeaderAttribute] Offset: DCE358
  struct HumanLimit/*, public System::ValueType*/ {
    public:
    // private UnityEngine.Vector3 m_Min
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 m_Min;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_Max
    // Size: 0xC
    // Offset: 0xC
    UnityEngine::Vector3 m_Max;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_Center
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 m_Center;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single m_AxisLength
    // Size: 0x4
    // Offset: 0x24
    float m_AxisLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_UseDefaultValues
    // Size: 0x4
    // Offset: 0x28
    int m_UseDefaultValues;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HumanLimit
    constexpr HumanLimit(UnityEngine::Vector3 m_Min_ = {}, UnityEngine::Vector3 m_Max_ = {}, UnityEngine::Vector3 m_Center_ = {}, float m_AxisLength_ = {}, int m_UseDefaultValues_ = {}) noexcept : m_Min{m_Min_}, m_Max{m_Max_}, m_Center{m_Center_}, m_AxisLength{m_AxisLength_}, m_UseDefaultValues{m_UseDefaultValues_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 m_Min
    UnityEngine::Vector3& dyn_m_Min();
    // Get instance field reference: private UnityEngine.Vector3 m_Max
    UnityEngine::Vector3& dyn_m_Max();
    // Get instance field reference: private UnityEngine.Vector3 m_Center
    UnityEngine::Vector3& dyn_m_Center();
    // Get instance field reference: private System.Single m_AxisLength
    float& dyn_m_AxisLength();
    // Get instance field reference: private System.Int32 m_UseDefaultValues
    int& dyn_m_UseDefaultValues();
  }; // UnityEngine.HumanLimit
  #pragma pack(pop)
  static check_size<sizeof(HumanLimit), 40 + sizeof(int)> __UnityEngine_HumanLimitSizeCheck;
  static_assert(sizeof(HumanLimit) == 0x2C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanLimit, "UnityEngine", "HumanLimit");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
