// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PlayerLoop.PreUpdate
#include "UnityEngine/PlayerLoop/PreUpdate.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.PreUpdate/UnityEngine.PlayerLoop.PhysicsUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: DB69E4
  struct PreUpdate::PhysicsUpdate/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: PhysicsUpdate
    constexpr PhysicsUpdate() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.PreUpdate/UnityEngine.PlayerLoop.PhysicsUpdate
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::PreUpdate::PhysicsUpdate, "UnityEngine.PlayerLoop", "PreUpdate/PhysicsUpdate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"