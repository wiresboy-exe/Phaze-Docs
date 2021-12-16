// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.WaitOrTimerCallback
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA22CC
  class WaitOrTimerCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: WaitOrTimerCallback
    WaitOrTimerCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1885920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitOrTimerCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::WaitOrTimerCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitOrTimerCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object state, System.Boolean timedOut)
    // Offset: 0x1885930
    void Invoke(::Il2CppObject* state, bool timedOut);
    // public System.IAsyncResult BeginInvoke(System.Object state, System.Boolean timedOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1885D58
    System::IAsyncResult* BeginInvoke(::Il2CppObject* state, bool timedOut, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1885DF8
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.WaitOrTimerCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::WaitOrTimerCallback*, "System.Threading", "WaitOrTimerCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::WaitOrTimerCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::WaitOrTimerCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::WaitOrTimerCallback::*)(::Il2CppObject*, bool)>(&System::Threading::WaitOrTimerCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* timedOut = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitOrTimerCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, timedOut});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitOrTimerCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Threading::WaitOrTimerCallback::*)(::Il2CppObject*, bool, System::AsyncCallback*, ::Il2CppObject*)>(&System::Threading::WaitOrTimerCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* timedOut = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitOrTimerCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, timedOut, callback, object});
  }
};
// Writing MetadataGetter for method: System::Threading::WaitOrTimerCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::WaitOrTimerCallback::*)(System::IAsyncResult*)>(&System::Threading::WaitOrTimerCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::WaitOrTimerCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
