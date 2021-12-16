// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.IResolveConstraint
#include "NUnit/Framework/Constraints/IResolveConstraint.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintBuilder
  class ConstraintBuilder;
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.IConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class IConstraint/*, public NUnit::Framework::Constraints::IResolveConstraint*/ {
    public:
    // Creating value type constructor for type: IConstraint
    IConstraint() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Constraints::IResolveConstraint
    operator NUnit::Framework::Constraints::IResolveConstraint() noexcept {
      return *reinterpret_cast<NUnit::Framework::Constraints::IResolveConstraint*>(this);
    }
    // public System.String get_Description()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Description();
    // public System.Void set_Builder(NUnit.Framework.Constraints.ConstraintBuilder value)
    // Offset: 0xFFFFFFFF
    void set_Builder(NUnit::Framework::Constraints::ConstraintBuilder* value);
    // public NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
  }; // NUnit.Framework.Constraints.IConstraint
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::IConstraint*, "NUnit.Framework.Constraints", "IConstraint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::IConstraint::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::IConstraint::*)()>(&NUnit::Framework::Constraints::IConstraint::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::IConstraint*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::IConstraint::set_Builder
// Il2CppName: set_Builder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::IConstraint::*)(NUnit::Framework::Constraints::ConstraintBuilder*)>(&NUnit::Framework::Constraints::IConstraint::set_Builder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "ConstraintBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::IConstraint*), "set_Builder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::IConstraint::ApplyTo
// Il2CppName: ApplyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::ConstraintResult* (NUnit::Framework::Constraints::IConstraint::*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::IConstraint::ApplyTo)> {
  static const MethodInfo* get() {
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::IConstraint*), "ApplyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actual});
  }
};