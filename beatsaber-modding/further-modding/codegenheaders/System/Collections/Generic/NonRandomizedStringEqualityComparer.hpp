// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.NonRandomizedStringEqualityComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class NonRandomizedStringEqualityComparer : public System::Collections::Generic::EqualityComparer_1<::Il2CppString*> {
    public:
    // Creating value type constructor for type: NonRandomizedStringEqualityComparer
    NonRandomizedStringEqualityComparer() noexcept {}
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x17E2848
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // public System.Int32 GetHashCode(System.String obj)
    // Offset: 0x17E2858
    int GetHashCode(::Il2CppString* obj);
    // public System.Void .ctor()
    // Offset: 0x17E2870
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NonRandomizedStringEqualityComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::NonRandomizedStringEqualityComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NonRandomizedStringEqualityComparer*, creationType>()));
    }
  }; // System.Collections.Generic.NonRandomizedStringEqualityComparer
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::NonRandomizedStringEqualityComparer*, "System.Collections.Generic", "NonRandomizedStringEqualityComparer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::NonRandomizedStringEqualityComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Generic::NonRandomizedStringEqualityComparer::*)(::Il2CppString*, ::Il2CppString*)>(&System::Collections::Generic::NonRandomizedStringEqualityComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::NonRandomizedStringEqualityComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::NonRandomizedStringEqualityComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Generic::NonRandomizedStringEqualityComparer::*)(::Il2CppString*)>(&System::Collections::Generic::NonRandomizedStringEqualityComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::NonRandomizedStringEqualityComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::NonRandomizedStringEqualityComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
