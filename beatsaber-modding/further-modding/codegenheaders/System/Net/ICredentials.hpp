// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ICredentials
  // [TokenAttribute] Offset: FFFFFFFF
  class ICredentials {
    public:
    // Creating value type constructor for type: ICredentials
    ICredentials() noexcept {}
    // public System.Net.NetworkCredential GetCredential(System.Uri uri, System.String authType)
    // Offset: 0xFFFFFFFF
    System::Net::NetworkCredential* GetCredential(System::Uri* uri, ::Il2CppString* authType);
  }; // System.Net.ICredentials
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ICredentials*, "System.Net", "ICredentials");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ICredentials::GetCredential
// Il2CppName: GetCredential
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkCredential* (System::Net::ICredentials::*)(System::Uri*, ::Il2CppString*)>(&System::Net::ICredentials::GetCredential)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* authType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ICredentials*), "GetCredential", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, authType});
  }
};