// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Net.HttpStatusCode
#include "System/Net/HttpStatusCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: CookieCollection
  class CookieCollection;
  // Forward declaring type: CookieContainer
  class CookieContainer;
  // Forward declaring type: WebConnectionData
  class WebConnectionData;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpWebResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpWebResponse : public System::Net::WebResponse {
    public:
    // private System.Uri uri
    // Size: 0x8
    // Offset: 0x18
    System::Uri* uri;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Net.WebHeaderCollection webHeaders
    // Size: 0x8
    // Offset: 0x20
    System::Net::WebHeaderCollection* webHeaders;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollection*) == 0x8);
    // private System.Net.CookieCollection cookieCollection
    // Size: 0x8
    // Offset: 0x28
    System::Net::CookieCollection* cookieCollection;
    // Field size check
    static_assert(sizeof(System::Net::CookieCollection*) == 0x8);
    // private System.String method
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* method;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Version version
    // Size: 0x8
    // Offset: 0x38
    System::Version* version;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // private System.Net.HttpStatusCode statusCode
    // Size: 0x4
    // Offset: 0x40
    System::Net::HttpStatusCode statusCode;
    // Field size check
    static_assert(sizeof(System::Net::HttpStatusCode) == 0x4);
    // Padding between fields: statusCode and: statusDescription
    char __padding5[0x4] = {};
    // private System.String statusDescription
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* statusDescription;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int64 contentLength
    // Size: 0x8
    // Offset: 0x50
    int64_t contentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.String contentType
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* contentType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Net.CookieContainer cookie_container
    // Size: 0x8
    // Offset: 0x60
    System::Net::CookieContainer* cookie_container;
    // Field size check
    static_assert(sizeof(System::Net::CookieContainer*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x68
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: stream
    char __padding10[0x7] = {};
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x70
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // Creating value type constructor for type: HttpWebResponse
    HttpWebResponse(System::Uri* uri_ = {}, System::Net::WebHeaderCollection* webHeaders_ = {}, System::Net::CookieCollection* cookieCollection_ = {}, ::Il2CppString* method_ = {}, System::Version* version_ = {}, System::Net::HttpStatusCode statusCode_ = {}, ::Il2CppString* statusDescription_ = {}, int64_t contentLength_ = {}, ::Il2CppString* contentType_ = {}, System::Net::CookieContainer* cookie_container_ = {}, bool disposed_ = {}, System::IO::Stream* stream_ = {}) noexcept : uri{uri_}, webHeaders{webHeaders_}, cookieCollection{cookieCollection_}, method{method_}, version{version_}, statusCode{statusCode_}, statusDescription{statusDescription_}, contentLength{contentLength_}, contentType{contentType_}, cookie_container{cookie_container_}, disposed{disposed_}, stream{stream_} {}
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get instance field reference: private System.Uri uri
    System::Uri*& dyn_uri();
    // Get instance field reference: private System.Net.WebHeaderCollection webHeaders
    System::Net::WebHeaderCollection*& dyn_webHeaders();
    // Get instance field reference: private System.Net.CookieCollection cookieCollection
    System::Net::CookieCollection*& dyn_cookieCollection();
    // Get instance field reference: private System.String method
    ::Il2CppString*& dyn_method();
    // Get instance field reference: private System.Version version
    System::Version*& dyn_version();
    // Get instance field reference: private System.Net.HttpStatusCode statusCode
    System::Net::HttpStatusCode& dyn_statusCode();
    // Get instance field reference: private System.String statusDescription
    ::Il2CppString*& dyn_statusDescription();
    // Get instance field reference: private System.Int64 contentLength
    int64_t& dyn_contentLength();
    // Get instance field reference: private System.String contentType
    ::Il2CppString*& dyn_contentType();
    // Get instance field reference: private System.Net.CookieContainer cookie_container
    System::Net::CookieContainer*& dyn_cookie_container();
    // Get instance field reference: private System.Boolean disposed
    bool& dyn_disposed();
    // Get instance field reference: private System.IO.Stream stream
    System::IO::Stream*& dyn_stream();
    // public System.Net.HttpStatusCode get_StatusCode()
    // Offset: 0x16812D8
    System::Net::HttpStatusCode get_StatusCode();
    // public System.String get_StatusDescription()
    // Offset: 0x16812E0
    ::Il2CppString* get_StatusDescription();
    // System.Void .ctor(System.Uri uri, System.String method, System.Net.WebConnectionData data, System.Net.CookieContainer container)
    // Offset: 0x167FBBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor(System::Uri* uri, ::Il2CppString* method, System::Net::WebConnectionData* data, System::Net::CookieContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>(uri, method, data, container)));
    }
    // System.Void ReadAll()
    // Offset: 0x167F0C4
    void ReadAll();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x16813A4
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1681524
    void System_IDisposable_Dispose();
    // private System.Void CheckDisposed()
    // Offset: 0x168122C
    void CheckDisposed();
    // private System.Void FillCookies()
    // Offset: 0x1680D68
    void FillCookies();
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x1681200
    // Implemented from: System.Net.WebResponse
    // Base method: System.Net.WebHeaderCollection WebResponse::get_Headers()
    System::Net::WebHeaderCollection* get_Headers();
    // public override System.Uri get_ResponseUri()
    // Offset: 0x1681208
    // Implemented from: System.Net.WebResponse
    // Base method: System.Uri WebResponse::get_ResponseUri()
    System::Uri* get_ResponseUri();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1680F80
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>(serializationInfo, streamingContext)));
    }
    // public System.Void .ctor()
    // Offset: 0x1681548
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>()));
    }
    // public override System.IO.Stream GetResponseStream()
    // Offset: 0x1681304
    // Implemented from: System.Net.WebResponse
    // Base method: System.IO.Stream WebResponse::GetResponseStream()
    System::IO::Stream* GetResponseStream();
    // protected override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x16813B0
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void Close()
    // Offset: 0x1681500
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1681534
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Net.HttpWebResponse
  #pragma pack(pop)
  static check_size<sizeof(HttpWebResponse), 112 + sizeof(System::IO::Stream*)> __System_Net_HttpWebResponseSizeCheck;
  static_assert(sizeof(HttpWebResponse) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpWebResponse*, "System.Net", "HttpWebResponse");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpStatusCode (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_StatusDescription
// Il2CppName: get_StatusDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_StatusDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_StatusDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::ReadAll
// Il2CppName: ReadAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::ReadAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "ReadAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::CheckDisposed
// Il2CppName: CheckDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::CheckDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "CheckDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::FillCookies
// Il2CppName: FillCookies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::FillCookies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "FillCookies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebHeaderCollection* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_ResponseUri
// Il2CppName: get_ResponseUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_ResponseUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_ResponseUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::GetResponseStream
// Il2CppName: GetResponseStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::GetResponseStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "GetResponseStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Net::HttpWebResponse::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(bool)>(&System::Net::HttpWebResponse::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
