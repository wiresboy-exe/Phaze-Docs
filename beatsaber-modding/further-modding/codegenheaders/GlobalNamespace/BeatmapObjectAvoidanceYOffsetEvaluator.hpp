// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: BeatmapObjectSpawnMovementData/NoteSpawnData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData_NoteSpawnData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: IBeatmapObjectSpawnController
  class IBeatmapObjectSpawnController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectAvoidanceYOffsetEvaluator
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectAvoidanceYOffsetEvaluator : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::BufferData
    struct BufferData;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: BeatmapObjectAvoidanceYOffsetEvaluator/BufferData
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct BufferData/*, public System::ValueType*/ {
      public:
      // public readonly System.Single songTime
      // Size: 0x4
      // Offset: 0x0
      float songTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public readonly System.Single yOffset
      // Size: 0x4
      // Offset: 0x4
      float yOffset;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Creating value type constructor for type: BufferData
      constexpr BufferData(float songTime_ = {}, float yOffset_ = {}) noexcept : songTime{songTime_}, yOffset{yOffset_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Single songTime
      float& dyn_songTime();
      // Get instance field reference: public readonly System.Single yOffset
      float& dyn_yOffset();
      // public System.Void .ctor(System.Single songTime, System.Single yOffset)
      // Offset: 0x10CCD0C
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  BufferData(float songTime, float yOffset)
    }; // BeatmapObjectAvoidanceYOffsetEvaluator/BufferData
    #pragma pack(pop)
    static check_size<sizeof(BeatmapObjectAvoidanceYOffsetEvaluator::BufferData), 4 + sizeof(float)> __GlobalNamespace_BeatmapObjectAvoidanceYOffsetEvaluator_BufferDataSizeCheck;
    static_assert(sizeof(BeatmapObjectAvoidanceYOffsetEvaluator::BufferData) == 0x8);
    // private System.Int32 _currentYJumpOffsetBufferEndIndex
    // Size: 0x4
    // Offset: 0x10
    int currentYJumpOffsetBufferEndIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Single _jumpDurationToDesiredZPosition
    // Size: 0x4
    // Offset: 0x14
    float jumpDurationToDesiredZPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly BeatmapObjectAvoidanceYOffsetEvaluator/BufferData[] _yJumpOffsetBuffer
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::BufferData>* yJumpOffsetBuffer;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::BufferData>*) == 0x8);
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private readonly IBeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectSpawnController*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectAvoidanceYOffsetEvaluator
    BeatmapObjectAvoidanceYOffsetEvaluator(int currentYJumpOffsetBufferEndIndex_ = {}, float jumpDurationToDesiredZPosition_ = {}, ::Array<GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::BufferData>* yJumpOffsetBuffer_ = {}, GlobalNamespace::IAudioTimeSource* audioTimeSource_ = {}, GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController_ = {}) noexcept : currentYJumpOffsetBufferEndIndex{currentYJumpOffsetBufferEndIndex_}, jumpDurationToDesiredZPosition{jumpDurationToDesiredZPosition_}, yJumpOffsetBuffer{yJumpOffsetBuffer_}, audioTimeSource{audioTimeSource_}, beatmapObjectSpawnController{beatmapObjectSpawnController_} {}
    // static field const value: static private System.Int32 kYJumpOffsetBufferLength
    static constexpr const int kYJumpOffsetBufferLength = 2000;
    // Get static field: static private System.Int32 kYJumpOffsetBufferLength
    static int _get_kYJumpOffsetBufferLength();
    // Set static field: static private System.Int32 kYJumpOffsetBufferLength
    static void _set_kYJumpOffsetBufferLength(int value);
    // static field const value: static private System.Single kYJumpOffsetBufferSongTimeInitValue
    static constexpr const float kYJumpOffsetBufferSongTimeInitValue = -1000;
    // Get static field: static private System.Single kYJumpOffsetBufferSongTimeInitValue
    static float _get_kYJumpOffsetBufferSongTimeInitValue();
    // Set static field: static private System.Single kYJumpOffsetBufferSongTimeInitValue
    static void _set_kYJumpOffsetBufferSongTimeInitValue(float value);
    // Get instance field reference: private System.Int32 _currentYJumpOffsetBufferEndIndex
    int& dyn__currentYJumpOffsetBufferEndIndex();
    // Get instance field reference: private readonly System.Single _jumpDurationToDesiredZPosition
    float& dyn__jumpDurationToDesiredZPosition();
    // Get instance field reference: private readonly BeatmapObjectAvoidanceYOffsetEvaluator/BufferData[] _yJumpOffsetBuffer
    ::Array<GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::BufferData>*& dyn__yJumpOffsetBuffer();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private readonly IBeatmapObjectSpawnController _beatmapObjectSpawnController
    GlobalNamespace::IBeatmapObjectSpawnController*& dyn__beatmapObjectSpawnController();
    // public System.Void .ctor(IAudioTimeSource audioTimeSource, IBeatmapObjectSpawnController beatmapObjectSpawnController, System.Single moveToPlayerHeadTParam, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData)
    // Offset: 0x10CCBB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectAvoidanceYOffsetEvaluator* New_ctor(GlobalNamespace::IAudioTimeSource* audioTimeSource, GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController, float moveToPlayerHeadTParam, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectAvoidanceYOffsetEvaluator*, creationType>(audioTimeSource, beatmapObjectSpawnController, moveToPlayerHeadTParam, noteSpawnData)));
    }
    // public System.Void ManualUpdate()
    // Offset: 0x10CCD14
    void ManualUpdate();
    // public System.Single GetJumpOffsetYAtJumpStartSongTime(System.Single lastDeltaTime)
    // Offset: 0x10CCE9C
    float GetJumpOffsetYAtJumpStartSongTime(float lastDeltaTime);
  }; // BeatmapObjectAvoidanceYOffsetEvaluator
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectAvoidanceYOffsetEvaluator), 40 + sizeof(GlobalNamespace::IBeatmapObjectSpawnController*)> __GlobalNamespace_BeatmapObjectAvoidanceYOffsetEvaluatorSizeCheck;
  static_assert(sizeof(BeatmapObjectAvoidanceYOffsetEvaluator) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*, "", "BeatmapObjectAvoidanceYOffsetEvaluator");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::BufferData, "", "BeatmapObjectAvoidanceYOffsetEvaluator/BufferData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)()>(&GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::ManualUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::GetJumpOffsetYAtJumpStartSongTime
// Il2CppName: GetJumpOffsetYAtJumpStartSongTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)(float)>(&GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::GetJumpOffsetYAtJumpStartSongTime)> {
  static const MethodInfo* get() {
    static auto* lastDeltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*), "GetJumpOffsetYAtJumpStartSongTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lastDeltaTime});
  }
};