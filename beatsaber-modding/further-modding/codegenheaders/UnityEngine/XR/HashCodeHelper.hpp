// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.HashCodeHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class HashCodeHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HashCodeHelper
    HashCodeHelper() noexcept {}
    // static public System.Int32 Combine(System.Int32 hash1, System.Int32 hash2)
    // Offset: 0x2407B78
    static int Combine(int hash1, int hash2);
  }; // UnityEngine.XR.HashCodeHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::HashCodeHelper*, "UnityEngine.XR", "HashCodeHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::HashCodeHelper::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&UnityEngine::XR::HashCodeHelper::Combine)> {
  static const MethodInfo* get() {
    static auto* hash1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hash2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::HashCodeHelper*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash1, hash2});
  }
};
