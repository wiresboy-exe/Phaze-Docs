// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
  // [TokenAttribute] Offset: FFFFFFFF
  class LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase : public ::Il2CppObject/*, public GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::LiteNetLibConnectionManager*>*/ {
    public:
    // public System.String userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String secret
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 port
    // Size: 0x4
    // Offset: 0x28
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean filterUnencryptedTraffic
    // Size: 0x1
    // Offset: 0x2C
    bool filterUnencryptedTraffic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean enableUnconnectedMessages
    // Size: 0x1
    // Offset: 0x2D
    bool enableUnconnectedMessages;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean enableBackgroundSentry
    // Size: 0x1
    // Offset: 0x2E
    bool enableBackgroundSentry;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean enableStatistics
    // Size: 0x1
    // Offset: 0x2F
    bool enableStatistics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Int32 disconnectTimeoutMs
    // Size: 0x4
    // Offset: 0x30
    int disconnectTimeoutMs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LiteNetLibConnectionParamsBase
    LiteNetLibConnectionParamsBase(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, ::Il2CppString* secret_ = {}, int port_ = {}, bool filterUnencryptedTraffic_ = {}, bool enableUnconnectedMessages_ = {}, bool enableBackgroundSentry_ = {}, bool enableStatistics_ = {}, int disconnectTimeoutMs_ = {}) noexcept : userId{userId_}, userName{userName_}, secret{secret_}, port{port_}, filterUnencryptedTraffic{filterUnencryptedTraffic_}, enableUnconnectedMessages{enableUnconnectedMessages_}, enableBackgroundSentry{enableBackgroundSentry_}, enableStatistics{enableStatistics_}, disconnectTimeoutMs{disconnectTimeoutMs_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::LiteNetLibConnectionManager*>
    operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::LiteNetLibConnectionManager*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::LiteNetLibConnectionManager*>*>(this);
    }
    // Get instance field reference: public System.String userId
    ::Il2CppString*& dyn_userId();
    // Get instance field reference: public System.String userName
    ::Il2CppString*& dyn_userName();
    // Get instance field reference: public System.String secret
    ::Il2CppString*& dyn_secret();
    // Get instance field reference: public System.Int32 port
    int& dyn_port();
    // Get instance field reference: public System.Boolean filterUnencryptedTraffic
    bool& dyn_filterUnencryptedTraffic();
    // Get instance field reference: public System.Boolean enableUnconnectedMessages
    bool& dyn_enableUnconnectedMessages();
    // Get instance field reference: public System.Boolean enableBackgroundSentry
    bool& dyn_enableBackgroundSentry();
    // Get instance field reference: public System.Boolean enableStatistics
    bool& dyn_enableStatistics();
    // Get instance field reference: public System.Int32 disconnectTimeoutMs
    int& dyn_disconnectTimeoutMs();
    // protected System.Void .ctor()
    // Offset: 0x1346D58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase*, creationType>()));
    }
  }; // LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
  #pragma pack(pop)
  static check_size<sizeof(LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase), 48 + sizeof(int)> __GlobalNamespace_LiteNetLibConnectionManager_LiteNetLibConnectionParamsBaseSizeCheck;
  static_assert(sizeof(LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase*, "", "LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!