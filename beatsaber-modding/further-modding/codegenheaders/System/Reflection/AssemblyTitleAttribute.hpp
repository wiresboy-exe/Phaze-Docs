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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyTitleAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA0A28
  // [AttributeUsageAttribute] Offset: DA0A28
  class AssemblyTitleAttribute : public System::Attribute {
    public:
    // private System.String m_title
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_title;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssemblyTitleAttribute
    AssemblyTitleAttribute(::Il2CppString* m_title_ = {}) noexcept : m_title{m_title_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_title;
    }
    // Get instance field reference: private System.String m_title
    ::Il2CppString*& dyn_m_title();
    // public System.Void .ctor(System.String title)
    // Offset: 0x1D161D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyTitleAttribute* New_ctor(::Il2CppString* title) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyTitleAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyTitleAttribute*, creationType>(title)));
    }
  }; // System.Reflection.AssemblyTitleAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyTitleAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_AssemblyTitleAttributeSizeCheck;
  static_assert(sizeof(AssemblyTitleAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyTitleAttribute*, "System.Reflection", "AssemblyTitleAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyTitleAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
