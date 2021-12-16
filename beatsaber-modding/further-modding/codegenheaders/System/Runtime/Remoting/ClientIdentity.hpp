// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Identity
#include "System/Runtime/Remoting/Identity.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference
  class WeakReference;
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ClientIdentity
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientIdentity : public System::Runtime::Remoting::Identity {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // private System.WeakReference _proxyReference
    // Size: 0x8
    // Offset: 0x48
    System::WeakReference* proxyReference;
    // Field size check
    static_assert(sizeof(System::WeakReference*) == 0x8);
    // Creating value type constructor for type: ClientIdentity
    ClientIdentity(System::WeakReference* proxyReference_ = {}) noexcept : proxyReference{proxyReference_} {}
    // Creating conversion operator: operator System::WeakReference*
    constexpr operator System::WeakReference*() const noexcept {
      return proxyReference;
    }
    // Get instance field reference: private System.WeakReference _proxyReference
    System::WeakReference*& dyn__proxyReference();
    // public System.MarshalByRefObject get_ClientProxy()
    // Offset: 0x149995C
    System::MarshalByRefObject* get_ClientProxy();
    // public System.Void set_ClientProxy(System.MarshalByRefObject value)
    // Offset: 0x14999F0
    void set_ClientProxy(System::MarshalByRefObject* value);
    // public System.String get_TargetUri()
    // Offset: 0x1499A68
    ::Il2CppString* get_TargetUri();
    // public System.Void .ctor(System.String objectUri, System.Runtime.Remoting.ObjRef objRef)
    // Offset: 0x1499844
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientIdentity* New_ctor(::Il2CppString* objectUri, System::Runtime::Remoting::ObjRef* objRef) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ClientIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientIdentity*, creationType>(objectUri, objRef)));
    }
    // public override System.Runtime.Remoting.ObjRef CreateObjRef(System.Type requestedType)
    // Offset: 0x1499A60
    // Implemented from: System.Runtime.Remoting.Identity
    // Base method: System.Runtime.Remoting.ObjRef Identity::CreateObjRef(System.Type requestedType)
    System::Runtime::Remoting::ObjRef* CreateObjRef(System::Type* requestedType);
  }; // System.Runtime.Remoting.ClientIdentity
  #pragma pack(pop)
  static check_size<sizeof(ClientIdentity), 72 + sizeof(System::WeakReference*)> __System_Runtime_Remoting_ClientIdentitySizeCheck;
  static_assert(sizeof(ClientIdentity) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ClientIdentity*, "System.Runtime.Remoting", "ClientIdentity");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientIdentity::get_ClientProxy
// Il2CppName: get_ClientProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::MarshalByRefObject* (System::Runtime::Remoting::ClientIdentity::*)()>(&System::Runtime::Remoting::ClientIdentity::get_ClientProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ClientIdentity*), "get_ClientProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientIdentity::set_ClientProxy
// Il2CppName: set_ClientProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ClientIdentity::*)(System::MarshalByRefObject*)>(&System::Runtime::Remoting::ClientIdentity::set_ClientProxy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "MarshalByRefObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ClientIdentity*), "set_ClientProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientIdentity::get_TargetUri
// Il2CppName: get_TargetUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::ClientIdentity::*)()>(&System::Runtime::Remoting::ClientIdentity::get_TargetUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ClientIdentity*), "get_TargetUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientIdentity::CreateObjRef
// Il2CppName: CreateObjRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ObjRef* (System::Runtime::Remoting::ClientIdentity::*)(System::Type*)>(&System::Runtime::Remoting::ClientIdentity::CreateObjRef)> {
  static const MethodInfo* get() {
    static auto* requestedType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ClientIdentity*), "CreateObjRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestedType});
  }
};
