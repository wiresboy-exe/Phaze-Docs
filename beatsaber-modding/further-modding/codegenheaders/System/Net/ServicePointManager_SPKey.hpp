// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.ServicePointManager
#include "System/Net/ServicePointManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServicePointManager/System.Net.SPKey
  // [TokenAttribute] Offset: FFFFFFFF
  class ServicePointManager::SPKey : public ::Il2CppObject {
    public:
    // private System.Uri uri
    // Size: 0x8
    // Offset: 0x10
    System::Uri* uri;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Uri proxy
    // Size: 0x8
    // Offset: 0x18
    System::Uri* proxy;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Boolean use_connect
    // Size: 0x1
    // Offset: 0x20
    bool use_connect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SPKey
    SPKey(System::Uri* uri_ = {}, System::Uri* proxy_ = {}, bool use_connect_ = {}) noexcept : uri{uri_}, proxy{proxy_}, use_connect{use_connect_} {}
    // Get instance field reference: private System.Uri uri
    System::Uri*& dyn_uri();
    // Get instance field reference: private System.Uri proxy
    System::Uri*& dyn_proxy();
    // Get instance field reference: private System.Boolean use_connect
    bool& dyn_use_connect();
    // public System.Boolean get_UsesProxy()
    // Offset: 0x14AADE4
    bool get_UsesProxy();
    // public System.Void .ctor(System.Uri uri, System.Uri proxy, System.Boolean use_connect)
    // Offset: 0x14AAA28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServicePointManager::SPKey* New_ctor(System::Uri* uri, System::Uri* proxy, bool use_connect) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::ServicePointManager::SPKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServicePointManager::SPKey*, creationType>(uri, proxy, use_connect)));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x14AAE54
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x14AAF38
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Net.ServicePointManager/System.Net.SPKey
  #pragma pack(pop)
  static check_size<sizeof(ServicePointManager::SPKey), 32 + sizeof(bool)> __System_Net_ServicePointManager_SPKeySizeCheck;
  static_assert(sizeof(ServicePointManager::SPKey) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServicePointManager::SPKey*, "System.Net", "ServicePointManager/SPKey");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServicePointManager::SPKey::get_UsesProxy
// Il2CppName: get_UsesProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePointManager::SPKey::*)()>(&System::Net::ServicePointManager::SPKey::get_UsesProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager::SPKey*), "get_UsesProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointManager::SPKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ServicePointManager::SPKey::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::ServicePointManager::SPKey::*)()>(&System::Net::ServicePointManager::SPKey::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager::SPKey*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointManager::SPKey::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePointManager::SPKey::*)(::Il2CppObject*)>(&System::Net::ServicePointManager::SPKey::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointManager::SPKey*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
