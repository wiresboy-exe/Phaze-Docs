// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.NotImplementedException
#include "System/NotImplementedException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
  // [TokenAttribute] Offset: FFFFFFFF
  class PointOnEdgeException : public System::NotImplementedException {
    public:
    // public readonly UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint A
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* A;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // public readonly UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint B
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* B;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // public readonly UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint C
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* C;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // Creating value type constructor for type: PointOnEdgeException
    PointOnEdgeException(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* A_ = {}, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* B_ = {}, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* C_ = {}) noexcept : A{A_}, B{B_}, C{C_} {}
    // Get instance field reference: public readonly UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint A
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& dyn_A();
    // Get instance field reference: public readonly UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint B
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& dyn_B();
    // Get instance field reference: public readonly UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint C
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& dyn_C();
    // public System.Void .ctor(System.String message, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint a, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint b, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint c)
    // Offset: 0x23C76D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointOnEdgeException* New_ctor(::Il2CppString* message, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* c) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointOnEdgeException*, creationType>(message, a, b, c)));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
  #pragma pack(pop)
  static check_size<sizeof(PointOnEdgeException), 152 + sizeof(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)> __UnityEngine_ProBuilder_Poly2Tri_PointOnEdgeExceptionSizeCheck;
  static_assert(sizeof(PointOnEdgeException) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException*, "UnityEngine.ProBuilder.Poly2Tri", "PointOnEdgeException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
