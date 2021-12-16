// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.ITimelineEvaluateCallback
#include "UnityEngine/Timeline/ITimelineEvaluateCallback.hpp"
// Including type: UnityEngine.Animations.AnimationPlayableOutput
#include "UnityEngine/Animations/AnimationPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Experimental::Animations
namespace UnityEngine::Experimental::Animations {
  // Forward declaring type: IAnimationWindowPreview
  class IAnimationWindowPreview;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AnimationPreviewUpdateCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimationPreviewUpdateCallback : public ::Il2CppObject/*, public UnityEngine::Timeline::ITimelineEvaluateCallback*/ {
    public:
    // private UnityEngine.Animations.AnimationPlayableOutput m_Output
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Animations::AnimationPlayableOutput m_Output;
    // Field size check
    static_assert(sizeof(UnityEngine::Animations::AnimationPlayableOutput) == 0xC);
    // Padding between fields: m_Output and: m_Graph
    char __padding0[0x4] = {};
    // private UnityEngine.Playables.PlayableGraph m_Graph
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Playables::PlayableGraph m_Graph;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableGraph) == 0xC);
    // Padding between fields: m_Graph and: m_PreviewComponents
    char __padding1[0x4] = {};
    // private System.Collections.Generic.List`1<UnityEngine.Experimental.Animations.IAnimationWindowPreview> m_PreviewComponents
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::Experimental::Animations::IAnimationWindowPreview*>* m_PreviewComponents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Experimental::Animations::IAnimationWindowPreview*>*) == 0x8);
    // Creating value type constructor for type: AnimationPreviewUpdateCallback
    AnimationPreviewUpdateCallback(UnityEngine::Animations::AnimationPlayableOutput m_Output_ = {}, UnityEngine::Playables::PlayableGraph m_Graph_ = {}, System::Collections::Generic::List_1<UnityEngine::Experimental::Animations::IAnimationWindowPreview*>* m_PreviewComponents_ = {}) noexcept : m_Output{m_Output_}, m_Graph{m_Graph_}, m_PreviewComponents{m_PreviewComponents_} {}
    // Creating interface conversion operator: operator UnityEngine::Timeline::ITimelineEvaluateCallback
    operator UnityEngine::Timeline::ITimelineEvaluateCallback() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::ITimelineEvaluateCallback*>(this);
    }
    // Get instance field reference: private UnityEngine.Animations.AnimationPlayableOutput m_Output
    UnityEngine::Animations::AnimationPlayableOutput& dyn_m_Output();
    // Get instance field reference: private UnityEngine.Playables.PlayableGraph m_Graph
    UnityEngine::Playables::PlayableGraph& dyn_m_Graph();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Experimental.Animations.IAnimationWindowPreview> m_PreviewComponents
    System::Collections::Generic::List_1<UnityEngine::Experimental::Animations::IAnimationWindowPreview*>*& dyn_m_PreviewComponents();
    // public System.Void .ctor(UnityEngine.Animations.AnimationPlayableOutput output)
    // Offset: 0x181CFEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationPreviewUpdateCallback* New_ctor(UnityEngine::Animations::AnimationPlayableOutput output) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::AnimationPreviewUpdateCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationPreviewUpdateCallback*, creationType>(output)));
    }
    // public System.Void Evaluate()
    // Offset: 0x181D09C
    void Evaluate();
    // private System.Void FetchPreviewComponents()
    // Offset: 0x181D228
    void FetchPreviewComponents();
  }; // UnityEngine.Timeline.AnimationPreviewUpdateCallback
  #pragma pack(pop)
  static check_size<sizeof(AnimationPreviewUpdateCallback), 48 + sizeof(System::Collections::Generic::List_1<UnityEngine::Experimental::Animations::IAnimationWindowPreview*>*)> __UnityEngine_Timeline_AnimationPreviewUpdateCallbackSizeCheck;
  static_assert(sizeof(AnimationPreviewUpdateCallback) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationPreviewUpdateCallback*, "UnityEngine.Timeline", "AnimationPreviewUpdateCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPreviewUpdateCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPreviewUpdateCallback::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)()>(&UnityEngine::Timeline::AnimationPreviewUpdateCallback::Evaluate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPreviewUpdateCallback*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPreviewUpdateCallback::FetchPreviewComponents
// Il2CppName: FetchPreviewComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationPreviewUpdateCallback::*)()>(&UnityEngine::Timeline::AnimationPreviewUpdateCallback::FetchPreviewComponents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPreviewUpdateCallback*), "FetchPreviewComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
