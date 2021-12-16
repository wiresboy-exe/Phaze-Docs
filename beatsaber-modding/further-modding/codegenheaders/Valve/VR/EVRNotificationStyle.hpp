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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRNotificationStyle
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRNotificationStyle/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRNotificationStyle
    constexpr EVRNotificationStyle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRNotificationStyle None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVRNotificationStyle None
    static Valve::VR::EVRNotificationStyle _get_None();
    // Set static field: static public Valve.VR.EVRNotificationStyle None
    static void _set_None(Valve::VR::EVRNotificationStyle value);
    // static field const value: static public Valve.VR.EVRNotificationStyle Application
    static constexpr const int Application = 100;
    // Get static field: static public Valve.VR.EVRNotificationStyle Application
    static Valve::VR::EVRNotificationStyle _get_Application();
    // Set static field: static public Valve.VR.EVRNotificationStyle Application
    static void _set_Application(Valve::VR::EVRNotificationStyle value);
    // static field const value: static public Valve.VR.EVRNotificationStyle Contact_Disabled
    static constexpr const int Contact_Disabled = 200;
    // Get static field: static public Valve.VR.EVRNotificationStyle Contact_Disabled
    static Valve::VR::EVRNotificationStyle _get_Contact_Disabled();
    // Set static field: static public Valve.VR.EVRNotificationStyle Contact_Disabled
    static void _set_Contact_Disabled(Valve::VR::EVRNotificationStyle value);
    // static field const value: static public Valve.VR.EVRNotificationStyle Contact_Enabled
    static constexpr const int Contact_Enabled = 201;
    // Get static field: static public Valve.VR.EVRNotificationStyle Contact_Enabled
    static Valve::VR::EVRNotificationStyle _get_Contact_Enabled();
    // Set static field: static public Valve.VR.EVRNotificationStyle Contact_Enabled
    static void _set_Contact_Enabled(Valve::VR::EVRNotificationStyle value);
    // static field const value: static public Valve.VR.EVRNotificationStyle Contact_Active
    static constexpr const int Contact_Active = 202;
    // Get static field: static public Valve.VR.EVRNotificationStyle Contact_Active
    static Valve::VR::EVRNotificationStyle _get_Contact_Active();
    // Set static field: static public Valve.VR.EVRNotificationStyle Contact_Active
    static void _set_Contact_Active(Valve::VR::EVRNotificationStyle value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EVRNotificationStyle
  #pragma pack(pop)
  static check_size<sizeof(EVRNotificationStyle), 0 + sizeof(int)> __Valve_VR_EVRNotificationStyleSizeCheck;
  static_assert(sizeof(EVRNotificationStyle) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRNotificationStyle, "Valve.VR", "EVRNotificationStyle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
