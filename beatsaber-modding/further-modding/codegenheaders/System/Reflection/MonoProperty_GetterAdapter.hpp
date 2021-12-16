// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.MonoProperty
#include "System/Reflection/MonoProperty.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MonoProperty/System.Reflection.GetterAdapter
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoProperty::GetterAdapter : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: GetterAdapter
    GetterAdapter() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D22CF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoProperty::GetterAdapter* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoProperty::GetterAdapter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoProperty::GetterAdapter*, creationType>(object, method)));
    }
    // public System.Object Invoke(System.Object _this)
    // Offset: 0x1D22D04
    ::Il2CppObject* Invoke(::Il2CppObject* _this);
    // public System.IAsyncResult BeginInvoke(System.Object _this, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D230A0
    System::IAsyncResult* BeginInvoke(::Il2CppObject* _this, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D230C4
    ::Il2CppObject* EndInvoke(System::IAsyncResult* result);
  }; // System.Reflection.MonoProperty/System.Reflection.GetterAdapter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoProperty::GetterAdapter*, "System.Reflection", "MonoProperty/GetterAdapter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetterAdapter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetterAdapter::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoProperty::GetterAdapter::*)(::Il2CppObject*)>(&System::Reflection::MonoProperty::GetterAdapter::Invoke)> {
  static const MethodInfo* get() {
    static auto* _this = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty::GetterAdapter*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_this});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetterAdapter::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Reflection::MonoProperty::GetterAdapter::*)(::Il2CppObject*, System::AsyncCallback*, ::Il2CppObject*)>(&System::Reflection::MonoProperty::GetterAdapter::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* _this = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty::GetterAdapter*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_this, callback, object});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoProperty::GetterAdapter::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoProperty::GetterAdapter::*)(System::IAsyncResult*)>(&System::Reflection::MonoProperty::GetterAdapter::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoProperty::GetterAdapter*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
