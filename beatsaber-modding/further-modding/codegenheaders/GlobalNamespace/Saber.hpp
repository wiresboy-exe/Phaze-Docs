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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: SaberMovementData
  class SaberMovementData;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: Saber
  // [TokenAttribute] Offset: FFFFFFFF
  class Saber : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _saberBladeTopTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* saberBladeTopTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _saberBladeBottomTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* saberBladeBottomTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _handleTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* handleTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private SaberTypeObject _saberType
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SaberTypeObject* saberType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTypeObject*) == 0x8);
    // private System.Boolean <disableCutting>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool disableCutting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableCutting and: movementData
    char __padding4[0x7] = {};
    // private readonly SaberMovementData _movementData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SaberMovementData* movementData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberMovementData*) == 0x8);
    // private UnityEngine.Vector3 _saberBladeTopPos
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 saberBladeTopPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _saberBladeBottomPos
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 saberBladeBottomPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _handlePos
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 handlePos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _handleRot
    // Size: 0x10
    // Offset: 0x6C
    UnityEngine::Quaternion handleRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: Saber
    Saber(UnityEngine::Transform* saberBladeTopTransform_ = {}, UnityEngine::Transform* saberBladeBottomTransform_ = {}, UnityEngine::Transform* handleTransform_ = {}, GlobalNamespace::SaberTypeObject* saberType_ = {}, bool disableCutting_ = {}, GlobalNamespace::SaberMovementData* movementData_ = {}, UnityEngine::Vector3 saberBladeTopPos_ = {}, UnityEngine::Vector3 saberBladeBottomPos_ = {}, UnityEngine::Vector3 handlePos_ = {}, UnityEngine::Quaternion handleRot_ = {}) noexcept : saberBladeTopTransform{saberBladeTopTransform_}, saberBladeBottomTransform{saberBladeBottomTransform_}, handleTransform{handleTransform_}, saberType{saberType_}, disableCutting{disableCutting_}, movementData{movementData_}, saberBladeTopPos{saberBladeTopPos_}, saberBladeBottomPos{saberBladeBottomPos_}, handlePos{handlePos_}, handleRot{handleRot_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _saberBladeTopTransform
    UnityEngine::Transform*& dyn__saberBladeTopTransform();
    // Get instance field reference: private UnityEngine.Transform _saberBladeBottomTransform
    UnityEngine::Transform*& dyn__saberBladeBottomTransform();
    // Get instance field reference: private UnityEngine.Transform _handleTransform
    UnityEngine::Transform*& dyn__handleTransform();
    // Get instance field reference: private SaberTypeObject _saberType
    GlobalNamespace::SaberTypeObject*& dyn__saberType();
    // Get instance field reference: private System.Boolean <disableCutting>k__BackingField
    bool& dyn_$disableCutting$k__BackingField();
    // Get instance field reference: private readonly SaberMovementData _movementData
    GlobalNamespace::SaberMovementData*& dyn__movementData();
    // Get instance field reference: private UnityEngine.Vector3 _saberBladeTopPos
    UnityEngine::Vector3& dyn__saberBladeTopPos();
    // Get instance field reference: private UnityEngine.Vector3 _saberBladeBottomPos
    UnityEngine::Vector3& dyn__saberBladeBottomPos();
    // Get instance field reference: private UnityEngine.Vector3 _handlePos
    UnityEngine::Vector3& dyn__handlePos();
    // Get instance field reference: private UnityEngine.Quaternion _handleRot
    UnityEngine::Quaternion& dyn__handleRot();
    // public SaberType get_saberType()
    // Offset: 0x112C764
    GlobalNamespace::SaberType get_saberType();
    // public UnityEngine.Vector3 get_saberBladeTopPos()
    // Offset: 0x112C780
    UnityEngine::Vector3 get_saberBladeTopPos();
    // public UnityEngine.Vector3 get_saberBladeBottomPos()
    // Offset: 0x112C78C
    UnityEngine::Vector3 get_saberBladeBottomPos();
    // public UnityEngine.Vector3 get_handlePos()
    // Offset: 0x112C798
    UnityEngine::Vector3 get_handlePos();
    // public UnityEngine.Quaternion get_handleRot()
    // Offset: 0x112C7A4
    UnityEngine::Quaternion get_handleRot();
    // public System.Single get_bladeSpeed()
    // Offset: 0x112C7B0
    float get_bladeSpeed();
    // public SaberMovementData get_movementData()
    // Offset: 0x112C7CC
    GlobalNamespace::SaberMovementData* get_movementData();
    // public System.Boolean get_disableCutting()
    // Offset: 0x112C7D4
    bool get_disableCutting();
    // public System.Void set_disableCutting(System.Boolean value)
    // Offset: 0x112C7DC
    void set_disableCutting(bool value);
    // public System.Void ManualUpdate()
    // Offset: 0x112C7E8
    void ManualUpdate();
    // public System.Void OverridePositionAndRotation(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x112CE24
    void OverridePositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // public System.Void .ctor()
    // Offset: 0x112CEA0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Saber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Saber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Saber*, creationType>()));
    }
  }; // Saber
  #pragma pack(pop)
  static check_size<sizeof(Saber), 108 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_SaberSizeCheck;
  static_assert(sizeof(Saber) == 0x7C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Saber*, "", "Saber");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Saber::get_saberType
// Il2CppName: get_saberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SaberType (GlobalNamespace::Saber::*)()>(&GlobalNamespace::Saber::get_saberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "get_saberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::get_saberBladeTopPos
// Il2CppName: get_saberBladeTopPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::Saber::*)()>(&GlobalNamespace::Saber::get_saberBladeTopPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "get_saberBladeTopPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::get_saberBladeBottomPos
// Il2CppName: get_saberBladeBottomPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::Saber::*)()>(&GlobalNamespace::Saber::get_saberBladeBottomPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "get_saberBladeBottomPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::get_handlePos
// Il2CppName: get_handlePos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::Saber::*)()>(&GlobalNamespace::Saber::get_handlePos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "get_handlePos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::get_handleRot
// Il2CppName: get_handleRot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::Saber::*)()>(&GlobalNamespace::Saber::get_handleRot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "get_handleRot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::get_bladeSpeed
// Il2CppName: get_bladeSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::Saber::*)()>(&GlobalNamespace::Saber::get_bladeSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "get_bladeSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::get_movementData
// Il2CppName: get_movementData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SaberMovementData* (GlobalNamespace::Saber::*)()>(&GlobalNamespace::Saber::get_movementData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "get_movementData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::get_disableCutting
// Il2CppName: get_disableCutting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Saber::*)()>(&GlobalNamespace::Saber::get_disableCutting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "get_disableCutting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::set_disableCutting
// Il2CppName: set_disableCutting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Saber::*)(bool)>(&GlobalNamespace::Saber::set_disableCutting)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "set_disableCutting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Saber::*)()>(&GlobalNamespace::Saber::ManualUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::OverridePositionAndRotation
// Il2CppName: OverridePositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Saber::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&GlobalNamespace::Saber::OverridePositionAndRotation)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Saber*), "OverridePositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, rot});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Saber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!