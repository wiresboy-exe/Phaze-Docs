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
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerIntroAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerIntroAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Playables.PlayableDirector _introPlayableDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* introPlayableDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerIntroAnimator
    MultiplayerConnectedPlayerIntroAnimator(UnityEngine::Playables::PlayableDirector* introPlayableDirector_ = {}) noexcept : introPlayableDirector{introPlayableDirector_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _introPlayableDirector
    UnityEngine::Playables::PlayableDirector*& dyn__introPlayableDirector();
    // public System.Void SetBeforeIntroValues()
    // Offset: 0x11CBCE8
    void SetBeforeIntroValues();
    // public System.Void .ctor()
    // Offset: 0x11CBD04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerIntroAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerIntroAnimator*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerIntroAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerIntroAnimator), 24 + sizeof(UnityEngine::Playables::PlayableDirector*)> __GlobalNamespace_MultiplayerConnectedPlayerIntroAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerIntroAnimator) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*, "", "MultiplayerConnectedPlayerIntroAnimator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::SetBeforeIntroValues
// Il2CppName: SetBeforeIntroValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::SetBeforeIntroValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*), "SetBeforeIntroValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!