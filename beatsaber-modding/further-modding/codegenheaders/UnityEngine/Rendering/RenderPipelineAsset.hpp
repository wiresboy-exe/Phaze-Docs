// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Shader
  class Shader;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipeline
  class RenderPipeline;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RenderPipelineAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class RenderPipelineAsset : public UnityEngine::ScriptableObject {
    public:
    // Creating value type constructor for type: RenderPipelineAsset
    RenderPipelineAsset() noexcept {}
    // public System.String[] get_renderingLayerMaskNames()
    // Offset: 0x1C75268
    ::Array<::Il2CppString*>* get_renderingLayerMaskNames();
    // public UnityEngine.Material get_defaultMaterial()
    // Offset: 0x1C75270
    UnityEngine::Material* get_defaultMaterial();
    // public UnityEngine.Shader get_autodeskInteractiveShader()
    // Offset: 0x1C75278
    UnityEngine::Shader* get_autodeskInteractiveShader();
    // public UnityEngine.Shader get_autodeskInteractiveTransparentShader()
    // Offset: 0x1C75280
    UnityEngine::Shader* get_autodeskInteractiveTransparentShader();
    // public UnityEngine.Shader get_autodeskInteractiveMaskedShader()
    // Offset: 0x1C75288
    UnityEngine::Shader* get_autodeskInteractiveMaskedShader();
    // public UnityEngine.Shader get_terrainDetailLitShader()
    // Offset: 0x1C75290
    UnityEngine::Shader* get_terrainDetailLitShader();
    // public UnityEngine.Shader get_terrainDetailGrassShader()
    // Offset: 0x1C75298
    UnityEngine::Shader* get_terrainDetailGrassShader();
    // public UnityEngine.Shader get_terrainDetailGrassBillboardShader()
    // Offset: 0x1C752A0
    UnityEngine::Shader* get_terrainDetailGrassBillboardShader();
    // public UnityEngine.Material get_defaultParticleMaterial()
    // Offset: 0x1C752A8
    UnityEngine::Material* get_defaultParticleMaterial();
    // public UnityEngine.Material get_defaultLineMaterial()
    // Offset: 0x1C752B0
    UnityEngine::Material* get_defaultLineMaterial();
    // public UnityEngine.Material get_defaultTerrainMaterial()
    // Offset: 0x1C752B8
    UnityEngine::Material* get_defaultTerrainMaterial();
    // public UnityEngine.Material get_defaultUIMaterial()
    // Offset: 0x1C752C0
    UnityEngine::Material* get_defaultUIMaterial();
    // public UnityEngine.Material get_defaultUIOverdrawMaterial()
    // Offset: 0x1C752C8
    UnityEngine::Material* get_defaultUIOverdrawMaterial();
    // public UnityEngine.Material get_defaultUIETC1SupportedMaterial()
    // Offset: 0x1C752D0
    UnityEngine::Material* get_defaultUIETC1SupportedMaterial();
    // public UnityEngine.Material get_default2DMaterial()
    // Offset: 0x1C752D8
    UnityEngine::Material* get_default2DMaterial();
    // public UnityEngine.Shader get_defaultShader()
    // Offset: 0x1C752E0
    UnityEngine::Shader* get_defaultShader();
    // public UnityEngine.Shader get_defaultSpeedTree7Shader()
    // Offset: 0x1C752E8
    UnityEngine::Shader* get_defaultSpeedTree7Shader();
    // public UnityEngine.Shader get_defaultSpeedTree8Shader()
    // Offset: 0x1C752F0
    UnityEngine::Shader* get_defaultSpeedTree8Shader();
    // UnityEngine.Rendering.RenderPipeline InternalCreatePipeline()
    // Offset: 0x1C74F78
    UnityEngine::Rendering::RenderPipeline* InternalCreatePipeline();
    // protected UnityEngine.Rendering.RenderPipeline CreatePipeline()
    // Offset: 0xFFFFFFFF
    UnityEngine::Rendering::RenderPipeline* CreatePipeline();
    // protected System.Void OnValidate()
    // Offset: 0x1C752F8
    void OnValidate();
    // protected System.Void OnDisable()
    // Offset: 0x1C75854
    void OnDisable();
    // protected System.Void .ctor()
    // Offset: 0x1C758B0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderPipelineAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Rendering::RenderPipelineAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderPipelineAsset*, creationType>()));
    }
  }; // UnityEngine.Rendering.RenderPipelineAsset
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipelineAsset*, "UnityEngine.Rendering", "RenderPipelineAsset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_renderingLayerMaskNames
// Il2CppName: get_renderingLayerMaskNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_renderingLayerMaskNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_renderingLayerMaskNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_defaultMaterial
// Il2CppName: get_defaultMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_defaultMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_defaultMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_autodeskInteractiveShader
// Il2CppName: get_autodeskInteractiveShader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Shader* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_autodeskInteractiveShader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_autodeskInteractiveShader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_autodeskInteractiveTransparentShader
// Il2CppName: get_autodeskInteractiveTransparentShader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Shader* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_autodeskInteractiveTransparentShader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_autodeskInteractiveTransparentShader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_autodeskInteractiveMaskedShader
// Il2CppName: get_autodeskInteractiveMaskedShader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Shader* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_autodeskInteractiveMaskedShader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_autodeskInteractiveMaskedShader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_terrainDetailLitShader
// Il2CppName: get_terrainDetailLitShader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Shader* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_terrainDetailLitShader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_terrainDetailLitShader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_terrainDetailGrassShader
// Il2CppName: get_terrainDetailGrassShader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Shader* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_terrainDetailGrassShader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_terrainDetailGrassShader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_terrainDetailGrassBillboardShader
// Il2CppName: get_terrainDetailGrassBillboardShader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Shader* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_terrainDetailGrassBillboardShader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_terrainDetailGrassBillboardShader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_defaultParticleMaterial
// Il2CppName: get_defaultParticleMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_defaultParticleMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_defaultParticleMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_defaultLineMaterial
// Il2CppName: get_defaultLineMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_defaultLineMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_defaultLineMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_defaultTerrainMaterial
// Il2CppName: get_defaultTerrainMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_defaultTerrainMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_defaultTerrainMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_defaultUIMaterial
// Il2CppName: get_defaultUIMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_defaultUIMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_defaultUIMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_defaultUIOverdrawMaterial
// Il2CppName: get_defaultUIOverdrawMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_defaultUIOverdrawMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_defaultUIOverdrawMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_defaultUIETC1SupportedMaterial
// Il2CppName: get_defaultUIETC1SupportedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_defaultUIETC1SupportedMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_defaultUIETC1SupportedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_default2DMaterial
// Il2CppName: get_default2DMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_default2DMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_default2DMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_defaultShader
// Il2CppName: get_defaultShader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Shader* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_defaultShader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_defaultShader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_defaultSpeedTree7Shader
// Il2CppName: get_defaultSpeedTree7Shader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Shader* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_defaultSpeedTree7Shader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_defaultSpeedTree7Shader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::get_defaultSpeedTree8Shader
// Il2CppName: get_defaultSpeedTree8Shader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Shader* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::get_defaultSpeedTree8Shader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "get_defaultSpeedTree8Shader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::InternalCreatePipeline
// Il2CppName: InternalCreatePipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::RenderPipeline* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::InternalCreatePipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "InternalCreatePipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::CreatePipeline
// Il2CppName: CreatePipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::RenderPipeline* (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::CreatePipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "CreatePipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipelineAsset::*)()>(&UnityEngine::Rendering::RenderPipelineAsset::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineAsset*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
