// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IHandshakeClientToServerMessage
#include "MasterServer/IHandshakeClientToServerMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.ClientHelloWithCookieRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientHelloWithCookieRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IHandshakeClientToServerMessage*/ {
    public:
    // public System.UInt32 certificateResponseId
    // Size: 0x4
    // Offset: 0x14
    uint certificateResponseId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable cookie
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ByteArrayNetSerializable* cookie;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: ClientHelloWithCookieRequest
    ClientHelloWithCookieRequest(uint certificateResponseId_ = {}, GlobalNamespace::ByteArrayNetSerializable* random_ = {}, GlobalNamespace::ByteArrayNetSerializable* cookie_ = {}) noexcept : certificateResponseId{certificateResponseId_}, random{random_}, cookie{cookie_} {}
    // Creating interface conversion operator: operator MasterServer::IHandshakeClientToServerMessage
    operator MasterServer::IHandshakeClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IHandshakeClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field reference: public System.UInt32 certificateResponseId
    uint& dyn_certificateResponseId();
    // Get instance field reference: public readonly ByteArrayNetSerializable random
    GlobalNamespace::ByteArrayNetSerializable*& dyn_random();
    // Get instance field reference: public readonly ByteArrayNetSerializable cookie
    GlobalNamespace::ByteArrayNetSerializable*& dyn_cookie();
    // static public PacketPool`1<MasterServer.ClientHelloWithCookieRequest> get_pool()
    // Offset: 0x1218D80
    static GlobalNamespace::PacketPool_1<MasterServer::ClientHelloWithCookieRequest*>* get_pool();
    // public MasterServer.ClientHelloWithCookieRequest Init(System.UInt32 certificateResponseId, System.Byte[] random, System.Byte[] cookie)
    // Offset: 0x1218DC8
    MasterServer::ClientHelloWithCookieRequest* Init(uint certificateResponseId, ::Array<uint8_t>* random, ::Array<uint8_t>* cookie);
    // public System.Void .ctor()
    // Offset: 0x121ACB8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientHelloWithCookieRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::ClientHelloWithCookieRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientHelloWithCookieRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x121AB70
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x121ABD4
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x121AC3C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
  }; // MasterServer.ClientHelloWithCookieRequest
  #pragma pack(pop)
  static check_size<sizeof(ClientHelloWithCookieRequest), 32 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_ClientHelloWithCookieRequestSizeCheck;
  static_assert(sizeof(ClientHelloWithCookieRequest) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ClientHelloWithCookieRequest*, "MasterServer", "ClientHelloWithCookieRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::ClientHelloWithCookieRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::ClientHelloWithCookieRequest*>* (*)()>(&MasterServer::ClientHelloWithCookieRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ClientHelloWithCookieRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::ClientHelloWithCookieRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::ClientHelloWithCookieRequest* (MasterServer::ClientHelloWithCookieRequest::*)(uint, ::Array<uint8_t>*, ::Array<uint8_t>*)>(&MasterServer::ClientHelloWithCookieRequest::Init)> {
  static const MethodInfo* get() {
    static auto* certificateResponseId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* cookie = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ClientHelloWithCookieRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificateResponseId, random, cookie});
  }
};
// Writing MetadataGetter for method: MasterServer::ClientHelloWithCookieRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::ClientHelloWithCookieRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ClientHelloWithCookieRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::ClientHelloWithCookieRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ClientHelloWithCookieRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::ClientHelloWithCookieRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ClientHelloWithCookieRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::ClientHelloWithCookieRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ClientHelloWithCookieRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::ClientHelloWithCookieRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ClientHelloWithCookieRequest::*)()>(&MasterServer::ClientHelloWithCookieRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ClientHelloWithCookieRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};