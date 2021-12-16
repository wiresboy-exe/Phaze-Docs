// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CameraRaycastHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DD695C
  class CameraRaycastHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CameraRaycastHelper
    CameraRaycastHelper() noexcept {}
    // static UnityEngine.GameObject RaycastTry(UnityEngine.Camera cam, UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x24163E8
    static UnityEngine::GameObject* RaycastTry(UnityEngine::Camera* cam, UnityEngine::Ray ray, float distance, int layerMask);
    // static UnityEngine.GameObject RaycastTry2D(UnityEngine.Camera cam, UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x24164B8
    static UnityEngine::GameObject* RaycastTry2D(UnityEngine::Camera* cam, UnityEngine::Ray ray, float distance, int layerMask);
    // static private UnityEngine.GameObject RaycastTry_Injected(UnityEngine.Camera cam, ref UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x2416450
    static UnityEngine::GameObject* RaycastTry_Injected(UnityEngine::Camera* cam, ByRef<UnityEngine::Ray> ray, float distance, int layerMask);
    // static private UnityEngine.GameObject RaycastTry2D_Injected(UnityEngine.Camera cam, ref UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x2416520
    static UnityEngine::GameObject* RaycastTry2D_Injected(UnityEngine::Camera* cam, ByRef<UnityEngine::Ray> ray, float distance, int layerMask);
  }; // UnityEngine.CameraRaycastHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CameraRaycastHelper*, "UnityEngine", "CameraRaycastHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CameraRaycastHelper::RaycastTry
// Il2CppName: RaycastTry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::Camera*, UnityEngine::Ray, float, int)>(&UnityEngine::CameraRaycastHelper::RaycastTry)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CameraRaycastHelper*), "RaycastTry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, ray, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::CameraRaycastHelper::RaycastTry2D
// Il2CppName: RaycastTry2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::Camera*, UnityEngine::Ray, float, int)>(&UnityEngine::CameraRaycastHelper::RaycastTry2D)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CameraRaycastHelper*), "RaycastTry2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, ray, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::CameraRaycastHelper::RaycastTry_Injected
// Il2CppName: RaycastTry_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::Camera*, ByRef<UnityEngine::Ray>, float, int)>(&UnityEngine::CameraRaycastHelper::RaycastTry_Injected)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CameraRaycastHelper*), "RaycastTry_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, ray, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::CameraRaycastHelper::RaycastTry2D_Injected
// Il2CppName: RaycastTry2D_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::Camera*, ByRef<UnityEngine::Ray>, float, int)>(&UnityEngine::CameraRaycastHelper::RaycastTry2D_Injected)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CameraRaycastHelper*), "RaycastTry2D_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, ray, distance, layerMask});
  }
};
