// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.UTF7Encoding
#include "System/Text/UTF7Encoding.hpp"
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
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UTF7Encoding/System.Text.DecoderUTF7Fallback
  // [TokenAttribute] Offset: FFFFFFFF
  class UTF7Encoding::DecoderUTF7Fallback : public System::Text::DecoderFallback {
    public:
    // Creating value type constructor for type: DecoderUTF7Fallback
    DecoderUTF7Fallback() noexcept {}
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x1D7E734
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Int32 DecoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public System.Void .ctor()
    // Offset: 0x1D7C558
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Void DecoderFallback::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding::DecoderUTF7Fallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF7Encoding::DecoderUTF7Fallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding::DecoderUTF7Fallback*, creationType>()));
    }
    // public override System.Text.DecoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x1D7E6C0
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Text.DecoderFallbackBuffer DecoderFallback::CreateFallbackBuffer()
    System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1D7E73C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D7E7A0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.UTF7Encoding/System.Text.DecoderUTF7Fallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UTF7Encoding::DecoderUTF7Fallback*, "System.Text", "UTF7Encoding/DecoderUTF7Fallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7Fallback::get_MaxCharCount
// Il2CppName: get_MaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF7Encoding::DecoderUTF7Fallback::*)()>(&System::Text::UTF7Encoding::DecoderUTF7Fallback::get_MaxCharCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::DecoderUTF7Fallback*), "get_MaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7Fallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7Fallback::CreateFallbackBuffer
// Il2CppName: CreateFallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::DecoderFallbackBuffer* (System::Text::UTF7Encoding::DecoderUTF7Fallback::*)()>(&System::Text::UTF7Encoding::DecoderUTF7Fallback::CreateFallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::DecoderUTF7Fallback*), "CreateFallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7Fallback::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UTF7Encoding::DecoderUTF7Fallback::*)(::Il2CppObject*)>(&System::Text::UTF7Encoding::DecoderUTF7Fallback::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::DecoderUTF7Fallback*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7Fallback::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF7Encoding::DecoderUTF7Fallback::*)()>(&System::Text::UTF7Encoding::DecoderUTF7Fallback::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::DecoderUTF7Fallback*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
