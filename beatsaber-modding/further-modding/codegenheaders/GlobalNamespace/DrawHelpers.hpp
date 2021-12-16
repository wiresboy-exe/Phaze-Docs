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
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DrawHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class DrawHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: DrawHelpers
    DrawHelpers() noexcept {}
    // static public System.Void DrawTexture(UnityEngine.Texture texture, System.Single x, System.Single y, System.Single w, System.Single h, UnityEngine.Material mat, System.Single sx, System.Single sy, System.Single sw, System.Single sh)
    // Offset: 0x1260984
    static void DrawTexture(UnityEngine::Texture* texture, float x, float y, float w, float h, UnityEngine::Material* mat, float sx, float sy, float sw, float sh);
    // public System.Void .ctor()
    // Offset: 0x1260B30
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DrawHelpers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DrawHelpers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DrawHelpers*, creationType>()));
    }
  }; // DrawHelpers
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DrawHelpers*, "", "DrawHelpers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DrawHelpers::DrawTexture
// Il2CppName: DrawTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Texture*, float, float, float, float, UnityEngine::Material*, float, float, float, float)>(&GlobalNamespace::DrawHelpers::DrawTexture)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* sx = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sw = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sh = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DrawHelpers*), "DrawTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture, x, y, w, h, mat, sx, sy, sw, sh});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DrawHelpers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!