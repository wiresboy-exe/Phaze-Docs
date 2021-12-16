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
// Forward declaring namespace: System::Linq
namespace System::Linq {
  // Skipping declaration: <>c because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.IdentityFunction`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TElement>
  class IdentityFunction_1 : public ::Il2CppObject {
    public:
    // Nested type: System::Linq::IdentityFunction_1::$$c<TElement>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Linq.IdentityFunction`1/System.Linq.<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = IdentityFunction_1<TElement>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Creating value type constructor for type: $$c
      $$c() noexcept {}
      // Autogenerated static field getter
      // Get static field: static public readonly System.Linq.IdentityFunction`1/System.Linq.<>c<TElement> <>9
      static typename System::Linq::IdentityFunction_1<TElement>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::IdentityFunction_1::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename System::Linq::IdentityFunction_1<TElement>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IdentityFunction_1<TElement>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly System.Linq.IdentityFunction`1/System.Linq.<>c<TElement> <>9
      static void _set_$$9(typename System::Linq::IdentityFunction_1<TElement>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::IdentityFunction_1::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IdentityFunction_1<TElement>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<TElement,TElement> <>9__1_0
      static System::Func_2<TElement, TElement>* _get_$$9__1_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::IdentityFunction_1::$$c::_get_$$9__1_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<TElement, TElement>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IdentityFunction_1<TElement>::$$c*>::get(), "<>9__1_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<TElement,TElement> <>9__1_0
      static void _set_$$9__1_0(System::Func_2<TElement, TElement>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::IdentityFunction_1::$$c::_set_$$9__1_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IdentityFunction_1<TElement>::$$c*>::get(), "<>9__1_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::IdentityFunction_1::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename IdentityFunction_1<TElement>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
      }
      // TElement <get_Instance>b__1_0(TElement x)
      // Offset: 0xFFFFFFFF
      TElement $get_Instance$b__1_0(TElement x) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::IdentityFunction_1::$$c::<get_Instance>b__1_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<get_Instance>b__1_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<TElement, false>(___instance_arg, ___internal__method, x);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename IdentityFunction_1<TElement>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::IdentityFunction_1::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename IdentityFunction_1<TElement>::$$c*, creationType>()));
      }
    }; // System.Linq.IdentityFunction`1/System.Linq.<>c
    // Could not write size check! Type: System.Linq.IdentityFunction`1/System.Linq.<>c is generic, or has no fields that are valid for size checks!
    // Creating value type constructor for type: IdentityFunction_1
    IdentityFunction_1() noexcept {}
    // static public System.Func`2<TElement,TElement> get_Instance()
    // Offset: 0xFFFFFFFF
    static System::Func_2<TElement, TElement>* get_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::IdentityFunction_1::get_Instance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IdentityFunction_1<TElement>*>::get(), "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Func_2<TElement, TElement>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
  }; // System.Linq.IdentityFunction`1
  // Could not write size check! Type: System.Linq.IdentityFunction`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::IdentityFunction_1, "System.Linq", "IdentityFunction`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
