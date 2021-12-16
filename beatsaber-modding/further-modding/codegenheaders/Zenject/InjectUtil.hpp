// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectUtil
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  class InjectUtil : public ::Il2CppObject {
    public:
    // Nested type: Zenject::InjectUtil::$$c
    class $$c;
    // Creating value type constructor for type: InjectUtil
    InjectUtil() noexcept {}
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgList(System.Collections.Generic.IEnumerable`1<System.Object> args)
    // Offset: 0x166A67C
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgList(System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* args);
    // static public Zenject.TypeValuePair CreateTypePair(T param)
    // Offset: 0xFFFFFFFF
    template<class T>
    static Zenject::TypeValuePair CreateTypePair(T param) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectUtil::CreateTypePair");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "InjectUtil", "CreateTypePair", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::TypeValuePair, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, param);
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(T param)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(T param) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectUtil::CreateArgListExplicit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "InjectUtil", "CreateArgListExplicit", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<Zenject::TypeValuePair>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, param);
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectUtil::CreateArgListExplicit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "InjectUtil", "CreateArgListExplicit", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<Zenject::TypeValuePair>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, param1, param2);
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectUtil::CreateArgListExplicit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "InjectUtil", "CreateArgListExplicit", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<Zenject::TypeValuePair>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, param1, param2, param3);
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectUtil::CreateArgListExplicit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "InjectUtil", "CreateArgListExplicit", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<Zenject::TypeValuePair>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, param1, param2, param3, param4);
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectUtil::CreateArgListExplicit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "InjectUtil", "CreateArgListExplicit", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4), ::il2cpp_utils::ExtractType(param5)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<Zenject::TypeValuePair>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, param1, param2, param3, param4, param5);
    }
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TParam5, class TParam6>
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectUtil::CreateArgListExplicit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "InjectUtil", "CreateArgListExplicit", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4), ::il2cpp_utils::ExtractType(param5), ::il2cpp_utils::ExtractType(param6)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<Zenject::TypeValuePair>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, param1, param2, param3, param4, param5, param6);
    }
    // static public System.Boolean PopValueWithType(System.Collections.Generic.List`1<Zenject.TypeValuePair> extraArgMap, System.Type injectedFieldType, out System.Object value)
    // Offset: 0x166A7AC
    static bool PopValueWithType(System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArgMap, System::Type* injectedFieldType, ByRef<::Il2CppObject*> value);
  }; // Zenject.InjectUtil
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectUtil*, "Zenject", "InjectUtil");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectUtil::CreateArgList
// Il2CppName: CreateArgList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Zenject::TypeValuePair>* (*)(System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*)>(&Zenject::InjectUtil::CreateArgList)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectUtil*), "CreateArgList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: Zenject::InjectUtil::CreateTypePair
// Il2CppName: CreateTypePair
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::InjectUtil::CreateArgListExplicit
// Il2CppName: CreateArgListExplicit
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::InjectUtil::CreateArgListExplicit
// Il2CppName: CreateArgListExplicit
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::InjectUtil::CreateArgListExplicit
// Il2CppName: CreateArgListExplicit
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::InjectUtil::CreateArgListExplicit
// Il2CppName: CreateArgListExplicit
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::InjectUtil::CreateArgListExplicit
// Il2CppName: CreateArgListExplicit
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::InjectUtil::CreateArgListExplicit
// Il2CppName: CreateArgListExplicit
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::InjectUtil::PopValueWithType
// Il2CppName: PopValueWithType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>*, System::Type*, ByRef<::Il2CppObject*>)>(&Zenject::InjectUtil::PopValueWithType)> {
  static const MethodInfo* get() {
    static auto* extraArgMap = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectedFieldType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::InjectUtil*), "PopValueWithType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extraArgMap, injectedFieldType, value});
  }
};
