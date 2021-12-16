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
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VRControllerTransformOffset
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllerTransformOffset : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: VRControllerTransformOffset
    VRControllerTransformOffset() noexcept {}
    // public UnityEngine.Vector3 get_positionOffset()
    // Offset: 0xFFFFFFFF
    UnityEngine::Vector3 get_positionOffset();
    // public UnityEngine.Vector3 get_rotationOffset()
    // Offset: 0xFFFFFFFF
    UnityEngine::Vector3 get_rotationOffset();
    // protected System.Void .ctor()
    // Offset: 0x2398040
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllerTransformOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllerTransformOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllerTransformOffset*, creationType>()));
    }
  }; // VRControllerTransformOffset
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllerTransformOffset*, "", "VRControllerTransformOffset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllerTransformOffset::get_positionOffset
// Il2CppName: get_positionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::VRControllerTransformOffset::*)()>(&GlobalNamespace::VRControllerTransformOffset::get_positionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllerTransformOffset*), "get_positionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllerTransformOffset::get_rotationOffset
// Il2CppName: get_rotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::VRControllerTransformOffset::*)()>(&GlobalNamespace::VRControllerTransformOffset::get_rotationOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllerTransformOffset*), "get_rotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllerTransformOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!