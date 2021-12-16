// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRMesh
#include "GlobalNamespace/OVRMesh.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRMesh/IOVRMeshDataProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRMesh::IOVRMeshDataProvider {
    public:
    // Creating value type constructor for type: IOVRMeshDataProvider
    IOVRMeshDataProvider() noexcept {}
    // public OVRMesh/MeshType GetMeshType()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRMesh::MeshType GetMeshType();
  }; // OVRMesh/IOVRMeshDataProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMesh::IOVRMeshDataProvider*, "", "OVRMesh/IOVRMeshDataProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMesh::IOVRMeshDataProvider::GetMeshType
// Il2CppName: GetMeshType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRMesh::MeshType (GlobalNamespace::OVRMesh::IOVRMeshDataProvider::*)()>(&GlobalNamespace::OVRMesh::IOVRMeshDataProvider::GetMeshType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMesh::IOVRMeshDataProvider*), "GetMeshType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};