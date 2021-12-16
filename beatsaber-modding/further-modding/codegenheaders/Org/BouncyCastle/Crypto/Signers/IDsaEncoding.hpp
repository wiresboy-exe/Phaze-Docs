// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.IDsaEncoding
  // [TokenAttribute] Offset: FFFFFFFF
  class IDsaEncoding {
    public:
    // Creating value type constructor for type: IDsaEncoding
    IDsaEncoding() noexcept {}
    // public System.Byte[] Encode(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger r, Org.BouncyCastle.Math.BigInteger s)
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* Encode(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* r, Org::BouncyCastle::Math::BigInteger* s);
  }; // Org.BouncyCastle.Crypto.Signers.IDsaEncoding
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::IDsaEncoding*, "Org.BouncyCastle.Crypto.Signers", "IDsaEncoding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::IDsaEncoding::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Signers::IDsaEncoding::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Signers::IDsaEncoding::Encode)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::IDsaEncoding*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, r, s});
  }
};