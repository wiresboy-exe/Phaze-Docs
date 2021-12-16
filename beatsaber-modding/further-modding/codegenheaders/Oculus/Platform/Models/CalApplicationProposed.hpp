// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.CalApplicationProposed
  // [TokenAttribute] Offset: FFFFFFFF
  class CalApplicationProposed : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x10
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: CalApplicationProposed
    CalApplicationProposed(uint64_t _ID_ = {}) noexcept : _ID{_ID_} {}
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return _ID;
    }
    // Get instance field reference: public readonly System.UInt64 ID
    uint64_t& dyn_ID();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x152D284
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CalApplicationProposed* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::CalApplicationProposed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CalApplicationProposed*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.CalApplicationProposed
  #pragma pack(pop)
  static check_size<sizeof(CalApplicationProposed), 16 + sizeof(uint64_t)> __Oculus_Platform_Models_CalApplicationProposedSizeCheck;
  static_assert(sizeof(CalApplicationProposed) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CalApplicationProposed*, "Oculus.Platform.Models", "CalApplicationProposed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::CalApplicationProposed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!