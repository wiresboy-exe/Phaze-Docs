// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricKeyParameter
  class AsymmetricKeyParameter;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: SubjectPublicKeyInfo
  class SubjectPublicKeyInfo;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHPublicKeyParameters
  class DHPublicKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.PublicKeyFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class PublicKeyFactory : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PublicKeyFactory
    PublicKeyFactory() noexcept {}
    // static public Org.BouncyCastle.Crypto.AsymmetricKeyParameter CreateKey(System.Byte[] keyInfoData)
    // Offset: 0x13C9630
    static Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(::Array<uint8_t>* keyInfoData);
    // static public Org.BouncyCastle.Crypto.AsymmetricKeyParameter CreateKey(Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo keyInfo)
    // Offset: 0x13C9650
    static Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo);
    // static private System.Byte[] GetRawKey(Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo keyInfo, System.Int32 expectedSize)
    // Offset: 0x13CACF8
    static ::Array<uint8_t>* GetRawKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* keyInfo, int expectedSize);
    // static private System.Boolean IsPkcsDHParam(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x13CAA88
    static bool IsPkcsDHParam(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // static private Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters ReadPkcsDHParam(Org.BouncyCastle.Asn1.DerObjectIdentifier algOid, Org.BouncyCastle.Math.BigInteger y, Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x13CABD8
    static Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* ReadPkcsDHParam(Org::BouncyCastle::Asn1::DerObjectIdentifier* algOid, Org::BouncyCastle::Math::BigInteger* y, Org::BouncyCastle::Asn1::Asn1Sequence* seq);
  }; // Org.BouncyCastle.Security.PublicKeyFactory
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::PublicKeyFactory*, "Org.BouncyCastle.Security", "PublicKeyFactory");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PublicKeyFactory::CreateKey
// Il2CppName: CreateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Security::PublicKeyFactory::CreateKey)> {
  static const MethodInfo* get() {
    static auto* keyInfoData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PublicKeyFactory*), "CreateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyInfoData});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PublicKeyFactory::CreateKey
// Il2CppName: CreateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (*)(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*)>(&Org::BouncyCastle::Security::PublicKeyFactory::CreateKey)> {
  static const MethodInfo* get() {
    static auto* keyInfo = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X509", "SubjectPublicKeyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PublicKeyFactory*), "CreateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyInfo});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PublicKeyFactory::GetRawKey
// Il2CppName: GetRawKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, int)>(&Org::BouncyCastle::Security::PublicKeyFactory::GetRawKey)> {
  static const MethodInfo* get() {
    static auto* keyInfo = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X509", "SubjectPublicKeyInfo")->byval_arg;
    static auto* expectedSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PublicKeyFactory*), "GetRawKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyInfo, expectedSize});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PublicKeyFactory::IsPkcsDHParam
// Il2CppName: IsPkcsDHParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Org::BouncyCastle::Asn1::Asn1Sequence*)>(&Org::BouncyCastle::Security::PublicKeyFactory::IsPkcsDHParam)> {
  static const MethodInfo* get() {
    static auto* seq = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Sequence")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PublicKeyFactory*), "IsPkcsDHParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seq});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PublicKeyFactory::ReadPkcsDHParam
// Il2CppName: ReadPkcsDHParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*, Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Asn1::Asn1Sequence*)>(&Org::BouncyCastle::Security::PublicKeyFactory::ReadPkcsDHParam)> {
  static const MethodInfo* get() {
    static auto* algOid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* seq = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Sequence")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PublicKeyFactory*), "ReadPkcsDHParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algOid, y, seq});
  }
};
