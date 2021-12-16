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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.FieldOffsetAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA43A0
  // [AttributeUsageAttribute] Offset: DA43A0
  class FieldOffsetAttribute : public System::Attribute {
    public:
    // System.Int32 _val
    // Size: 0x4
    // Offset: 0x10
    int val;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FieldOffsetAttribute
    FieldOffsetAttribute(int val_ = {}) noexcept : val{val_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return val;
    }
    // Get instance field reference: System.Int32 _val
    int& dyn__val();
    // public System.Void .ctor(System.Int32 offset)
    // Offset: 0x149052C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldOffsetAttribute* New_ctor(int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::FieldOffsetAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldOffsetAttribute*, creationType>(offset)));
    }
  }; // System.Runtime.InteropServices.FieldOffsetAttribute
  #pragma pack(pop)
  static check_size<sizeof(FieldOffsetAttribute), 16 + sizeof(int)> __System_Runtime_InteropServices_FieldOffsetAttributeSizeCheck;
  static_assert(sizeof(FieldOffsetAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::FieldOffsetAttribute*, "System.Runtime.InteropServices", "FieldOffsetAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::FieldOffsetAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
