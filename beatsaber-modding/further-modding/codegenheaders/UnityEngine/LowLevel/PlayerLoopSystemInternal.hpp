// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.LowLevel.PlayerLoopSystem
#include "UnityEngine/LowLevel/PlayerLoopSystem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.LowLevel
namespace UnityEngine::LowLevel {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.LowLevel.PlayerLoopSystemInternal
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: DB64E8
  // [MovedFromAttribute] Offset: DB64E8
  // [NativeTypeAttribute] Offset: DB64E8
  struct PlayerLoopSystemInternal/*, public System::ValueType*/ {
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x0
    System::Type* type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public UnityEngine.LowLevel.PlayerLoopSystem/UnityEngine.LowLevel.UpdateFunction updateDelegate
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction* updateDelegate;
    // Field size check
    static_assert(sizeof(UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction*) == 0x8);
    // public System.IntPtr updateFunction
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr updateFunction;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr loopConditionFunction
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr loopConditionFunction;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Int32 numSubSystems
    // Size: 0x4
    // Offset: 0x20
    int numSubSystems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PlayerLoopSystemInternal
    constexpr PlayerLoopSystemInternal(System::Type* type_ = {}, UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction* updateDelegate_ = {}, System::IntPtr updateFunction_ = {}, System::IntPtr loopConditionFunction_ = {}, int numSubSystems_ = {}) noexcept : type{type_}, updateDelegate{updateDelegate_}, updateFunction{updateFunction_}, loopConditionFunction{loopConditionFunction_}, numSubSystems{numSubSystems_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Type type
    System::Type*& dyn_type();
    // Get instance field reference: public UnityEngine.LowLevel.PlayerLoopSystem/UnityEngine.LowLevel.UpdateFunction updateDelegate
    UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction*& dyn_updateDelegate();
    // Get instance field reference: public System.IntPtr updateFunction
    System::IntPtr& dyn_updateFunction();
    // Get instance field reference: public System.IntPtr loopConditionFunction
    System::IntPtr& dyn_loopConditionFunction();
    // Get instance field reference: public System.Int32 numSubSystems
    int& dyn_numSubSystems();
  }; // UnityEngine.LowLevel.PlayerLoopSystemInternal
  #pragma pack(pop)
  static check_size<sizeof(PlayerLoopSystemInternal), 32 + sizeof(int)> __UnityEngine_LowLevel_PlayerLoopSystemInternalSizeCheck;
  static_assert(sizeof(PlayerLoopSystemInternal) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LowLevel::PlayerLoopSystemInternal, "UnityEngine.LowLevel", "PlayerLoopSystemInternal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
