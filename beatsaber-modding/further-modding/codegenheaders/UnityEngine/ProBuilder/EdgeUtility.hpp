// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: SimpleTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct SimpleTuple_2;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.EdgeUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class EdgeUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::EdgeUtility::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Creating value type constructor for type: EdgeUtility
    EdgeUtility() noexcept {}
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> GetSharedVertexHandleEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x1AF0614
    static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* GetSharedVertexHandleEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public UnityEngine.ProBuilder.Edge GetSharedVertexHandleEdge(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x1AF06D8
    static UnityEngine::ProBuilder::Edge GetSharedVertexHandleEdge(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
    // static UnityEngine.ProBuilder.Edge GetEdgeWithSharedVertexHandles(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x1AF0794
    static UnityEngine::ProBuilder::Edge GetEdgeWithSharedVertexHandles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
    // static public System.Boolean ValidateEdge(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge, out UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face,UnityEngine.ProBuilder.Edge> validEdge)
    // Offset: 0x1AF0854
    static bool ValidateEdge(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge, ByRef<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Edge>> validEdge);
    // static System.Boolean Contains(UnityEngine.ProBuilder.Edge[] edges, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x1AF0AE0
    static bool Contains(::Array<UnityEngine::ProBuilder::Edge>* edges, UnityEngine::ProBuilder::Edge edge);
    // static System.Boolean Contains(UnityEngine.ProBuilder.Edge[] edges, System.Int32 x, System.Int32 y)
    // Offset: 0x1AF0B70
    static bool Contains(::Array<UnityEngine::ProBuilder::Edge>* edges, int x, int y);
    // static System.Int32 IndexOf(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Edge> edges, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x1AF0BEC
    static int IndexOf(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>* edges, UnityEngine::ProBuilder::Edge edge);
    // static System.Int32[] AllTriangles(UnityEngine.ProBuilder.Edge[] edges)
    // Offset: 0x1AF0D74
    static ::Array<int>* AllTriangles(::Array<UnityEngine::ProBuilder::Edge>* edges);
    // static UnityEngine.ProBuilder.Face GetFace(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x1AF0E64
    static UnityEngine::ProBuilder::Face* GetFace(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
  }; // UnityEngine.ProBuilder.EdgeUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EdgeUtility*, "UnityEngine.ProBuilder", "EdgeUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeUtility::GetSharedVertexHandleEdges
// Il2CppName: GetSharedVertexHandleEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*)>(&UnityEngine::ProBuilder::EdgeUtility::GetSharedVertexHandleEdges)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeUtility*), "GetSharedVertexHandleEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edges});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeUtility::GetSharedVertexHandleEdge
// Il2CppName: GetSharedVertexHandleEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::EdgeUtility::GetSharedVertexHandleEdge)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeUtility*), "GetSharedVertexHandleEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edge});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeUtility::GetEdgeWithSharedVertexHandles
// Il2CppName: GetEdgeWithSharedVertexHandles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::EdgeUtility::GetEdgeWithSharedVertexHandles)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeUtility*), "GetEdgeWithSharedVertexHandles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edge});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeUtility::ValidateEdge
// Il2CppName: ValidateEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge, ByRef<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Edge>>)>(&UnityEngine::ProBuilder::EdgeUtility::ValidateEdge)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    static auto* validEdge = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SimpleTuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face"), ::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeUtility*), "ValidateEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edge, validEdge});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeUtility::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<UnityEngine::ProBuilder::Edge>*, UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::EdgeUtility::Contains)> {
  static const MethodInfo* get() {
    static auto* edges = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge"), 1)->byval_arg;
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeUtility*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges, edge});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeUtility::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<UnityEngine::ProBuilder::Edge>*, int, int)>(&UnityEngine::ProBuilder::EdgeUtility::Contains)> {
  static const MethodInfo* get() {
    static auto* edges = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge"), 1)->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeUtility*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges, x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeUtility::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>*, UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::EdgeUtility::IndexOf)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeUtility*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edges, edge});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeUtility::AllTriangles
// Il2CppName: AllTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (*)(::Array<UnityEngine::ProBuilder::Edge>*)>(&UnityEngine::ProBuilder::EdgeUtility::AllTriangles)> {
  static const MethodInfo* get() {
    static auto* edges = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeUtility*), "AllTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EdgeUtility::GetFace
// Il2CppName: GetFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Face* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::EdgeUtility::GetFace)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EdgeUtility*), "GetFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edge});
  }
};
