// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: NameValueHeaderValue
  class NameValueHeaderValue;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.CacheControlHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class CacheControlHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> extensions
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* extensions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> no_cache_headers
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* no_cache_headers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> private_headers
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<::Il2CppString*>* private_headers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Nullable`1<System.TimeSpan> <MaxAge>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Nullable_1<System::TimeSpan> MaxAge;
    // private System.Boolean <MaxStale>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool MaxStale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Nullable`1<System.TimeSpan> <MaxStaleLimit>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Nullable_1<System::TimeSpan> MaxStaleLimit;
    // private System.Nullable`1<System.TimeSpan> <MinFresh>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Nullable_1<System::TimeSpan> MinFresh;
    // private System.Boolean <MustRevalidate>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool MustRevalidate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <NoCache>k__BackingField
    // Size: 0x1
    // Offset: 0x61
    bool NoCache;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <NoStore>k__BackingField
    // Size: 0x1
    // Offset: 0x62
    bool NoStore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <NoTransform>k__BackingField
    // Size: 0x1
    // Offset: 0x63
    bool NoTransform;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <OnlyIfCached>k__BackingField
    // Size: 0x1
    // Offset: 0x64
    bool OnlyIfCached;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <Private>k__BackingField
    // Size: 0x1
    // Offset: 0x65
    bool Private;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <ProxyRevalidate>k__BackingField
    // Size: 0x1
    // Offset: 0x66
    bool ProxyRevalidate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <Public>k__BackingField
    // Size: 0x1
    // Offset: 0x67
    bool Public;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Nullable`1<System.TimeSpan> <SharedMaxAge>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    System::Nullable_1<System::TimeSpan> SharedMaxAge;
    // Creating value type constructor for type: CacheControlHeaderValue
    CacheControlHeaderValue(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* extensions_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* no_cache_headers_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* private_headers_ = {}, System::Nullable_1<System::TimeSpan> MaxAge_ = {}, bool MaxStale_ = {}, System::Nullable_1<System::TimeSpan> MaxStaleLimit_ = {}, System::Nullable_1<System::TimeSpan> MinFresh_ = {}, bool MustRevalidate_ = {}, bool NoCache_ = {}, bool NoStore_ = {}, bool NoTransform_ = {}, bool OnlyIfCached_ = {}, bool Private_ = {}, bool ProxyRevalidate_ = {}, bool Public_ = {}, System::Nullable_1<System::TimeSpan> SharedMaxAge_ = {}) noexcept : extensions{extensions_}, no_cache_headers{no_cache_headers_}, private_headers{private_headers_}, MaxAge{MaxAge_}, MaxStale{MaxStale_}, MaxStaleLimit{MaxStaleLimit_}, MinFresh{MinFresh_}, MustRevalidate{MustRevalidate_}, NoCache{NoCache_}, NoStore{NoStore_}, NoTransform{NoTransform_}, OnlyIfCached{OnlyIfCached_}, Private{Private_}, ProxyRevalidate{ProxyRevalidate_}, Public{Public_}, SharedMaxAge{SharedMaxAge_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> extensions
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*& dyn_extensions();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> no_cache_headers
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_no_cache_headers();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> private_headers
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_private_headers();
    // Get instance field reference: private System.Nullable`1<System.TimeSpan> <MaxAge>k__BackingField
    System::Nullable_1<System::TimeSpan>& dyn_$MaxAge$k__BackingField();
    // Get instance field reference: private System.Boolean <MaxStale>k__BackingField
    bool& dyn_$MaxStale$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.TimeSpan> <MaxStaleLimit>k__BackingField
    System::Nullable_1<System::TimeSpan>& dyn_$MaxStaleLimit$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.TimeSpan> <MinFresh>k__BackingField
    System::Nullable_1<System::TimeSpan>& dyn_$MinFresh$k__BackingField();
    // Get instance field reference: private System.Boolean <MustRevalidate>k__BackingField
    bool& dyn_$MustRevalidate$k__BackingField();
    // Get instance field reference: private System.Boolean <NoCache>k__BackingField
    bool& dyn_$NoCache$k__BackingField();
    // Get instance field reference: private System.Boolean <NoStore>k__BackingField
    bool& dyn_$NoStore$k__BackingField();
    // Get instance field reference: private System.Boolean <NoTransform>k__BackingField
    bool& dyn_$NoTransform$k__BackingField();
    // Get instance field reference: private System.Boolean <OnlyIfCached>k__BackingField
    bool& dyn_$OnlyIfCached$k__BackingField();
    // Get instance field reference: private System.Boolean <Private>k__BackingField
    bool& dyn_$Private$k__BackingField();
    // Get instance field reference: private System.Boolean <ProxyRevalidate>k__BackingField
    bool& dyn_$ProxyRevalidate$k__BackingField();
    // Get instance field reference: private System.Boolean <Public>k__BackingField
    bool& dyn_$Public$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.TimeSpan> <SharedMaxAge>k__BackingField
    System::Nullable_1<System::TimeSpan>& dyn_$SharedMaxAge$k__BackingField();
    // public System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> get_Extensions()
    // Offset: 0x15A6D78
    System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* get_Extensions();
    // public System.Nullable`1<System.TimeSpan> get_MaxAge()
    // Offset: 0x15A6DEC
    System::Nullable_1<System::TimeSpan> get_MaxAge();
    // public System.Void set_MaxAge(System.Nullable`1<System.TimeSpan> value)
    // Offset: 0x15A6DF8
    void set_MaxAge(System::Nullable_1<System::TimeSpan> value);
    // public System.Boolean get_MaxStale()
    // Offset: 0x15A6E00
    bool get_MaxStale();
    // public System.Void set_MaxStale(System.Boolean value)
    // Offset: 0x15A6E08
    void set_MaxStale(bool value);
    // public System.Nullable`1<System.TimeSpan> get_MaxStaleLimit()
    // Offset: 0x15A6E14
    System::Nullable_1<System::TimeSpan> get_MaxStaleLimit();
    // public System.Void set_MaxStaleLimit(System.Nullable`1<System.TimeSpan> value)
    // Offset: 0x15A6E20
    void set_MaxStaleLimit(System::Nullable_1<System::TimeSpan> value);
    // public System.Nullable`1<System.TimeSpan> get_MinFresh()
    // Offset: 0x15A6E28
    System::Nullable_1<System::TimeSpan> get_MinFresh();
    // public System.Void set_MinFresh(System.Nullable`1<System.TimeSpan> value)
    // Offset: 0x15A6E34
    void set_MinFresh(System::Nullable_1<System::TimeSpan> value);
    // public System.Boolean get_MustRevalidate()
    // Offset: 0x15A6E3C
    bool get_MustRevalidate();
    // public System.Void set_MustRevalidate(System.Boolean value)
    // Offset: 0x15A6E44
    void set_MustRevalidate(bool value);
    // public System.Boolean get_NoCache()
    // Offset: 0x15A6E50
    bool get_NoCache();
    // public System.Void set_NoCache(System.Boolean value)
    // Offset: 0x15A6E58
    void set_NoCache(bool value);
    // public System.Collections.Generic.ICollection`1<System.String> get_NoCacheHeaders()
    // Offset: 0x15A6E64
    System::Collections::Generic::ICollection_1<::Il2CppString*>* get_NoCacheHeaders();
    // public System.Boolean get_NoStore()
    // Offset: 0x15A6ED8
    bool get_NoStore();
    // public System.Void set_NoStore(System.Boolean value)
    // Offset: 0x15A6EE0
    void set_NoStore(bool value);
    // public System.Boolean get_NoTransform()
    // Offset: 0x15A6EEC
    bool get_NoTransform();
    // public System.Void set_NoTransform(System.Boolean value)
    // Offset: 0x15A6EF4
    void set_NoTransform(bool value);
    // public System.Boolean get_OnlyIfCached()
    // Offset: 0x15A6F00
    bool get_OnlyIfCached();
    // public System.Void set_OnlyIfCached(System.Boolean value)
    // Offset: 0x15A6F08
    void set_OnlyIfCached(bool value);
    // public System.Boolean get_Private()
    // Offset: 0x15A6F14
    bool get_Private();
    // public System.Void set_Private(System.Boolean value)
    // Offset: 0x15A6F1C
    void set_Private(bool value);
    // public System.Collections.Generic.ICollection`1<System.String> get_PrivateHeaders()
    // Offset: 0x15A6F28
    System::Collections::Generic::ICollection_1<::Il2CppString*>* get_PrivateHeaders();
    // public System.Boolean get_ProxyRevalidate()
    // Offset: 0x15A6F9C
    bool get_ProxyRevalidate();
    // public System.Void set_ProxyRevalidate(System.Boolean value)
    // Offset: 0x15A6FA4
    void set_ProxyRevalidate(bool value);
    // public System.Boolean get_Public()
    // Offset: 0x15A6FB0
    bool get_Public();
    // public System.Void set_Public(System.Boolean value)
    // Offset: 0x15A6FB8
    void set_Public(bool value);
    // public System.Nullable`1<System.TimeSpan> get_SharedMaxAge()
    // Offset: 0x15A6FC4
    System::Nullable_1<System::TimeSpan> get_SharedMaxAge();
    // public System.Void set_SharedMaxAge(System.Nullable`1<System.TimeSpan> value)
    // Offset: 0x15A6FD0
    void set_SharedMaxAge(System::Nullable_1<System::TimeSpan> value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x15A6FD8
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.CacheControlHeaderValue parsedValue)
    // Offset: 0x15A78DC
    static bool TryParse(::Il2CppString* input, ByRef<System::Net::Http::Headers::CacheControlHeaderValue*> parsedValue);
    // public System.Void .ctor()
    // Offset: 0x15A81C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CacheControlHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::CacheControlHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CacheControlHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15A735C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15A76E4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x15A8340
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.CacheControlHeaderValue
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::CacheControlHeaderValue*, "System.Net.Http.Headers", "CacheControlHeaderValue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_MaxAge
// Il2CppName: get_MaxAge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::TimeSpan> (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_MaxAge)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_MaxAge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_MaxAge
// Il2CppName: set_MaxAge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(System::Nullable_1<System::TimeSpan>)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_MaxAge)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "TimeSpan")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_MaxAge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStale
// Il2CppName: get_MaxStale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_MaxStale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStale
// Il2CppName: set_MaxStale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_MaxStale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStaleLimit
// Il2CppName: get_MaxStaleLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::TimeSpan> (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStaleLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_MaxStaleLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStaleLimit
// Il2CppName: set_MaxStaleLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(System::Nullable_1<System::TimeSpan>)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStaleLimit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "TimeSpan")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_MaxStaleLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_MinFresh
// Il2CppName: get_MinFresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::TimeSpan> (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_MinFresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_MinFresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_MinFresh
// Il2CppName: set_MinFresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(System::Nullable_1<System::TimeSpan>)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_MinFresh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "TimeSpan")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_MinFresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_MustRevalidate
// Il2CppName: get_MustRevalidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_MustRevalidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_MustRevalidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_MustRevalidate
// Il2CppName: set_MustRevalidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_MustRevalidate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_MustRevalidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_NoCache
// Il2CppName: get_NoCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_NoCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_NoCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_NoCache
// Il2CppName: set_NoCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_NoCache)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_NoCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_NoCacheHeaders
// Il2CppName: get_NoCacheHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<::Il2CppString*>* (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_NoCacheHeaders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_NoCacheHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_NoStore
// Il2CppName: get_NoStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_NoStore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_NoStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_NoStore
// Il2CppName: set_NoStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_NoStore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_NoStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_NoTransform
// Il2CppName: get_NoTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_NoTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_NoTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_NoTransform
// Il2CppName: set_NoTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_NoTransform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_NoTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_OnlyIfCached
// Il2CppName: get_OnlyIfCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_OnlyIfCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_OnlyIfCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_OnlyIfCached
// Il2CppName: set_OnlyIfCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_OnlyIfCached)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_OnlyIfCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_Private
// Il2CppName: get_Private
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_Private)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_Private", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_Private
// Il2CppName: set_Private
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_Private)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_Private", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_PrivateHeaders
// Il2CppName: get_PrivateHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<::Il2CppString*>* (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_PrivateHeaders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_PrivateHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_ProxyRevalidate
// Il2CppName: get_ProxyRevalidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_ProxyRevalidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_ProxyRevalidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_ProxyRevalidate
// Il2CppName: set_ProxyRevalidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_ProxyRevalidate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_ProxyRevalidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_Public
// Il2CppName: get_Public
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_Public)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_Public", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_Public
// Il2CppName: set_Public
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_Public)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_Public", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::get_SharedMaxAge
// Il2CppName: get_SharedMaxAge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::TimeSpan> (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::get_SharedMaxAge)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "get_SharedMaxAge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::set_SharedMaxAge
// Il2CppName: set_SharedMaxAge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::CacheControlHeaderValue::*)(System::Nullable_1<System::TimeSpan>)>(&System::Net::Http::Headers::CacheControlHeaderValue::set_SharedMaxAge)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "TimeSpan")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "set_SharedMaxAge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ByRef<System::Net::Http::Headers::CacheControlHeaderValue*>)>(&System::Net::Http::Headers::CacheControlHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "CacheControlHeaderValue")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, parsedValue});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::CacheControlHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::CacheControlHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CacheControlHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&System::Net::Http::Headers::CacheControlHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CacheControlHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
