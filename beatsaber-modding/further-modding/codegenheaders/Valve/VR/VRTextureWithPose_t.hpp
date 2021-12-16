// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VRTextureWithPose_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRTextureWithPose_t/*, public System::ValueType*/ {
    public:
    // public Valve.VR.HmdMatrix34_t mDeviceToAbsoluteTracking
    // Size: 0x30
    // Offset: 0x0
    Valve::VR::HmdMatrix34_t mDeviceToAbsoluteTracking;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdMatrix34_t) == 0x30);
    // Creating value type constructor for type: VRTextureWithPose_t
    constexpr VRTextureWithPose_t(Valve::VR::HmdMatrix34_t mDeviceToAbsoluteTracking_ = {}) noexcept : mDeviceToAbsoluteTracking{mDeviceToAbsoluteTracking_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator Valve::VR::HmdMatrix34_t
    constexpr operator Valve::VR::HmdMatrix34_t() const noexcept {
      return mDeviceToAbsoluteTracking;
    }
    // Get instance field reference: public Valve.VR.HmdMatrix34_t mDeviceToAbsoluteTracking
    Valve::VR::HmdMatrix34_t& dyn_mDeviceToAbsoluteTracking();
  }; // Valve.VR.VRTextureWithPose_t
  #pragma pack(pop)
  static check_size<sizeof(VRTextureWithPose_t), 0 + sizeof(Valve::VR::HmdMatrix34_t)> __Valve_VR_VRTextureWithPose_tSizeCheck;
  static_assert(sizeof(VRTextureWithPose_t) == 0x30);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VRTextureWithPose_t, "Valve.VR", "VRTextureWithPose_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
