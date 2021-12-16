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
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LanguageDirection
  // [TokenAttribute] Offset: FFFFFFFF
  struct LanguageDirection/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LanguageDirection
    constexpr LanguageDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Polyglot.LanguageDirection LeftToRight
    static constexpr const int LeftToRight = 0;
    // Get static field: static public Polyglot.LanguageDirection LeftToRight
    static Polyglot::LanguageDirection _get_LeftToRight();
    // Set static field: static public Polyglot.LanguageDirection LeftToRight
    static void _set_LeftToRight(Polyglot::LanguageDirection value);
    // static field const value: static public Polyglot.LanguageDirection RightToLeft
    static constexpr const int RightToLeft = 1;
    // Get static field: static public Polyglot.LanguageDirection RightToLeft
    static Polyglot::LanguageDirection _get_RightToLeft();
    // Set static field: static public Polyglot.LanguageDirection RightToLeft
    static void _set_RightToLeft(Polyglot::LanguageDirection value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Polyglot.LanguageDirection
  #pragma pack(pop)
  static check_size<sizeof(LanguageDirection), 0 + sizeof(int)> __Polyglot_LanguageDirectionSizeCheck;
  static_assert(sizeof(LanguageDirection) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LanguageDirection, "Polyglot", "LanguageDirection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"