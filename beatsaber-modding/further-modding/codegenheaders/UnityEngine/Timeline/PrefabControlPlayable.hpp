// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.PrefabControlPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  class PrefabControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // private UnityEngine.GameObject m_Instance
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GameObject* m_Instance;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: PrefabControlPlayable
    PrefabControlPlayable(UnityEngine::GameObject* m_Instance_ = {}) noexcept : m_Instance{m_Instance_} {}
    // Creating conversion operator: operator UnityEngine::GameObject*
    constexpr operator UnityEngine::GameObject*() const noexcept {
      return m_Instance;
    }
    // Get instance field reference: private UnityEngine.GameObject m_Instance
    UnityEngine::GameObject*& dyn_m_Instance();
    // public UnityEngine.GameObject get_prefabInstance()
    // Offset: 0x182A6B8
    UnityEngine::GameObject* get_prefabInstance();
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.PrefabControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject prefabGameObject, UnityEngine.Transform parentTransform)
    // Offset: 0x1822B3C
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::PrefabControlPlayable*> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* prefabGameObject, UnityEngine::Transform* parentTransform);
    // public UnityEngine.GameObject Initialize(UnityEngine.GameObject prefabGameObject, UnityEngine.Transform parentTransform)
    // Offset: 0x182A444
    UnityEngine::GameObject* Initialize(UnityEngine::GameObject* prefabGameObject, UnityEngine::Transform* parentTransform);
    // static private System.Void SetHideFlagsRecursive(UnityEngine.GameObject gameObject)
    // Offset: 0x182A6C0
    static void SetHideFlagsRecursive(UnityEngine::GameObject* gameObject);
    // public System.Void .ctor()
    // Offset: 0x182ABB8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabControlPlayable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::PrefabControlPlayable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabControlPlayable*, creationType>()));
    }
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x182A97C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x182AA68
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x182AB00
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
  }; // UnityEngine.Timeline.PrefabControlPlayable
  #pragma pack(pop)
  static check_size<sizeof(PrefabControlPlayable), 16 + sizeof(UnityEngine::GameObject*)> __UnityEngine_Timeline_PrefabControlPlayableSizeCheck;
  static_assert(sizeof(PrefabControlPlayable) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::PrefabControlPlayable*, "UnityEngine.Timeline", "PrefabControlPlayable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::PrefabControlPlayable::get_prefabInstance
// Il2CppName: get_prefabInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (UnityEngine::Timeline::PrefabControlPlayable::*)()>(&UnityEngine::Timeline::PrefabControlPlayable::get_prefabInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::PrefabControlPlayable*), "get_prefabInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::PrefabControlPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::PrefabControlPlayable*> (*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject*, UnityEngine::Transform*)>(&UnityEngine::Timeline::PrefabControlPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* prefabGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* parentTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::PrefabControlPlayable*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, prefabGameObject, parentTransform});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::PrefabControlPlayable::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (UnityEngine::Timeline::PrefabControlPlayable::*)(UnityEngine::GameObject*, UnityEngine::Transform*)>(&UnityEngine::Timeline::PrefabControlPlayable::Initialize)> {
  static const MethodInfo* get() {
    static auto* prefabGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* parentTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::PrefabControlPlayable*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefabGameObject, parentTransform});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::PrefabControlPlayable::SetHideFlagsRecursive
// Il2CppName: SetHideFlagsRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject*)>(&UnityEngine::Timeline::PrefabControlPlayable::SetHideFlagsRecursive)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::PrefabControlPlayable*), "SetHideFlagsRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::PrefabControlPlayable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::PrefabControlPlayable::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::PrefabControlPlayable::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::PrefabControlPlayable::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::PrefabControlPlayable*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::PrefabControlPlayable::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::PrefabControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::PrefabControlPlayable::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::PrefabControlPlayable*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::PrefabControlPlayable::OnBehaviourPause
// Il2CppName: OnBehaviourPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::PrefabControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::PrefabControlPlayable::OnBehaviourPause)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::PrefabControlPlayable*), "OnBehaviourPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
