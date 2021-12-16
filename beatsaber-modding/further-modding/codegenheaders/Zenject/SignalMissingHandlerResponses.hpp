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
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SignalMissingHandlerResponses
  // [TokenAttribute] Offset: FFFFFFFF
  struct SignalMissingHandlerResponses/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SignalMissingHandlerResponses
    constexpr SignalMissingHandlerResponses(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Zenject.SignalMissingHandlerResponses Ignore
    static constexpr const int Ignore = 0;
    // Get static field: static public Zenject.SignalMissingHandlerResponses Ignore
    static Zenject::SignalMissingHandlerResponses _get_Ignore();
    // Set static field: static public Zenject.SignalMissingHandlerResponses Ignore
    static void _set_Ignore(Zenject::SignalMissingHandlerResponses value);
    // static field const value: static public Zenject.SignalMissingHandlerResponses Throw
    static constexpr const int Throw = 1;
    // Get static field: static public Zenject.SignalMissingHandlerResponses Throw
    static Zenject::SignalMissingHandlerResponses _get_Throw();
    // Set static field: static public Zenject.SignalMissingHandlerResponses Throw
    static void _set_Throw(Zenject::SignalMissingHandlerResponses value);
    // static field const value: static public Zenject.SignalMissingHandlerResponses Warn
    static constexpr const int Warn = 2;
    // Get static field: static public Zenject.SignalMissingHandlerResponses Warn
    static Zenject::SignalMissingHandlerResponses _get_Warn();
    // Set static field: static public Zenject.SignalMissingHandlerResponses Warn
    static void _set_Warn(Zenject::SignalMissingHandlerResponses value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Zenject.SignalMissingHandlerResponses
  #pragma pack(pop)
  static check_size<sizeof(SignalMissingHandlerResponses), 0 + sizeof(int)> __Zenject_SignalMissingHandlerResponsesSizeCheck;
  static_assert(sizeof(SignalMissingHandlerResponses) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalMissingHandlerResponses, "Zenject", "SignalMissingHandlerResponses");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
