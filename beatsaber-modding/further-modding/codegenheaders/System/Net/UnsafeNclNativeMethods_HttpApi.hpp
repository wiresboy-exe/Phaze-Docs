// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.UnsafeNclNativeMethods
#include "System/Net/UnsafeNclNativeMethods.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.UnsafeNclNativeMethods/System.Net.HttpApi
  // [TokenAttribute] Offset: FFFFFFFF
  class UnsafeNclNativeMethods::HttpApi : public ::Il2CppObject {
    public:
    // Nested type: System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID
    class HTTP_REQUEST_HEADER_ID;
    // Creating value type constructor for type: HttpApi
    HttpApi() noexcept {}
    // Get static field: static private System.String[] m_Strings
    static ::Array<::Il2CppString*>* _get_m_Strings();
    // Set static field: static private System.String[] m_Strings
    static void _set_m_Strings(::Array<::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x15D3564
    static void _cctor();
  }; // System.Net.UnsafeNclNativeMethods/System.Net.HttpApi
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::UnsafeNclNativeMethods::HttpApi*, "System.Net", "UnsafeNclNativeMethods/HttpApi");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::UnsafeNclNativeMethods::HttpApi::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::UnsafeNclNativeMethods::HttpApi::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::UnsafeNclNativeMethods::HttpApi*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
