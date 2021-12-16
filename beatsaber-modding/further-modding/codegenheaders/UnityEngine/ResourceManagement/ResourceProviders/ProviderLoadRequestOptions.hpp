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
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class ProviderLoadRequestOptions : public ::Il2CppObject {
    public:
    // private System.Boolean m_IgnoreFailures
    // Size: 0x1
    // Offset: 0x10
    bool m_IgnoreFailures;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ProviderLoadRequestOptions
    ProviderLoadRequestOptions(bool m_IgnoreFailures_ = {}) noexcept : m_IgnoreFailures{m_IgnoreFailures_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_IgnoreFailures;
    }
    // Get instance field reference: private System.Boolean m_IgnoreFailures
    bool& dyn_m_IgnoreFailures();
    // System.Boolean get_IgnoreFailures()
    // Offset: 0x19F6510
    bool get_IgnoreFailures();
    // System.Void set_IgnoreFailures(System.Boolean value)
    // Offset: 0x19F6518
    void set_IgnoreFailures(bool value);
    // public System.Void .ctor()
    // Offset: 0x19F6524
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProviderLoadRequestOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProviderLoadRequestOptions*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions
  #pragma pack(pop)
  static check_size<sizeof(ProviderLoadRequestOptions), 16 + sizeof(bool)> __UnityEngine_ResourceManagement_ResourceProviders_ProviderLoadRequestOptionsSizeCheck;
  static_assert(sizeof(ProviderLoadRequestOptions) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*, "UnityEngine.ResourceManagement.ResourceProviders", "ProviderLoadRequestOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_IgnoreFailures
// Il2CppName: get_IgnoreFailures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_IgnoreFailures)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*), "get_IgnoreFailures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_IgnoreFailures
// Il2CppName: set_IgnoreFailures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)(bool)>(&UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_IgnoreFailures)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*), "set_IgnoreFailures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!