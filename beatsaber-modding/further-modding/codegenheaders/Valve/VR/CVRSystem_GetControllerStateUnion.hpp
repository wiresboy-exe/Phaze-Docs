// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Valve.VR.CVRSystem/Valve.VR.GetControllerStateUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVRSystem::GetControllerStateUnion/*, public System::ValueType*/ {
    public:
    // public Valve.VR.IVRSystem/Valve.VR._GetControllerState pGetControllerState
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRSystem::_GetControllerState* pGetControllerState;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem::_GetControllerState*) == 0x8);
    // public Valve.VR.CVRSystem/Valve.VR._GetControllerStatePacked pGetControllerStatePacked
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::CVRSystem::_GetControllerStatePacked* pGetControllerStatePacked;
    // Field size check
    static_assert(sizeof(Valve::VR::CVRSystem::_GetControllerStatePacked*) == 0x8);
    // Creating value type constructor for type: GetControllerStateUnion
    constexpr GetControllerStateUnion(Valve::VR::IVRSystem::_GetControllerState* pGetControllerState_ = {}, Valve::VR::CVRSystem::_GetControllerStatePacked* pGetControllerStatePacked_ = {}) noexcept : pGetControllerState{pGetControllerState_}, pGetControllerStatePacked{pGetControllerStatePacked_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public Valve.VR.IVRSystem/Valve.VR._GetControllerState pGetControllerState
    Valve::VR::IVRSystem::_GetControllerState*& dyn_pGetControllerState();
    // Get instance field reference: public Valve.VR.CVRSystem/Valve.VR._GetControllerStatePacked pGetControllerStatePacked
    Valve::VR::CVRSystem::_GetControllerStatePacked*& dyn_pGetControllerStatePacked();
  }; // Valve.VR.CVRSystem/Valve.VR.GetControllerStateUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem::GetControllerStateUnion, "Valve.VR", "CVRSystem/GetControllerStateUnion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
