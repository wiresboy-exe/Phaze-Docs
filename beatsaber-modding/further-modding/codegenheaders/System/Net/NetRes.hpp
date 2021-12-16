// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebExceptionStatus
  struct WebExceptionStatus;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetRes
  // [TokenAttribute] Offset: FFFFFFFF
  class NetRes : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NetRes
    NetRes() noexcept {}
    // static public System.String GetWebStatusString(System.String Res, System.Net.WebExceptionStatus Status)
    // Offset: 0x1686480
    static ::Il2CppString* GetWebStatusString(::Il2CppString* Res, System::Net::WebExceptionStatus Status);
    // static public System.String GetWebStatusString(System.Net.WebExceptionStatus Status)
    // Offset: 0x168654C
    static ::Il2CppString* GetWebStatusString(System::Net::WebExceptionStatus Status);
  }; // System.Net.NetRes
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetRes*, "System.Net", "NetRes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetRes::GetWebStatusString
// Il2CppName: GetWebStatusString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, System::Net::WebExceptionStatus)>(&System::Net::NetRes::GetWebStatusString)> {
  static const MethodInfo* get() {
    static auto* Res = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* Status = &::il2cpp_utils::GetClassFromName("System.Net", "WebExceptionStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetRes*), "GetWebStatusString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Res, Status});
  }
};
// Writing MetadataGetter for method: System::Net::NetRes::GetWebStatusString
// Il2CppName: GetWebStatusString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Net::WebExceptionStatus)>(&System::Net::NetRes::GetWebStatusString)> {
  static const MethodInfo* get() {
    static auto* Status = &::il2cpp_utils::GetClassFromName("System.Net", "WebExceptionStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetRes*), "GetWebStatusString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Status});
  }
};
