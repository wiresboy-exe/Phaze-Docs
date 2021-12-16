// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.DesParameters
#include "Org/BouncyCastle/Crypto/Parameters/DesParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DesEdeParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class DesEdeParameters : public Org::BouncyCastle::Crypto::Parameters::DesParameters {
    public:
    // Creating value type constructor for type: DesEdeParameters
    DesEdeParameters() noexcept {}
    // static private System.Byte[] FixKey(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    // Offset: 0x1276290
    static ::Array<uint8_t>* FixKey(::Array<uint8_t>* key, int keyOff, int keyLen);
    // static public System.Boolean IsWeakKey(System.Byte[] key, System.Int32 offset, System.Int32 length)
    // Offset: 0x12765A0
    static bool IsWeakKey(::Array<uint8_t>* key, int offset, int length);
    // public System.Void .ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    // Offset: 0x1276444
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.DesParameters
    // Base method: System.Void DesParameters::.ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    // Base method: System.Void KeyParameter::.ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesEdeParameters* New_ctor(::Array<uint8_t>* key, int keyOff, int keyLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DesEdeParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesEdeParameters*, creationType>(key, keyOff, keyLen)));
    }
    // static public System.Boolean IsWeakKey(System.Byte[] key)
    // Offset: 0x1276428
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.DesParameters
    // Base method: System.Boolean DesParameters::IsWeakKey(System.Byte[] key)
    static bool IsWeakKey(::Array<uint8_t>* key);
  }; // Org.BouncyCastle.Crypto.Parameters.DesEdeParameters
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DesEdeParameters*, "Org.BouncyCastle.Crypto.Parameters", "DesEdeParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesEdeParameters::FixKey
// Il2CppName: FixKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Parameters::DesEdeParameters::FixKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* keyOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* keyLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DesEdeParameters*), "FixKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, keyOff, keyLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesEdeParameters::IsWeakKey
// Il2CppName: IsWeakKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Parameters::DesEdeParameters::IsWeakKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DesEdeParameters*), "IsWeakKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, offset, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesEdeParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DesEdeParameters::IsWeakKey
// Il2CppName: IsWeakKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Parameters::DesEdeParameters::IsWeakKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DesEdeParameters*), "IsWeakKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
