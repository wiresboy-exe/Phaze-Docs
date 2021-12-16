// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.IntersectionMaskRectangle_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct IntersectionMaskRectangle_t/*, public System::ValueType*/ {
    public:
    // public System.Single m_flTopLeftX
    // Size: 0x4
    // Offset: 0x0
    float m_flTopLeftX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flTopLeftY
    // Size: 0x4
    // Offset: 0x4
    float m_flTopLeftY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flWidth
    // Size: 0x4
    // Offset: 0x8
    float m_flWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flHeight
    // Size: 0x4
    // Offset: 0xC
    float m_flHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: IntersectionMaskRectangle_t
    constexpr IntersectionMaskRectangle_t(float m_flTopLeftX_ = {}, float m_flTopLeftY_ = {}, float m_flWidth_ = {}, float m_flHeight_ = {}) noexcept : m_flTopLeftX{m_flTopLeftX_}, m_flTopLeftY{m_flTopLeftY_}, m_flWidth{m_flWidth_}, m_flHeight{m_flHeight_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single m_flTopLeftX
    float& dyn_m_flTopLeftX();
    // Get instance field reference: public System.Single m_flTopLeftY
    float& dyn_m_flTopLeftY();
    // Get instance field reference: public System.Single m_flWidth
    float& dyn_m_flWidth();
    // Get instance field reference: public System.Single m_flHeight
    float& dyn_m_flHeight();
  }; // Valve.VR.IntersectionMaskRectangle_t
  #pragma pack(pop)
  static check_size<sizeof(IntersectionMaskRectangle_t), 12 + sizeof(float)> __Valve_VR_IntersectionMaskRectangle_tSizeCheck;
  static_assert(sizeof(IntersectionMaskRectangle_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IntersectionMaskRectangle_t, "Valve.VR", "IntersectionMaskRectangle_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
