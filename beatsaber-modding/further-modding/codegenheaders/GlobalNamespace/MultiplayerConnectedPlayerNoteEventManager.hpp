// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IConnectedPlayerNoteEventManager
#include "GlobalNamespace/IConnectedPlayerNoteEventManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
  // Forward declaring type: NoteMissInfoNetSerializable
  class NoteMissInfoNetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerNoteEventManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerNoteEventManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IConnectedPlayerNoteEventManager*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent
    struct NoteCutEvent;
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent
    struct NoteMissEvent;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct NoteCutEvent/*, public System::ValueType*/ {
      public:
      // public readonly System.Single time
      // Size: 0x4
      // Offset: 0x0
      float time;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Padding between fields: time and: noteCutInfo
      char __padding0[0x4] = {};
      // public readonly NoteCutInfoNetSerializable noteCutInfo
      // Size: 0x8
      // Offset: 0x8
      GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo;
      // Field size check
      static_assert(sizeof(GlobalNamespace::NoteCutInfoNetSerializable*) == 0x8);
      // Creating value type constructor for type: NoteCutEvent
      constexpr NoteCutEvent(float time_ = {}, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo_ = {}) noexcept : time{time_}, noteCutInfo{noteCutInfo_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Single time
      float& dyn_time();
      // Get instance field reference: public readonly NoteCutInfoNetSerializable noteCutInfo
      GlobalNamespace::NoteCutInfoNetSerializable*& dyn_noteCutInfo();
      // public System.Void .ctor(System.Single time, NoteCutInfoNetSerializable noteCutInfo)
      // Offset: 0x11CCC48
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  NoteCutEvent(float time, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo)
    }; // MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent), 8 + sizeof(GlobalNamespace::NoteCutInfoNetSerializable*)> __GlobalNamespace_MultiplayerConnectedPlayerNoteEventManager_NoteCutEventSizeCheck;
    static_assert(sizeof(MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent) == 0x10);
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct NoteMissEvent/*, public System::ValueType*/ {
      public:
      // public readonly System.Single time
      // Size: 0x4
      // Offset: 0x0
      float time;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Padding between fields: time and: noteMissInfo
      char __padding0[0x4] = {};
      // public readonly NoteMissInfoNetSerializable noteMissInfo
      // Size: 0x8
      // Offset: 0x8
      GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo;
      // Field size check
      static_assert(sizeof(GlobalNamespace::NoteMissInfoNetSerializable*) == 0x8);
      // Creating value type constructor for type: NoteMissEvent
      constexpr NoteMissEvent(float time_ = {}, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo_ = {}) noexcept : time{time_}, noteMissInfo{noteMissInfo_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Single time
      float& dyn_time();
      // Get instance field reference: public readonly NoteMissInfoNetSerializable noteMissInfo
      GlobalNamespace::NoteMissInfoNetSerializable*& dyn_noteMissInfo();
      // public System.Void .ctor(System.Single time, NoteMissInfoNetSerializable noteMissInfo)
      // Offset: 0x11CCDC8
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  NoteMissEvent(float time, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo)
    }; // MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent), 8 + sizeof(GlobalNamespace::NoteMissInfoNetSerializable*)> __GlobalNamespace_MultiplayerConnectedPlayerNoteEventManager_NoteMissEventSizeCheck;
    static_assert(sizeof(MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent) == 0x10);
    // [InjectAttribute] Offset: 0xE3FE4C
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FE5C
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FE6C
    // private readonly MultiplayerConnectedPlayerSongTimeSyncController _songTimeController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*) == 0x8);
    // private System.Action`1<NoteCutInfoNetSerializable> connectedPlayerNoteWasCutEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* connectedPlayerNoteWasCutEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>*) == 0x8);
    // private System.Action`1<NoteMissInfoNetSerializable> connectedPlayerNoteWasMissedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* connectedPlayerNoteWasMissedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent> _noteCutQueue
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent>* noteCutQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent> _noteMissQueue
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent>* noteMissQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent>*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerNoteEventManager
    MultiplayerConnectedPlayerNoteEventManager(GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeController_ = {}, System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* connectedPlayerNoteWasCutEvent_ = {}, System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* connectedPlayerNoteWasMissedEvent_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent>* noteCutQueue_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent>* noteMissQueue_ = {}) noexcept : connectedPlayer{connectedPlayer_}, gameplayRpcManager{gameplayRpcManager_}, songTimeController{songTimeController_}, connectedPlayerNoteWasCutEvent{connectedPlayerNoteWasCutEvent_}, connectedPlayerNoteWasMissedEvent{connectedPlayerNoteWasMissedEvent_}, noteCutQueue{noteCutQueue_}, noteMissQueue{noteMissQueue_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnectedPlayerNoteEventManager
    operator GlobalNamespace::IConnectedPlayerNoteEventManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectedPlayerNoteEventManager*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // Get instance field reference: private readonly IGameplayRpcManager _gameplayRpcManager
    GlobalNamespace::IGameplayRpcManager*& dyn__gameplayRpcManager();
    // Get instance field reference: private readonly MultiplayerConnectedPlayerSongTimeSyncController _songTimeController
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*& dyn__songTimeController();
    // Get instance field reference: private System.Action`1<NoteCutInfoNetSerializable> connectedPlayerNoteWasCutEvent
    System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>*& dyn_connectedPlayerNoteWasCutEvent();
    // Get instance field reference: private System.Action`1<NoteMissInfoNetSerializable> connectedPlayerNoteWasMissedEvent
    System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>*& dyn_connectedPlayerNoteWasMissedEvent();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent> _noteCutQueue
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent>*& dyn__noteCutQueue();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent> _noteMissQueue
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent>*& dyn__noteMissQueue();
    // public System.Void add_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    // Offset: 0x11CC2E8
    void add_connectedPlayerNoteWasCutEvent(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    // Offset: 0x11CC38C
    void remove_connectedPlayerNoteWasCutEvent(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void add_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    // Offset: 0x11CC430
    void add_connectedPlayerNoteWasMissedEvent(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    // Offset: 0x11CC4D4
    void remove_connectedPlayerNoteWasMissedEvent(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // protected System.Void Start()
    // Offset: 0x11CC578
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11CC710
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x11CC8B8
    void Update();
    // private System.Void HandleNoteWasCut(System.String userId, System.Single syncTime, System.Single songTime, NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0x11CCAC0
    void HandleNoteWasCut(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    // private System.Void HandleNoteWasMissed(System.String userId, System.Single syncTime, System.Single songTime, NoteMissInfoNetSerializable noteMissInfo)
    // Offset: 0x11CCC54
    void HandleNoteWasMissed(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);
    // public System.Void .ctor()
    // Offset: 0x11CCDD4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerNoteEventManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerNoteEventManager*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerNoteEventManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerNoteEventManager), 72 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent>*)> __GlobalNamespace_MultiplayerConnectedPlayerNoteEventManagerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerNoteEventManager) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*, "", "MultiplayerConnectedPlayerNoteEventManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent, "", "MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent, "", "MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::add_connectedPlayerNoteWasCutEvent
// Il2CppName: add_connectedPlayerNoteWasCutEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::*)(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::add_connectedPlayerNoteWasCutEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteCutInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*), "add_connectedPlayerNoteWasCutEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::remove_connectedPlayerNoteWasCutEvent
// Il2CppName: remove_connectedPlayerNoteWasCutEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::*)(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::remove_connectedPlayerNoteWasCutEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteCutInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*), "remove_connectedPlayerNoteWasCutEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::add_connectedPlayerNoteWasMissedEvent
// Il2CppName: add_connectedPlayerNoteWasMissedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::*)(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::add_connectedPlayerNoteWasMissedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteMissInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*), "add_connectedPlayerNoteWasMissedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::remove_connectedPlayerNoteWasMissedEvent
// Il2CppName: remove_connectedPlayerNoteWasMissedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::*)(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::remove_connectedPlayerNoteWasMissedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteMissInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*), "remove_connectedPlayerNoteWasMissedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::*)(::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*)>(&GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* syncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfoNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, syncTime, songTime, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::HandleNoteWasMissed
// Il2CppName: HandleNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::*)(::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*)>(&GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::HandleNoteWasMissed)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* syncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteMissInfo = &::il2cpp_utils::GetClassFromName("", "NoteMissInfoNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*), "HandleNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, syncTime, songTime, noteMissInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!