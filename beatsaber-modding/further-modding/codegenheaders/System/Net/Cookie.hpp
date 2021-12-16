// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.CookieVariant
#include "System/Net/CookieVariant.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
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
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: Comparer
  class Comparer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x9A
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Cookie
  // [TokenAttribute] Offset: FFFFFFFF
  class Cookie : public ::Il2CppObject {
    public:
    // private System.String m_comment
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_comment;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Uri m_commentUri
    // Size: 0x8
    // Offset: 0x18
    System::Uri* m_commentUri;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Net.CookieVariant m_cookieVariant
    // Size: 0x4
    // Offset: 0x20
    System::Net::CookieVariant m_cookieVariant;
    // Field size check
    static_assert(sizeof(System::Net::CookieVariant) == 0x4);
    // private System.Boolean m_discard
    // Size: 0x1
    // Offset: 0x24
    bool m_discard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_discard and: m_domain
    char __padding3[0x3] = {};
    // private System.String m_domain
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_domain;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean m_domain_implicit
    // Size: 0x1
    // Offset: 0x30
    bool m_domain_implicit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_domain_implicit and: m_expires
    char __padding5[0x7] = {};
    // private System.DateTime m_expires
    // Size: 0x8
    // Offset: 0x38
    System::DateTime m_expires;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* m_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_path
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* m_path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean m_path_implicit
    // Size: 0x1
    // Offset: 0x50
    bool m_path_implicit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_path_implicit and: m_port
    char __padding9[0x7] = {};
    // private System.String m_port
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* m_port;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean m_port_implicit
    // Size: 0x1
    // Offset: 0x60
    bool m_port_implicit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_port_implicit and: m_port_list
    char __padding11[0x7] = {};
    // private System.Int32[] m_port_list
    // Size: 0x8
    // Offset: 0x68
    ::Array<int>* m_port_list;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Boolean m_secure
    // Size: 0x1
    // Offset: 0x70
    bool m_secure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0xDADB98
    // private System.Boolean m_httpOnly
    // Size: 0x1
    // Offset: 0x71
    bool m_httpOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_httpOnly and: m_timeStamp
    char __padding14[0x6] = {};
    // private System.DateTime m_timeStamp
    // Size: 0x8
    // Offset: 0x78
    System::DateTime m_timeStamp;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.String m_value
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* m_value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 m_version
    // Size: 0x4
    // Offset: 0x88
    int m_version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_version and: m_domainKey
    char __padding17[0x4] = {};
    // private System.String m_domainKey
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* m_domainKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Boolean IsQuotedVersion
    // Size: 0x1
    // Offset: 0x98
    bool IsQuotedVersion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean IsQuotedDomain
    // Size: 0x1
    // Offset: 0x99
    bool IsQuotedDomain;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Cookie
    Cookie(::Il2CppString* m_comment_ = {}, System::Uri* m_commentUri_ = {}, System::Net::CookieVariant m_cookieVariant_ = {}, bool m_discard_ = {}, ::Il2CppString* m_domain_ = {}, bool m_domain_implicit_ = {}, System::DateTime m_expires_ = {}, ::Il2CppString* m_name_ = {}, ::Il2CppString* m_path_ = {}, bool m_path_implicit_ = {}, ::Il2CppString* m_port_ = {}, bool m_port_implicit_ = {}, ::Array<int>* m_port_list_ = {}, bool m_secure_ = {}, bool m_httpOnly_ = {}, System::DateTime m_timeStamp_ = {}, ::Il2CppString* m_value_ = {}, int m_version_ = {}, ::Il2CppString* m_domainKey_ = {}, bool IsQuotedVersion_ = {}, bool IsQuotedDomain_ = {}) noexcept : m_comment{m_comment_}, m_commentUri{m_commentUri_}, m_cookieVariant{m_cookieVariant_}, m_discard{m_discard_}, m_domain{m_domain_}, m_domain_implicit{m_domain_implicit_}, m_expires{m_expires_}, m_name{m_name_}, m_path{m_path_}, m_path_implicit{m_path_implicit_}, m_port{m_port_}, m_port_implicit{m_port_implicit_}, m_port_list{m_port_list_}, m_secure{m_secure_}, m_httpOnly{m_httpOnly_}, m_timeStamp{m_timeStamp_}, m_value{m_value_}, m_version{m_version_}, m_domainKey{m_domainKey_}, IsQuotedVersion{IsQuotedVersion_}, IsQuotedDomain{IsQuotedDomain_} {}
    // Get static field: static readonly System.Char[] PortSplitDelimiters
    static ::Array<::Il2CppChar>* _get_PortSplitDelimiters();
    // Set static field: static readonly System.Char[] PortSplitDelimiters
    static void _set_PortSplitDelimiters(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] Reserved2Name
    static ::Array<::Il2CppChar>* _get_Reserved2Name();
    // Set static field: static readonly System.Char[] Reserved2Name
    static void _set_Reserved2Name(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] Reserved2Value
    static ::Array<::Il2CppChar>* _get_Reserved2Value();
    // Set static field: static readonly System.Char[] Reserved2Value
    static void _set_Reserved2Value(::Array<::Il2CppChar>* value);
    // Get static field: static private System.Net.Comparer staticComparer
    static System::Net::Comparer* _get_staticComparer();
    // Set static field: static private System.Net.Comparer staticComparer
    static void _set_staticComparer(System::Net::Comparer* value);
    // Get instance field reference: private System.String m_comment
    ::Il2CppString*& dyn_m_comment();
    // Get instance field reference: private System.Uri m_commentUri
    System::Uri*& dyn_m_commentUri();
    // Get instance field reference: private System.Net.CookieVariant m_cookieVariant
    System::Net::CookieVariant& dyn_m_cookieVariant();
    // Get instance field reference: private System.Boolean m_discard
    bool& dyn_m_discard();
    // Get instance field reference: private System.String m_domain
    ::Il2CppString*& dyn_m_domain();
    // Get instance field reference: private System.Boolean m_domain_implicit
    bool& dyn_m_domain_implicit();
    // Get instance field reference: private System.DateTime m_expires
    System::DateTime& dyn_m_expires();
    // Get instance field reference: private System.String m_name
    ::Il2CppString*& dyn_m_name();
    // Get instance field reference: private System.String m_path
    ::Il2CppString*& dyn_m_path();
    // Get instance field reference: private System.Boolean m_path_implicit
    bool& dyn_m_path_implicit();
    // Get instance field reference: private System.String m_port
    ::Il2CppString*& dyn_m_port();
    // Get instance field reference: private System.Boolean m_port_implicit
    bool& dyn_m_port_implicit();
    // Get instance field reference: private System.Int32[] m_port_list
    ::Array<int>*& dyn_m_port_list();
    // Get instance field reference: private System.Boolean m_secure
    bool& dyn_m_secure();
    // Get instance field reference: private System.Boolean m_httpOnly
    bool& dyn_m_httpOnly();
    // Get instance field reference: private System.DateTime m_timeStamp
    System::DateTime& dyn_m_timeStamp();
    // Get instance field reference: private System.String m_value
    ::Il2CppString*& dyn_m_value();
    // Get instance field reference: private System.Int32 m_version
    int& dyn_m_version();
    // Get instance field reference: private System.String m_domainKey
    ::Il2CppString*& dyn_m_domainKey();
    // Get instance field reference: System.Boolean IsQuotedVersion
    bool& dyn_IsQuotedVersion();
    // Get instance field reference: System.Boolean IsQuotedDomain
    bool& dyn_IsQuotedDomain();
    // public System.String get_Comment()
    // Offset: 0x16D63A8
    ::Il2CppString* get_Comment();
    // public System.Void set_Comment(System.String value)
    // Offset: 0x16D63B0
    void set_Comment(::Il2CppString* value);
    // public System.Void set_CommentUri(System.Uri value)
    // Offset: 0x16D6418
    void set_CommentUri(System::Uri* value);
    // public System.Void set_HttpOnly(System.Boolean value)
    // Offset: 0x16D6420
    void set_HttpOnly(bool value);
    // public System.Void set_Discard(System.Boolean value)
    // Offset: 0x16D642C
    void set_Discard(bool value);
    // public System.String get_Domain()
    // Offset: 0x16D6438
    ::Il2CppString* get_Domain();
    // public System.Void set_Domain(System.String value)
    // Offset: 0x16D6440
    void set_Domain(::Il2CppString* value);
    // private System.String get__Domain()
    // Offset: 0x16D64D4
    ::Il2CppString* get__Domain();
    // public System.Boolean get_Expired()
    // Offset: 0x16D65A8
    bool get_Expired();
    // public System.Void set_Expires(System.DateTime value)
    // Offset: 0x16D6684
    void set_Expires(System::DateTime value);
    // public System.String get_Name()
    // Offset: 0x16D668C
    ::Il2CppString* get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0x16D6694
    void set_Name(::Il2CppString* value);
    // public System.String get_Path()
    // Offset: 0x16D68FC
    ::Il2CppString* get_Path();
    // public System.Void set_Path(System.String value)
    // Offset: 0x16D6904
    void set_Path(::Il2CppString* value);
    // private System.String get__Path()
    // Offset: 0x16D6980
    ::Il2CppString* get__Path();
    // System.Boolean get_Plain()
    // Offset: 0x16D6598
    bool get_Plain();
    // public System.String get_Port()
    // Offset: 0x16D75C4
    ::Il2CppString* get_Port();
    // public System.Void set_Port(System.String value)
    // Offset: 0x16D75CC
    void set_Port(::Il2CppString* value);
    // System.Int32[] get_PortList()
    // Offset: 0x16D7890
    ::Array<int>* get_PortList();
    // private System.String get__Port()
    // Offset: 0x16D7898
    ::Il2CppString* get__Port();
    // public System.Boolean get_Secure()
    // Offset: 0x16D7958
    bool get_Secure();
    // public System.Void set_Secure(System.Boolean value)
    // Offset: 0x16D7960
    void set_Secure(bool value);
    // public System.String get_Value()
    // Offset: 0x16D796C
    ::Il2CppString* get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x16D7974
    void set_Value(::Il2CppString* value);
    // System.Net.CookieVariant get_Variant()
    // Offset: 0x16D79EC
    System::Net::CookieVariant get_Variant();
    // System.String get_DomainKey()
    // Offset: 0x16D79F4
    ::Il2CppString* get_DomainKey();
    // public System.Int32 get_Version()
    // Offset: 0x16D7A10
    int get_Version();
    // public System.Void set_Version(System.Int32 value)
    // Offset: 0x16D7A18
    void set_Version(int value);
    // private System.String get__Version()
    // Offset: 0x16D7AC0
    ::Il2CppString* get__Version();
    // static private System.Void .cctor()
    // Offset: 0x16D8290
    static void _cctor();
    // System.Boolean InternalSetName(System.String value)
    // Offset: 0x16D67EC
    bool InternalSetName(::Il2CppString* value);
    // static private System.Boolean IsDomainEqualToHost(System.String domain, System.String host)
    // Offset: 0x16D6A18
    static bool IsDomainEqualToHost(::Il2CppString* domain, ::Il2CppString* host);
    // System.Boolean VerifySetDefaults(System.Net.CookieVariant variant, System.Uri uri, System.Boolean isLocalDomain, System.String localDomain, System.Boolean set_default, System.Boolean isThrow)
    // Offset: 0x16D6A7C
    bool VerifySetDefaults(System::Net::CookieVariant variant, System::Uri* uri, bool isLocalDomain, ::Il2CppString* localDomain, bool set_default, bool isThrow);
    // static private System.Boolean DomainCharsTest(System.String name)
    // Offset: 0x16D7458
    static bool DomainCharsTest(::Il2CppString* name);
    // static System.Collections.IComparer GetComparer()
    // Offset: 0x16D7BBC
    static System::Collections::IComparer* GetComparer();
    // public System.Void .ctor()
    // Offset: 0x16D629C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Cookie* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Cookie::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Cookie*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0x16D7C24
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.Int32 GetHashCode()
    // Offset: 0x16D7D04
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x16D7F64
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Cookie
  #pragma pack(pop)
  static check_size<sizeof(Cookie), 153 + sizeof(bool)> __System_Net_CookieSizeCheck;
  static_assert(sizeof(Cookie) == 0x9A);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Cookie*, "System.Net", "Cookie");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Cookie::get_Comment
// Il2CppName: get_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Comment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_Comment
// Il2CppName: set_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(::Il2CppString*)>(&System::Net::Cookie::set_Comment)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_CommentUri
// Il2CppName: set_CommentUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(System::Uri*)>(&System::Net::Cookie::set_CommentUri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_CommentUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_HttpOnly
// Il2CppName: set_HttpOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(bool)>(&System::Net::Cookie::set_HttpOnly)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_HttpOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_Discard
// Il2CppName: set_Discard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(bool)>(&System::Net::Cookie::set_Discard)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_Discard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_Domain
// Il2CppName: get_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Domain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_Domain
// Il2CppName: set_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(::Il2CppString*)>(&System::Net::Cookie::set_Domain)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get__Domain
// Il2CppName: get__Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get__Domain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get__Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_Expired
// Il2CppName: get_Expired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Expired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Expired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_Expires
// Il2CppName: set_Expires
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(System::DateTime)>(&System::Net::Cookie::set_Expires)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_Expires", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(::Il2CppString*)>(&System::Net::Cookie::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_Path
// Il2CppName: get_Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_Path
// Il2CppName: set_Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(::Il2CppString*)>(&System::Net::Cookie::set_Path)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get__Path
// Il2CppName: get__Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get__Path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get__Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_Plain
// Il2CppName: get_Plain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Plain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Plain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_Port
// Il2CppName: get_Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Port)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_Port
// Il2CppName: set_Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(::Il2CppString*)>(&System::Net::Cookie::set_Port)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_PortList
// Il2CppName: get_PortList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (System::Net::Cookie::*)()>(&System::Net::Cookie::get_PortList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_PortList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get__Port
// Il2CppName: get__Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get__Port)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get__Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_Secure
// Il2CppName: get_Secure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Secure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Secure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_Secure
// Il2CppName: set_Secure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(bool)>(&System::Net::Cookie::set_Secure)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_Secure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(::Il2CppString*)>(&System::Net::Cookie::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_Variant
// Il2CppName: get_Variant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::CookieVariant (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Variant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Variant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_DomainKey
// Il2CppName: get_DomainKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get_DomainKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_DomainKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Cookie::*)()>(&System::Net::Cookie::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::set_Version
// Il2CppName: set_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Cookie::*)(int)>(&System::Net::Cookie::set_Version)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "set_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::get__Version
// Il2CppName: get__Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::get__Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "get__Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Cookie::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::InternalSetName
// Il2CppName: InternalSetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Cookie::*)(::Il2CppString*)>(&System::Net::Cookie::InternalSetName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "InternalSetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::IsDomainEqualToHost
// Il2CppName: IsDomainEqualToHost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Il2CppString*)>(&System::Net::Cookie::IsDomainEqualToHost)> {
  static const MethodInfo* get() {
    static auto* domain = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "IsDomainEqualToHost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{domain, host});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::VerifySetDefaults
// Il2CppName: VerifySetDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Cookie::*)(System::Net::CookieVariant, System::Uri*, bool, ::Il2CppString*, bool, bool)>(&System::Net::Cookie::VerifySetDefaults)> {
  static const MethodInfo* get() {
    static auto* variant = &::il2cpp_utils::GetClassFromName("System.Net", "CookieVariant")->byval_arg;
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* isLocalDomain = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* localDomain = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* set_default = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isThrow = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "VerifySetDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variant, uri, isLocalDomain, localDomain, set_default, isThrow});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::DomainCharsTest
// Il2CppName: DomainCharsTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Net::Cookie::DomainCharsTest)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "DomainCharsTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::GetComparer
// Il2CppName: GetComparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IComparer* (*)()>(&System::Net::Cookie::GetComparer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "GetComparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Cookie::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Cookie::*)(::Il2CppObject*)>(&System::Net::Cookie::Equals)> {
  static const MethodInfo* get() {
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparand});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Cookie::*)()>(&System::Net::Cookie::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cookie::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Cookie::*)()>(&System::Net::Cookie::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cookie*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
