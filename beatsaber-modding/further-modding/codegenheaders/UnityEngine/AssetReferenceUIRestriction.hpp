// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AssetReferenceUIRestriction
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: E24954
  class AssetReferenceUIRestriction : public System::Attribute {
    public:
    // Creating value type constructor for type: AssetReferenceUIRestriction
    AssetReferenceUIRestriction() noexcept {}
    // public System.Boolean ValidateAsset(UnityEngine.Object obj)
    // Offset: 0x23E58BC
    bool ValidateAsset(UnityEngine::Object* obj);
    // public System.Boolean ValidateAsset(System.String path)
    // Offset: 0x23E58C4
    bool ValidateAsset(::Il2CppString* path);
    // public System.Void .ctor()
    // Offset: 0x23E5794
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReferenceUIRestriction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetReferenceUIRestriction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReferenceUIRestriction*, creationType>()));
    }
  }; // UnityEngine.AssetReferenceUIRestriction
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetReferenceUIRestriction*, "UnityEngine", "AssetReferenceUIRestriction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AssetReferenceUIRestriction::ValidateAsset
// Il2CppName: ValidateAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AssetReferenceUIRestriction::*)(UnityEngine::Object*)>(&UnityEngine::AssetReferenceUIRestriction::ValidateAsset)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetReferenceUIRestriction*), "ValidateAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetReferenceUIRestriction::ValidateAsset
// Il2CppName: ValidateAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AssetReferenceUIRestriction::*)(::Il2CppString*)>(&UnityEngine::AssetReferenceUIRestriction::ValidateAsset)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetReferenceUIRestriction*), "ValidateAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetReferenceUIRestriction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
