// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.OffsetModifierVRIK
#include "RootMotion/FinalIK/OffsetModifierVRIK.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReactionVRIK : public RootMotion::FinalIK::OffsetModifierVRIK {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: RootMotion::FinalIK::HitReactionVRIK::Offset
    class Offset;
    // Nested type: RootMotion::FinalIK::HitReactionVRIK::PositionOffset
    class PositionOffset;
    // Nested type: RootMotion::FinalIK::HitReactionVRIK::RotationOffset
    class RotationOffset;
    // public UnityEngine.AnimationCurve[] offsetCurves
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::AnimationCurve*>* offsetCurves;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::AnimationCurve*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2DE48
    // public RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.PositionOffset[] positionOffsets
    // Size: 0x8
    // Offset: 0x38
    ::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset*>* positionOffsets;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2DE80
    // public RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.RotationOffset[] rotationOffsets
    // Size: 0x8
    // Offset: 0x40
    ::Array<RootMotion::FinalIK::HitReactionVRIK::RotationOffset*>* rotationOffsets;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::HitReactionVRIK::RotationOffset*>*) == 0x8);
    // Creating value type constructor for type: HitReactionVRIK
    HitReactionVRIK(::Array<UnityEngine::AnimationCurve*>* offsetCurves_ = {}, ::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset*>* positionOffsets_ = {}, ::Array<RootMotion::FinalIK::HitReactionVRIK::RotationOffset*>* rotationOffsets_ = {}) noexcept : offsetCurves{offsetCurves_}, positionOffsets{positionOffsets_}, rotationOffsets{rotationOffsets_} {}
    // Get instance field reference: public UnityEngine.AnimationCurve[] offsetCurves
    ::Array<UnityEngine::AnimationCurve*>*& dyn_offsetCurves();
    // Get instance field reference: public RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.PositionOffset[] positionOffsets
    ::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset*>*& dyn_positionOffsets();
    // Get instance field reference: public RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.RotationOffset[] rotationOffsets
    ::Array<RootMotion::FinalIK::HitReactionVRIK::RotationOffset*>*& dyn_rotationOffsets();
    // public System.Void Hit(UnityEngine.Collider collider, UnityEngine.Vector3 force, UnityEngine.Vector3 point)
    // Offset: 0x1CCFD74
    void Hit(UnityEngine::Collider* collider, UnityEngine::Vector3 force, UnityEngine::Vector3 point);
    // public System.Void .ctor()
    // Offset: 0x1CD00FC
    // Implemented from: RootMotion.FinalIK.OffsetModifierVRIK
    // Base method: System.Void OffsetModifierVRIK::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReactionVRIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReactionVRIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReactionVRIK*, creationType>()));
    }
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1CCFB54
    // Implemented from: RootMotion.FinalIK.OffsetModifierVRIK
    // Base method: System.Void OffsetModifierVRIK::OnModifyOffset()
    void OnModifyOffset();
  }; // RootMotion.FinalIK.HitReactionVRIK
  #pragma pack(pop)
  static check_size<sizeof(HitReactionVRIK), 64 + sizeof(::Array<RootMotion::FinalIK::HitReactionVRIK::RotationOffset*>*)> __RootMotion_FinalIK_HitReactionVRIKSizeCheck;
  static_assert(sizeof(HitReactionVRIK) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReactionVRIK*, "RootMotion.FinalIK", "HitReactionVRIK");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Hit
// Il2CppName: Hit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::*)(UnityEngine::Collider*, UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::HitReactionVRIK::Hit)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK*), "Hit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider, force, point});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::OnModifyOffset
// Il2CppName: OnModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::*)()>(&RootMotion::FinalIK::HitReactionVRIK::OnModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK*), "OnModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
