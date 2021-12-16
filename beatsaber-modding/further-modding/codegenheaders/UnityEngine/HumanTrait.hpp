// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.HumanTrait
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DCE618
  class HumanTrait : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HumanTrait
    HumanTrait() noexcept {}
    // static public System.Int32 get_MuscleCount()
    // Offset: 0x238A6D0
    static int get_MuscleCount();
    // static public System.String[] get_MuscleName()
    // Offset: 0x238AB84
    static ::Array<::Il2CppString*>* get_MuscleName();
    // static System.Int32 GetBoneIndexFromMono(System.Int32 humanId)
    // Offset: 0x2386288
    static int GetBoneIndexFromMono(int humanId);
  }; // UnityEngine.HumanTrait
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanTrait*, "UnityEngine", "HumanTrait");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::HumanTrait::get_MuscleCount
// Il2CppName: get_MuscleCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::HumanTrait::get_MuscleCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanTrait*), "get_MuscleCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::HumanTrait::get_MuscleName
// Il2CppName: get_MuscleName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)()>(&UnityEngine::HumanTrait::get_MuscleName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanTrait*), "get_MuscleName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::HumanTrait::GetBoneIndexFromMono
// Il2CppName: GetBoneIndexFromMono
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::HumanTrait::GetBoneIndexFromMono)> {
  static const MethodInfo* get() {
    static auto* humanId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::HumanTrait*), "GetBoneIndexFromMono", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{humanId});
  }
};
