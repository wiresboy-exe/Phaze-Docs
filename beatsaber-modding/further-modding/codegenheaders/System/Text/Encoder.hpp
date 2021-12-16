// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallback
  class EncoderFallback;
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Encoder
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA0694
  class Encoder : public ::Il2CppObject {
    public:
    // System.Text.EncoderFallback m_fallback
    // Size: 0x8
    // Offset: 0x10
    System::Text::EncoderFallback* m_fallback;
    // Field size check
    static_assert(sizeof(System::Text::EncoderFallback*) == 0x8);
    // System.Text.EncoderFallbackBuffer m_fallbackBuffer
    // Size: 0x8
    // Offset: 0x18
    System::Text::EncoderFallbackBuffer* m_fallbackBuffer;
    // Field size check
    static_assert(sizeof(System::Text::EncoderFallbackBuffer*) == 0x8);
    // Creating value type constructor for type: Encoder
    Encoder(System::Text::EncoderFallback* m_fallback_ = {}, System::Text::EncoderFallbackBuffer* m_fallbackBuffer_ = {}) noexcept : m_fallback{m_fallback_}, m_fallbackBuffer{m_fallbackBuffer_} {}
    // Get instance field reference: System.Text.EncoderFallback m_fallback
    System::Text::EncoderFallback*& dyn_m_fallback();
    // Get instance field reference: System.Text.EncoderFallbackBuffer m_fallbackBuffer
    System::Text::EncoderFallbackBuffer*& dyn_m_fallbackBuffer();
    // public System.Text.EncoderFallback get_Fallback()
    // Offset: 0x1C4202C
    System::Text::EncoderFallback* get_Fallback();
    // public System.Text.EncoderFallbackBuffer get_FallbackBuffer()
    // Offset: 0x1C3F49C
    System::Text::EncoderFallbackBuffer* get_FallbackBuffer();
    // System.Boolean get_InternalHasFallbackBuffer()
    // Offset: 0x1C3F48C
    bool get_InternalHasFallbackBuffer();
    // System.Void SerializeEncoder(System.Runtime.Serialization.SerializationInfo info)
    // Offset: 0x1C41FB8
    void SerializeEncoder(System::Runtime::Serialization::SerializationInfo* info);
    // public System.Void Reset()
    // Offset: 0x1C42034
    void Reset();
    // public System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0xFFFFFFFF
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count, bool flush);
    // public System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Boolean flush)
    // Offset: 0x1C42108
    int GetByteCount(::Il2CppChar* chars, int count, bool flush);
    // public System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Boolean flush)
    // Offset: 0xFFFFFFFF
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex, bool flush);
    // public System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush)
    // Offset: 0x1C42288
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush);
    // public System.Void Convert(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Boolean flush, out System.Int32 charsUsed, out System.Int32 bytesUsed, out System.Boolean completed)
    // Offset: 0x1C424B4
    void Convert(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex, int byteCount, bool flush, ByRef<int> charsUsed, ByRef<int> bytesUsed, ByRef<bool> completed);
    // public System.Void Convert(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush, out System.Int32 charsUsed, out System.Int32 bytesUsed, out System.Boolean completed)
    // Offset: 0x1C42808
    void Convert(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush, ByRef<int> charsUsed, ByRef<int> bytesUsed, ByRef<bool> completed);
    // protected System.Void .ctor()
    // Offset: 0x1C42024
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoder*, creationType>()));
    }
  }; // System.Text.Encoder
  #pragma pack(pop)
  static check_size<sizeof(Encoder), 24 + sizeof(System::Text::EncoderFallbackBuffer*)> __System_Text_EncoderSizeCheck;
  static_assert(sizeof(Encoder) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoder*, "System.Text", "Encoder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::Encoder::get_Fallback
// Il2CppName: get_Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::EncoderFallback* (System::Text::Encoder::*)()>(&System::Text::Encoder::get_Fallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "get_Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::get_FallbackBuffer
// Il2CppName: get_FallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::EncoderFallbackBuffer* (System::Text::Encoder::*)()>(&System::Text::Encoder::get_FallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "get_FallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::get_InternalHasFallbackBuffer
// Il2CppName: get_InternalHasFallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoder::*)()>(&System::Text::Encoder::get_InternalHasFallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "get_InternalHasFallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::SerializeEncoder
// Il2CppName: SerializeEncoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoder::*)(System::Runtime::Serialization::SerializationInfo*)>(&System::Text::Encoder::SerializeEncoder)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "SerializeEncoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoder::*)()>(&System::Text::Encoder::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Encoder::*)(::Array<::Il2CppChar>*, int, int, bool)>(&System::Text::Encoder::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count, flush});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Encoder::*)(::Il2CppChar*, int, bool)>(&System::Text::Encoder::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, count, flush});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Encoder::*)(::Array<::Il2CppChar>*, int, int, ::Array<uint8_t>*, int, bool)>(&System::Text::Encoder::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex, flush});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Encoder::*)(::Il2CppChar*, int, uint8_t*, int, bool)>(&System::Text::Encoder::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount, flush});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoder::*)(::Array<::Il2CppChar>*, int, int, ::Array<uint8_t>*, int, int, bool, ByRef<int>, ByRef<int>, ByRef<bool>)>(&System::Text::Encoder::Convert)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* charsUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bytesUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* completed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex, byteCount, flush, charsUsed, bytesUsed, completed});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoder::*)(::Il2CppChar*, int, uint8_t*, int, bool, ByRef<int>, ByRef<int>, ByRef<bool>)>(&System::Text::Encoder::Convert)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* charsUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bytesUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* completed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoder*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount, flush, charsUsed, bytesUsed, completed});
  }
};
// Writing MetadataGetter for method: System::Text::Encoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
