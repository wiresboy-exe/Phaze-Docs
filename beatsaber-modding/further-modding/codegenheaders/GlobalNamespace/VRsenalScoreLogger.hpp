// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VRsenalScoreLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class VRsenalScoreLogger : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRsenalScoreLogger::$Start$d__3
    class $Start$d__3;
    // [InjectAttribute] Offset: 0xE36FF0
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0xE37000
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // [InjectAttribute] Offset: 0xE37010
    // private ILevelEndActions _levelEndActions
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ILevelEndActions* levelEndActions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelEndActions*) == 0x8);
    // Creating value type constructor for type: VRsenalScoreLogger
    VRsenalScoreLogger(GlobalNamespace::IScoreController* scoreController_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, GlobalNamespace::ILevelEndActions* levelEndActions_ = {}) noexcept : scoreController{scoreController_}, difficultyBeatmap{difficultyBeatmap_}, levelEndActions{levelEndActions_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private IScoreController _scoreController
    GlobalNamespace::IScoreController*& dyn__scoreController();
    // Get instance field reference: private IDifficultyBeatmap _difficultyBeatmap
    GlobalNamespace::IDifficultyBeatmap*& dyn__difficultyBeatmap();
    // Get instance field reference: private ILevelEndActions _levelEndActions
    GlobalNamespace::ILevelEndActions*& dyn__levelEndActions();
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x12A2584
    System::Collections::IEnumerator* Start();
    // protected System.Void OnDestroy()
    // Offset: 0x12A2620
    void OnDestroy();
    // private System.Void HandleLevelFinishedEvent()
    // Offset: 0x12A2718
    void HandleLevelFinishedEvent();
    // private System.Void LogScore()
    // Offset: 0x12A271C
    void LogScore();
    // public System.Void .ctor()
    // Offset: 0x12A2844
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRsenalScoreLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRsenalScoreLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRsenalScoreLogger*, creationType>()));
    }
  }; // VRsenalScoreLogger
  #pragma pack(pop)
  static check_size<sizeof(VRsenalScoreLogger), 40 + sizeof(GlobalNamespace::ILevelEndActions*)> __GlobalNamespace_VRsenalScoreLoggerSizeCheck;
  static_assert(sizeof(VRsenalScoreLogger) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRsenalScoreLogger*, "", "VRsenalScoreLogger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::VRsenalScoreLogger::*)()>(&GlobalNamespace::VRsenalScoreLogger::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalScoreLogger*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRsenalScoreLogger::*)()>(&GlobalNamespace::VRsenalScoreLogger::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalScoreLogger*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::HandleLevelFinishedEvent
// Il2CppName: HandleLevelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRsenalScoreLogger::*)()>(&GlobalNamespace::VRsenalScoreLogger::HandleLevelFinishedEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalScoreLogger*), "HandleLevelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::LogScore
// Il2CppName: LogScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRsenalScoreLogger::*)()>(&GlobalNamespace::VRsenalScoreLogger::LogScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRsenalScoreLogger*), "LogScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRsenalScoreLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!