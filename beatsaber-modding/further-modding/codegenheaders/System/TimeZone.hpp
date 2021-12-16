// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.TimeZone
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA0590
  class TimeZone : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TimeZone
    TimeZone() noexcept {}
    // Get static field: static private System.TimeZone currentTimeZone
    static System::TimeZone* _get_currentTimeZone();
    // Set static field: static private System.TimeZone currentTimeZone
    static void _set_currentTimeZone(System::TimeZone* value);
    // Get static field: static private System.Object tz_lock
    static ::Il2CppObject* _get_tz_lock();
    // Set static field: static private System.Object tz_lock
    static void _set_tz_lock(::Il2CppObject* value);
    // Get static field: static private System.Int64 timezone_check
    static int64_t _get_timezone_check();
    // Set static field: static private System.Int64 timezone_check
    static void _set_timezone_check(int64_t value);
    // static public System.TimeZone get_CurrentTimeZone()
    // Offset: 0x18874E4
    static System::TimeZone* get_CurrentTimeZone();
    // static private System.Void .cctor()
    // Offset: 0x18876D4
    static void _cctor();
    // public System.TimeSpan GetUtcOffset(System.DateTime time)
    // Offset: 0xFFFFFFFF
    System::TimeSpan GetUtcOffset(System::DateTime time);
    // protected System.Void .ctor()
    // Offset: 0x18874DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeZone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeZone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeZone*, creationType>()));
    }
  }; // System.TimeZone
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeZone*, "System", "TimeZone");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TimeZone::get_CurrentTimeZone
// Il2CppName: get_CurrentTimeZone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeZone* (*)()>(&System::TimeZone::get_CurrentTimeZone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZone*), "get_CurrentTimeZone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZone::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::TimeZone::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZone*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZone::GetUtcOffset
// Il2CppName: GetUtcOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::TimeZone::*)(System::DateTime)>(&System::TimeZone::GetUtcOffset)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZone*), "GetUtcOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::TimeZone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
