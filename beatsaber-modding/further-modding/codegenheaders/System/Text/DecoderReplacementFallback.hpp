// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.DecoderFallback
#include "System/Text/DecoderFallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.DecoderReplacementFallback
  // [TokenAttribute] Offset: FFFFFFFF
  class DecoderReplacementFallback : public System::Text::DecoderFallback {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // private System.String strDefault
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* strDefault;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DecoderReplacementFallback
    DecoderReplacementFallback(::Il2CppString* strDefault_ = {}) noexcept : strDefault{strDefault_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get instance field reference: private System.String strDefault
    ::Il2CppString*& dyn_strDefault();
    // public System.String get_DefaultString()
    // Offset: 0x1C41D88
    ::Il2CppString* get_DefaultString();
    // public System.Void .ctor(System.String replacement)
    // Offset: 0x1C41BAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderReplacementFallback* New_ctor(::Il2CppString* replacement) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::DecoderReplacementFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderReplacementFallback*, creationType>(replacement)));
    }
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x1C41E30
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Int32 DecoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public System.Void .ctor()
    // Offset: 0x1C40A74
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Void DecoderFallback::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderReplacementFallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::DecoderReplacementFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderReplacementFallback*, creationType>()));
    }
    // public override System.Text.DecoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x1C41D90
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Text.DecoderFallbackBuffer DecoderFallback::CreateFallbackBuffer()
    System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1C41E4C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1C41EDC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.DecoderReplacementFallback
  #pragma pack(pop)
  static check_size<sizeof(DecoderReplacementFallback), 24 + sizeof(::Il2CppString*)> __System_Text_DecoderReplacementFallbackSizeCheck;
  static_assert(sizeof(DecoderReplacementFallback) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderReplacementFallback*, "System.Text", "DecoderReplacementFallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallback::get_DefaultString
// Il2CppName: get_DefaultString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Text::DecoderReplacementFallback::*)()>(&System::Text::DecoderReplacementFallback::get_DefaultString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderReplacementFallback*), "get_DefaultString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallback::get_MaxCharCount
// Il2CppName: get_MaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderReplacementFallback::*)()>(&System::Text::DecoderReplacementFallback::get_MaxCharCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderReplacementFallback*), "get_MaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallback::CreateFallbackBuffer
// Il2CppName: CreateFallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::DecoderFallbackBuffer* (System::Text::DecoderReplacementFallback::*)()>(&System::Text::DecoderReplacementFallback::CreateFallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderReplacementFallback*), "CreateFallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallback::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::DecoderReplacementFallback::*)(::Il2CppObject*)>(&System::Text::DecoderReplacementFallback::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderReplacementFallback*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallback::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderReplacementFallback::*)()>(&System::Text::DecoderReplacementFallback::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderReplacementFallback*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};