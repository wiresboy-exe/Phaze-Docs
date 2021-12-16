// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.ITweenValue
  // [TokenAttribute] Offset: FFFFFFFF
  class ITweenValue {
    public:
    // Creating value type constructor for type: ITweenValue
    ITweenValue() noexcept {}
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0xFFFFFFFF
    bool get_ignoreTimeScale();
    // public System.Single get_duration()
    // Offset: 0xFFFFFFFF
    float get_duration();
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0xFFFFFFFF
    void TweenValue(float floatPercentage);
    // public System.Boolean ValidTarget()
    // Offset: 0xFFFFFFFF
    bool ValidTarget();
  }; // TMPro.ITweenValue
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::ITweenValue*, "TMPro", "ITweenValue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::ITweenValue::get_ignoreTimeScale
// Il2CppName: get_ignoreTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::ITweenValue::*)()>(&TMPro::ITweenValue::get_ignoreTimeScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::ITweenValue*), "get_ignoreTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::ITweenValue::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::ITweenValue::*)()>(&TMPro::ITweenValue::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::ITweenValue*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::ITweenValue::TweenValue
// Il2CppName: TweenValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::ITweenValue::*)(float)>(&TMPro::ITweenValue::TweenValue)> {
  static const MethodInfo* get() {
    static auto* floatPercentage = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::ITweenValue*), "TweenValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{floatPercentage});
  }
};
// Writing MetadataGetter for method: TMPro::ITweenValue::ValidTarget
// Il2CppName: ValidTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::ITweenValue::*)()>(&TMPro::ITweenValue::ValidTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::ITweenValue*), "ValidTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
