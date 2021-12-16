// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IK
#include "RootMotion/FinalIK/IK.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverVR
  class IKSolverVR;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.VRIK
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: E2A764
  class VRIK : public RootMotion::FinalIK::IK {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    // Nested type: RootMotion::FinalIK::VRIK::References
    class References;
    // [ContextMenuItemAttribute] Offset: 0xE2C024
    // [TooltipAttribute] Offset: 0xE2C024
    // public RootMotion.FinalIK.VRIK/RootMotion.FinalIK.References references
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::VRIK::References* references;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIK::References*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2C0A0
    // public RootMotion.FinalIK.IKSolverVR solver
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::IKSolverVR* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR*) == 0x8);
    // Creating value type constructor for type: VRIK
    VRIK(RootMotion::FinalIK::VRIK::References* references_ = {}, RootMotion::FinalIK::IKSolverVR* solver_ = {}) noexcept : references{references_}, solver{solver_} {}
    // Get instance field reference: public RootMotion.FinalIK.VRIK/RootMotion.FinalIK.References references
    RootMotion::FinalIK::VRIK::References*& dyn_references();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverVR solver
    RootMotion::FinalIK::IKSolverVR*& dyn_solver();
    // private System.Void OpenSetupTutorial()
    // Offset: 0x1AE4D30
    void OpenSetupTutorial();
    // public System.Void AutoDetectReferences()
    // Offset: 0x1AE4D7C
    void AutoDetectReferences();
    // public System.Void GuessHandOrientations()
    // Offset: 0x1AE5114
    void GuessHandOrientations();
    // public System.Void .ctor()
    // Offset: 0x1AE5C28
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::VRIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRIK*, creationType>()));
    }
    // protected override System.Void OpenUserManual()
    // Offset: 0x1AE4C98
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1AE4CE4
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x1AE513C
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // protected override System.Void InitiateSolver()
    // Offset: 0x1AE5144
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void UpdateSolver()
    // Offset: 0x1AE5AB0
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::UpdateSolver()
    void UpdateSolver();
  }; // RootMotion.FinalIK.VRIK
  #pragma pack(pop)
  static check_size<sizeof(VRIK), 64 + sizeof(RootMotion::FinalIK::IKSolverVR*)> __RootMotion_FinalIK_VRIKSizeCheck;
  static_assert(sizeof(VRIK) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIK*, "RootMotion.FinalIK", "VRIK");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::OpenSetupTutorial
// Il2CppName: OpenSetupTutorial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIK::*)()>(&RootMotion::FinalIK::VRIK::OpenSetupTutorial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK*), "OpenSetupTutorial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::AutoDetectReferences
// Il2CppName: AutoDetectReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIK::*)()>(&RootMotion::FinalIK::VRIK::AutoDetectReferences)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK*), "AutoDetectReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::GuessHandOrientations
// Il2CppName: GuessHandOrientations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIK::*)()>(&RootMotion::FinalIK::VRIK::GuessHandOrientations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK*), "GuessHandOrientations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIK::*)()>(&RootMotion::FinalIK::VRIK::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIK::*)()>(&RootMotion::FinalIK::VRIK::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::GetIKSolver
// Il2CppName: GetIKSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver* (RootMotion::FinalIK::VRIK::*)()>(&RootMotion::FinalIK::VRIK::GetIKSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK*), "GetIKSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::InitiateSolver
// Il2CppName: InitiateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIK::*)()>(&RootMotion::FinalIK::VRIK::InitiateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK*), "InitiateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIK::UpdateSolver
// Il2CppName: UpdateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIK::*)()>(&RootMotion::FinalIK::VRIK::UpdateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIK*), "UpdateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};