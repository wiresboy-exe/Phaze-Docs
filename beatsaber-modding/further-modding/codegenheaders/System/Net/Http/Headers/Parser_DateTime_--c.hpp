// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.Parser/System.Net.Http.Headers.DateTime
#include "System/Net/Http/Headers/Parser_DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/System.Net.Http.Headers.DateTime/System.Net.Http.Headers.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Parser::DateTime::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.Net.Http.Headers.Parser/System.Net.Http.Headers.DateTime/System.Net.Http.Headers.<>c <>9
    static System::Net::Http::Headers::Parser::DateTime::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Http.Headers.Parser/System.Net.Http.Headers.DateTime/System.Net.Http.Headers.<>c <>9
    static void _set_$$9(System::Net::Http::Headers::Parser::DateTime::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x15B040C
    static void _cctor();
    // System.String <.cctor>b__2_0(System.Object l)
    // Offset: 0x15B0478
    ::Il2CppString* $_cctor$b__2_0(::Il2CppObject* l);
    // public System.Void .ctor()
    // Offset: 0x15B0470
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Parser::DateTime::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::Parser::DateTime::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Parser::DateTime::$$c*, creationType>()));
    }
  }; // System.Net.Http.Headers.Parser/System.Net.Http.Headers.DateTime/System.Net.Http.Headers.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::DateTime::$$c*, "System.Net.Http.Headers", "Parser/DateTime/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::DateTime::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::Headers::Parser::DateTime::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::DateTime::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::DateTime::$$c::$_cctor$b__2_0
// Il2CppName: <.cctor>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::Parser::DateTime::$$c::*)(::Il2CppObject*)>(&System::Net::Http::Headers::Parser::DateTime::$$c::$_cctor$b__2_0)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::DateTime::$$c*), "<.cctor>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::DateTime::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
