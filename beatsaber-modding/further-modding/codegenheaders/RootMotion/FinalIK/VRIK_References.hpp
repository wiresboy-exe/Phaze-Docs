// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.VRIK
#include "RootMotion/FinalIK/VRIK.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.VRIK/RootMotion.FinalIK.References
  // [TokenAttribute] Offset: FFFFFFFF
  class VRIK::References : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform root
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform pelvis
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* pelvis;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform spine
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* spine;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E74C
    // public UnityEngine.Transform chest
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* chest;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E784
    // public UnityEngine.Transform neck
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* neck;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform head
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* head;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E7BC
    // public UnityEngine.Transform leftShoulder
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* leftShoulder;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftUpperArm
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* leftUpperArm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftForearm
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* leftForearm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftHand
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* leftHand;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E7F4
    // public UnityEngine.Transform rightShoulder
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* rightShoulder;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightUpperArm
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* rightUpperArm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightForearm
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Transform* rightForearm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightHand
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Transform* rightHand;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E82C
    // public UnityEngine.Transform leftThigh
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Transform* leftThigh;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E864
    // public UnityEngine.Transform leftCalf
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::Transform* leftCalf;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E89C
    // public UnityEngine.Transform leftFoot
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Transform* leftFoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E8D4
    // public UnityEngine.Transform leftToes
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::Transform* leftToes;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E90C
    // public UnityEngine.Transform rightThigh
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::Transform* rightThigh;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E944
    // public UnityEngine.Transform rightCalf
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::Transform* rightCalf;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E97C
    // public UnityEngine.Transform rightFoot
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::Transform* rightFoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2E9B4
    // public UnityEngine.Transform rightToes
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::Transform* rightToes;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: References
    References(UnityEngine::Transform* root_ = {}, UnityEngine::Transform* pelvis_ = {}, UnityEngine::Transform* spine_ = {}, UnityEngine::Transform* chest_ = {}, UnityEngine::Transform* neck_ = {}, UnityEngine::Transform* head_ = {}, UnityEngine::Transform* leftShoulder_ = {}, UnityEngine::Transform* leftUpperArm_ = {}, UnityEngine::Transform* leftForearm_ = {}, UnityEngine::Transform* leftHand_ = {}, UnityEngine::Transform* rightShoulder_ = {}, UnityEngine::Transform* rightUpperArm_ = {}, UnityEngine::Transform* rightForearm_ = {}, UnityEngine::Transform* rightHand_ = {}, UnityEngine::Transform* leftThigh_ = {}, UnityEngine::Transform* leftCalf_ = {}, UnityEngine::Transform* leftFoot_ = {}, UnityEngine::Transform* leftToes_ = {}, UnityEngine::Transform* rightThigh_ = {}, UnityEngine::Transform* rightCalf_ = {}, UnityEngine::Transform* rightFoot_ = {}, UnityEngine::Transform* rightToes_ = {}) noexcept : root{root_}, pelvis{pelvis_}, spine{spine_}, chest{chest_}, neck{neck_}, head{head_}, leftShoulder{leftShoulder_}, leftUpperArm{leftUpperArm_}, leftForearm{leftForearm_}, leftHand{leftHand_}, rightShoulder{rightShoulder_}, rightUpperArm{rightUpperArm_}, rightForearm{rightForearm_}, rightHand{rightHand_}, leftThigh{leftThigh_}, leftCalf{leftCalf_}, leftFoot{leftFoot_}, leftToes{leftToes_}, rightThigh{rightThigh_}, rightCalf{rightCalf_}, rightFoot{rightFoot_}, rightToes{rightToes_} {}
    // Get instance field reference: public UnityEngine.Transform root
    UnityEngine::Transform*& dyn_root();
    // Get instance field reference: public UnityEngine.Transform pelvis
    UnityEngine::Transform*& dyn_pelvis();
    // Get instance field reference: public UnityEngine.Transform spine
    UnityEngine::Transform*& dyn_spine();
    // Get instance field reference: public UnityEngine.Transform chest
    UnityEngine::Transform*& dyn_chest();
    // Get instance field reference: public UnityEngine.Transform neck
    UnityEngine::Transform*& dyn_neck();
    // Get instance field reference: public UnityEngine.Transform head
    UnityEngine::Transform*& dyn_head();
    // Get instance field reference: public UnityEngine.Transform leftShoulder
    UnityEngine::Transform*& dyn_leftShoulder();
    // Get instance field reference: public UnityEngine.Transform leftUpperArm
    UnityEngine::Transform*& dyn_leftUpperArm();
    // Get instance field reference: public UnityEngine.Transform leftForearm
    UnityEngine::Transform*& dyn_leftForearm();
    // Get instance field reference: public UnityEngine.Transform leftHand
    UnityEngine::Transform*& dyn_leftHand();
    // Get instance field reference: public UnityEngine.Transform rightShoulder
    UnityEngine::Transform*& dyn_rightShoulder();
    // Get instance field reference: public UnityEngine.Transform rightUpperArm
    UnityEngine::Transform*& dyn_rightUpperArm();
    // Get instance field reference: public UnityEngine.Transform rightForearm
    UnityEngine::Transform*& dyn_rightForearm();
    // Get instance field reference: public UnityEngine.Transform rightHand
    UnityEngine::Transform*& dyn_rightHand();
    // Get instance field reference: public UnityEngine.Transform leftThigh
    UnityEngine::Transform*& dyn_leftThigh();
    // Get instance field reference: public UnityEngine.Transform leftCalf
    UnityEngine::Transform*& dyn_leftCalf();
    // Get instance field reference: public UnityEngine.Transform leftFoot
    UnityEngine::Transform*& dyn_leftFoot();
    // Get instance field reference: public UnityEngine.Transform leftToes
    UnityEngine::Transform*& dyn_leftToes();
    // Get instance field reference: public UnityEngine.Transform rightThigh
    UnityEngine::Transform*& dyn_rightThigh();
    // Get instance field reference: public UnityEngine.Transform rightCalf
    UnityEngine::Transform*& dyn_rightCalf();
    // Get instance field reference: public UnityEngine.Transform rightFoot
    UnityEngine::Transform*& dyn_rightFoot();
    // Get instance field reference: public UnityEngine.Transform rightToes
    UnityEngine::Transform*& dyn_rightToes();
    // public System.Boolean get_isFilled()
    // Offset: 0x1AE5634
    bool get_isFilled();
    // public System.Boolean get_isEmpty()
    // Offset: 0x1AE51B8
    bool get_isEmpty();
    // public UnityEngine.Transform[] GetTransforms()
    // Offset: 0x1AE5CB8
    ::Array<UnityEngine::Transform*>* GetTransforms();
    // static public System.Boolean AutoDetectReferences(UnityEngine.Transform root, out RootMotion.FinalIK.VRIK/RootMotion.FinalIK.References references)
    // Offset: 0x1AE4DA4
    static bool AutoDetectReferences(UnityEngine::Transform* root, ByRef<RootMotion::FinalIK::VRIK::References*> references);
    // public System.Void .ctor()
    // Offset: 0x1AE5CB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRIK::References* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::VRIK::References::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRIK::References*, creationType>()));
    }
  }; // RootMotion.FinalIK.VRIK/RootMotion.FinalIK.References
  #pragma pack(pop)
  static check_size<sizeof(VRIK::References), 184 + sizeof(UnityEngine::Transform*)> __RootMotion_FinalIK_VRIK_ReferencesSizeCheck;
  static_assert(sizeof(VRIK::References) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIK::References*, "RootMotion.FinalIK", "VRIK/References");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::References::get_isFilled
// Il2CppName: get_isFilled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::VRIK::References::*)()>(&RootMotion::FinalIK::VRIK::References::get_isFilled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK::References*), "get_isFilled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::References::get_isEmpty
// Il2CppName: get_isEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::VRIK::References::*)()>(&RootMotion::FinalIK::VRIK::References::get_isEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK::References*), "get_isEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::References::GetTransforms
// Il2CppName: GetTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Transform*>* (RootMotion::FinalIK::VRIK::References::*)()>(&RootMotion::FinalIK::VRIK::References::GetTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK::References*), "GetTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::References::AutoDetectReferences
// Il2CppName: AutoDetectReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, ByRef<RootMotion::FinalIK::VRIK::References*>)>(&RootMotion::FinalIK::VRIK::References::AutoDetectReferences)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK/References")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK::References*), "AutoDetectReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root, references});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::References::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
