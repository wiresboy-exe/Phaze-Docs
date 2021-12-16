// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities::Encoders
namespace Org::BouncyCastle::Utilities::Encoders {
  // Forward declaring type: HexEncoder
  class HexEncoder;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.Encoders
namespace Org::BouncyCastle::Utilities::Encoders {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Encoders.Hex
  // [TokenAttribute] Offset: FFFFFFFF
  class Hex : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Hex
    Hex() noexcept {}
    // Get static field: static private readonly Org.BouncyCastle.Utilities.Encoders.HexEncoder encoder
    static Org::BouncyCastle::Utilities::Encoders::HexEncoder* _get_encoder();
    // Set static field: static private readonly Org.BouncyCastle.Utilities.Encoders.HexEncoder encoder
    static void _set_encoder(Org::BouncyCastle::Utilities::Encoders::HexEncoder* value);
    // static private System.Void .cctor()
    // Offset: 0x1FEB650
    static void _cctor();
    // static public System.String ToHexString(System.Byte[] data)
    // Offset: 0x1FEAC8C
    static ::Il2CppString* ToHexString(::Array<uint8_t>* data);
    // static public System.String ToHexString(System.Byte[] data, System.Int32 off, System.Int32 length)
    // Offset: 0x1FEAD00
    static ::Il2CppString* ToHexString(::Array<uint8_t>* data, int off, int length);
    // static public System.Byte[] Encode(System.Byte[] data, System.Int32 off, System.Int32 length)
    // Offset: 0x1FEAD80
    static ::Array<uint8_t>* Encode(::Array<uint8_t>* data, int off, int length);
    // static public System.Byte[] Decode(System.String data)
    // Offset: 0x1FEAFB0
    static ::Array<uint8_t>* Decode(::Il2CppString* data);
    // static public System.Byte[] DecodeStrict(System.String str)
    // Offset: 0x1FEB3A0
    static ::Array<uint8_t>* DecodeStrict(::Il2CppString* str);
  }; // Org.BouncyCastle.Utilities.Encoders.Hex
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Encoders::Hex*, "Org.BouncyCastle.Utilities.Encoders", "Hex");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Encoders::Hex::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Utilities::Encoders::Hex::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Encoders::Hex*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Encoders::Hex::ToHexString
// Il2CppName: ToHexString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Utilities::Encoders::Hex::ToHexString)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Encoders::Hex*), "ToHexString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Encoders::Hex::ToHexString
// Il2CppName: ToHexString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Utilities::Encoders::Hex::ToHexString)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Encoders::Hex*), "ToHexString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, off, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Encoders::Hex::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Utilities::Encoders::Hex::Encode)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Encoders::Hex*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, off, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Encoders::Hex::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Il2CppString*)>(&Org::BouncyCastle::Utilities::Encoders::Hex::Decode)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Encoders::Hex*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Encoders::Hex::DecodeStrict
// Il2CppName: DecodeStrict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Il2CppString*)>(&Org::BouncyCastle::Utilities::Encoders::Hex::DecodeStrict)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Encoders::Hex*), "DecodeStrict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
