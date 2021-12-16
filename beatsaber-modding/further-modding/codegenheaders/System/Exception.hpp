// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.InteropServices._Exception
#include "System/Runtime/InteropServices/_Exception.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SafeSerializationManager
  class SafeSerializationManager;
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: StackTrace
  class StackTrace;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x88
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Exception
  // [TokenAttribute] Offset: FFFFFFFF
  // [ClassInterfaceAttribute] Offset: D9F800
  // [ComVisibleAttribute] Offset: D9F800
  // [ComDefaultInterfaceAttribute] Offset: D9F800
  class Exception : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable, public System::Runtime::InteropServices::_Exception*/ {
    public:
    // Nested type: System::Exception::ExceptionMessageKind
    struct ExceptionMessageKind;
    // private System.String _className
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* className;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String _message
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.IDictionary _data
    // Size: 0x8
    // Offset: 0x20
    System::Collections::IDictionary* data;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    // private System.Exception _innerException
    // Size: 0x8
    // Offset: 0x28
    System::Exception* innerException;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.String _helpURL
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* helpURL;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Object _stackTrace
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* stackTrace;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String _stackTraceString
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* stackTraceString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _remoteStackTraceString
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* remoteStackTraceString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _remoteStackIndex
    // Size: 0x4
    // Offset: 0x50
    int remoteStackIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: remoteStackIndex and: dynamicMethods
    char __padding8[0x4] = {};
    // private System.Object _dynamicMethods
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppObject* dynamicMethods;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int32 _HResult
    // Size: 0x4
    // Offset: 0x60
    int HResult;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: HResult and: source
    char __padding10[0x4] = {};
    // private System.String _source
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* source;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xDA6244
    // private System.Runtime.Serialization.SafeSerializationManager _safeSerializationManager
    // Size: 0x8
    // Offset: 0x70
    System::Runtime::Serialization::SafeSerializationManager* safeSerializationManager;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::SafeSerializationManager*) == 0x8);
    // System.Diagnostics.StackTrace[] captured_traces
    // Size: 0x8
    // Offset: 0x78
    ::Array<System::Diagnostics::StackTrace*>* captured_traces;
    // Field size check
    static_assert(sizeof(::Array<System::Diagnostics::StackTrace*>*) == 0x8);
    // private System.IntPtr[] native_trace_ips
    // Size: 0x8
    // Offset: 0x80
    ::Array<System::IntPtr>* native_trace_ips;
    // Field size check
    static_assert(sizeof(::Array<System::IntPtr>*) == 0x8);
    // Creating value type constructor for type: Exception
    Exception(::Il2CppString* className_ = {}, ::Il2CppString* message_ = {}, System::Collections::IDictionary* data_ = {}, System::Exception* innerException_ = {}, ::Il2CppString* helpURL_ = {}, ::Il2CppObject* stackTrace_ = {}, ::Il2CppString* stackTraceString_ = {}, ::Il2CppString* remoteStackTraceString_ = {}, int remoteStackIndex_ = {}, ::Il2CppObject* dynamicMethods_ = {}, int HResult_ = {}, ::Il2CppString* source_ = {}, System::Runtime::Serialization::SafeSerializationManager* safeSerializationManager_ = {}, ::Array<System::Diagnostics::StackTrace*>* captured_traces_ = {}, ::Array<System::IntPtr>* native_trace_ips_ = {}) noexcept : className{className_}, message{message_}, data{data_}, innerException{innerException_}, helpURL{helpURL_}, stackTrace{stackTrace_}, stackTraceString{stackTraceString_}, remoteStackTraceString{remoteStackTraceString_}, remoteStackIndex{remoteStackIndex_}, dynamicMethods{dynamicMethods_}, HResult{HResult_}, source{source_}, safeSerializationManager{safeSerializationManager_}, captured_traces{captured_traces_}, native_trace_ips{native_trace_ips_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::InteropServices::_Exception
    operator System::Runtime::InteropServices::_Exception() noexcept {
      return *reinterpret_cast<System::Runtime::InteropServices::_Exception*>(this);
    }
    // [OptionalFieldAttribute] Offset: 0xDA6234
    // Get static field: static private System.Object s_EDILock
    static ::Il2CppObject* _get_s_EDILock();
    // Set static field: static private System.Object s_EDILock
    static void _set_s_EDILock(::Il2CppObject* value);
    // static field const value: static private System.Int32 _COMPlusExceptionCode
    static constexpr const int _COMPlusExceptionCode = -532462766;
    // Get static field: static private System.Int32 _COMPlusExceptionCode
    static int _get__COMPlusExceptionCode();
    // Set static field: static private System.Int32 _COMPlusExceptionCode
    static void _set__COMPlusExceptionCode(int value);
    // Get instance field reference: private System.String _className
    ::Il2CppString*& dyn__className();
    // Get instance field reference: System.String _message
    ::Il2CppString*& dyn__message();
    // Get instance field reference: private System.Collections.IDictionary _data
    System::Collections::IDictionary*& dyn__data();
    // Get instance field reference: private System.Exception _innerException
    System::Exception*& dyn__innerException();
    // Get instance field reference: private System.String _helpURL
    ::Il2CppString*& dyn__helpURL();
    // Get instance field reference: private System.Object _stackTrace
    ::Il2CppObject*& dyn__stackTrace();
    // Get instance field reference: private System.String _stackTraceString
    ::Il2CppString*& dyn__stackTraceString();
    // Get instance field reference: private System.String _remoteStackTraceString
    ::Il2CppString*& dyn__remoteStackTraceString();
    // Get instance field reference: private System.Int32 _remoteStackIndex
    int& dyn__remoteStackIndex();
    // Get instance field reference: private System.Object _dynamicMethods
    ::Il2CppObject*& dyn__dynamicMethods();
    // Get instance field reference: System.Int32 _HResult
    int& dyn__HResult();
    // Get instance field reference: private System.String _source
    ::Il2CppString*& dyn__source();
    // Get instance field reference: private System.Runtime.Serialization.SafeSerializationManager _safeSerializationManager
    System::Runtime::Serialization::SafeSerializationManager*& dyn__safeSerializationManager();
    // Get instance field reference: System.Diagnostics.StackTrace[] captured_traces
    ::Array<System::Diagnostics::StackTrace*>*& dyn_captured_traces();
    // Get instance field reference: private System.IntPtr[] native_trace_ips
    ::Array<System::IntPtr>*& dyn_native_trace_ips();
    // public System.String get_Message()
    // Offset: 0x1808FC4
    ::Il2CppString* get_Message();
    // public System.Collections.IDictionary get_Data()
    // Offset: 0x18090E4
    System::Collections::IDictionary* get_Data();
    // public System.Exception get_InnerException()
    // Offset: 0x1809180
    System::Exception* get_InnerException();
    // public System.String get_StackTrace()
    // Offset: 0x1809188
    ::Il2CppString* get_StackTrace();
    // public System.String get_Source()
    // Offset: 0x18091F0
    ::Il2CppString* get_Source();
    // public System.Int32 get_HResult()
    // Offset: 0x1809AB0
    int get_HResult();
    // protected System.Void set_HResult(System.Int32 value)
    // Offset: 0x1809AB8
    void set_HResult(int value);
    // public System.Void .ctor(System.String message)
    // Offset: 0x1808C18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Exception* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Exception*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x1808C4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Exception* New_ctor(::Il2CppString* message, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Exception*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1808C90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Exception* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Exception*, creationType>(info, context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1809C00
    static void _cctor();
    // private System.Void Init()
    // Offset: 0x1808B78
    void Init();
    // static private System.Boolean IsImmutableAgileException(System.Exception e)
    // Offset: 0x1809170
    static bool IsImmutableAgileException(System::Exception* e);
    // private System.String GetClassName()
    // Offset: 0x180909C
    ::Il2CppString* GetClassName();
    // private System.String GetStackTrace(System.Boolean needFileInfo)
    // Offset: 0x1809190
    ::Il2CppString* GetStackTrace(bool needFileInfo);
    // System.Void SetErrorCode(System.Int32 hr)
    // Offset: 0x1801900
    void SetErrorCode(int hr);
    // private System.String ToString(System.Boolean needFileLineInfo, System.Boolean needMessage)
    // Offset: 0x1809310
    ::Il2CppString* ToString(bool needFileLineInfo, bool needMessage);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1809580
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1809948
    void OnDeserialized(System::Runtime::Serialization::StreamingContext context);
    // System.Void InternalPreserveStackTrace()
    // Offset: 0x18099C8
    void InternalPreserveStackTrace();
    // private System.String StripFileInfo(System.String stackTrace, System.Boolean isRemoteStackTrace)
    // Offset: 0x18091E8
    ::Il2CppString* StripFileInfo(::Il2CppString* stackTrace, bool isRemoteStackTrace);
    // System.Void RestoreExceptionDispatchInfo(System.Runtime.ExceptionServices.ExceptionDispatchInfo exceptionDispatchInfo)
    // Offset: 0x1809A20
    void RestoreExceptionDispatchInfo(System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo);
    // public System.Type GetType()
    // Offset: 0x1809178
    System::Type* GetType();
    // static System.String GetMessageFromNativeResources(System.Exception/System.ExceptionMessageKind kind)
    // Offset: 0x1809AC0
    static ::Il2CppString* GetMessageFromNativeResources(System::Exception::ExceptionMessageKind kind);
    // System.Exception FixRemotingException()
    // Offset: 0x1809B1C
    System::Exception* FixRemotingException();
    // static System.Void ReportUnhandledException(System.Exception exception)
    // Offset: 0x1809BFC
    static void ReportUnhandledException(System::Exception* exception);
    // public System.Void .ctor()
    // Offset: 0x1808BF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Exception* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Exception::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Exception*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1809304
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Exception
  #pragma pack(pop)
  static check_size<sizeof(Exception), 128 + sizeof(::Array<System::IntPtr>*)> __System_ExceptionSizeCheck;
  static_assert(sizeof(Exception) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Exception*, "System", "Exception");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Exception::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Exception::*)()>(&System::Exception::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary* (System::Exception::*)()>(&System::Exception::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::get_InnerException
// Il2CppName: get_InnerException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (System::Exception::*)()>(&System::Exception::get_InnerException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "get_InnerException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::get_StackTrace
// Il2CppName: get_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Exception::*)()>(&System::Exception::get_StackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "get_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::get_Source
// Il2CppName: get_Source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Exception::*)()>(&System::Exception::get_Source)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "get_Source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::get_HResult
// Il2CppName: get_HResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Exception::*)()>(&System::Exception::get_HResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "get_HResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::set_HResult
// Il2CppName: set_HResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Exception::*)(int)>(&System::Exception::set_HResult)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "set_HResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Exception::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Exception::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Exception::*)()>(&System::Exception::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::IsImmutableAgileException
// Il2CppName: IsImmutableAgileException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Exception*)>(&System::Exception::IsImmutableAgileException)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "IsImmutableAgileException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Exception::GetClassName
// Il2CppName: GetClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Exception::*)()>(&System::Exception::GetClassName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "GetClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::GetStackTrace
// Il2CppName: GetStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Exception::*)(bool)>(&System::Exception::GetStackTrace)> {
  static const MethodInfo* get() {
    static auto* needFileInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "GetStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{needFileInfo});
  }
};
// Writing MetadataGetter for method: System::Exception::SetErrorCode
// Il2CppName: SetErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Exception::*)(int)>(&System::Exception::SetErrorCode)> {
  static const MethodInfo* get() {
    static auto* hr = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "SetErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hr});
  }
};
// Writing MetadataGetter for method: System::Exception::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Exception::*)(bool, bool)>(&System::Exception::ToString)> {
  static const MethodInfo* get() {
    static auto* needFileLineInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* needMessage = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{needFileLineInfo, needMessage});
  }
};
// Writing MetadataGetter for method: System::Exception::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Exception::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Exception::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Exception::OnDeserialized
// Il2CppName: OnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Exception::*)(System::Runtime::Serialization::StreamingContext)>(&System::Exception::OnDeserialized)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "OnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Exception::InternalPreserveStackTrace
// Il2CppName: InternalPreserveStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Exception::*)()>(&System::Exception::InternalPreserveStackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "InternalPreserveStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::StripFileInfo
// Il2CppName: StripFileInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Exception::*)(::Il2CppString*, bool)>(&System::Exception::StripFileInfo)> {
  static const MethodInfo* get() {
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isRemoteStackTrace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "StripFileInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stackTrace, isRemoteStackTrace});
  }
};
// Writing MetadataGetter for method: System::Exception::RestoreExceptionDispatchInfo
// Il2CppName: RestoreExceptionDispatchInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Exception::*)(System::Runtime::ExceptionServices::ExceptionDispatchInfo*)>(&System::Exception::RestoreExceptionDispatchInfo)> {
  static const MethodInfo* get() {
    static auto* exceptionDispatchInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.ExceptionServices", "ExceptionDispatchInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "RestoreExceptionDispatchInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exceptionDispatchInfo});
  }
};
// Writing MetadataGetter for method: System::Exception::GetType
// Il2CppName: GetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Exception::*)()>(&System::Exception::GetType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "GetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::GetMessageFromNativeResources
// Il2CppName: GetMessageFromNativeResources
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Exception::ExceptionMessageKind)>(&System::Exception::GetMessageFromNativeResources)> {
  static const MethodInfo* get() {
    static auto* kind = &::il2cpp_utils::GetClassFromName("System", "Exception/ExceptionMessageKind")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "GetMessageFromNativeResources", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kind});
  }
};
// Writing MetadataGetter for method: System::Exception::FixRemotingException
// Il2CppName: FixRemotingException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (System::Exception::*)()>(&System::Exception::FixRemotingException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "FixRemotingException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Exception::ReportUnhandledException
// Il2CppName: ReportUnhandledException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception*)>(&System::Exception::ReportUnhandledException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "ReportUnhandledException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: System::Exception::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Exception::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Exception::*)()>(&System::Exception::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Exception*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};