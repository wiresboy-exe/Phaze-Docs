// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.AttributeProperties
  // [TokenAttribute] Offset: FFFFFFFF
  struct AttributeProperties/*, public System::Enum*/ {
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: AttributeProperties
    constexpr AttributeProperties(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.AttributeProperties DEFAULT
    static constexpr const uint DEFAULT = 0u;
    // Get static field: static public System.Xml.AttributeProperties DEFAULT
    static System::Xml::AttributeProperties _get_DEFAULT();
    // Set static field: static public System.Xml.AttributeProperties DEFAULT
    static void _set_DEFAULT(System::Xml::AttributeProperties value);
    // static field const value: static public System.Xml.AttributeProperties URI
    static constexpr const uint URI = 1u;
    // Get static field: static public System.Xml.AttributeProperties URI
    static System::Xml::AttributeProperties _get_URI();
    // Set static field: static public System.Xml.AttributeProperties URI
    static void _set_URI(System::Xml::AttributeProperties value);
    // static field const value: static public System.Xml.AttributeProperties BOOLEAN
    static constexpr const uint BOOLEAN = 2u;
    // Get static field: static public System.Xml.AttributeProperties BOOLEAN
    static System::Xml::AttributeProperties _get_BOOLEAN();
    // Set static field: static public System.Xml.AttributeProperties BOOLEAN
    static void _set_BOOLEAN(System::Xml::AttributeProperties value);
    // static field const value: static public System.Xml.AttributeProperties NAME
    static constexpr const uint NAME = 4u;
    // Get static field: static public System.Xml.AttributeProperties NAME
    static System::Xml::AttributeProperties _get_NAME();
    // Set static field: static public System.Xml.AttributeProperties NAME
    static void _set_NAME(System::Xml::AttributeProperties value);
    // Get instance field reference: public System.UInt32 value__
    uint& dyn_value__();
  }; // System.Xml.AttributeProperties
  #pragma pack(pop)
  static check_size<sizeof(AttributeProperties), 0 + sizeof(uint)> __System_Xml_AttributePropertiesSizeCheck;
  static_assert(sizeof(AttributeProperties) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::AttributeProperties, "System.Xml", "AttributeProperties");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
