// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.jvalue
#include "UnityEngine/jvalue.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaProxy
  class AndroidJavaProxy;
  // Forward declaring type: AndroidJavaRunnable
  class AndroidJavaRunnable;
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine._AndroidJNIHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DDDDF4
  class _AndroidJNIHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: _AndroidJNIHelper
    _AndroidJNIHelper() noexcept {}
    // static public System.IntPtr CreateJavaProxy(System.IntPtr delegateHandle, UnityEngine.AndroidJavaProxy proxy)
    // Offset: 0x23A2EF0
    static System::IntPtr CreateJavaProxy(System::IntPtr delegateHandle, UnityEngine::AndroidJavaProxy* proxy);
    // static public System.IntPtr CreateJavaRunnable(UnityEngine.AndroidJavaRunnable jrunnable)
    // Offset: 0x23A2D94
    static System::IntPtr CreateJavaRunnable(UnityEngine::AndroidJavaRunnable* jrunnable);
    // static public System.IntPtr InvokeJavaProxyMethod(UnityEngine.AndroidJavaProxy proxy, System.IntPtr jmethodName, System.IntPtr jargs)
    // Offset: 0x23AC21C
    static System::IntPtr InvokeJavaProxyMethod(UnityEngine::AndroidJavaProxy* proxy, System::IntPtr jmethodName, System::IntPtr jargs);
    // static public UnityEngine.jvalue[] CreateJNIArgArray(System.Object[] args)
    // Offset: 0x23A37C0
    static ::Array<UnityEngine::jvalue>* CreateJNIArgArray(::Array<::Il2CppObject*>* args);
    // static public System.Object UnboxArray(UnityEngine.AndroidJavaObject obj)
    // Offset: 0x23AC5EC
    static ::Il2CppObject* UnboxArray(UnityEngine::AndroidJavaObject* obj);
    // static public System.Object Unbox(UnityEngine.AndroidJavaObject obj)
    // Offset: 0x23AAB88
    static ::Il2CppObject* Unbox(UnityEngine::AndroidJavaObject* obj);
    // static public UnityEngine.AndroidJavaObject Box(System.Object obj)
    // Offset: 0x23A9F34
    static UnityEngine::AndroidJavaObject* Box(::Il2CppObject* obj);
    // static public System.Void DeleteJNIArgArray(System.Object[] args, UnityEngine.jvalue[] jniArgs)
    // Offset: 0x23A3C98
    static void DeleteJNIArgArray(::Array<::Il2CppObject*>* args, ::Array<UnityEngine::jvalue>* jniArgs);
    // static public System.IntPtr ConvertToJNIArray(System.Array array)
    // Offset: 0x23A2F84
    static System::IntPtr ConvertToJNIArray(System::Array* array);
    // static public ArrayType ConvertFromJNIArray(System.IntPtr array)
    // Offset: 0xFFFFFFFF
    template<class ArrayType>
    static ArrayType ConvertFromJNIArray(System::IntPtr array) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::_AndroidJNIHelper::ConvertFromJNIArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "_AndroidJNIHelper", "ConvertFromJNIArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<ArrayType, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, array);
    }
    // static public System.IntPtr GetConstructorID(System.IntPtr jclass, System.Object[] args)
    // Offset: 0x23A3DE4
    static System::IntPtr GetConstructorID(System::IntPtr jclass, ::Array<::Il2CppObject*>* args);
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0x23A3E54
    static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* args, bool isStatic);
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.Object[] args, System.Boolean isStatic)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* args, bool isStatic) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::_AndroidJNIHelper::GetMethodID");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "_AndroidJNIHelper", "GetMethodID", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(jclass), ::il2cpp_utils::ExtractType(methodName), ::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractType(isStatic)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::IntPtr, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, jclass, methodName, args, isStatic);
    }
    // static public System.IntPtr GetFieldID(System.IntPtr jclass, System.String fieldName, System.Boolean isStatic)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    static System::IntPtr GetFieldID(System::IntPtr jclass, ::Il2CppString* fieldName, bool isStatic) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::_AndroidJNIHelper::GetFieldID");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "_AndroidJNIHelper", "GetFieldID", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(jclass), ::il2cpp_utils::ExtractType(fieldName), ::il2cpp_utils::ExtractType(isStatic)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::IntPtr, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, jclass, fieldName, isStatic);
    }
    // static public System.IntPtr GetConstructorID(System.IntPtr jclass, System.String signature)
    // Offset: 0x23A2684
    static System::IntPtr GetConstructorID(System::IntPtr jclass, ::Il2CppString* signature);
    // static public System.IntPtr GetMethodID(System.IntPtr jclass, System.String methodName, System.String signature, System.Boolean isStatic)
    // Offset: 0x23A28A8
    static System::IntPtr GetMethodID(System::IntPtr jclass, ::Il2CppString* methodName, ::Il2CppString* signature, bool isStatic);
    // static private System.IntPtr GetMethodIDFallback(System.IntPtr jclass, System.String methodName, System.String signature, System.Boolean isStatic)
    // Offset: 0x23ACAE8
    static System::IntPtr GetMethodIDFallback(System::IntPtr jclass, ::Il2CppString* methodName, ::Il2CppString* signature, bool isStatic);
    // static public System.IntPtr GetFieldID(System.IntPtr jclass, System.String fieldName, System.String signature, System.Boolean isStatic)
    // Offset: 0x23A2AE0
    static System::IntPtr GetFieldID(System::IntPtr jclass, ::Il2CppString* fieldName, ::Il2CppString* signature, bool isStatic);
    // static public System.String GetSignature(System.Object obj)
    // Offset: 0x23A3E9C
    static ::Il2CppString* GetSignature(::Il2CppObject* obj);
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0x23A4A3C
    static ::Il2CppString* GetSignature(::Array<::Il2CppObject*>* args);
    // static public System.String GetSignature(System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    static ::Il2CppString* GetSignature(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::_AndroidJNIHelper::GetSignature");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "_AndroidJNIHelper", "GetSignature", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, args);
    }
    // public System.Void .ctor()
    // Offset: 0x23ACBE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static _AndroidJNIHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::_AndroidJNIHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<_AndroidJNIHelper*, creationType>()));
    }
  }; // UnityEngine._AndroidJNIHelper
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::_AndroidJNIHelper*, "UnityEngine", "_AndroidJNIHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::CreateJavaProxy
// Il2CppName: CreateJavaProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, UnityEngine::AndroidJavaProxy*)>(&UnityEngine::_AndroidJNIHelper::CreateJavaProxy)> {
  static const MethodInfo* get() {
    static auto* delegateHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* proxy = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "CreateJavaProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegateHandle, proxy});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::CreateJavaRunnable
// Il2CppName: CreateJavaRunnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(UnityEngine::AndroidJavaRunnable*)>(&UnityEngine::_AndroidJNIHelper::CreateJavaRunnable)> {
  static const MethodInfo* get() {
    static auto* jrunnable = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaRunnable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "CreateJavaRunnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jrunnable});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::InvokeJavaProxyMethod
// Il2CppName: InvokeJavaProxyMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(UnityEngine::AndroidJavaProxy*, System::IntPtr, System::IntPtr)>(&UnityEngine::_AndroidJNIHelper::InvokeJavaProxyMethod)> {
  static const MethodInfo* get() {
    static auto* proxy = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaProxy")->byval_arg;
    static auto* jmethodName = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* jargs = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "InvokeJavaProxyMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxy, jmethodName, jargs});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::CreateJNIArgArray
// Il2CppName: CreateJNIArgArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::jvalue>* (*)(::Array<::Il2CppObject*>*)>(&UnityEngine::_AndroidJNIHelper::CreateJNIArgArray)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "CreateJNIArgArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::UnboxArray
// Il2CppName: UnboxArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(UnityEngine::AndroidJavaObject*)>(&UnityEngine::_AndroidJNIHelper::UnboxArray)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "UnboxArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::Unbox
// Il2CppName: Unbox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(UnityEngine::AndroidJavaObject*)>(&UnityEngine::_AndroidJNIHelper::Unbox)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AndroidJavaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "Unbox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::Box
// Il2CppName: Box
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AndroidJavaObject* (*)(::Il2CppObject*)>(&UnityEngine::_AndroidJNIHelper::Box)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "Box", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::DeleteJNIArgArray
// Il2CppName: DeleteJNIArgArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<::Il2CppObject*>*, ::Array<UnityEngine::jvalue>*)>(&UnityEngine::_AndroidJNIHelper::DeleteJNIArgArray)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* jniArgs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "jvalue"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "DeleteJNIArgArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, jniArgs});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::ConvertToJNIArray
// Il2CppName: ConvertToJNIArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::Array*)>(&UnityEngine::_AndroidJNIHelper::ConvertToJNIArray)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "ConvertToJNIArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::ConvertFromJNIArray
// Il2CppName: ConvertFromJNIArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetConstructorID
// Il2CppName: GetConstructorID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Array<::Il2CppObject*>*)>(&UnityEngine::_AndroidJNIHelper::GetConstructorID)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetConstructorID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Array<::Il2CppObject*>*, bool)>(&UnityEngine::_AndroidJNIHelper::GetMethodID)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetMethodID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, methodName, args, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetFieldID
// Il2CppName: GetFieldID
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetConstructorID
// Il2CppName: GetConstructorID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*)>(&UnityEngine::_AndroidJNIHelper::GetConstructorID)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetConstructorID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, signature});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetMethodID
// Il2CppName: GetMethodID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Il2CppString*, bool)>(&UnityEngine::_AndroidJNIHelper::GetMethodID)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetMethodID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, methodName, signature, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetMethodIDFallback
// Il2CppName: GetMethodIDFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Il2CppString*, bool)>(&UnityEngine::_AndroidJNIHelper::GetMethodIDFallback)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetMethodIDFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, methodName, signature, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetFieldID
// Il2CppName: GetFieldID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(System::IntPtr, ::Il2CppString*, ::Il2CppString*, bool)>(&UnityEngine::_AndroidJNIHelper::GetFieldID)> {
  static const MethodInfo* get() {
    static auto* jclass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* fieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetFieldID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jclass, fieldName, signature, isStatic});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetSignature
// Il2CppName: GetSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppObject*)>(&UnityEngine::_AndroidJNIHelper::GetSignature)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetSignature
// Il2CppName: GetSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<::Il2CppObject*>*)>(&UnityEngine::_AndroidJNIHelper::GetSignature)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::_AndroidJNIHelper*), "GetSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::GetSignature
// Il2CppName: GetSignature
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::_AndroidJNIHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!