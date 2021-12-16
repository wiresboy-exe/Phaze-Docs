// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.EndPoint
#include "System/Net/EndPoint.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: SocketAddress
  class SocketAddress;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: AddressFamily
  struct AddressFamily;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IPEndPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class IPEndPoint : public System::Net::EndPoint {
    public:
    // private System.Net.IPAddress m_Address
    // Size: 0x8
    // Offset: 0x10
    System::Net::IPAddress* m_Address;
    // Field size check
    static_assert(sizeof(System::Net::IPAddress*) == 0x8);
    // private System.Int32 m_Port
    // Size: 0x4
    // Offset: 0x18
    int m_Port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: IPEndPoint
    IPEndPoint(System::Net::IPAddress* m_Address_ = {}, int m_Port_ = {}) noexcept : m_Address{m_Address_}, m_Port{m_Port_} {}
    // static field const value: static public System.Int32 MinPort
    static constexpr const int MinPort = 0;
    // Get static field: static public System.Int32 MinPort
    static int _get_MinPort();
    // Set static field: static public System.Int32 MinPort
    static void _set_MinPort(int value);
    // static field const value: static public System.Int32 MaxPort
    static constexpr const int MaxPort = 65535;
    // Get static field: static public System.Int32 MaxPort
    static int _get_MaxPort();
    // Set static field: static public System.Int32 MaxPort
    static void _set_MaxPort(int value);
    // static field const value: static System.Int32 AnyPort
    static constexpr const int AnyPort = 0;
    // Get static field: static System.Int32 AnyPort
    static int _get_AnyPort();
    // Set static field: static System.Int32 AnyPort
    static void _set_AnyPort(int value);
    // Get static field: static System.Net.IPEndPoint Any
    static System::Net::IPEndPoint* _get_Any();
    // Set static field: static System.Net.IPEndPoint Any
    static void _set_Any(System::Net::IPEndPoint* value);
    // Get static field: static System.Net.IPEndPoint IPv6Any
    static System::Net::IPEndPoint* _get_IPv6Any();
    // Set static field: static System.Net.IPEndPoint IPv6Any
    static void _set_IPv6Any(System::Net::IPEndPoint* value);
    // Get instance field reference: private System.Net.IPAddress m_Address
    System::Net::IPAddress*& dyn_m_Address();
    // Get instance field reference: private System.Int32 m_Port
    int& dyn_m_Port();
    // public System.Net.IPAddress get_Address()
    // Offset: 0x1682C7C
    System::Net::IPAddress* get_Address();
    // public System.Int32 get_Port()
    // Offset: 0x1682C84
    int get_Port();
    // public System.Void .ctor(System.Net.IPAddress address, System.Int32 port)
    // Offset: 0x1682B7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPEndPoint* New_ctor(System::Net::IPAddress* address, int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::IPEndPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPEndPoint*, creationType>(address, port)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1683214
    static void _cctor();
    // public override System.Net.Sockets.AddressFamily get_AddressFamily()
    // Offset: 0x1682B60
    // Implemented from: System.Net.EndPoint
    // Base method: System.Net.Sockets.AddressFamily EndPoint::get_AddressFamily()
    System::Net::Sockets::AddressFamily get_AddressFamily();
    // public override System.String ToString()
    // Offset: 0x1682C8C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Net.SocketAddress Serialize()
    // Offset: 0x1682D48
    // Implemented from: System.Net.EndPoint
    // Base method: System.Net.SocketAddress EndPoint::Serialize()
    System::Net::SocketAddress* Serialize();
    // public override System.Net.EndPoint Create(System.Net.SocketAddress socketAddress)
    // Offset: 0x1682DC0
    // Implemented from: System.Net.EndPoint
    // Base method: System.Net.EndPoint EndPoint::Create(System.Net.SocketAddress socketAddress)
    System::Net::EndPoint* Create(System::Net::SocketAddress* socketAddress);
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0x16830E8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.Int32 GetHashCode()
    // Offset: 0x16831D8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Net.IPEndPoint
  #pragma pack(pop)
  static check_size<sizeof(IPEndPoint), 24 + sizeof(int)> __System_Net_IPEndPointSizeCheck;
  static_assert(sizeof(IPEndPoint) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::IPEndPoint*, "System.Net", "IPEndPoint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IPEndPoint::get_Address
// Il2CppName: get_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPAddress* (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::get_Address)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPEndPoint*), "get_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPEndPoint::get_Port
// Il2CppName: get_Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::get_Port)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPEndPoint*), "get_Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPEndPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::IPEndPoint::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::IPEndPoint::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPEndPoint*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPEndPoint::get_AddressFamily
// Il2CppName: get_AddressFamily
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::AddressFamily (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::get_AddressFamily)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPEndPoint*), "get_AddressFamily", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPEndPoint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPEndPoint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPEndPoint::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::SocketAddress* (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::Serialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPEndPoint*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::IPEndPoint::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::EndPoint* (System::Net::IPEndPoint::*)(System::Net::SocketAddress*)>(&System::Net::IPEndPoint::Create)> {
  static const MethodInfo* get() {
    static auto* socketAddress = &::il2cpp_utils::GetClassFromName("System.Net", "SocketAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPEndPoint*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socketAddress});
  }
};
// Writing MetadataGetter for method: System::Net::IPEndPoint::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IPEndPoint::*)(::Il2CppObject*)>(&System::Net::IPEndPoint::Equals)> {
  static const MethodInfo* get() {
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPEndPoint*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparand});
  }
};
// Writing MetadataGetter for method: System::Net::IPEndPoint::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPEndPoint*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};