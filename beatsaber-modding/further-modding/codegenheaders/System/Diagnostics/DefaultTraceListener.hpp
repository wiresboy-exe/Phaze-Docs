// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.TraceListener
#include "System/Diagnostics/TraceListener.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DefaultTraceListener
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultTraceListener : public System::Diagnostics::TraceListener {
    public:
    // private System.String logFileName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* logFileName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DefaultTraceListener
    DefaultTraceListener(::Il2CppString* logFileName_ = {}) noexcept : logFileName{logFileName_} {}
    // Get static field: static private readonly System.Boolean OnWin32
    static bool _get_OnWin32();
    // Set static field: static private readonly System.Boolean OnWin32
    static void _set_OnWin32(bool value);
    // Get static field: static private readonly System.String MonoTracePrefix
    static ::Il2CppString* _get_MonoTracePrefix();
    // Set static field: static private readonly System.String MonoTracePrefix
    static void _set_MonoTracePrefix(::Il2CppString* value);
    // Get static field: static private readonly System.String MonoTraceFile
    static ::Il2CppString* _get_MonoTraceFile();
    // Set static field: static private readonly System.String MonoTraceFile
    static void _set_MonoTraceFile(::Il2CppString* value);
    // Get instance field reference: private System.String logFileName
    ::Il2CppString*& dyn_logFileName();
    // public System.String get_LogFileName()
    // Offset: 0x18B8B64
    ::Il2CppString* get_LogFileName();
    // static private System.Void .cctor()
    // Offset: 0x18B8900
    static void _cctor();
    // static private System.String GetPrefix(System.String var, System.String target)
    // Offset: 0x18B8A2C
    static ::Il2CppString* GetPrefix(::Il2CppString* var, ::Il2CppString* target);
    // static private System.Void WriteWindowsDebugString(System.String message)
    // Offset: 0x18B8D38
    static void WriteWindowsDebugString(::Il2CppString* message);
    // private System.Void WriteDebugString(System.String message)
    // Offset: 0x18B8D3C
    void WriteDebugString(::Il2CppString* message);
    // private System.Void WriteMonoTrace(System.String message)
    // Offset: 0x18B8DE8
    void WriteMonoTrace(::Il2CppString* message);
    // private System.Void WritePrefix()
    // Offset: 0x18B91C4
    void WritePrefix();
    // private System.Void WriteImpl(System.String message)
    // Offset: 0x18B9264
    void WriteImpl(::Il2CppString* message);
    // private System.Void WriteLogFile(System.String message, System.String logFile)
    // Offset: 0x18B8FB8
    void WriteLogFile(::Il2CppString* message, ::Il2CppString* logFile);
    // public System.Void .ctor()
    // Offset: 0x18B8ABC
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultTraceListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::DefaultTraceListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultTraceListener*, creationType>()));
    }
    // public override System.Void Fail(System.String message)
    // Offset: 0x18B8B6C
    // Implemented from: System.Diagnostics.TraceListener
    // Base method: System.Void TraceListener::Fail(System.String message)
    void Fail(::Il2CppString* message);
    // public override System.Void Fail(System.String message, System.String detailMessage)
    // Offset: 0x18B8B8C
    // Implemented from: System.Diagnostics.TraceListener
    // Base method: System.Void TraceListener::Fail(System.String message, System.String detailMessage)
    void Fail(::Il2CppString* message, ::Il2CppString* detailMessage);
    // public override System.Void Write(System.String message)
    // Offset: 0x18B9344
    // Implemented from: System.Diagnostics.TraceListener
    // Base method: System.Void TraceListener::Write(System.String message)
    void Write(::Il2CppString* message);
    // public override System.Void WriteLine(System.String message)
    // Offset: 0x18B9348
    // Implemented from: System.Diagnostics.TraceListener
    // Base method: System.Void TraceListener::WriteLine(System.String message)
    void WriteLine(::Il2CppString* message);
  }; // System.Diagnostics.DefaultTraceListener
  #pragma pack(pop)
  static check_size<sizeof(DefaultTraceListener), 48 + sizeof(::Il2CppString*)> __System_Diagnostics_DefaultTraceListenerSizeCheck;
  static_assert(sizeof(DefaultTraceListener) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DefaultTraceListener*, "System.Diagnostics", "DefaultTraceListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::get_LogFileName
// Il2CppName: get_LogFileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Diagnostics::DefaultTraceListener::*)()>(&System::Diagnostics::DefaultTraceListener::get_LogFileName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "get_LogFileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::DefaultTraceListener::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::GetPrefix
// Il2CppName: GetPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*)>(&System::Diagnostics::DefaultTraceListener::GetPrefix)> {
  static const MethodInfo* get() {
    static auto* var = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "GetPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{var, target});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::WriteWindowsDebugString
// Il2CppName: WriteWindowsDebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&System::Diagnostics::DefaultTraceListener::WriteWindowsDebugString)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "WriteWindowsDebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::WriteDebugString
// Il2CppName: WriteDebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DefaultTraceListener::*)(::Il2CppString*)>(&System::Diagnostics::DefaultTraceListener::WriteDebugString)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "WriteDebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::WriteMonoTrace
// Il2CppName: WriteMonoTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DefaultTraceListener::*)(::Il2CppString*)>(&System::Diagnostics::DefaultTraceListener::WriteMonoTrace)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "WriteMonoTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::WritePrefix
// Il2CppName: WritePrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DefaultTraceListener::*)()>(&System::Diagnostics::DefaultTraceListener::WritePrefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "WritePrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::WriteImpl
// Il2CppName: WriteImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DefaultTraceListener::*)(::Il2CppString*)>(&System::Diagnostics::DefaultTraceListener::WriteImpl)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "WriteImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::WriteLogFile
// Il2CppName: WriteLogFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DefaultTraceListener::*)(::Il2CppString*, ::Il2CppString*)>(&System::Diagnostics::DefaultTraceListener::WriteLogFile)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* logFile = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "WriteLogFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, logFile});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::Fail
// Il2CppName: Fail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DefaultTraceListener::*)(::Il2CppString*)>(&System::Diagnostics::DefaultTraceListener::Fail)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "Fail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::Fail
// Il2CppName: Fail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DefaultTraceListener::*)(::Il2CppString*, ::Il2CppString*)>(&System::Diagnostics::DefaultTraceListener::Fail)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* detailMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "Fail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, detailMessage});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DefaultTraceListener::*)(::Il2CppString*)>(&System::Diagnostics::DefaultTraceListener::Write)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DefaultTraceListener::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DefaultTraceListener::*)(::Il2CppString*)>(&System::Diagnostics::DefaultTraceListener::WriteLine)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DefaultTraceListener*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
