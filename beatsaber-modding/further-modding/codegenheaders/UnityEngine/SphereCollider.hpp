// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SphereCollider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DC8820
  // [RequiredByNativeCodeAttribute] Offset: DC8820
  class SphereCollider : public UnityEngine::Collider {
    public:
    // Creating value type constructor for type: SphereCollider
    SphereCollider() noexcept {}
    // public System.Single get_radius()
    // Offset: 0x2405BC4
    float get_radius();
  }; // UnityEngine.SphereCollider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SphereCollider*, "UnityEngine", "SphereCollider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SphereCollider::get_radius
// Il2CppName: get_radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SphereCollider::*)()>(&UnityEngine::SphereCollider::get_radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SphereCollider*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
