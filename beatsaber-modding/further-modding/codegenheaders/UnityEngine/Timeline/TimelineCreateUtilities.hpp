// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineCreateUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TimelineCreateUtilities : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_1
    class $$c__DisplayClass0_1;
    // Creating value type constructor for type: TimelineCreateUtilities
    TimelineCreateUtilities() noexcept {}
    // static public System.String GenerateUniqueActorName(System.Collections.Generic.List`1<UnityEngine.ScriptableObject> tracks, System.String name)
    // Offset: 0x236858C
    static ::Il2CppString* GenerateUniqueActorName(System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* tracks, ::Il2CppString* name);
    // static public System.Void SaveAssetIntoObject(UnityEngine.Object childAsset, UnityEngine.Object masterAsset)
    // Offset: 0x2368208
    static void SaveAssetIntoObject(UnityEngine::Object* childAsset, UnityEngine::Object* masterAsset);
    // static public System.Void RemoveAssetFromObject(UnityEngine.Object childAsset, UnityEngine.Object masterAsset)
    // Offset: 0x236847C
    static void RemoveAssetFromObject(UnityEngine::Object* childAsset, UnityEngine::Object* masterAsset);
    // static public UnityEngine.AnimationClip CreateAnimationClipForTrack(System.String name, UnityEngine.Timeline.TrackAsset track, System.Boolean isLegacy)
    // Offset: 0x2367294
    static UnityEngine::AnimationClip* CreateAnimationClipForTrack(::Il2CppString* name, UnityEngine::Timeline::TrackAsset* track, bool isLegacy);
    // static public System.Boolean ValidateParentTrack(UnityEngine.Timeline.TrackAsset parent, System.Type childType)
    // Offset: 0x23688E0
    static bool ValidateParentTrack(UnityEngine::Timeline::TrackAsset* parent, System::Type* childType);
  }; // UnityEngine.Timeline.TimelineCreateUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineCreateUtilities*, "UnityEngine.Timeline", "TimelineCreateUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::GenerateUniqueActorName
// Il2CppName: GenerateUniqueActorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>*, ::Il2CppString*)>(&UnityEngine::Timeline::TimelineCreateUtilities::GenerateUniqueActorName)> {
  static const MethodInfo* get() {
    static auto* tracks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "ScriptableObject")})->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineCreateUtilities*), "GenerateUniqueActorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tracks, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::SaveAssetIntoObject
// Il2CppName: SaveAssetIntoObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object*, UnityEngine::Object*)>(&UnityEngine::Timeline::TimelineCreateUtilities::SaveAssetIntoObject)> {
  static const MethodInfo* get() {
    static auto* childAsset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* masterAsset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineCreateUtilities*), "SaveAssetIntoObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{childAsset, masterAsset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::RemoveAssetFromObject
// Il2CppName: RemoveAssetFromObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Object*, UnityEngine::Object*)>(&UnityEngine::Timeline::TimelineCreateUtilities::RemoveAssetFromObject)> {
  static const MethodInfo* get() {
    static auto* childAsset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* masterAsset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineCreateUtilities*), "RemoveAssetFromObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{childAsset, masterAsset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::CreateAnimationClipForTrack
// Il2CppName: CreateAnimationClipForTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationClip* (*)(::Il2CppString*, UnityEngine::Timeline::TrackAsset*, bool)>(&UnityEngine::Timeline::TimelineCreateUtilities::CreateAnimationClipForTrack)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* track = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    static auto* isLegacy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineCreateUtilities*), "CreateAnimationClipForTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, track, isLegacy});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::ValidateParentTrack
// Il2CppName: ValidateParentTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Timeline::TrackAsset*, System::Type*)>(&UnityEngine::Timeline::TimelineCreateUtilities::ValidateParentTrack)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    static auto* childType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineCreateUtilities*), "ValidateParentTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, childType});
  }
};
