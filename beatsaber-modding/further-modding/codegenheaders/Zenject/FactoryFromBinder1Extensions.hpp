// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ArgConditionCopyNonLazyBinder
  class ArgConditionCopyNonLazyBinder;
  // Forward declaring type: FactoryFromBinder`2<TParam1, TContract>
  template<typename TParam1, typename TContract>
  class FactoryFromBinder_2;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: IFactory`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class IFactory_2;
  // Forward declaring type: IPoolable`2<TParam1, TParam2>
  template<typename TParam1, typename TParam2>
  class IPoolable_2;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
  // Forward declaring type: MemoryPool`3<TParam1, TParam2, TValue>
  template<typename TParam1, typename TParam2, typename TValue>
  class MemoryPool_3;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinder1Extensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class FactoryFromBinder1Extensions : public ::Il2CppObject {
    public:
    // Nested type: Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass0_0_2<TParam1, TContract>
    template<typename TParam1, typename TContract>
    class $$c__DisplayClass0_0_2;
    // Nested type: Zenject::FactoryFromBinder1Extensions::$$c__1_2<TParam1, TContract>
    template<typename TParam1, typename TContract>
    class $$c__1_2;
    // Nested type: Zenject::FactoryFromBinder1Extensions::$$c__3_2<TParam1, TContract>
    template<typename TParam1, typename TContract>
    class $$c__3_2;
    // Nested type: Zenject::FactoryFromBinder1Extensions::$$c__5_3<TParam1, TContract, TMemoryPool>
    template<typename TParam1, typename TContract, typename TMemoryPool>
    class $$c__5_3;
    // Nested type: Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass6_0_3<TParam1, TContract, TMemoryPool>
    template<typename TParam1, typename TContract, typename TMemoryPool>
    class $$c__DisplayClass6_0_3;
    // Creating value type constructor for type: FactoryFromBinder1Extensions
    FactoryFromBinder1Extensions() noexcept {}
    // static public Zenject.ArgConditionCopyNonLazyBinder FromIFactory(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder, System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`2<TParam1,TContract>>> factoryBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromIFactory(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder, System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_2<TParam1, TContract>*>*>* factoryBindGenerator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::FromIFactory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder1Extensions", "FromIFactory", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder), ::il2cpp_utils::ExtractType(factoryBindGenerator)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder, factoryBindGenerator);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder1Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder1Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder), ::il2cpp_utils::ExtractType(poolBindGenerator)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder, poolBindGenerator);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::FromMonoPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder1Extensions", "FromMonoPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::FromMonoPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder1Extensions", "FromMonoPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder), ::il2cpp_utils::ExtractType(poolBindGenerator)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder, poolBindGenerator);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_3<TParam1, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder1Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`2<TParam1,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_2<TParam1, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_2<TParam1, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_3<TParam1, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder1Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(fromBinder), ::il2cpp_utils::ExtractType(poolBindGenerator)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder, poolBindGenerator);
    }
  }; // Zenject.FactoryFromBinder1Extensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinder1Extensions*, "Zenject", "FactoryFromBinder1Extensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FactoryFromBinder1Extensions::FromIFactory
// Il2CppName: FromIFactory
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool
// Il2CppName: FromPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool
// Il2CppName: FromPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder1Extensions::FromMonoPoolableMemoryPool
// Il2CppName: FromMonoPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder1Extensions::FromMonoPoolableMemoryPool
// Il2CppName: FromMonoPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool
// Il2CppName: FromPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinder1Extensions::FromPoolableMemoryPool
// Il2CppName: FromPoolableMemoryPool
// Cannot write MetadataGetter for generic methods!
