// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.IntegratedSubsystem
#include "UnityEngine/IntegratedSubsystem.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystemDescriptor
  class ISubsystemDescriptor;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.IntegratedSubsystem`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DCB4A0
  template<typename TSubsystemDescriptor>
  class IntegratedSubsystem_1 : public UnityEngine::IntegratedSubsystem {
    public:
    // Creating value type constructor for type: IntegratedSubsystem_1
    IntegratedSubsystem_1() noexcept {}
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.IntegratedSubsystem
    // Base method: System.Void IntegratedSubsystem::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntegratedSubsystem_1<TSubsystemDescriptor>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::IntegratedSubsystem_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntegratedSubsystem_1<TSubsystemDescriptor>*, creationType>()));
    }
  }; // UnityEngine.IntegratedSubsystem`1
  // Could not write size check! Type: UnityEngine.IntegratedSubsystem`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::IntegratedSubsystem_1, "UnityEngine", "IntegratedSubsystem`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
