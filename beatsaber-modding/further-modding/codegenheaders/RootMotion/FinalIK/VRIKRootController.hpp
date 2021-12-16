// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.VRIKCalibrator
#include "RootMotion/FinalIK/VRIKCalibrator.hpp"
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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Skipping declaration: VRIK because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.VRIKRootController
  // [TokenAttribute] Offset: FFFFFFFF
  class VRIKRootController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Vector3 <pelvisTargetRight>k__BackingField
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 pelvisTargetRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: pelvisTargetRight and: pelvisTarget
    char __padding0[0x4] = {};
    // private UnityEngine.Transform pelvisTarget
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* pelvisTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform leftFootTarget
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* leftFootTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform rightFootTarget
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* rightFootTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private RootMotion.FinalIK.VRIK ik
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::VRIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIK*) == 0x8);
    // Creating value type constructor for type: VRIKRootController
    VRIKRootController(UnityEngine::Vector3 pelvisTargetRight_ = {}, UnityEngine::Transform* pelvisTarget_ = {}, UnityEngine::Transform* leftFootTarget_ = {}, UnityEngine::Transform* rightFootTarget_ = {}, RootMotion::FinalIK::VRIK* ik_ = {}) noexcept : pelvisTargetRight{pelvisTargetRight_}, pelvisTarget{pelvisTarget_}, leftFootTarget{leftFootTarget_}, rightFootTarget{rightFootTarget_}, ik{ik_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Vector3 <pelvisTargetRight>k__BackingField
    UnityEngine::Vector3& dyn_$pelvisTargetRight$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform pelvisTarget
    UnityEngine::Transform*& dyn_pelvisTarget();
    // Get instance field reference: private UnityEngine.Transform leftFootTarget
    UnityEngine::Transform*& dyn_leftFootTarget();
    // Get instance field reference: private UnityEngine.Transform rightFootTarget
    UnityEngine::Transform*& dyn_rightFootTarget();
    // Get instance field reference: private RootMotion.FinalIK.VRIK ik
    RootMotion::FinalIK::VRIK*& dyn_ik();
    // public UnityEngine.Vector3 get_pelvisTargetRight()
    // Offset: 0x1AE9318
    UnityEngine::Vector3 get_pelvisTargetRight();
    // private System.Void set_pelvisTargetRight(UnityEngine.Vector3 value)
    // Offset: 0x1AE9324
    void set_pelvisTargetRight(UnityEngine::Vector3 value);
    // private System.Void Awake()
    // Offset: 0x1AE9330
    void Awake();
    // public System.Void Calibrate()
    // Offset: 0x1AE7E7C
    void Calibrate();
    // public System.Void Calibrate(RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData data)
    // Offset: 0x1AE8E84
    void Calibrate(RootMotion::FinalIK::VRIKCalibrator::CalibrationData* data);
    // private System.Void OnPreUpdate()
    // Offset: 0x1AE9408
    void OnPreUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x1AE98AC
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1AE99A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRIKRootController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::VRIKRootController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRIKRootController*, creationType>()));
    }
  }; // RootMotion.FinalIK.VRIKRootController
  #pragma pack(pop)
  static check_size<sizeof(VRIKRootController), 64 + sizeof(RootMotion::FinalIK::VRIK*)> __RootMotion_FinalIK_VRIKRootControllerSizeCheck;
  static_assert(sizeof(VRIKRootController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKRootController*, "RootMotion.FinalIK", "VRIKRootController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::get_pelvisTargetRight
// Il2CppName: get_pelvisTargetRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::VRIKRootController::*)()>(&RootMotion::FinalIK::VRIKRootController::get_pelvisTargetRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "get_pelvisTargetRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::set_pelvisTargetRight
// Il2CppName: set_pelvisTargetRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::VRIKRootController::set_pelvisTargetRight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "set_pelvisTargetRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)()>(&RootMotion::FinalIK::VRIKRootController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::Calibrate
// Il2CppName: Calibrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)()>(&RootMotion::FinalIK::VRIKRootController::Calibrate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "Calibrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::Calibrate
// Il2CppName: Calibrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)(RootMotion::FinalIK::VRIKCalibrator::CalibrationData*)>(&RootMotion::FinalIK::VRIKRootController::Calibrate)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIKCalibrator/CalibrationData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "Calibrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::OnPreUpdate
// Il2CppName: OnPreUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)()>(&RootMotion::FinalIK::VRIKRootController::OnPreUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "OnPreUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)()>(&RootMotion::FinalIK::VRIKRootController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
