// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ISynchronizeInvoke
  // [TokenAttribute] Offset: FFFFFFFF
  class ISynchronizeInvoke {
    public:
    // Creating value type constructor for type: ISynchronizeInvoke
    ISynchronizeInvoke() noexcept {}
    // public System.Boolean get_InvokeRequired()
    // Offset: 0xFFFFFFFF
    bool get_InvokeRequired();
    // public System.IAsyncResult BeginInvoke(System.Delegate method, System.Object[] args)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(System::Delegate* method, ::Array<::Il2CppObject*>* args);
  }; // System.ComponentModel.ISynchronizeInvoke
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ISynchronizeInvoke*, "System.ComponentModel", "ISynchronizeInvoke");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ISynchronizeInvoke::get_InvokeRequired
// Il2CppName: get_InvokeRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ISynchronizeInvoke::*)()>(&System::ComponentModel::ISynchronizeInvoke::get_InvokeRequired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ISynchronizeInvoke*), "get_InvokeRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ISynchronizeInvoke::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::ComponentModel::ISynchronizeInvoke::*)(System::Delegate*, ::Array<::Il2CppObject*>*)>(&System::ComponentModel::ISynchronizeInvoke::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ISynchronizeInvoke*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, args});
  }
};
