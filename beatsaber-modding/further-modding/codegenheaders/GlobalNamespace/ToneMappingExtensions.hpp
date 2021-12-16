// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ToneMapping
  struct ToneMapping;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ToneMappingExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ToneMappingExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ToneMappingExtensions
    ToneMappingExtensions() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE194B4
    // Get static field: static private readonly System.String[] _shaderKeywordMap
    static ::Array<::Il2CppString*>* _get__shaderKeywordMap();
    // Set static field: static private readonly System.String[] _shaderKeywordMap
    static void _set__shaderKeywordMap(::Array<::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1E1F770
    static void _cctor();
    // static public System.Void SetShaderKeyword(ToneMapping toneMapping)
    // Offset: 0x1E15634
    static void SetShaderKeyword(GlobalNamespace::ToneMapping toneMapping);
  }; // ToneMappingExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ToneMappingExtensions*, "", "ToneMappingExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ToneMappingExtensions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ToneMappingExtensions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ToneMappingExtensions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ToneMappingExtensions::SetShaderKeyword
// Il2CppName: SetShaderKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::ToneMapping)>(&GlobalNamespace::ToneMappingExtensions::SetShaderKeyword)> {
  static const MethodInfo* get() {
    static auto* toneMapping = &::il2cpp_utils::GetClassFromName("", "ToneMapping")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ToneMappingExtensions*), "SetShaderKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toneMapping});
  }
};