// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RuntimeAnimatorController
#include "UnityEngine/RuntimeAnimatorController.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimatorOverrideController
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DCE204
  // [NativeHeaderAttribute] Offset: DCE204
  // [UsedByNativeCodeAttribute] Offset: DCE204
  // [NativeHeaderAttribute] Offset: DCE204
  class AnimatorOverrideController : public UnityEngine::RuntimeAnimatorController {
    public:
    // Nested type: UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback
    class OnOverrideControllerDirtyCallback;
    // UnityEngine.AnimatorOverrideController/UnityEngine.OnOverrideControllerDirtyCallback OnOverrideControllerDirty
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback* OnOverrideControllerDirty;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*) == 0x8);
    // Creating value type constructor for type: AnimatorOverrideController
    AnimatorOverrideController(UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback* OnOverrideControllerDirty_ = {}) noexcept : OnOverrideControllerDirty{OnOverrideControllerDirty_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: UnityEngine.AnimatorOverrideController/UnityEngine.OnOverrideControllerDirtyCallback OnOverrideControllerDirty
    UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*& dyn_OnOverrideControllerDirty();
    // public System.Void .ctor(UnityEngine.RuntimeAnimatorController controller)
    // Offset: 0x23893D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatorOverrideController* New_ctor(UnityEngine::RuntimeAnimatorController* controller) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AnimatorOverrideController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatorOverrideController*, creationType>(controller)));
    }
    // static private System.Void Internal_Create(UnityEngine.AnimatorOverrideController self, UnityEngine.RuntimeAnimatorController controller)
    // Offset: 0x2389494
    static void Internal_Create(UnityEngine::AnimatorOverrideController* self, UnityEngine::RuntimeAnimatorController* controller);
    // private System.Void SetClip(UnityEngine.AnimationClip originalClip, UnityEngine.AnimationClip overrideClip, System.Boolean notify)
    // Offset: 0x23894E4
    void SetClip(UnityEngine::AnimationClip* originalClip, UnityEngine::AnimationClip* overrideClip, bool notify);
    // private System.Void SendNotification()
    // Offset: 0x238954C
    void SendNotification();
    // public System.Void ApplyOverrides(System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>> overrides)
    // Offset: 0x238958C
    void ApplyOverrides(System::Collections::Generic::IList_1<System::Collections::Generic::KeyValuePair_2<UnityEngine::AnimationClip*, UnityEngine::AnimationClip*>>* overrides);
    // static System.Void OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController controller)
    // Offset: 0x23897E0
    static void OnInvalidateOverrideController(UnityEngine::AnimatorOverrideController* controller);
  }; // UnityEngine.AnimatorOverrideController
  #pragma pack(pop)
  static check_size<sizeof(AnimatorOverrideController), 24 + sizeof(UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*)> __UnityEngine_AnimatorOverrideControllerSizeCheck;
  static_assert(sizeof(AnimatorOverrideController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorOverrideController*, "UnityEngine", "AnimatorOverrideController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AnimatorOverrideController*, UnityEngine::RuntimeAnimatorController*)>(&UnityEngine::AnimatorOverrideController::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorOverrideController")->byval_arg;
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine", "RuntimeAnimatorController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::SetClip
// Il2CppName: SetClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimatorOverrideController::*)(UnityEngine::AnimationClip*, UnityEngine::AnimationClip*, bool)>(&UnityEngine::AnimatorOverrideController::SetClip)> {
  static const MethodInfo* get() {
    static auto* originalClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    static auto* overrideClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    static auto* notify = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "SetClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{originalClip, overrideClip, notify});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::SendNotification
// Il2CppName: SendNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimatorOverrideController::*)()>(&UnityEngine::AnimatorOverrideController::SendNotification)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "SendNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::ApplyOverrides
// Il2CppName: ApplyOverrides
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimatorOverrideController::*)(System::Collections::Generic::IList_1<System::Collections::Generic::KeyValuePair_2<UnityEngine::AnimationClip*, UnityEngine::AnimationClip*>>*)>(&UnityEngine::AnimatorOverrideController::ApplyOverrides)> {
  static const MethodInfo* get() {
    static auto* overrides = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip"), ::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "ApplyOverrides", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overrides});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController
// Il2CppName: OnInvalidateOverrideController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AnimatorOverrideController*)>(&UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorOverrideController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "OnInvalidateOverrideController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
