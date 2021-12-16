// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.CachedProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class CachedProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly Zenject.IProvider _creator
    // Size: 0x8
    // Offset: 0x10
    Zenject::IProvider* creator;
    // Field size check
    static_assert(sizeof(Zenject::IProvider*) == 0x8);
    // private System.Collections.Generic.List`1<System.Object> _instances
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppObject*>* instances;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // private System.Boolean _isCreatingInstance
    // Size: 0x1
    // Offset: 0x20
    bool isCreatingInstance;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CachedProvider
    CachedProvider(Zenject::IProvider* creator_ = {}, System::Collections::Generic::List_1<::Il2CppObject*>* instances_ = {}, bool isCreatingInstance_ = {}) noexcept : creator{creator_}, instances{instances_}, isCreatingInstance{isCreatingInstance_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // Get instance field reference: private readonly Zenject.IProvider _creator
    Zenject::IProvider*& dyn__creator();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Object> _instances
    System::Collections::Generic::List_1<::Il2CppObject*>*& dyn__instances();
    // Get instance field reference: private System.Boolean _isCreatingInstance
    bool& dyn__isCreatingInstance();
    // public System.Boolean get_IsCached()
    // Offset: 0x13E59F4
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x13E59FC
    bool get_TypeVariesBasedOnMemberType();
    // public System.Int32 get_NumInstances()
    // Offset: 0x13E59A0
    int get_NumInstances();
    // public System.Void .ctor(Zenject.IProvider creator)
    // Offset: 0x13E52A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedProvider* New_ctor(Zenject::IProvider* creator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::CachedProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedProvider*, creationType>(creator)));
    }
    // public System.Void ClearCache()
    // Offset: 0x13E5A40
    void ClearCache();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x13E5A48
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x13E567C
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, ByRef<System::Action*> injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.CachedProvider
  #pragma pack(pop)
  static check_size<sizeof(CachedProvider), 32 + sizeof(bool)> __Zenject_CachedProviderSizeCheck;
  static_assert(sizeof(CachedProvider) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::CachedProvider*, "Zenject", "CachedProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::CachedProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::CachedProvider::*)()>(&Zenject::CachedProvider::get_IsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CachedProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::CachedProvider::*)()>(&Zenject::CachedProvider::get_TypeVariesBasedOnMemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CachedProvider::get_NumInstances
// Il2CppName: get_NumInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::CachedProvider::*)()>(&Zenject::CachedProvider::get_NumInstances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedProvider*), "get_NumInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CachedProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::CachedProvider::ClearCache
// Il2CppName: ClearCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::CachedProvider::*)()>(&Zenject::CachedProvider::ClearCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedProvider*), "ClearCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::CachedProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::CachedProvider::*)(Zenject::InjectContext*)>(&Zenject::CachedProvider::GetInstanceType)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::CachedProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::CachedProvider::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, ByRef<System::Action*>, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::CachedProvider::GetAllInstancesWithInjectSplit)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::CachedProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
