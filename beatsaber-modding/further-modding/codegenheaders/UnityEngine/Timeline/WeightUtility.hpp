// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.WeightUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class WeightUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: WeightUtility
    WeightUtility() noexcept {}
    // static public System.Single NormalizeMixer(UnityEngine.Playables.Playable mixer)
    // Offset: 0x23714DC
    static float NormalizeMixer(UnityEngine::Playables::Playable mixer);
  }; // UnityEngine.Timeline.WeightUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::WeightUtility*, "UnityEngine.Timeline", "WeightUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::WeightUtility::NormalizeMixer
// Il2CppName: NormalizeMixer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::WeightUtility::NormalizeMixer)> {
  static const MethodInfo* get() {
    static auto* mixer = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::WeightUtility*), "NormalizeMixer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mixer});
  }
};
