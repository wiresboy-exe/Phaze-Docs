// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::PlayerLoop
namespace UnityEngine::PlayerLoop {
}
// Completed forward declares
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.PreUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: DB6998
  // [MovedFromAttribute] Offset: DB6998
  struct PreUpdate/*, public System::ValueType*/ {
    public:
    // Nested type: UnityEngine::PlayerLoop::PreUpdate::PhysicsUpdate
    struct PhysicsUpdate;
    // Nested type: UnityEngine::PlayerLoop::PreUpdate::Physics2DUpdate
    struct Physics2DUpdate;
    // Nested type: UnityEngine::PlayerLoop::PreUpdate::CheckTexFieldInput
    struct CheckTexFieldInput;
    // Nested type: UnityEngine::PlayerLoop::PreUpdate::IMGUISendQueuedEvents
    struct IMGUISendQueuedEvents;
    // Nested type: UnityEngine::PlayerLoop::PreUpdate::SendMouseEvents
    struct SendMouseEvents;
    // Nested type: UnityEngine::PlayerLoop::PreUpdate::AIUpdate
    struct AIUpdate;
    // Nested type: UnityEngine::PlayerLoop::PreUpdate::WindUpdate
    struct WindUpdate;
    // Nested type: UnityEngine::PlayerLoop::PreUpdate::UpdateVideo
    struct UpdateVideo;
    // Nested type: UnityEngine::PlayerLoop::PreUpdate::NewInputUpdate
    struct NewInputUpdate;
    // Creating value type constructor for type: PreUpdate
    constexpr PreUpdate() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.PreUpdate
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::PreUpdate, "UnityEngine.PlayerLoop", "PreUpdate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
