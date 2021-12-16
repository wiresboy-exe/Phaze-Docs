// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass1_0 because it is already included!
  // Skipping declaration: <>c__2`1 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Skipping declaration: ConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: IFactory`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
  class IFactory_7;
  // Forward declaring type: FactorySubContainerBinder`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
  class FactorySubContainerBinder_7;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`8<T1, T2, T3, T4, T5, T6, T7, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TResult>
  class Func_8;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder`7
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
  class FactoryFromBinder_7 : public Zenject::FactoryFromBinderBase {
    public:
    // Nested type: Zenject::FactoryFromBinder_7::$$c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::FactoryFromBinder_7::$$c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>
    template<typename TSubFactory>
    class $$c__2_1;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`7/Zenject.<>c__DisplayClass1_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass1_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass1_0";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Func`8<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> method
      // Size: 0x8
      // Offset: 0x0
      System::Func_8<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* method;
      // Field size check
      static_assert(sizeof(System::Func_8<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass1_0
      $$c__DisplayClass1_0(System::Func_8<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* method_ = {}) noexcept : method{method_} {}
      // Creating conversion operator: operator System::Func_8<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
      constexpr operator System::Func_8<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*() const noexcept {
        return method;
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Func`8<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> method
      System::Func_8<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*& dyn_method() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::$$c__DisplayClass1_0::dyn_method");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "method"))->offset;
        return *reinterpret_cast<System::Func_8<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Zenject.IProvider <FromMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $FromMethod$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::$$c__DisplayClass1_0::<FromMethod>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(___instance_arg, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__DisplayClass1_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::$$c__DisplayClass1_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__DisplayClass1_0*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`7/Zenject.<>c__DisplayClass1_0
    // Could not write size check! Type: Zenject.FactoryFromBinder`7/Zenject.<>c__DisplayClass1_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactoryFromBinder`7/Zenject.<>c__2`1
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    template<typename TSubFactory>
    class $$c__2_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*;
      static constexpr std::string_view NESTED_NAME = "<>c__2`1";
      static constexpr bool IS_VALUE_TYPE = false;
      // Creating value type constructor for type: $$c__2_1
      $$c__2_1() noexcept {}
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.FactoryFromBinder`7/Zenject.<>c__2`1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TSubFactory> <>9
      static typename Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__2_1<TSubFactory>* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::$$c__2_1::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__2_1<TSubFactory>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.FactoryFromBinder`7/Zenject.<>c__2`1<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract,TSubFactory> <>9
      static void _set_$$9(typename Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__2_1<TSubFactory>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::$$c__2_1::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>>> <>9__2_0
      static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>* _get_$$9__2_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::$$c__2_1::_get_$$9__2_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>>> <>9__2_0
      static void _set_$$9__2_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::$$c__2_1::_set_$$9__2_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::$$c__2_1::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__2_1<TSubFactory>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
      }
      // System.Void <FromFactory>b__2_0(Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>> x)
      // Offset: 0xFFFFFFFF
      void $FromFactory$b__2_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::$$c__2_1::<FromFactory>b__2_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromFactory>b__2_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, x);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__2_1<TSubFactory>* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::$$c__2_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::$$c__2_1<TSubFactory>*, creationType>()));
      }
    }; // Zenject.FactoryFromBinder`7/Zenject.<>c__2`1
    // Could not write size check! Type: Zenject.FactoryFromBinder`7/Zenject.<>c__2`1 is generic, or has no fields that are valid for size checks!
    // Creating value type constructor for type: FactoryFromBinder_7
    FactoryFromBinder_7() noexcept {}
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* New_ctor(Zenject::DiContainer* container, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, creationType>(container, bindInfo, factoryBindInfo)));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromMethod(System.Func`8<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> method)
    // Offset: 0xFFFFFFFF
    Zenject::ConditionCopyNonLazyBinder* FromMethod(System::Func_8<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::FromMethod");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromMethod", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(method)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(___instance_arg, ___internal__method, method);
    }
    // public Zenject.ConditionCopyNonLazyBinder FromFactory()
    // Offset: 0xFFFFFFFF
    template<class TSubFactory>
    Zenject::ConditionCopyNonLazyBinder* FromFactory() {
      static_assert(std::is_base_of_v<Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>, std::remove_pointer_t<TSubFactory>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::FromFactory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromFactory", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(___instance_arg, ___generic__method);
    }
    // public Zenject.FactorySubContainerBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> FromSubContainerResolve()
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* FromSubContainerResolve() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::FromSubContainerResolve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromSubContainerResolve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, false>(___instance_arg, ___internal__method);
    }
    // public Zenject.FactorySubContainerBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> FromSubContainerResolve(System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* FromSubContainerResolve(::Il2CppObject* subIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder_7::FromSubContainerResolve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromSubContainerResolve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(subIdentifier)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, false>(___instance_arg, ___internal__method, subIdentifier);
    }
  }; // Zenject.FactoryFromBinder`7
  // Could not write size check! Type: Zenject.FactoryFromBinder`7 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder_7, "Zenject", "FactoryFromBinder`7");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
