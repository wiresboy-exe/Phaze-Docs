// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebConnectionGroup
#include "System/Net/WebConnectionGroup.hpp"
// Including type: System.Net.IWebConnectionState
#include "System/Net/IWebConnectionState.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebConnection
  class WebConnection;
  // Forward declaring type: ServicePoint
  class ServicePoint;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnectionGroup/System.Net.ConnectionState
  // [TokenAttribute] Offset: FFFFFFFF
  class WebConnectionGroup::ConnectionState : public ::Il2CppObject/*, public System::Net::IWebConnectionState*/ {
    public:
    // private System.Net.WebConnection <Connection>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Net::WebConnection* Connection;
    // Field size check
    static_assert(sizeof(System::Net::WebConnection*) == 0x8);
    // private System.Net.WebConnectionGroup <Group>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Net::WebConnectionGroup* Group;
    // Field size check
    static_assert(sizeof(System::Net::WebConnectionGroup*) == 0x8);
    // private System.Boolean busy
    // Size: 0x1
    // Offset: 0x20
    bool busy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: busy and: idleSince
    char __padding2[0x7] = {};
    // private System.DateTime idleSince
    // Size: 0x8
    // Offset: 0x28
    System::DateTime idleSince;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // Creating value type constructor for type: ConnectionState
    ConnectionState(System::Net::WebConnection* Connection_ = {}, System::Net::WebConnectionGroup* Group_ = {}, bool busy_ = {}, System::DateTime idleSince_ = {}) noexcept : Connection{Connection_}, Group{Group_}, busy{busy_}, idleSince{idleSince_} {}
    // Creating interface conversion operator: operator System::Net::IWebConnectionState
    operator System::Net::IWebConnectionState() noexcept {
      return *reinterpret_cast<System::Net::IWebConnectionState*>(this);
    }
    // Get instance field reference: private System.Net.WebConnection <Connection>k__BackingField
    System::Net::WebConnection*& dyn_$Connection$k__BackingField();
    // Get instance field reference: private System.Net.WebConnectionGroup <Group>k__BackingField
    System::Net::WebConnectionGroup*& dyn_$Group$k__BackingField();
    // Get instance field reference: private System.Boolean busy
    bool& dyn_busy();
    // Get instance field reference: private System.DateTime idleSince
    System::DateTime& dyn_idleSince();
    // public System.Net.WebConnection get_Connection()
    // Offset: 0x15DC068
    System::Net::WebConnection* get_Connection();
    // private System.Void set_Connection(System.Net.WebConnection value)
    // Offset: 0x15DC070
    void set_Connection(System::Net::WebConnection* value);
    // public System.Net.WebConnectionGroup get_Group()
    // Offset: 0x15DC078
    System::Net::WebConnectionGroup* get_Group();
    // private System.Void set_Group(System.Net.WebConnectionGroup value)
    // Offset: 0x15DC080
    void set_Group(System::Net::WebConnectionGroup* value);
    // public System.Net.ServicePoint get_ServicePoint()
    // Offset: 0x15DC088
    System::Net::ServicePoint* get_ServicePoint();
    // public System.Boolean get_Busy()
    // Offset: 0x15DC0A4
    bool get_Busy();
    // public System.DateTime get_IdleSince()
    // Offset: 0x15DC0AC
    System::DateTime get_IdleSince();
    // public System.Void .ctor(System.Net.WebConnectionGroup group)
    // Offset: 0x15DBAB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionGroup::ConnectionState* New_ctor(System::Net::WebConnectionGroup* group) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionGroup::ConnectionState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionGroup::ConnectionState*, creationType>(group)));
    }
    // public System.Boolean TrySetBusy()
    // Offset: 0x15DC0B4
    bool TrySetBusy();
    // public System.Void SetIdle()
    // Offset: 0x15DC20C
    void SetIdle();
  }; // System.Net.WebConnectionGroup/System.Net.ConnectionState
  #pragma pack(pop)
  static check_size<sizeof(WebConnectionGroup::ConnectionState), 40 + sizeof(System::DateTime)> __System_Net_WebConnectionGroup_ConnectionStateSizeCheck;
  static_assert(sizeof(WebConnectionGroup::ConnectionState) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnectionGroup::ConnectionState*, "System.Net", "WebConnectionGroup/ConnectionState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::ConnectionState::get_Connection
// Il2CppName: get_Connection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebConnection* (System::Net::WebConnectionGroup::ConnectionState::*)()>(&System::Net::WebConnectionGroup::ConnectionState::get_Connection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup::ConnectionState*), "get_Connection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::ConnectionState::set_Connection
// Il2CppName: set_Connection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionGroup::ConnectionState::*)(System::Net::WebConnection*)>(&System::Net::WebConnectionGroup::ConnectionState::set_Connection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "WebConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup::ConnectionState*), "set_Connection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::ConnectionState::get_Group
// Il2CppName: get_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebConnectionGroup* (System::Net::WebConnectionGroup::ConnectionState::*)()>(&System::Net::WebConnectionGroup::ConnectionState::get_Group)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup::ConnectionState*), "get_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::ConnectionState::set_Group
// Il2CppName: set_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionGroup::ConnectionState::*)(System::Net::WebConnectionGroup*)>(&System::Net::WebConnectionGroup::ConnectionState::set_Group)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "WebConnectionGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup::ConnectionState*), "set_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::ConnectionState::get_ServicePoint
// Il2CppName: get_ServicePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ServicePoint* (System::Net::WebConnectionGroup::ConnectionState::*)()>(&System::Net::WebConnectionGroup::ConnectionState::get_ServicePoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup::ConnectionState*), "get_ServicePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::ConnectionState::get_Busy
// Il2CppName: get_Busy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionGroup::ConnectionState::*)()>(&System::Net::WebConnectionGroup::ConnectionState::get_Busy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup::ConnectionState*), "get_Busy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::ConnectionState::get_IdleSince
// Il2CppName: get_IdleSince
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Net::WebConnectionGroup::ConnectionState::*)()>(&System::Net::WebConnectionGroup::ConnectionState::get_IdleSince)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup::ConnectionState*), "get_IdleSince", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::ConnectionState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::ConnectionState::TrySetBusy
// Il2CppName: TrySetBusy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionGroup::ConnectionState::*)()>(&System::Net::WebConnectionGroup::ConnectionState::TrySetBusy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup::ConnectionState*), "TrySetBusy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::ConnectionState::SetIdle
// Il2CppName: SetIdle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionGroup::ConnectionState::*)()>(&System::Net::WebConnectionGroup::ConnectionState::SetIdle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup::ConnectionState*), "SetIdle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};