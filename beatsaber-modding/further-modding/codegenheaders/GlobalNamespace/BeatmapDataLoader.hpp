// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: ColorType
  struct ColorType;
  // Forward declaring type: BeatmapEventType
  struct BeatmapEventType;
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapDataLoader::BpmChangeData
    struct BpmChangeData;
    // Nested type: GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0
    struct $$c__DisplayClass2_0;
    // Nested type: GlobalNamespace::BeatmapDataLoader::$$c
    class $$c;
    // Creating value type constructor for type: BeatmapDataLoader
    BeatmapDataLoader() noexcept {}
    // private System.Single GetRealTimeFromBPMTime(System.Single bmpTime, System.Single bpm, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x11E5BF0
    float GetRealTimeFromBPMTime(float bmpTime, float bpm, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromBeatmapSaveData(System.Collections.Generic.List`1<BeatmapSaveData/NoteData> notesSaveData, System.Collections.Generic.List`1<BeatmapSaveData/WaypointData> waypointsSaveData, System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> obstaclesSaveData, System.Collections.Generic.List`1<BeatmapSaveData/EventData> eventsSaveData, BeatmapSaveData/SpecialEventKeywordFiltersData environmentSpecialEventFilterData, System.Single startBpm, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x11E5C5C
    GlobalNamespace::BeatmapData* GetBeatmapDataFromBeatmapSaveData(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>* waypointsSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstaclesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* eventsSaveData, GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData* environmentSpecialEventFilterData, float startBpm, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromBinary(System.Byte[] data, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x11E6DDC
    GlobalNamespace::BeatmapData* GetBeatmapDataFromBinary(::Array<uint8_t>* data, float startBPM, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromJson(System.String json, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x11E6E54
    GlobalNamespace::BeatmapData* GetBeatmapDataFromJson(::Il2CppString* json, float startBPM, float shuffle, float shufflePeriod);
    // static private ColorType ColorTypeFromBeatmapSaveDataNoteType(BeatmapSaveData/NoteType noteType)
    // Offset: 0x11E6DBC
    static GlobalNamespace::ColorType ColorTypeFromBeatmapSaveDataNoteType(GlobalNamespace::BeatmapSaveData::NoteType noteType);
    // static private ColorType ColorTypeFromBeatmapSaveDataColorType(BeatmapSaveData/ColorType colorType)
    // Offset: 0x11E6ECC
    static GlobalNamespace::ColorType ColorTypeFromBeatmapSaveDataColorType(GlobalNamespace::BeatmapSaveData::ColorType colorType);
    // static private BeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(BeatmapSaveData/BeatmapEventType beatmapEventType)
    // Offset: 0x11E6ABC
    static GlobalNamespace::BeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(GlobalNamespace::BeatmapSaveData::BeatmapEventType beatmapEventType);
    // static BeatmapSaveData/ITime <GetBeatmapDataFromBeatmapSaveData>g__SortBeatmapSaveDataObjects|2_3(BeatmapSaveData/ITime[] data)
    // Offset: 0x11E6AC0
    static GlobalNamespace::BeatmapSaveData::ITime* $GetBeatmapDataFromBeatmapSaveData$g__SortBeatmapSaveDataObjects_2_3(::Array<GlobalNamespace::BeatmapSaveData::ITime*>* data);
    // private System.Single <GetBeatmapDataFromBeatmapSaveData>g__ProcessTime|2_4(System.Single bpmTime, ref BeatmapDataLoader/<>c__DisplayClass2_0 param_0001016b)
    // Offset: 0x11E6C54
    float $GetBeatmapDataFromBeatmapSaveData$g__ProcessTime_2_4(float bpmTime, ByRef<GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0> param_0001016b);
    // public System.Void .ctor()
    // Offset: 0x11E6EDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader*, creationType>()));
    }
  }; // BeatmapDataLoader
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader*, "", "BeatmapDataLoader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetRealTimeFromBPMTime
// Il2CppName: GetRealTimeFromBPMTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapDataLoader::*)(float, float, float, float)>(&GlobalNamespace::BeatmapDataLoader::GetRealTimeFromBPMTime)> {
  static const MethodInfo* get() {
    static auto* bmpTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shuffle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shufflePeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetRealTimeFromBPMTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bmpTime, bpm, shuffle, shufflePeriod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData
// Il2CppName: GetBeatmapDataFromBeatmapSaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapDataLoader::*)(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>*, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>*, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>*, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>*, GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData*, float, float, float)>(&GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData)> {
  static const MethodInfo* get() {
    static auto* notesSaveData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/NoteData")})->byval_arg;
    static auto* waypointsSaveData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/WaypointData")})->byval_arg;
    static auto* obstaclesSaveData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/ObstacleData")})->byval_arg;
    static auto* eventsSaveData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/EventData")})->byval_arg;
    static auto* environmentSpecialEventFilterData = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/SpecialEventKeywordFiltersData")->byval_arg;
    static auto* startBpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shuffle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shufflePeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetBeatmapDataFromBeatmapSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notesSaveData, waypointsSaveData, obstaclesSaveData, eventsSaveData, environmentSpecialEventFilterData, startBpm, shuffle, shufflePeriod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBinary
// Il2CppName: GetBeatmapDataFromBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapDataLoader::*)(::Array<uint8_t>*, float, float, float)>(&GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBinary)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startBPM = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shuffle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shufflePeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetBeatmapDataFromBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, startBPM, shuffle, shufflePeriod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromJson
// Il2CppName: GetBeatmapDataFromJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapDataLoader::*)(::Il2CppString*, float, float, float)>(&GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromJson)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startBPM = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shuffle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shufflePeriod = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetBeatmapDataFromJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json, startBPM, shuffle, shufflePeriod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ColorTypeFromBeatmapSaveDataNoteType
// Il2CppName: ColorTypeFromBeatmapSaveDataNoteType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorType (*)(GlobalNamespace::BeatmapSaveData::NoteType)>(&GlobalNamespace::BeatmapDataLoader::ColorTypeFromBeatmapSaveDataNoteType)> {
  static const MethodInfo* get() {
    static auto* noteType = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/NoteType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ColorTypeFromBeatmapSaveDataNoteType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ColorTypeFromBeatmapSaveDataColorType
// Il2CppName: ColorTypeFromBeatmapSaveDataColorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorType (*)(GlobalNamespace::BeatmapSaveData::ColorType)>(&GlobalNamespace::BeatmapDataLoader::ColorTypeFromBeatmapSaveDataColorType)> {
  static const MethodInfo* get() {
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/ColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ColorTypeFromBeatmapSaveDataColorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ConvertFromBeatmapSaveDataBeatmapEventType
// Il2CppName: ConvertFromBeatmapSaveDataBeatmapEventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventType (*)(GlobalNamespace::BeatmapSaveData::BeatmapEventType)>(&GlobalNamespace::BeatmapDataLoader::ConvertFromBeatmapSaveDataBeatmapEventType)> {
  static const MethodInfo* get() {
    static auto* beatmapEventType = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/BeatmapEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ConvertFromBeatmapSaveDataBeatmapEventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__SortBeatmapSaveDataObjects_2_3
// Il2CppName: <GetBeatmapDataFromBeatmapSaveData>g__SortBeatmapSaveDataObjects|2_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapSaveData::ITime* (*)(::Array<GlobalNamespace::BeatmapSaveData::ITime*>*)>(&GlobalNamespace::BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__SortBeatmapSaveDataObjects_2_3)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/ITime"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "<GetBeatmapDataFromBeatmapSaveData>g__SortBeatmapSaveDataObjects|2_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__ProcessTime_2_4
// Il2CppName: <GetBeatmapDataFromBeatmapSaveData>g__ProcessTime|2_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapDataLoader::*)(float, ByRef<GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0>)>(&GlobalNamespace::BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__ProcessTime_2_4)> {
  static const MethodInfo* get() {
    static auto* bpmTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* param_0001016b = &::il2cpp_utils::GetClassFromName("", "BeatmapDataLoader/<>c__DisplayClass2_0")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "<GetBeatmapDataFromBeatmapSaveData>g__ProcessTime|2_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bpmTime, param_0001016b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!