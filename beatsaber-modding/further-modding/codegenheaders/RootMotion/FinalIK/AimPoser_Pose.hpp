// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.AimPoser
#include "RootMotion/FinalIK/AimPoser.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.AimPoser/RootMotion.FinalIK.Pose
  // [TokenAttribute] Offset: FFFFFFFF
  class AimPoser::Pose : public ::Il2CppObject {
    public:
    // public System.Boolean visualize
    // Size: 0x1
    // Offset: 0x10
    bool visualize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: visualize and: name
    char __padding0[0x7] = {};
    // public System.String name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public UnityEngine.Vector3 direction
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single yaw
    // Size: 0x4
    // Offset: 0x2C
    float yaw;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single pitch
    // Size: 0x4
    // Offset: 0x30
    float pitch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single angleBuffer
    // Size: 0x4
    // Offset: 0x34
    float angleBuffer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Pose
    Pose(bool visualize_ = {}, ::Il2CppString* name_ = {}, UnityEngine::Vector3 direction_ = {}, float yaw_ = {}, float pitch_ = {}, float angleBuffer_ = {}) noexcept : visualize{visualize_}, name{name_}, direction{direction_}, yaw{yaw_}, pitch{pitch_}, angleBuffer{angleBuffer_} {}
    // Get instance field reference: public System.Boolean visualize
    bool& dyn_visualize();
    // Get instance field reference: public System.String name
    ::Il2CppString*& dyn_name();
    // Get instance field reference: public UnityEngine.Vector3 direction
    UnityEngine::Vector3& dyn_direction();
    // Get instance field reference: public System.Single yaw
    float& dyn_yaw();
    // Get instance field reference: public System.Single pitch
    float& dyn_pitch();
    // Get instance field reference: private System.Single angleBuffer
    float& dyn_angleBuffer();
    // public System.Boolean IsInDirection(UnityEngine.Vector3 d)
    // Offset: 0x1D31DDC
    bool IsInDirection(UnityEngine::Vector3 d);
    // public System.Void SetAngleBuffer(System.Single value)
    // Offset: 0x1D32148
    void SetAngleBuffer(float value);
    // public System.Void .ctor()
    // Offset: 0x1D32150
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AimPoser::Pose* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::AimPoser::Pose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AimPoser::Pose*, creationType>()));
    }
  }; // RootMotion.FinalIK.AimPoser/RootMotion.FinalIK.Pose
  #pragma pack(pop)
  static check_size<sizeof(AimPoser::Pose), 52 + sizeof(float)> __RootMotion_FinalIK_AimPoser_PoseSizeCheck;
  static_assert(sizeof(AimPoser::Pose) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::AimPoser::Pose*, "RootMotion.FinalIK", "AimPoser/Pose");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::AimPoser::Pose::IsInDirection
// Il2CppName: IsInDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::AimPoser::Pose::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::AimPoser::Pose::IsInDirection)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimPoser::Pose*), "IsInDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimPoser::Pose::SetAngleBuffer
// Il2CppName: SetAngleBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::AimPoser::Pose::*)(float)>(&RootMotion::FinalIK::AimPoser::Pose::SetAngleBuffer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimPoser::Pose*), "SetAngleBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimPoser::Pose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
