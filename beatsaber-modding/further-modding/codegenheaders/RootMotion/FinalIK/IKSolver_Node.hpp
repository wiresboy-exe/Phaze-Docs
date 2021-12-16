// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Node
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolver::Node : public RootMotion::FinalIK::IKSolver::Point {
    public:
    // public System.Single length
    // Size: 0x4
    // Offset: 0x54
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single effectorPositionWeight
    // Size: 0x4
    // Offset: 0x58
    float effectorPositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single effectorRotationWeight
    // Size: 0x4
    // Offset: 0x5C
    float effectorRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Node
    Node(float length_ = {}, float effectorPositionWeight_ = {}, float effectorRotationWeight_ = {}, UnityEngine::Vector3 offset_ = {}) noexcept : length{length_}, effectorPositionWeight{effectorPositionWeight_}, effectorRotationWeight{effectorRotationWeight_}, offset{offset_} {}
    // Get instance field reference: public System.Single length
    float& dyn_length();
    // Get instance field reference: public System.Single effectorPositionWeight
    float& dyn_effectorPositionWeight();
    // Get instance field reference: public System.Single effectorRotationWeight
    float& dyn_effectorRotationWeight();
    // Get instance field reference: public UnityEngine.Vector3 offset
    UnityEngine::Vector3& dyn_offset();
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1CD9A44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::Node* New_ctor(UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::Node::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::Node*, creationType>(transform)));
    }
    // public System.Void .ctor(UnityEngine.Transform transform, System.Single weight)
    // Offset: 0x1CD9A6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::Node* New_ctor(UnityEngine::Transform* transform, float weight) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::Node::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::Node*, creationType>(transform, weight)));
    }
    // public System.Void .ctor()
    // Offset: 0x1CD9A40
    // Implemented from: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point
    // Base method: System.Void Point::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolver::Node* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolver::Node::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolver::Node*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Node
  #pragma pack(pop)
  static check_size<sizeof(IKSolver::Node), 96 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolver_NodeSizeCheck;
  static_assert(sizeof(IKSolver::Node) == 0x6C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolver::Node*, "RootMotion.FinalIK", "IKSolver/Node");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Node::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Node::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolver::Node::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
