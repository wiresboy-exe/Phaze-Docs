// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Security.AuthenticatedStream
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticatedStream : public System::IO::Stream {
    public:
    // private System.IO.Stream _InnerStream
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* InnerStream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Boolean _LeaveStreamOpen
    // Size: 0x1
    // Offset: 0x30
    bool LeaveStreamOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AuthenticatedStream
    AuthenticatedStream(System::IO::Stream* InnerStream_ = {}, bool LeaveStreamOpen_ = {}) noexcept : InnerStream{InnerStream_}, LeaveStreamOpen{LeaveStreamOpen_} {}
    // Get instance field reference: private System.IO.Stream _InnerStream
    System::IO::Stream*& dyn__InnerStream();
    // Get instance field reference: private System.Boolean _LeaveStreamOpen
    bool& dyn__LeaveStreamOpen();
    // protected System.IO.Stream get_InnerStream()
    // Offset: 0x14A6B88
    System::IO::Stream* get_InnerStream();
    // public System.Boolean get_IsAuthenticated()
    // Offset: 0xFFFFFFFF
    bool get_IsAuthenticated();
    // protected System.Void .ctor(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen)
    // Offset: 0x14A69E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticatedStream* New_ctor(System::IO::Stream* innerStream, bool leaveInnerStreamOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Security::AuthenticatedStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticatedStream*, creationType>(innerStream, leaveInnerStreamOpen)));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x14A6B90
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Net.Security.AuthenticatedStream
  #pragma pack(pop)
  static check_size<sizeof(AuthenticatedStream), 48 + sizeof(bool)> __System_Net_Security_AuthenticatedStreamSizeCheck;
  static_assert(sizeof(AuthenticatedStream) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::AuthenticatedStream*, "System.Net.Security", "AuthenticatedStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Security::AuthenticatedStream::get_InnerStream
// Il2CppName: get_InnerStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (System::Net::Security::AuthenticatedStream::*)()>(&System::Net::Security::AuthenticatedStream::get_InnerStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::AuthenticatedStream*), "get_InnerStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::AuthenticatedStream::get_IsAuthenticated
// Il2CppName: get_IsAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::AuthenticatedStream::*)()>(&System::Net::Security::AuthenticatedStream::get_IsAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::AuthenticatedStream*), "get_IsAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Security::AuthenticatedStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Security::AuthenticatedStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::AuthenticatedStream::*)(bool)>(&System::Net::Security::AuthenticatedStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::AuthenticatedStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
