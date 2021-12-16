// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.BigIntegers
  // [TokenAttribute] Offset: FFFFFFFF
  class BigIntegers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BigIntegers
    BigIntegers() noexcept {}
    // static public System.Byte[] AsUnsignedByteArray(Org.BouncyCastle.Math.BigInteger n)
    // Offset: 0x13D8358
    static ::Array<uint8_t>* AsUnsignedByteArray(Org::BouncyCastle::Math::BigInteger* n);
    // static public System.Byte[] AsUnsignedByteArray(System.Int32 length, Org.BouncyCastle.Math.BigInteger n)
    // Offset: 0x13D8370
    static ::Array<uint8_t>* AsUnsignedByteArray(int length, Org::BouncyCastle::Math::BigInteger* n);
    // static public Org.BouncyCastle.Math.BigInteger CreateRandomBigInteger(System.Int32 bitLength, Org.BouncyCastle.Security.SecureRandom secureRandom)
    // Offset: 0x13D8474
    static Org::BouncyCastle::Math::BigInteger* CreateRandomBigInteger(int bitLength, Org::BouncyCastle::Security::SecureRandom* secureRandom);
    // static public Org.BouncyCastle.Math.BigInteger CreateRandomInRange(Org.BouncyCastle.Math.BigInteger min, Org.BouncyCastle.Math.BigInteger max, Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x13D84E8
    static Org::BouncyCastle::Math::BigInteger* CreateRandomInRange(Org::BouncyCastle::Math::BigInteger* min, Org::BouncyCastle::Math::BigInteger* max, Org::BouncyCastle::Security::SecureRandom* random);
    // static public System.Int32 GetUnsignedByteLength(Org.BouncyCastle.Math.BigInteger n)
    // Offset: 0x13D8714
    static int GetUnsignedByteLength(Org::BouncyCastle::Math::BigInteger* n);
  }; // Org.BouncyCastle.Utilities.BigIntegers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::BigIntegers*, "Org.BouncyCastle.Utilities", "BigIntegers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::BigIntegers::AsUnsignedByteArray
// Il2CppName: AsUnsignedByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Utilities::BigIntegers::AsUnsignedByteArray)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::BigIntegers*), "AsUnsignedByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::BigIntegers::AsUnsignedByteArray
// Il2CppName: AsUnsignedByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(int, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Utilities::BigIntegers::AsUnsignedByteArray)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::BigIntegers*), "AsUnsignedByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::BigIntegers::CreateRandomBigInteger
// Il2CppName: CreateRandomBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(int, Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Utilities::BigIntegers::CreateRandomBigInteger)> {
  static const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* secureRandom = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::BigIntegers*), "CreateRandomBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength, secureRandom});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::BigIntegers::CreateRandomInRange
// Il2CppName: CreateRandomInRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Utilities::BigIntegers::CreateRandomInRange)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::BigIntegers*), "CreateRandomInRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max, random});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::BigIntegers::GetUnsignedByteLength
// Il2CppName: GetUnsignedByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Utilities::BigIntegers::GetUnsignedByteLength)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::BigIntegers*), "GetUnsignedByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
