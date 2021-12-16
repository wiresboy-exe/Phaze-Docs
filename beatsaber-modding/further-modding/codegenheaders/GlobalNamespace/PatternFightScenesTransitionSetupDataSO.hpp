// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Skipping declaration: PatternFightEndStateType because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PatternFightScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PatternFightScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // Nested type: GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType
    struct PatternFightEndStateType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType
    // [TokenAttribute] Offset: FFFFFFFF
    struct PatternFightEndStateType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: PatternFightEndStateType
      constexpr PatternFightEndStateType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType Completed
      static constexpr const int Completed = 0;
      // Get static field: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType Completed
      static GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType _get_Completed();
      // Set static field: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType Completed
      static void _set_Completed(GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType value);
      // static field const value: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType ReturnToMenu
      static constexpr const int ReturnToMenu = 1;
      // Get static field: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType ReturnToMenu
      static GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType _get_ReturnToMenu();
      // Set static field: static public PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType ReturnToMenu
      static void _set_ReturnToMenu(GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType
    #pragma pack(pop)
    static check_size<sizeof(PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType), 0 + sizeof(int)> __GlobalNamespace_PatternFightScenesTransitionSetupDataSO_PatternFightEndStateTypeSizeCheck;
    static_assert(sizeof(PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType) == 0x4);
    // private EnvironmentInfoSO _environmentInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private SceneInfo _patternFightSceneInfo
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SceneInfo* patternFightSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private System.Action`2<PatternFightScenesTransitionSetupDataSO,PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType> didFinishEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>*) == 0x8);
    // Creating value type constructor for type: PatternFightScenesTransitionSetupDataSO
    PatternFightScenesTransitionSetupDataSO(GlobalNamespace::EnvironmentInfoSO* environmentInfo_ = {}, GlobalNamespace::SceneInfo* patternFightSceneInfo_ = {}, GlobalNamespace::SceneInfo* gameCoreSceneInfo_ = {}, System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>* didFinishEvent_ = {}) noexcept : environmentInfo{environmentInfo_}, patternFightSceneInfo{patternFightSceneInfo_}, gameCoreSceneInfo{gameCoreSceneInfo_}, didFinishEvent{didFinishEvent_} {}
    // Get instance field reference: private EnvironmentInfoSO _environmentInfo
    GlobalNamespace::EnvironmentInfoSO*& dyn__environmentInfo();
    // Get instance field reference: private SceneInfo _patternFightSceneInfo
    GlobalNamespace::SceneInfo*& dyn__patternFightSceneInfo();
    // Get instance field reference: private SceneInfo _gameCoreSceneInfo
    GlobalNamespace::SceneInfo*& dyn__gameCoreSceneInfo();
    // Get instance field reference: private System.Action`2<PatternFightScenesTransitionSetupDataSO,PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType> didFinishEvent
    System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`2<PatternFightScenesTransitionSetupDataSO,PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType> value)
    // Offset: 0x1037E80
    void add_didFinishEvent(System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<PatternFightScenesTransitionSetupDataSO,PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType> value)
    // Offset: 0x1037F24
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>* value);
    // public System.Void Init(PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0x103742C
    void Init(GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);
    // public System.Void Finish(PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType endState)
    // Offset: 0x1037FC8
    void Finish(GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType endState);
    // public System.Void .ctor()
    // Offset: 0x1038040
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PatternFightScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PatternFightScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PatternFightScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // PatternFightScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(PatternFightScenesTransitionSetupDataSO), 64 + sizeof(System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>*)> __GlobalNamespace_PatternFightScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(PatternFightScenesTransitionSetupDataSO) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, "", "PatternFightScenesTransitionSetupDataSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType, "", "PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PatternFightScenesTransitionSetupDataSO::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>*)>(&GlobalNamespace::PatternFightScenesTransitionSetupDataSO::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PatternFightScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightScenesTransitionSetupDataSO*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightScenesTransitionSetupDataSO::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::PatternFightScenesTransitionSetupDataSO*, GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType>*)>(&GlobalNamespace::PatternFightScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PatternFightScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightScenesTransitionSetupDataSO*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightScenesTransitionSetupDataSO::*)(GlobalNamespace::PlayerSpecificSettings*)>(&GlobalNamespace::PatternFightScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerSpecificSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightScenesTransitionSetupDataSO::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightScenesTransitionSetupDataSO::*)(GlobalNamespace::PatternFightScenesTransitionSetupDataSO::PatternFightEndStateType)>(&GlobalNamespace::PatternFightScenesTransitionSetupDataSO::Finish)> {
  static const MethodInfo* get() {
    static auto* endState = &::il2cpp_utils::GetClassFromName("", "PatternFightScenesTransitionSetupDataSO/PatternFightEndStateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightScenesTransitionSetupDataSO*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!