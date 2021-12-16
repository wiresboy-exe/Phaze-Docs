// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.IAuthenticationModule
#include "System/Net/IAuthenticationModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DigestClient
  // [TokenAttribute] Offset: FFFFFFFF
  class DigestClient : public ::Il2CppObject/*, public System::Net::IAuthenticationModule*/ {
    public:
    // Creating value type constructor for type: DigestClient
    DigestClient() noexcept {}
    // Creating interface conversion operator: operator System::Net::IAuthenticationModule
    operator System::Net::IAuthenticationModule() noexcept {
      return *reinterpret_cast<System::Net::IAuthenticationModule*>(this);
    }
    // Get static field: static private readonly System.Collections.Hashtable cache
    static System::Collections::Hashtable* _get_cache();
    // Set static field: static private readonly System.Collections.Hashtable cache
    static void _set_cache(System::Collections::Hashtable* value);
    // static private System.Collections.Hashtable get_Cache()
    // Offset: 0x16DDBF4
    static System::Collections::Hashtable* get_Cache();
    // public System.String get_AuthenticationType()
    // Offset: 0x16DEF44
    ::Il2CppString* get_AuthenticationType();
    // static private System.Void .cctor()
    // Offset: 0x16DEF8C
    static void _cctor();
    // static private System.Void CheckExpired(System.Int32 count)
    // Offset: 0x16DDD44
    static void CheckExpired(int count);
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x16DE4FC
    System::Net::Authorization* Authenticate(::Il2CppString* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Net.Authorization PreAuthenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x16DEDC4
    System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Void .ctor()
    // Offset: 0x16D2E3C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::DigestClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestClient*, creationType>()));
    }
  }; // System.Net.DigestClient
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::DigestClient*, "System.Net", "DigestClient");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::DigestClient::get_Cache
// Il2CppName: get_Cache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Hashtable* (*)()>(&System::Net::DigestClient::get_Cache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestClient*), "get_Cache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestClient::get_AuthenticationType
// Il2CppName: get_AuthenticationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestClient::*)()>(&System::Net::DigestClient::get_AuthenticationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestClient*), "get_AuthenticationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestClient::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::DigestClient::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestClient*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestClient::CheckExpired
// Il2CppName: CheckExpired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&System::Net::DigestClient::CheckExpired)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestClient*), "CheckExpired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: System::Net::DigestClient::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (System::Net::DigestClient::*)(::Il2CppString*, System::Net::WebRequest*, System::Net::ICredentials*)>(&System::Net::DigestClient::Authenticate)> {
  static const MethodInfo* get() {
    static auto* challenge = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestClient*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challenge, webRequest, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::DigestClient::PreAuthenticate
// Il2CppName: PreAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (System::Net::DigestClient::*)(System::Net::WebRequest*, System::Net::ICredentials*)>(&System::Net::DigestClient::PreAuthenticate)> {
  static const MethodInfo* get() {
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestClient*), "PreAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webRequest, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::DigestClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
