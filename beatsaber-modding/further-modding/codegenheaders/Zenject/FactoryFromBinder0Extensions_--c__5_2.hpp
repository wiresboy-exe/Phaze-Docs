// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinder0Extensions
#include "Zenject/FactoryFromBinder0Extensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`1<TParam1>
  template<typename TParam1>
  class IPoolable_1;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class MemoryPool_2;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder0Extensions/Zenject.<>c__5`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TContract, typename TMemoryPool>
  class FactoryFromBinder0Extensions::$$c__5_2 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c__5_2
    $$c__5_2() noexcept {}
    // Autogenerated static field getter
    // Get static field: static public readonly Zenject.FactoryFromBinder0Extensions/Zenject.<>c__5`2<TContract,TMemoryPool> <>9
    static Zenject::FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>* _get_$$9() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder0Extensions::$$c__5_2::_get_$$9");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<Zenject::FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Zenject.FactoryFromBinder0Extensions/Zenject.<>c__5`2<TContract,TMemoryPool> <>9
    static void _set_$$9(Zenject::FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder0Extensions::$$c__5_2::_set_$$9");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get(), "<>9", value)));
    }
    // Autogenerated static field getter
    // Get static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__5_0
    static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* _get_$$9__5_0() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder0Extensions::$$c__5_2::_get_$$9__5_0");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get(), "<>9__5_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__5_0
    static void _set_$$9__5_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder0Extensions::$$c__5_2::_set_$$9__5_0");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get(), "<>9__5_0", value)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder0Extensions::$$c__5_2::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // System.Void <FromPoolableMemoryPool>b__5_0(Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract> x)
    // Offset: 0xFFFFFFFF
    void $FromPoolableMemoryPool$b__5_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder0Extensions::$$c__5_2::<FromPoolableMemoryPool>b__5_0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromPoolableMemoryPool>b__5_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, x);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder0Extensions::$$c__5_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder0Extensions::$$c__5_2<TContract, TMemoryPool>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder0Extensions/Zenject.<>c__5`2
  // Could not write size check! Type: Zenject.FactoryFromBinder0Extensions/Zenject.<>c__5`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder0Extensions::$$c__5_2, "Zenject", "FactoryFromBinder0Extensions/<>c__5`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
