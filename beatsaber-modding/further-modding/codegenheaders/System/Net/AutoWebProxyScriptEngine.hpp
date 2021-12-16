// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.AutoWebProxyScriptEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class AutoWebProxyScriptEngine : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AutoWebProxyScriptEngine
    AutoWebProxyScriptEngine() noexcept {}
    // public System.Boolean GetProxies(System.Uri destination, out System.Collections.Generic.IList`1<System.String> proxyList)
    // Offset: 0x16D3DD8
    bool GetProxies(System::Uri* destination, ByRef<System::Collections::Generic::IList_1<::Il2CppString*>*> proxyList);
    // public System.Boolean GetProxies(System.Uri destination, out System.Collections.Generic.IList`1<System.String> proxyList, ref System.Int32 syncStatus)
    // Offset: 0x16D3DE4
    bool GetProxies(System::Uri* destination, ByRef<System::Collections::Generic::IList_1<::Il2CppString*>*> proxyList, ByRef<int> syncStatus);
  }; // System.Net.AutoWebProxyScriptEngine
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::AutoWebProxyScriptEngine*, "System.Net", "AutoWebProxyScriptEngine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::AutoWebProxyScriptEngine::GetProxies
// Il2CppName: GetProxies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::AutoWebProxyScriptEngine::*)(System::Uri*, ByRef<System::Collections::Generic::IList_1<::Il2CppString*>*>)>(&System::Net::AutoWebProxyScriptEngine::GetProxies)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* proxyList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::AutoWebProxyScriptEngine*), "GetProxies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, proxyList});
  }
};
// Writing MetadataGetter for method: System::Net::AutoWebProxyScriptEngine::GetProxies
// Il2CppName: GetProxies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::AutoWebProxyScriptEngine::*)(System::Uri*, ByRef<System::Collections::Generic::IList_1<::Il2CppString*>*>, ByRef<int>)>(&System::Net::AutoWebProxyScriptEngine::GetProxies)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* proxyList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->this_arg;
    static auto* syncStatus = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::AutoWebProxyScriptEngine*), "GetProxies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, proxyList, syncStatus});
  }
};
