// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLeadPlayerProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLeadPlayerProvider : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _timeToGainFirstLead
    // Size: 0x4
    // Offset: 0x18
    float timeToGainFirstLead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _timeToLooseLead
    // Size: 0x4
    // Offset: 0x1C
    float timeToLooseLead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xE40F38
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // [InjectAttribute] Offset: 0xE40F48
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerController*) == 0x8);
    // private System.Action`1<System.String> newLeaderWasSelectedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<::Il2CppString*>* newLeaderWasSelectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // private System.Single _currentLeadingPlayerStartTime
    // Size: 0x4
    // Offset: 0x38
    float currentLeadingPlayerStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: currentLeadingPlayerStartTime and: currentlyDisplayedUser
    char __padding5[0x4] = {};
    // private MultiplayerScoreProvider/RankedPlayer _currentlyDisplayedUser
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* currentlyDisplayedUser;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*) == 0x8);
    // private MultiplayerScoreProvider/RankedPlayer _currentlyLeadingUser
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* currentlyLeadingUser;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*) == 0x8);
    // Creating value type constructor for type: MultiplayerLeadPlayerProvider
    MultiplayerLeadPlayerProvider(float timeToGainFirstLead_ = {}, float timeToLooseLead_ = {}, GlobalNamespace::MultiplayerScoreProvider* scoreProvider_ = {}, GlobalNamespace::MultiplayerController* multiplayerController_ = {}, System::Action_1<::Il2CppString*>* newLeaderWasSelectedEvent_ = {}, float currentLeadingPlayerStartTime_ = {}, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* currentlyDisplayedUser_ = {}, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* currentlyLeadingUser_ = {}) noexcept : timeToGainFirstLead{timeToGainFirstLead_}, timeToLooseLead{timeToLooseLead_}, scoreProvider{scoreProvider_}, multiplayerController{multiplayerController_}, newLeaderWasSelectedEvent{newLeaderWasSelectedEvent_}, currentLeadingPlayerStartTime{currentLeadingPlayerStartTime_}, currentlyDisplayedUser{currentlyDisplayedUser_}, currentlyLeadingUser{currentlyLeadingUser_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _timeToGainFirstLead
    float& dyn__timeToGainFirstLead();
    // Get instance field reference: private System.Single _timeToLooseLead
    float& dyn__timeToLooseLead();
    // Get instance field reference: private readonly MultiplayerScoreProvider _scoreProvider
    GlobalNamespace::MultiplayerScoreProvider*& dyn__scoreProvider();
    // Get instance field reference: private readonly MultiplayerController _multiplayerController
    GlobalNamespace::MultiplayerController*& dyn__multiplayerController();
    // Get instance field reference: private System.Action`1<System.String> newLeaderWasSelectedEvent
    System::Action_1<::Il2CppString*>*& dyn_newLeaderWasSelectedEvent();
    // Get instance field reference: private System.Single _currentLeadingPlayerStartTime
    float& dyn__currentLeadingPlayerStartTime();
    // Get instance field reference: private MultiplayerScoreProvider/RankedPlayer _currentlyDisplayedUser
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*& dyn__currentlyDisplayedUser();
    // Get instance field reference: private MultiplayerScoreProvider/RankedPlayer _currentlyLeadingUser
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*& dyn__currentlyLeadingUser();
    // public System.Void add_newLeaderWasSelectedEvent(System.Action`1<System.String> value)
    // Offset: 0x11CD538
    void add_newLeaderWasSelectedEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_newLeaderWasSelectedEvent(System.Action`1<System.String> value)
    // Offset: 0x11CD6F8
    void remove_newLeaderWasSelectedEvent(System::Action_1<::Il2CppString*>* value);
    // protected System.Void Start()
    // Offset: 0x11D6560
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11D662C
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x11D6780
    void Update();
    // private System.Void StopProviding()
    // Offset: 0x11D6840
    void StopProviding();
    // private System.Void StartProviding()
    // Offset: 0x11D68E4
    void StartProviding();
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x11D661C
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // private System.Void HandleFirstPlayerDidChange(MultiplayerScoreProvider/RankedPlayer firstPlayer)
    // Offset: 0x11D698C
    void HandleFirstPlayerDidChange(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* firstPlayer);
    // public System.Void .ctor()
    // Offset: 0x11D6AB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLeadPlayerProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLeadPlayerProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLeadPlayerProvider*, creationType>()));
    }
  }; // MultiplayerLeadPlayerProvider
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLeadPlayerProvider), 72 + sizeof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)> __GlobalNamespace_MultiplayerLeadPlayerProviderSizeCheck;
  static_assert(sizeof(MultiplayerLeadPlayerProvider) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLeadPlayerProvider*, "", "MultiplayerLeadPlayerProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::add_newLeaderWasSelectedEvent
// Il2CppName: add_newLeaderWasSelectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::MultiplayerLeadPlayerProvider::add_newLeaderWasSelectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "add_newLeaderWasSelectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::remove_newLeaderWasSelectedEvent
// Il2CppName: remove_newLeaderWasSelectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::MultiplayerLeadPlayerProvider::remove_newLeaderWasSelectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "remove_newLeaderWasSelectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)()>(&GlobalNamespace::MultiplayerLeadPlayerProvider::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)()>(&GlobalNamespace::MultiplayerLeadPlayerProvider::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)()>(&GlobalNamespace::MultiplayerLeadPlayerProvider::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::StopProviding
// Il2CppName: StopProviding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)()>(&GlobalNamespace::MultiplayerLeadPlayerProvider::StopProviding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "StopProviding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::StartProviding
// Il2CppName: StartProviding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)()>(&GlobalNamespace::MultiplayerLeadPlayerProvider::StartProviding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "StartProviding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)(GlobalNamespace::MultiplayerController::State)>(&GlobalNamespace::MultiplayerLeadPlayerProvider::HandleStateChanged)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "MultiplayerController/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::HandleFirstPlayerDidChange
// Il2CppName: HandleFirstPlayerDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeadPlayerProvider::*)(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)>(&GlobalNamespace::MultiplayerLeadPlayerProvider::HandleFirstPlayerDidChange)> {
  static const MethodInfo* get() {
    static auto* firstPlayer = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeadPlayerProvider*), "HandleFirstPlayerDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeadPlayerProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!