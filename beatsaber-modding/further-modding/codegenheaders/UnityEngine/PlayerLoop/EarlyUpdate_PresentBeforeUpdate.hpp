// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PlayerLoop.EarlyUpdate
#include "UnityEngine/PlayerLoop/EarlyUpdate.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.EarlyUpdate/UnityEngine.PlayerLoop.PresentBeforeUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: DB673C
  struct EarlyUpdate::PresentBeforeUpdate/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: PresentBeforeUpdate
    constexpr PresentBeforeUpdate() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.EarlyUpdate/UnityEngine.PlayerLoop.PresentBeforeUpdate
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::EarlyUpdate::PresentBeforeUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/PresentBeforeUpdate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
