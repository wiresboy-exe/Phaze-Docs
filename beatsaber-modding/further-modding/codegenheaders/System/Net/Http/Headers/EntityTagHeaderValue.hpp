// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.EntityTagHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class EntityTagHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.Boolean <IsWeak>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool IsWeak;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsWeak and: Tag
    char __padding0[0x7] = {};
    // private System.String <Tag>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Tag;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: EntityTagHeaderValue
    EntityTagHeaderValue(bool IsWeak_ = {}, ::Il2CppString* Tag_ = {}) noexcept : IsWeak{IsWeak_}, Tag{Tag_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get static field: static private readonly System.Net.Http.Headers.EntityTagHeaderValue any
    static System::Net::Http::Headers::EntityTagHeaderValue* _get_any();
    // Set static field: static private readonly System.Net.Http.Headers.EntityTagHeaderValue any
    static void _set_any(System::Net::Http::Headers::EntityTagHeaderValue* value);
    // Get instance field reference: private System.Boolean <IsWeak>k__BackingField
    bool& dyn_$IsWeak$k__BackingField();
    // Get instance field reference: private System.String <Tag>k__BackingField
    ::Il2CppString*& dyn_$Tag$k__BackingField();
    // public System.Boolean get_IsWeak()
    // Offset: 0x15A9E5C
    bool get_IsWeak();
    // System.Void set_IsWeak(System.Boolean value)
    // Offset: 0x15A9E64
    void set_IsWeak(bool value);
    // public System.String get_Tag()
    // Offset: 0x15A9E70
    ::Il2CppString* get_Tag();
    // System.Void set_Tag(System.String value)
    // Offset: 0x15A9E78
    void set_Tag(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x15AA3D8
    static void _cctor();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x15A9E80
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.EntityTagHeaderValue parsedValue)
    // Offset: 0x15A9FA4
    static bool TryParse(::Il2CppString* input, ByRef<System::Net::Http::Headers::EntityTagHeaderValue*> parsedValue);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.EntityTagHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x15AA090
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, ByRef<System::Net::Http::Headers::EntityTagHeaderValue*> parsedValue, ByRef<System::Net::Http::Headers::Token> t);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.EntityTagHeaderValue> result)
    // Offset: 0x15AA2CC
    static bool TryParse(::Il2CppString* input, int minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::EntityTagHeaderValue*>*> result);
    // System.Void .ctor()
    // Offset: 0x15A9E54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntityTagHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::EntityTagHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntityTagHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15A9E88
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15A9F50
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x15AA36C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.EntityTagHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(EntityTagHeaderValue), 24 + sizeof(::Il2CppString*)> __System_Net_Http_Headers_EntityTagHeaderValueSizeCheck;
  static_assert(sizeof(EntityTagHeaderValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::EntityTagHeaderValue*, "System.Net.Http.Headers", "EntityTagHeaderValue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::get_IsWeak
// Il2CppName: get_IsWeak
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::EntityTagHeaderValue::*)()>(&System::Net::Http::Headers::EntityTagHeaderValue::get_IsWeak)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "get_IsWeak", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::set_IsWeak
// Il2CppName: set_IsWeak
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::EntityTagHeaderValue::*)(bool)>(&System::Net::Http::Headers::EntityTagHeaderValue::set_IsWeak)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "set_IsWeak", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::EntityTagHeaderValue::*)()>(&System::Net::Http::Headers::EntityTagHeaderValue::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::set_Tag
// Il2CppName: set_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::EntityTagHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::EntityTagHeaderValue::set_Tag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "set_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::Headers::EntityTagHeaderValue::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::EntityTagHeaderValue::*)()>(&System::Net::Http::Headers::EntityTagHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ByRef<System::Net::Http::Headers::EntityTagHeaderValue*>)>(&System::Net::Http::Headers::EntityTagHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "EntityTagHeaderValue")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, parsedValue});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Http::Headers::Lexer*, ByRef<System::Net::Http::Headers::EntityTagHeaderValue*>, ByRef<System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::EntityTagHeaderValue::TryParseElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "EntityTagHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::EntityTagHeaderValue*>*>)>(&System::Net::Http::Headers::EntityTagHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "EntityTagHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::EntityTagHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::EntityTagHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::EntityTagHeaderValue::*)()>(&System::Net::Http::Headers::EntityTagHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::EntityTagHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::EntityTagHeaderValue::*)()>(&System::Net::Http::Headers::EntityTagHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::EntityTagHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
