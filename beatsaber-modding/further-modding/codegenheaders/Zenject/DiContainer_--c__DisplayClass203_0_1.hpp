// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.DiContainer/Zenject.<>c__DisplayClass203_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class DiContainer::$$c__DisplayClass203_0_1 : public ::Il2CppObject {
    public:
    // public TContract instance
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TContract instance;
    // Creating value type constructor for type: $$c__DisplayClass203_0_1
    $$c__DisplayClass203_0_1(TContract instance_ = {}) noexcept : instance{instance_} {}
    // Autogenerated instance field getter
    // Get instance field: public TContract instance
    TContract& dyn_instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DiContainer::$$c__DisplayClass203_0_1::dyn_instance");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "instance"))->offset;
      return *reinterpret_cast<TContract*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Zenject.IProvider <BindInstance>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $BindInstance$b__0(Zenject::DiContainer* container, System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DiContainer::$$c__DisplayClass203_0_1::<BindInstance>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<BindInstance>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container), ::il2cpp_utils::ExtractType(type)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(___instance_arg, ___internal__method, container, type);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiContainer::$$c__DisplayClass203_0_1<TContract>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DiContainer::$$c__DisplayClass203_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiContainer::$$c__DisplayClass203_0_1<TContract>*, creationType>()));
    }
  }; // Zenject.DiContainer/Zenject.<>c__DisplayClass203_0`1
  // Could not write size check! Type: Zenject.DiContainer/Zenject.<>c__DisplayClass203_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::DiContainer::$$c__DisplayClass203_0_1, "Zenject", "DiContainer/<>c__DisplayClass203_0`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"