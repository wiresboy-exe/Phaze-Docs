// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectPropertyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ReflectionTypeInfo::InjectPropertyInfo : public ::Il2CppObject {
    public:
    // public readonly System.Reflection.PropertyInfo PropertyInfo
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::PropertyInfo* PropertyInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::PropertyInfo*) == 0x8);
    // public readonly Zenject.InjectableInfo InjectableInfo
    // Size: 0x8
    // Offset: 0x18
    Zenject::InjectableInfo* InjectableInfo;
    // Field size check
    static_assert(sizeof(Zenject::InjectableInfo*) == 0x8);
    // Creating value type constructor for type: InjectPropertyInfo
    InjectPropertyInfo(System::Reflection::PropertyInfo* PropertyInfo_ = {}, Zenject::InjectableInfo* InjectableInfo_ = {}) noexcept : PropertyInfo{PropertyInfo_}, InjectableInfo{InjectableInfo_} {}
    // Get instance field reference: public readonly System.Reflection.PropertyInfo PropertyInfo
    System::Reflection::PropertyInfo*& dyn_PropertyInfo();
    // Get instance field reference: public readonly Zenject.InjectableInfo InjectableInfo
    Zenject::InjectableInfo*& dyn_InjectableInfo();
    // public System.Void .ctor(System.Reflection.PropertyInfo propertyInfo, Zenject.InjectableInfo injectableInfo)
    // Offset: 0x166D7A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeInfo::InjectPropertyInfo* New_ctor(System::Reflection::PropertyInfo* propertyInfo, Zenject::InjectableInfo* injectableInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeInfo::InjectPropertyInfo*, creationType>(propertyInfo, injectableInfo)));
    }
  }; // Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectPropertyInfo
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeInfo::InjectPropertyInfo), 24 + sizeof(Zenject::InjectableInfo*)> __Zenject_Internal_ReflectionTypeInfo_InjectPropertyInfoSizeCheck;
  static_assert(sizeof(ReflectionTypeInfo::InjectPropertyInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectPropertyInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
