// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.SelectionPickerRenderer
#include "UnityEngine/ProBuilder/SelectionPickerRenderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SelectionPickerRenderer/UnityEngine.ProBuilder.ISelectionPickerRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectionPickerRenderer::ISelectionPickerRenderer {
    public:
    // Creating value type constructor for type: ISelectionPickerRenderer
    ISelectionPickerRenderer() noexcept {}
    // public UnityEngine.Texture2D RenderLookupTexture(UnityEngine.Camera camera, UnityEngine.Shader shader, System.String tag, System.Int32 width, System.Int32 height)
    // Offset: 0xFFFFFFFF
    UnityEngine::Texture2D* RenderLookupTexture(UnityEngine::Camera* camera, UnityEngine::Shader* shader, ::Il2CppString* tag, int width, int height);
  }; // UnityEngine.ProBuilder.SelectionPickerRenderer/UnityEngine.ProBuilder.ISelectionPickerRenderer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/ISelectionPickerRenderer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer::RenderLookupTexture
// Il2CppName: RenderLookupTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D* (UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer::*)(UnityEngine::Camera*, UnityEngine::Shader*, ::Il2CppString*, int, int)>(&UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer::RenderLookupTexture)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* shader = &::il2cpp_utils::GetClassFromName("UnityEngine", "Shader")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer*), "RenderLookupTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, shader, tag, width, height});
  }
};