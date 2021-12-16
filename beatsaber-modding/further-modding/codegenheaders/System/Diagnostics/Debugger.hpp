// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Debugger
  // [TokenAttribute] Offset: FFFFFFFF
  // [MonoTODOAttribute] Offset: DA5F14
  // [ComVisibleAttribute] Offset: DA5F14
  class Debugger : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Debugger
    Debugger() noexcept {}
    // Get static field: static public readonly System.String DefaultCategory
    static ::Il2CppString* _get_DefaultCategory();
    // Set static field: static public readonly System.String DefaultCategory
    static void _set_DefaultCategory(::Il2CppString* value);
    // static public System.Boolean get_IsAttached()
    // Offset: 0x1B65B64
    static bool get_IsAttached();
    // static private System.Void .cctor()
    // Offset: 0x1B65BD0
    static void _cctor();
    // static private System.Boolean IsAttached_internal()
    // Offset: 0x1B65BC0
    static bool IsAttached_internal();
    // static public System.Boolean IsLogging()
    // Offset: 0x1B65BC4
    static bool IsLogging();
    // static public System.Void Log(System.Int32 level, System.String category, System.String message)
    // Offset: 0x1B65BC8
    static void Log(int level, ::Il2CppString* category, ::Il2CppString* message);
    // static public System.Void NotifyOfCrossThreadDependency()
    // Offset: 0x1B65BCC
    static void NotifyOfCrossThreadDependency();
  }; // System.Diagnostics.Debugger
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Debugger*, "System.Diagnostics", "Debugger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Debugger::get_IsAttached
// Il2CppName: get_IsAttached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Diagnostics::Debugger::get_IsAttached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), "get_IsAttached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Debugger::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Debugger::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Debugger::IsAttached_internal
// Il2CppName: IsAttached_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Diagnostics::Debugger::IsAttached_internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), "IsAttached_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Debugger::IsLogging
// Il2CppName: IsLogging
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Diagnostics::Debugger::IsLogging)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), "IsLogging", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Debugger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Il2CppString*, ::Il2CppString*)>(&System::Diagnostics::Debugger::Log)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* category = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, category, message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Debugger::NotifyOfCrossThreadDependency
// Il2CppName: NotifyOfCrossThreadDependency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Debugger::NotifyOfCrossThreadDependency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), "NotifyOfCrossThreadDependency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
