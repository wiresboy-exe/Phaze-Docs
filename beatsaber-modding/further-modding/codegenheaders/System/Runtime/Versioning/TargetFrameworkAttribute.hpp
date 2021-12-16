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
// Type namespace: System.Runtime.Versioning
namespace System::Runtime::Versioning {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Versioning.TargetFrameworkAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DA2E18
  class TargetFrameworkAttribute : public System::Attribute {
    public:
    // private System.String _frameworkName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* frameworkName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _frameworkDisplayName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* frameworkDisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TargetFrameworkAttribute
    TargetFrameworkAttribute(::Il2CppString* frameworkName_ = {}, ::Il2CppString* frameworkDisplayName_ = {}) noexcept : frameworkName{frameworkName_}, frameworkDisplayName{frameworkDisplayName_} {}
    // Get instance field reference: private System.String _frameworkName
    ::Il2CppString*& dyn__frameworkName();
    // Get instance field reference: private System.String _frameworkDisplayName
    ::Il2CppString*& dyn__frameworkDisplayName();
    // public System.Void set_FrameworkDisplayName(System.String value)
    // Offset: 0x16C5FAC
    void set_FrameworkDisplayName(::Il2CppString* value);
    // public System.Void .ctor(System.String frameworkName)
    // Offset: 0x16C5F10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TargetFrameworkAttribute* New_ctor(::Il2CppString* frameworkName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Versioning::TargetFrameworkAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TargetFrameworkAttribute*, creationType>(frameworkName)));
    }
  }; // System.Runtime.Versioning.TargetFrameworkAttribute
  #pragma pack(pop)
  static check_size<sizeof(TargetFrameworkAttribute), 24 + sizeof(::Il2CppString*)> __System_Runtime_Versioning_TargetFrameworkAttributeSizeCheck;
  static_assert(sizeof(TargetFrameworkAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Versioning::TargetFrameworkAttribute*, "System.Runtime.Versioning", "TargetFrameworkAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Versioning::TargetFrameworkAttribute::set_FrameworkDisplayName
// Il2CppName: set_FrameworkDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Versioning::TargetFrameworkAttribute::*)(::Il2CppString*)>(&System::Runtime::Versioning::TargetFrameworkAttribute::set_FrameworkDisplayName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Versioning::TargetFrameworkAttribute*), "set_FrameworkDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Versioning::TargetFrameworkAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
