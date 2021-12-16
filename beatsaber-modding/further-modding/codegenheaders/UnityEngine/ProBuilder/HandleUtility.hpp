// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: RaycastHit
  class RaycastHit;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: CullingMode
  struct CullingMode;
  // Forward declaring type: SimpleTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct SimpleTuple_2;
  // Forward declaring type: HandleOrientation
  struct HandleOrientation;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.HandleUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class HandleUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HandleUtility
    HandleUtility() noexcept {}
    // static UnityEngine.Vector3 ScreenToGuiPoint(UnityEngine.Camera camera, UnityEngine.Vector3 point, System.Single pixelsPerPoint)
    // Offset: 0x1AF3894
    static UnityEngine::Vector3 ScreenToGuiPoint(UnityEngine::Camera* camera, UnityEngine::Vector3 point, float pixelsPerPoint);
    // static System.Boolean FaceRaycast(UnityEngine.Ray worldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, out UnityEngine.ProBuilder.RaycastHit hit, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> ignore)
    // Offset: 0x1AF390C
    static bool FaceRaycast(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, ByRef<UnityEngine::ProBuilder::RaycastHit*> hit, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* ignore);
    // static System.Boolean FaceRaycast(UnityEngine.Ray worldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, out UnityEngine.ProBuilder.RaycastHit hit, System.Single distance, UnityEngine.ProBuilder.CullingMode cullingMode, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> ignore)
    // Offset: 0x1AF3950
    static bool FaceRaycast(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, ByRef<UnityEngine::ProBuilder::RaycastHit*> hit, float distance, UnityEngine::ProBuilder::CullingMode cullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* ignore);
    // static System.Boolean FaceRaycastBothCullModes(UnityEngine.Ray worldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, ref UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face,UnityEngine.Vector3> back, ref UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face,UnityEngine.Vector3> front)
    // Offset: 0x1AF4334
    static bool FaceRaycastBothCullModes(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, ByRef<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>> back, ByRef<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>> front);
    // static System.Boolean FaceRaycast(UnityEngine.Ray InWorldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, out System.Collections.Generic.List`1<UnityEngine.ProBuilder.RaycastHit> hits, UnityEngine.ProBuilder.CullingMode cullingMode, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> ignore)
    // Offset: 0x1AF48BC
    static bool FaceRaycast(UnityEngine::Ray InWorldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, ByRef<System::Collections::Generic::List_1<UnityEngine::ProBuilder::RaycastHit*>*> hits, UnityEngine::ProBuilder::CullingMode cullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* ignore);
    // static UnityEngine.Ray InverseTransformRay(UnityEngine.Transform transform, UnityEngine.Ray InWorldRay)
    // Offset: 0x1AF4EE4
    static UnityEngine::Ray InverseTransformRay(UnityEngine::Transform* transform, UnityEngine::Ray InWorldRay);
    // static System.Boolean MeshRaycast(UnityEngine.Ray InWorldRay, UnityEngine.GameObject gameObject, out UnityEngine.ProBuilder.RaycastHit hit, System.Single distance)
    // Offset: 0x1AF5104
    static bool MeshRaycast(UnityEngine::Ray InWorldRay, UnityEngine::GameObject* gameObject, ByRef<UnityEngine::ProBuilder::RaycastHit*> hit, float distance);
    // static System.Boolean MeshRaycast(UnityEngine.Ray InRay, UnityEngine.Vector3[] mesh, System.Int32[] triangles, out UnityEngine.ProBuilder.RaycastHit hit, System.Single distance)
    // Offset: 0x1AF5288
    static bool MeshRaycast(UnityEngine::Ray InRay, ::Array<UnityEngine::Vector3>* mesh, ::Array<int>* triangles, ByRef<UnityEngine::ProBuilder::RaycastHit*> hit, float distance);
    // static System.Boolean PointIsOccluded(UnityEngine.Camera cam, UnityEngine.ProBuilder.ProBuilderMesh pb, UnityEngine.Vector3 worldPoint)
    // Offset: 0x1AF58A4
    static bool PointIsOccluded(UnityEngine::Camera* cam, UnityEngine::ProBuilder::ProBuilderMesh* pb, UnityEngine::Vector3 worldPoint);
    // static public UnityEngine.Quaternion GetRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indices)
    // Offset: 0x1AF5A5C
    static UnityEngine::Quaternion GetRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indices);
    // static public UnityEngine.Quaternion GetFaceRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.HandleOrientation orientation, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1AF6078
    static UnityEngine::Quaternion GetFaceRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public UnityEngine.Quaternion GetFaceRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x1AF6188
    static UnityEngine::Quaternion GetFaceRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public UnityEngine.Quaternion GetEdgeRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.HandleOrientation orientation, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x1AF68FC
    static UnityEngine::Quaternion GetEdgeRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public UnityEngine.Quaternion GetEdgeRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x1AF6A0C
    static UnityEngine::Quaternion GetEdgeRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
    // static public UnityEngine.Quaternion GetVertexRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.HandleOrientation orientation, System.Collections.Generic.IEnumerable`1<System.Int32> vertices)
    // Offset: 0x1AF6AD4
    static UnityEngine::Quaternion GetVertexRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<int>* vertices);
    // static public UnityEngine.Quaternion GetVertexRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 vertex)
    // Offset: 0x1AF6BE8
    static UnityEngine::Quaternion GetVertexRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int vertex);
    // static UnityEngine.Vector3 GetActiveElementPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1AF6D04
    static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static UnityEngine.Vector3 GetActiveElementPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x1AF75AC
    static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static UnityEngine.Vector3 GetActiveElementPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> vertices)
    // Offset: 0x1AF76BC
    static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* vertices);
  }; // UnityEngine.ProBuilder.HandleUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HandleUtility*, "UnityEngine.ProBuilder", "HandleUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::ScreenToGuiPoint
// Il2CppName: ScreenToGuiPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Camera*, UnityEngine::Vector3, float)>(&UnityEngine::ProBuilder::HandleUtility::ScreenToGuiPoint)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* pixelsPerPoint = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "ScreenToGuiPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, point, pixelsPerPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::FaceRaycast
// Il2CppName: FaceRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::ProBuilder::ProBuilderMesh*, ByRef<UnityEngine::ProBuilder::RaycastHit*>, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::HandleUtility::FaceRaycast)> {
  static const MethodInfo* get() {
    static auto* worldRay = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "RaycastHit")->this_arg;
    static auto* ignore = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "FaceRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldRay, mesh, hit, ignore});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::FaceRaycast
// Il2CppName: FaceRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::ProBuilder::ProBuilderMesh*, ByRef<UnityEngine::ProBuilder::RaycastHit*>, float, UnityEngine::ProBuilder::CullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::HandleUtility::FaceRaycast)> {
  static const MethodInfo* get() {
    static auto* worldRay = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "RaycastHit")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cullingMode = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "CullingMode")->byval_arg;
    static auto* ignore = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "FaceRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldRay, mesh, hit, distance, cullingMode, ignore});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::FaceRaycastBothCullModes
// Il2CppName: FaceRaycastBothCullModes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::ProBuilder::ProBuilderMesh*, ByRef<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>>, ByRef<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>>)>(&UnityEngine::ProBuilder::HandleUtility::FaceRaycastBothCullModes)> {
  static const MethodInfo* get() {
    static auto* worldRay = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* back = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SimpleTuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->this_arg;
    static auto* front = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SimpleTuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "FaceRaycastBothCullModes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldRay, mesh, back, front});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::FaceRaycast
// Il2CppName: FaceRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::ProBuilder::ProBuilderMesh*, ByRef<System::Collections::Generic::List_1<UnityEngine::ProBuilder::RaycastHit*>*>, UnityEngine::ProBuilder::CullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::HandleUtility::FaceRaycast)> {
  static const MethodInfo* get() {
    static auto* InWorldRay = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* hits = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "RaycastHit")})->this_arg;
    static auto* cullingMode = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "CullingMode")->byval_arg;
    static auto* ignore = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "FaceRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{InWorldRay, mesh, hits, cullingMode, ignore});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::InverseTransformRay
// Il2CppName: InverseTransformRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Ray (*)(UnityEngine::Transform*, UnityEngine::Ray)>(&UnityEngine::ProBuilder::HandleUtility::InverseTransformRay)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* InWorldRay = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "InverseTransformRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, InWorldRay});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::MeshRaycast
// Il2CppName: MeshRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::GameObject*, ByRef<UnityEngine::ProBuilder::RaycastHit*>, float)>(&UnityEngine::ProBuilder::HandleUtility::MeshRaycast)> {
  static const MethodInfo* get() {
    static auto* InWorldRay = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "RaycastHit")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "MeshRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{InWorldRay, gameObject, hit, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::MeshRaycast
// Il2CppName: MeshRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, ::Array<UnityEngine::Vector3>*, ::Array<int>*, ByRef<UnityEngine::ProBuilder::RaycastHit*>, float)>(&UnityEngine::ProBuilder::HandleUtility::MeshRaycast)> {
  static const MethodInfo* get() {
    static auto* InRay = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* mesh = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* triangles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "RaycastHit")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "MeshRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{InRay, mesh, triangles, hit, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::PointIsOccluded
// Il2CppName: PointIsOccluded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Camera*, UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::Vector3)>(&UnityEngine::ProBuilder::HandleUtility::PointIsOccluded)> {
  static const MethodInfo* get() {
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* pb = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* worldPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "PointIsOccluded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cam, pb, worldPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::HandleUtility::GetRotation)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetFaceRotation
// Il2CppName: GetFaceRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::HandleOrientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::HandleUtility::GetFaceRotation)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "HandleOrientation")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetFaceRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, orientation, faces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetFaceRotation
// Il2CppName: GetFaceRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::HandleUtility::GetFaceRotation)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetFaceRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, face});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation
// Il2CppName: GetEdgeRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::HandleOrientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*)>(&UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "HandleOrientation")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetEdgeRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, orientation, edges});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation
// Il2CppName: GetEdgeRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetEdgeRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edge});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetVertexRotation
// Il2CppName: GetVertexRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::HandleOrientation, System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::HandleUtility::GetVertexRotation)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "HandleOrientation")->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetVertexRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, orientation, vertices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetVertexRotation
// Il2CppName: GetVertexRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, int)>(&UnityEngine::ProBuilder::HandleUtility::GetVertexRotation)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* vertex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetVertexRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, vertex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition
// Il2CppName: GetActiveElementPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetActiveElementPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition
// Il2CppName: GetActiveElementPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*)>(&UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetActiveElementPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edges});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition
// Il2CppName: GetActiveElementPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetActiveElementPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, vertices});
  }
};
