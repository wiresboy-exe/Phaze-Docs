// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IPrincipal
  class IPrincipal;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CallContextSecurityData
  // [TokenAttribute] Offset: FFFFFFFF
  class CallContextSecurityData : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.Security.Principal.IPrincipal _principal
    // Size: 0x8
    // Offset: 0x10
    System::Security::Principal::IPrincipal* principal;
    // Field size check
    static_assert(sizeof(System::Security::Principal::IPrincipal*) == 0x8);
    // Creating value type constructor for type: CallContextSecurityData
    CallContextSecurityData(System::Security::Principal::IPrincipal* principal_ = {}) noexcept : principal{principal_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating conversion operator: operator System::Security::Principal::IPrincipal*
    constexpr operator System::Security::Principal::IPrincipal*() const noexcept {
      return principal;
    }
    // Get instance field reference: private System.Security.Principal.IPrincipal _principal
    System::Security::Principal::IPrincipal*& dyn__principal();
    // System.Boolean get_HasInfo()
    // Offset: 0x1A4C860
    bool get_HasInfo();
    // public System.Object Clone()
    // Offset: 0x1A4C870
    ::Il2CppObject* Clone();
    // public System.Void .ctor()
    // Offset: 0x1A4C8E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallContextSecurityData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::CallContextSecurityData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallContextSecurityData*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.CallContextSecurityData
  #pragma pack(pop)
  static check_size<sizeof(CallContextSecurityData), 16 + sizeof(System::Security::Principal::IPrincipal*)> __System_Runtime_Remoting_Messaging_CallContextSecurityDataSizeCheck;
  static_assert(sizeof(CallContextSecurityData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CallContextSecurityData*, "System.Runtime.Remoting.Messaging", "CallContextSecurityData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextSecurityData::get_HasInfo
// Il2CppName: get_HasInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::CallContextSecurityData::*)()>(&System::Runtime::Remoting::Messaging::CallContextSecurityData::get_HasInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContextSecurityData*), "get_HasInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextSecurityData::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::CallContextSecurityData::*)()>(&System::Runtime::Remoting::Messaging::CallContextSecurityData::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContextSecurityData*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContextSecurityData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
