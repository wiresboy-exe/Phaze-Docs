// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.HSVColor
  // [TokenAttribute] Offset: FFFFFFFF
  class HSVColor : public ::Il2CppObject {
    public:
    // public System.Single h
    // Size: 0x4
    // Offset: 0x10
    float h;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single s
    // Size: 0x4
    // Offset: 0x14
    float s;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single v
    // Size: 0x4
    // Offset: 0x18
    float v;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: HSVColor
    HSVColor(float h_ = {}, float s_ = {}, float v_ = {}) noexcept : h{h_}, s{s_}, v{v_} {}
    // Get instance field reference: public System.Single h
    float& dyn_h();
    // Get instance field reference: public System.Single s
    float& dyn_s();
    // Get instance field reference: public System.Single v
    float& dyn_v();
    // public System.Void .ctor(System.Single h, System.Single s, System.Single v)
    // Offset: 0x1AF3228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HSVColor* New_ctor(float h, float s, float v) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::HSVColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HSVColor*, creationType>(h, s, v)));
    }
    // public System.Void .ctor(System.Single h, System.Single s, System.Single v, System.Single sv_modifier)
    // Offset: 0x1AF3270
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HSVColor* New_ctor(float h, float s, float v, float sv_modifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::HSVColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HSVColor*, creationType>(h, s, v, sv_modifier)));
    }
    // static public UnityEngine.ProBuilder.HSVColor FromRGB(UnityEngine.Color col)
    // Offset: 0x1AF32C4
    static UnityEngine::ProBuilder::HSVColor* FromRGB(UnityEngine::Color col);
    // public System.Single SqrDistance(UnityEngine.ProBuilder.HSVColor InColor)
    // Offset: 0x1AF3414
    float SqrDistance(UnityEngine::ProBuilder::HSVColor* InColor);
    // public override System.String ToString()
    // Offset: 0x1AF3354
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.HSVColor
  #pragma pack(pop)
  static check_size<sizeof(HSVColor), 24 + sizeof(float)> __UnityEngine_ProBuilder_HSVColorSizeCheck;
  static_assert(sizeof(HSVColor) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HSVColor*, "UnityEngine.ProBuilder", "HSVColor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HSVColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HSVColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HSVColor::FromRGB
// Il2CppName: FromRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::HSVColor* (*)(UnityEngine::Color)>(&UnityEngine::ProBuilder::HSVColor::FromRGB)> {
  static const MethodInfo* get() {
    static auto* col = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HSVColor*), "FromRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{col});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HSVColor::SqrDistance
// Il2CppName: SqrDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::HSVColor::*)(UnityEngine::ProBuilder::HSVColor*)>(&UnityEngine::ProBuilder::HSVColor::SqrDistance)> {
  static const MethodInfo* get() {
    static auto* InColor = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "HSVColor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HSVColor*), "SqrDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{InColor});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HSVColor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::HSVColor::*)()>(&UnityEngine::ProBuilder::HSVColor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HSVColor*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
