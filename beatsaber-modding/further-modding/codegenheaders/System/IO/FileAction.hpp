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
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileAction
  // [TokenAttribute] Offset: FFFFFFFF
  struct FileAction/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FileAction
    constexpr FileAction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.FileAction Added
    static constexpr const int Added = 1;
    // Get static field: static public System.IO.FileAction Added
    static System::IO::FileAction _get_Added();
    // Set static field: static public System.IO.FileAction Added
    static void _set_Added(System::IO::FileAction value);
    // static field const value: static public System.IO.FileAction Removed
    static constexpr const int Removed = 2;
    // Get static field: static public System.IO.FileAction Removed
    static System::IO::FileAction _get_Removed();
    // Set static field: static public System.IO.FileAction Removed
    static void _set_Removed(System::IO::FileAction value);
    // static field const value: static public System.IO.FileAction Modified
    static constexpr const int Modified = 3;
    // Get static field: static public System.IO.FileAction Modified
    static System::IO::FileAction _get_Modified();
    // Set static field: static public System.IO.FileAction Modified
    static void _set_Modified(System::IO::FileAction value);
    // static field const value: static public System.IO.FileAction RenamedOldName
    static constexpr const int RenamedOldName = 4;
    // Get static field: static public System.IO.FileAction RenamedOldName
    static System::IO::FileAction _get_RenamedOldName();
    // Set static field: static public System.IO.FileAction RenamedOldName
    static void _set_RenamedOldName(System::IO::FileAction value);
    // static field const value: static public System.IO.FileAction RenamedNewName
    static constexpr const int RenamedNewName = 5;
    // Get static field: static public System.IO.FileAction RenamedNewName
    static System::IO::FileAction _get_RenamedNewName();
    // Set static field: static public System.IO.FileAction RenamedNewName
    static void _set_RenamedNewName(System::IO::FileAction value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.IO.FileAction
  #pragma pack(pop)
  static check_size<sizeof(FileAction), 0 + sizeof(int)> __System_IO_FileActionSizeCheck;
  static_assert(sizeof(FileAction) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileAction, "System.IO", "FileAction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
